undefined8 *
_ZN5uu_dd6Output12write_blocks17h78b56ae9a3f355f3E
          (undefined8 *param_1,long param_2,undefined **param_3,undefined8 param_4)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined auVar7 [16];
  undefined **local_60;
  undefined8 local_58;
  long local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  local_50 = *(long *)(*(long *)(param_2 + 0x10) + 0x78);
  if (local_50 == 0) {
    local_60 = &PTR_DAT_002610a0;
    local_58 = 1;
    local_50 = 8;
    local_48 = 0;
    uStack_40 = 0;
                    /* WARNING: Subroutine does not return */
    _ZN4core9panicking9panic_fmt17he12d0d7468628bb4E(&local_60,&PTR_DAT_00261120);
  }
  local_60 = param_3;
  local_58 = param_4;
  lVar2 = _ZN93__LT_core__slice__iter__Chunks_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h45c1de6715574df6E
                    (&local_60);
  if (lVar2 == 0) {
    lVar4 = 0;
    lVar6 = 0;
    lVar5 = 0;
  }
  else {
    lVar5 = 0;
    lVar6 = 0;
    lVar4 = 0;
    do {
      auVar7 = _ZN5uu_dd6Output11write_block17h75bb814762c2a847E(param_2,lVar2);
      uVar3 = auVar7._8_8_;
      if (auVar7._0_8_ != 0) {
        param_1[1] = uVar3;
        *param_1 = 1;
        return param_1;
      }
      uVar1 = *(ulong *)(*(long *)(param_2 + 0x10) + 0x78);
      lVar6 = lVar6 + (ulong)(uVar3 < uVar1);
      lVar5 = lVar5 + (ulong)(uVar1 <= uVar3);
      lVar4 = lVar4 + uVar3;
      lVar2 = _ZN93__LT_core__slice__iter__Chunks_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h45c1de6715574df6E
                        (&local_60);
    } while (lVar2 != 0);
  }
  param_1[2] = lVar4;
  param_1[3] = 0;
  param_1[4] = lVar5;
  param_1[5] = lVar6;
  *param_1 = 0;
  return param_1;
}