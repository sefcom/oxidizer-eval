/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
_ZN5uu_ls12display_size17hba9b1cbdd7c6b199E(undefined8 param_1,undefined8 param_2,char param_3)

{
  undefined8 uVar1;
  undefined auVar2 [16];
  undefined8 uStack_28;
  undefined auStack_20 [16];
  
  uStack_28 = param_2;
  if (param_3 == '\0') {
    _ZN45__LT_T_u20_as_u20_alloc__string__ToString_GT_9to_string17he95e797fb003fb3aE
              (param_1,&uStack_28);
  }
  else {
    auVar2._8_4_ = (int)((ulong)param_2 >> 0x20);
    auVar2._0_8_ = param_2;
    auVar2._12_4_ = _UNK_00123a94;
    if (param_3 == '\x01') {
      uVar1 = 0xf0e0d0c0b0a0908;
    }
    else {
      uVar1 = 0x706050403020100;
    }
    _ZN13number_prefix21NumberPrefix_LT_F_GT_13format_number17h3ede9b569ea18f5bE
              ((auVar2._8_8_ - _UNK_00123a08) +
               ((double)CONCAT44(_DAT_00123a90,(int)param_2) - _DAT_00123a00),auStack_20,uVar1);
    _ZN6uucore8features6format5human15format_prefixed17h9a32b672556249f2E(param_1,auStack_20);
  }
  return param_1;
}