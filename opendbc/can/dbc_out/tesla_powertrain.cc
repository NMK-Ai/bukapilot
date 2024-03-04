#include "common_dbc.h"

namespace {

const Signal sigs_262[] = {
    {
      .name = "DI_torqueDriver",
      .b1 = 0,
      .b2 = 13,
      .bo = 51,
      .is_signed = true,
      .factor = 0.25,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "DI_torque1Counter",
      .b1 = 13,
      .b2 = 3,
      .bo = 48,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "DI_torqueMotor",
      .b1 = 16,
      .b2 = 13,
      .bo = 35,
      .is_signed = true,
      .factor = 0.25,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "DI_soptState",
      .b1 = 29,
      .b2 = 3,
      .bo = 32,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "DI_motorRPM",
      .b1 = 32,
      .b2 = 16,
      .bo = 16,
      .is_signed = true,
      .factor = 1,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "DI_pedalPos",
      .b1 = 48,
      .b2 = 8,
      .bo = 8,
      .is_signed = false,
      .factor = 0.4,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "DI_torque1Checksum",
      .b1 = 56,
      .b2 = 8,
      .bo = 0,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
};
const Signal sigs_278[] = {
    {
      .name = "DI_torqueEstimate",
      .b1 = 0,
      .b2 = 12,
      .bo = 52,
      .is_signed = true,
      .factor = 0.5,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "DI_gear",
      .b1 = 12,
      .b2 = 3,
      .bo = 49,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "DI_brakePedal",
      .b1 = 15,
      .b2 = 1,
      .bo = 48,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "DI_vehicleSpeed",
      .b1 = 16,
      .b2 = 12,
      .bo = 36,
      .is_signed = false,
      .factor = 0.05,
      .offset = -25.0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "DI_gearRequest",
      .b1 = 28,
      .b2 = 3,
      .bo = 33,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "DI_torqueInterfaceFailure",
      .b1 = 31,
      .b2 = 1,
      .bo = 32,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "DI_torque2Counter",
      .b1 = 32,
      .b2 = 4,
      .bo = 28,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "DI_brakePedalState",
      .b1 = 36,
      .b2 = 2,
      .bo = 26,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "DI_epbParkRequest",
      .b1 = 38,
      .b2 = 1,
      .bo = 25,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "DI_epbInterfaceReady",
      .b1 = 39,
      .b2 = 1,
      .bo = 24,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "DI_torque2Checksum",
      .b1 = 40,
      .b2 = 8,
      .bo = 16,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
};
const Signal sigs_504[] = {
    {
      .name = "driverBrakeStatus",
      .b1 = 2,
      .b2 = 2,
      .bo = 60,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
};
const Signal sigs_568[] = {
    {
      .name = "SpdCtrlLvr_Stat",
      .b1 = 0,
      .b2 = 6,
      .bo = 58,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "VSL_Enbl_Rq",
      .b1 = 6,
      .b2 = 1,
      .bo = 57,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "SpdCtrlLvrStat_Inv",
      .b1 = 7,
      .b2 = 1,
      .bo = 56,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "DTR_Dist_Rq",
      .b1 = 8,
      .b2 = 8,
      .bo = 48,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "TurnIndLvr_Stat",
      .b1 = 16,
      .b2 = 2,
      .bo = 46,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "HiBmLvr_Stat",
      .b1 = 18,
      .b2 = 2,
      .bo = 44,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "WprWashSw_Psd",
      .b1 = 20,
      .b2 = 2,
      .bo = 42,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "WprWash_R_Sw_Posn_V2",
      .b1 = 22,
      .b2 = 2,
      .bo = 40,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "StW_Lvr_Stat",
      .b1 = 24,
      .b2 = 3,
      .bo = 37,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "StW_Cond_Flt",
      .b1 = 27,
      .b2 = 1,
      .bo = 36,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "StW_Cond_Psd",
      .b1 = 28,
      .b2 = 2,
      .bo = 34,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "HrnSw_Psd",
      .b1 = 30,
      .b2 = 2,
      .bo = 32,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "StW_Sw00_Psd",
      .b1 = 32,
      .b2 = 1,
      .bo = 31,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "StW_Sw01_Psd",
      .b1 = 33,
      .b2 = 1,
      .bo = 30,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "StW_Sw02_Psd",
      .b1 = 34,
      .b2 = 1,
      .bo = 29,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "StW_Sw03_Psd",
      .b1 = 35,
      .b2 = 1,
      .bo = 28,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "StW_Sw04_Psd",
      .b1 = 36,
      .b2 = 1,
      .bo = 27,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "StW_Sw05_Psd",
      .b1 = 37,
      .b2 = 1,
      .bo = 26,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "StW_Sw06_Psd",
      .b1 = 38,
      .b2 = 1,
      .bo = 25,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "StW_Sw07_Psd",
      .b1 = 39,
      .b2 = 1,
      .bo = 24,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "StW_Sw08_Psd",
      .b1 = 40,
      .b2 = 1,
      .bo = 23,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "StW_Sw09_Psd",
      .b1 = 41,
      .b2 = 1,
      .bo = 22,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "StW_Sw10_Psd",
      .b1 = 42,
      .b2 = 1,
      .bo = 21,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "StW_Sw11_Psd",
      .b1 = 43,
      .b2 = 1,
      .bo = 20,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "StW_Sw12_Psd",
      .b1 = 44,
      .b2 = 1,
      .bo = 19,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "StW_Sw13_Psd",
      .b1 = 45,
      .b2 = 1,
      .bo = 18,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "StW_Sw14_Psd",
      .b1 = 46,
      .b2 = 1,
      .bo = 17,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "StW_Sw15_Psd",
      .b1 = 47,
      .b2 = 1,
      .bo = 16,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "WprSw6Posn",
      .b1 = 48,
      .b2 = 3,
      .bo = 13,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "MC_STW_ACTN_RQ",
      .b1 = 52,
      .b2 = 4,
      .bo = 8,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "CRC_STW_ACTN_RQ",
      .b1 = 56,
      .b2 = 8,
      .bo = 0,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
};
const Signal sigs_598[] = {
    {
      .name = "DI_systemState",
      .b1 = 0,
      .b2 = 3,
      .bo = 61,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "DI_vehicleHoldState",
      .b1 = 3,
      .b2 = 3,
      .bo = 58,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "DI_proximity",
      .b1 = 6,
      .b2 = 1,
      .bo = 57,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "DI_driveReady",
      .b1 = 7,
      .b2 = 1,
      .bo = 56,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "DI_regenLight",
      .b1 = 8,
      .b2 = 1,
      .bo = 55,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "DI_state",
      .b1 = 9,
      .b2 = 3,
      .bo = 52,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "DI_cruiseState",
      .b1 = 12,
      .b2 = 4,
      .bo = 48,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "DI_analogSpeed",
      .b1 = 16,
      .b2 = 12,
      .bo = 36,
      .is_signed = false,
      .factor = 0.1,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "DI_immobilizerState",
      .b1 = 28,
      .b2 = 3,
      .bo = 33,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "DI_speedUnits",
      .b1 = 31,
      .b2 = 1,
      .bo = 32,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "DI_cruiseSet",
      .b1 = 32,
      .b2 = 9,
      .bo = 23,
      .is_signed = false,
      .factor = 0.5,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "DI_aebState",
      .b1 = 41,
      .b2 = 3,
      .bo = 20,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "DI_stateCounter",
      .b1 = 44,
      .b2 = 4,
      .bo = 16,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "DI_digitalSpeed",
      .b1 = 48,
      .b2 = 8,
      .bo = 8,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "DI_stateChecksum",
      .b1 = 56,
      .b2 = 8,
      .bo = 0,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
};
const Signal sigs_703[] = {
    {
      .name = "DAS_setSpeed",
      .b1 = 0,
      .b2 = 12,
      .bo = 52,
      .is_signed = false,
      .factor = 0.1,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "DAS_accState",
      .b1 = 12,
      .b2 = 4,
      .bo = 48,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "DAS_aebEvent",
      .b1 = 16,
      .b2 = 2,
      .bo = 46,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "DAS_jerkMin",
      .b1 = 18,
      .b2 = 9,
      .bo = 37,
      .is_signed = false,
      .factor = 0.03,
      .offset = -15.232,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "DAS_jerkMax",
      .b1 = 27,
      .b2 = 8,
      .bo = 29,
      .is_signed = false,
      .factor = 0.059,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "DAS_accelMin",
      .b1 = 35,
      .b2 = 9,
      .bo = 20,
      .is_signed = false,
      .factor = 0.04,
      .offset = -15.0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "DAS_accelMax",
      .b1 = 44,
      .b2 = 9,
      .bo = 11,
      .is_signed = false,
      .factor = 0.04,
      .offset = -15.0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "DAS_controlCounter",
      .b1 = 53,
      .b2 = 3,
      .bo = 8,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "DAS_controlChecksum",
      .b1 = 56,
      .b2 = 8,
      .bo = 0,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
};

const Msg msgs[] = {
  {
    .name = "DI_torque1",
    .address = 0x106,
    .size = 8,
    .num_sigs = ARRAYSIZE(sigs_262),
    .sigs = sigs_262,
  },
  {
    .name = "DI_torque2",
    .address = 0x116,
    .size = 6,
    .num_sigs = ARRAYSIZE(sigs_278),
    .sigs = sigs_278,
  },
  {
    .name = "BrakeMessage",
    .address = 0x1F8,
    .size = 8,
    .num_sigs = ARRAYSIZE(sigs_504),
    .sigs = sigs_504,
  },
  {
    .name = "STW_ACTN_RQ",
    .address = 0x238,
    .size = 8,
    .num_sigs = ARRAYSIZE(sigs_568),
    .sigs = sigs_568,
  },
  {
    .name = "DI_state",
    .address = 0x256,
    .size = 8,
    .num_sigs = ARRAYSIZE(sigs_598),
    .sigs = sigs_598,
  },
  {
    .name = "DAS_control",
    .address = 0x2BF,
    .size = 8,
    .num_sigs = ARRAYSIZE(sigs_703),
    .sigs = sigs_703,
  },
};

const Val vals[] = {
    {
      .name = "DI_motorRPM",
      .address = 0x106,
      .def_val = "-32768 SNA",
      .sigs = sigs_262,
    },
    {
      .name = "DI_pedalPos",
      .address = 0x106,
      .def_val = "255 SNA",
      .sigs = sigs_262,
    },
    {
      .name = "DI_soptState",
      .address = 0x106,
      .def_val = "7 SOPT_TEST_SNA 4 SOPT_TEST_NOT_RUN 3 SOPT_TEST_PASSED 2 SOPT_TEST_FAILED 1 SOPT_TEST_IN_PROGRESS 0 SOPT_PRE_TEST",
      .sigs = sigs_262,
    },
    {
      .name = "DI_torqueDriver",
      .address = 0x106,
      .def_val = "-4096 SNA",
      .sigs = sigs_262,
    },
    {
      .name = "DI_torqueMotor",
      .address = 0x106,
      .def_val = "-4096 SNA",
      .sigs = sigs_262,
    },
    {
      .name = "DI_brakePedal",
      .address = 0x116,
      .def_val = "1 APPLIED 0 NOT_APPLIED",
      .sigs = sigs_278,
    },
    {
      .name = "DI_brakePedalState",
      .address = 0x116,
      .def_val = "3 SNA 2 INVALID 1 ON 0 OFF",
      .sigs = sigs_278,
    },
    {
      .name = "DI_epbInterfaceReady",
      .address = 0x116,
      .def_val = "1 EPB_INTERFACE_READY 0 EPB_INTERFACE_NOT_READY",
      .sigs = sigs_278,
    },
    {
      .name = "DI_epbParkRequest",
      .address = 0x116,
      .def_val = "1 PARK_REQUESTED 0 NO_REQUEST",
      .sigs = sigs_278,
    },
    {
      .name = "DI_gear",
      .address = 0x116,
      .def_val = "7 DI_GEAR_SNA 4 DI_GEAR_D 3 DI_GEAR_N 2 DI_GEAR_R 1 DI_GEAR_P 0 DI_GEAR_INVALID",
      .sigs = sigs_278,
    },
    {
      .name = "DI_gearRequest",
      .address = 0x116,
      .def_val = "7 DI_GEAR_SNA 4 DI_GEAR_D 3 DI_GEAR_N 2 DI_GEAR_R 1 DI_GEAR_P 0 DI_GEAR_INVALID",
      .sigs = sigs_278,
    },
    {
      .name = "DI_torqueEstimate",
      .address = 0x116,
      .def_val = "-2048 SNA",
      .sigs = sigs_278,
    },
    {
      .name = "DI_torqueInterfaceFailure",
      .address = 0x116,
      .def_val = "1 TORQUE_INTERFACE_FAILED 0 TORQUE_INTERFACE_NORMAL",
      .sigs = sigs_278,
    },
    {
      .name = "DI_vehicleSpeed",
      .address = 0x116,
      .def_val = "4095 SNA",
      .sigs = sigs_278,
    },
    {
      .name = "driverBrakeStatus",
      .address = 0x1F8,
      .def_val = "2 APPLIED 1 NOT_APPLIED",
      .sigs = sigs_504,
    },
    {
      .name = "DTR_Dist_Rq",
      .address = 0x238,
      .def_val = "255 SNA 200 ACC_DIST_7 166 ACC_DIST_6 133 ACC_DIST_5 100 ACC_DIST_4 66 ACC_DIST_3 33 ACC_DIST_2 0 ACC_DIST_1",
      .sigs = sigs_568,
    },
    {
      .name = "HiBmLvr_Stat",
      .address = 0x238,
      .def_val = "3 SNA 2 HIBM_FLSH_ON_PSD 1 HIBM_ON_PSD 0 IDLE",
      .sigs = sigs_568,
    },
    {
      .name = "HrnSw_Psd",
      .address = 0x238,
      .def_val = "3 SNA 2 NDEF2 1 PSD 0 NPSD",
      .sigs = sigs_568,
    },
    {
      .name = "SpdCtrlLvr_Stat",
      .address = 0x238,
      .def_val = "32 DN_1ST 16 UP_1ST 8 DN_2ND 4 UP_2ND 2 RWD 1 FWD 0 IDLE",
      .sigs = sigs_568,
    },
    {
      .name = "StW_Cond_Psd",
      .address = 0x238,
      .def_val = "3 SNA 2 DOWN 1 UP 0 NPSD",
      .sigs = sigs_568,
    },
    {
      .name = "StW_Lvr_Stat",
      .address = 0x238,
      .def_val = "4 STW_BACK 3 STW_FWD 2 STW_DOWN 1 STW_UP 0 NPSD",
      .sigs = sigs_568,
    },
    {
      .name = "StW_Sw00_Psd",
      .address = 0x238,
      .def_val = "1 PRESSED 0 NOT_PRESSED_SNA",
      .sigs = sigs_568,
    },
    {
      .name = "StW_Sw01_Psd",
      .address = 0x238,
      .def_val = "1 PRESSED 0 NOT_PRESSED_SNA",
      .sigs = sigs_568,
    },
    {
      .name = "StW_Sw03_Psd",
      .address = 0x238,
      .def_val = "1 PRESSED 0 NOT_PRESSED_SNA",
      .sigs = sigs_568,
    },
    {
      .name = "StW_Sw04_Psd",
      .address = 0x238,
      .def_val = "1 PRESSED 0 NOT_PRESSED_SNA",
      .sigs = sigs_568,
    },
    {
      .name = "TurnIndLvr_Stat",
      .address = 0x238,
      .def_val = "3 SNA 2 RIGHT 1 LEFT 0 IDLE",
      .sigs = sigs_568,
    },
    {
      .name = "WprSw6Posn",
      .address = 0x238,
      .def_val = "7 SNA 6 STAGE2 5 STAGE1 4 INTERVAL4 3 INTERVAL3 2 INTERVAL2 1 INTERVAL1 0 OFF",
      .sigs = sigs_568,
    },
    {
      .name = "WprWashSw_Psd",
      .address = 0x238,
      .def_val = "3 SNA 2 WASH 1 TIPWIPE 0 NPSD",
      .sigs = sigs_568,
    },
    {
      .name = "WprWash_R_Sw_Posn_V2",
      .address = 0x238,
      .def_val = "3 SNA 2 WASH 1 INTERVAL 0 OFF",
      .sigs = sigs_568,
    },
    {
      .name = "DI_aebState",
      .address = 0x256,
      .def_val = "2 ENABLED 4 FAULT 7 SNA 1 STANDBY 3 STANDSTILL 0 UNAVAILABLE",
      .sigs = sigs_598,
    },
    {
      .name = "DI_analogSpeed",
      .address = 0x256,
      .def_val = "4095 SNA",
      .sigs = sigs_598,
    },
    {
      .name = "DI_cruiseState",
      .address = 0x256,
      .def_val = "2 ENABLED 5 FAULT 0 OFF 4 OVERRIDE 7 PRE_CANCEL 6 PRE_FAULT 1 STANDBY 3 STANDSTILL",
      .sigs = sigs_598,
    },
    {
      .name = "DI_digitalSpeed",
      .address = 0x256,
      .def_val = "255 SNA",
      .sigs = sigs_598,
    },
    {
      .name = "DI_immobilizerState",
      .address = 0x256,
      .def_val = "2 AUTHENTICATING 3 DISARMED 6 FAULT 4 IDLE 0 INIT_SNA 1 REQUEST 5 RESET",
      .sigs = sigs_598,
    },
    {
      .name = "DI_speedUnits",
      .address = 0x256,
      .def_val = "1 KPH 0 MPH",
      .sigs = sigs_598,
    },
    {
      .name = "DI_state",
      .address = 0x256,
      .def_val = "3 ABORT 4 ENABLE 2 FAULT 1 STANDBY 0 UNAVAILABLE",
      .sigs = sigs_598,
    },
    {
      .name = "DI_systemState",
      .address = 0x256,
      .def_val = "3 ABORT 4 ENABLE 2 FAULT 1 STANDBY 0 UNAVAILABLE",
      .sigs = sigs_598,
    },
    {
      .name = "DI_vehicleHoldState",
      .address = 0x256,
      .def_val = "2 BLEND_IN 4 BLEND_OUT 6 FAULT 7 INIT 5 PARK 1 STANDBY 3 STANDSTILL 0 UNAVAILABLE",
      .sigs = sigs_598,
    },
    {
      .name = "DAS_accState",
      .address = 0x2BF,
      .def_val = "15 FAULT_SNA 13 ACC_CANCEL_GENERIC_SILENT 11 APC_SELFPARK_START 10 APC_UNPARK_COMPLETE 9 APC_PAUSE 8 APC_ABORT 7 APC_COMPLETE 6 APC_FORWARD 5 APC_BACKWARD 4 ACC_ON 3 ACC_HOLD 0 ACC_CANCEL_GENERIC",
      .sigs = sigs_703,
    },
    {
      .name = "DAS_accelMax",
      .address = 0x2BF,
      .def_val = "511 SNA",
      .sigs = sigs_703,
    },
    {
      .name = "DAS_accelMin",
      .address = 0x2BF,
      .def_val = "511 SNA",
      .sigs = sigs_703,
    },
    {
      .name = "DAS_aebEvent",
      .address = 0x2BF,
      .def_val = "3 AEB_SNA 2 AEB_FAULT 1 AEB_ACTIVE 0 AEB_NOT_ACTIVE",
      .sigs = sigs_703,
    },
    {
      .name = "DAS_jerkMax",
      .address = 0x2BF,
      .def_val = "255 SNA",
      .sigs = sigs_703,
    },
    {
      .name = "DAS_jerkMin",
      .address = 0x2BF,
      .def_val = "511 SNA",
      .sigs = sigs_703,
    },
    {
      .name = "DAS_setSpeed",
      .address = 0x2BF,
      .def_val = "4095 SNA",
      .sigs = sigs_703,
    },
};

}

const DBC tesla_powertrain = {
  .name = "tesla_powertrain",
  .num_msgs = ARRAYSIZE(msgs),
  .msgs = msgs,
  .vals = vals,
  .num_vals = ARRAYSIZE(vals),
};

dbc_init(tesla_powertrain)