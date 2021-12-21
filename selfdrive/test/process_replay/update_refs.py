#!/usr/bin/env python3
import os
import sys

from selfdrive.test.openpilotci import upload_file, get_url
from selfdrive.test.process_replay.compare_logs import save_log
from selfdrive.test.process_replay.process_replay import replay_process, CONFIGS
from selfdrive.test.process_replay.test_processes import segments
#from selfdrive.version import get_commit
from tools.lib.logreader import LogReader

if __name__ == "__main__":

  no_upload = "--no-upload" in sys.argv

  process_replay_dir = os.path.dirname(os.path.abspath(__file__))
  ref_commit_fn = os.path.join(process_replay_dir, "ref_commit")

  #ref_commit = get_commit()
  ref_commit = "AAA"
  if ref_commit is None:
    raise Exception("couldn't get ref commit")
  with open(ref_commit_fn, "w") as f:
    f.write(ref_commit)

  for car_brand, segment in segments:
    r, n = segment.rsplit("--", 1)
    lr = LogReader("https://s4.kommu.ai/upload/rlog/ef1515efcccceded---2021-12-21--02-08-29--2---rlog.bz2")

    for cfg in CONFIGS:
      log_msgs = replay_process(cfg, lr)
      log_fn = os.path.join(process_replay_dir, "%s_%s_%s.bz2" % (segment, cfg.proc_name, ref_commit))
      save_log(log_fn, log_msgs)

      if not no_upload:
        upload_file(log_fn, os.path.basename(log_fn))
        os.remove(log_fn)

  print("done")
