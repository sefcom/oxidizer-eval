undefined8 *
_ZN12uu_dircolors6escape17h9e775b2dd37a0760E(undefined8 *param_1,long param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong extraout_RDX;
  ulong extraout_RDX_00;
  ulong uVar4;
  undefined4 *puVar5;
  undefined *puVar6;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  long local_40;
  long local_38;
  
  local_58 = 0;
  uStack_50 = 1;
  local_48 = 0;
  local_38 = param_3 + param_2;
  local_40 = param_2;
  iVar1 = _ZN4core3str11validations15next_code_point17h87d043ad57c0cd0eE(&local_40);
  if (iVar1 != 0) {
    uVar3 = 0x20;
    uVar4 = extraout_RDX;
    do {
      if ((int)uVar4 == 0x27) {
        puVar6 = &DAT_00116cc0;
        puVar5 = &anon_84df56382e2e566cd8a063a5d0153d3b_161_llvm_4004663911042702431;
LAB_001bccf6:
        uVar2 = _ZN4core5slice4iter13Iter_LT_T_GT_10make_slice17h25769b8f6cfce2a9E(puVar6,puVar5);
        _ZN5alloc3vec16Vec_LT_T_C_A_GT_15append_elements17hcb56fdf4dd160d69E(&local_58,uVar2);
      }
      else {
        if (((int)uVar4 == 0x3a) && ((int)uVar3 != 0x5c)) {
          puVar6 = &DAT_0012352d;
          puVar5 = (undefined4 *)&DAT_0012352f;
          goto LAB_001bccf6;
        }
                    /* try { // try from 001bccb0 to 001bcd05 has its CatchHandler @ 001bcd2a */
        _ZN5alloc6string6String4push17h859ae11851fd8b8eE(&local_58,uVar4 & 0xffffffff);
      }
      iVar1 = _ZN4core3str11validations15next_code_point17h87d043ad57c0cd0eE(&local_40);
      uVar3 = uVar4 & 0xffffffff;
      uVar4 = extraout_RDX_00;
    } while (iVar1 != 0);
  }
  param_1[2] = local_48;
  *param_1 = local_58;
  param_1[1] = uStack_50;
  return param_1;
}