void _ZN12uu_dircolors6escape17h43afab8edf490a36E(undefined8 *param_1,long param_2,long param_3)

{
  char *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  char *pcVar5;
  undefined auVar6 [16];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 *local_48;
  long local_40;
  long local_38;
  
  local_60 = 0;
  uStack_58 = 1;
  local_50 = 0;
  local_38 = param_3 + param_2;
  local_48 = param_1;
  local_40 = param_2;
  auVar6 = _ZN4core3str11validations15next_code_point17h89d139d84d7ee604E(&local_40);
  uVar3 = auVar6._8_8_;
  if ((auVar6 & (undefined  [16])0x1) != (undefined  [16])0x0) {
    uVar2 = 0x20;
    do {
      uVar4 = uVar3 & 0xffffffff;
      pcVar1 = &DAT_0011a3a4;
      pcVar5 = &DAT_0011a3a0;
      if ((int)uVar3 == 0x27) {
LAB_00169630:
                    /* try { // try from 00169630 to 00169673 has its CatchHandler @ 0016969b */
        _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17hee3cea90a974f94aE
                  (&local_60,pcVar5,pcVar1);
      }
      else {
        if ((int)uVar3 == 0x3a) {
          pcVar5 = "\\:";
          pcVar1 = 
          "# Configuration file for dircolors, a utility to help you set the\n# LS_COLORS environment variable used by GNU ls with the --color option.\n# The keywords COLOR, OPTIONS, and EIGHTBIT (honored by the\n# slackware version of dircolors) are recognized but ignored.\n# Global config options can be specified before TERM or COLORTERM entries\n# Below are TERM or COLORTERM entries, which can be glob patterns, which\n# restrict following config to systems with matching environment variables.\n"
          ;
          if ((int)uVar2 != 0x5c) goto LAB_00169630;
        }
        _ZN5alloc6string6String4push17h0ede46164189e411E(&local_60,uVar3 & 0xffffffff);
      }
      auVar6 = _ZN4core3str11validations15next_code_point17h89d139d84d7ee604E(&local_40);
      uVar3 = auVar6._8_8_;
      uVar2 = uVar4;
    } while ((auVar6 & (undefined  [16])0x1) != (undefined  [16])0x0);
  }
  local_48[2] = local_50;
  *local_48 = local_60;
  local_48[1] = uStack_58;
  return;
}