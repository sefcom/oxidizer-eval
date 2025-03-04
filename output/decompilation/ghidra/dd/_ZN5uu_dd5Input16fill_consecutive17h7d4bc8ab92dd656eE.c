void _ZN5uu_dd5Input16fill_consecutive17h7d4bc8ab92dd656eE
               (undefined8 *param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined auVar5 [16];
  undefined **local_60;
  undefined8 uStack_58;
  long local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  local_50 = *(long *)(*(long *)(param_2 + 8) + 0x70);
  if (local_50 == 0) {
    local_60 = &PTR_DAT_002610a0;
    uStack_58 = 1;
    local_50 = 8;
    local_48 = 0;
    uStack_40 = 0;
                    /* WARNING: Subroutine does not return */
    _ZN4core9panicking9panic_fmt17he12d0d7468628bb4E(&local_60,&PTR_DAT_002610b0);
  }
  local_60 = *(undefined ***)(param_3 + 8);
  uStack_58 = *(undefined8 *)(param_3 + 0x10);
  lVar1 = _ZN96__LT_core__slice__iter__ChunksMut_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h0385640c4904d04fE
                    (&local_60);
  if (lVar1 == 0) {
    lVar3 = 0;
    lVar4 = 0;
    lVar2 = 0;
  }
  else {
    lVar2 = 0;
    lVar4 = 0;
    lVar3 = 0;
    do {
      auVar5 = _ZN46__LT_uu_dd__Input_u20_as_u20_std__io__Read_GT_4read17h91bb47559be41a26E
                         (param_2,lVar1);
      lVar1 = auVar5._8_8_;
      if (auVar5._0_8_ != 0) {
        param_1[1] = lVar1;
        *param_1 = 1;
        return;
      }
      if (*(long *)(*(long *)(param_2 + 8) + 0x70) == lVar1) {
        lVar2 = lVar2 + 1;
      }
      else {
        if (lVar1 == 0) break;
        lVar4 = lVar4 + 1;
      }
      lVar3 = lVar3 + lVar1;
      lVar1 = _ZN96__LT_core__slice__iter__ChunksMut_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h0385640c4904d04fE
                        (&local_60);
    } while (lVar1 != 0);
  }
  _ZN5alloc3vec16Vec_LT_T_C_A_GT_8truncate17h705e1c902b347a7bE(param_3,lVar3);
  param_1[1] = lVar2;
  param_1[2] = lVar4;
  param_1[3] = lVar3;
  *(undefined4 *)(param_1 + 4) = 0;
  *param_1 = 0;
  return;
}