void _ZN11forc_crypto4args17checked_read_file17h22b9faaf715a9a45E(long *param_1)

{
  long local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  long local_28;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  _ZN3std2fs4read17h189bbd3caa41506cE(&local_28);
  local_38 = local_20;
  uStack_34 = uStack_1c;
  uStack_30 = uStack_18;
  uStack_2c = uStack_14;
  local_40 = local_28;
  if (local_28 != -0x8000000000000000) {
    param_1[2] = CONCAT44(uStack_14,uStack_18);
    *param_1 = local_28;
    param_1[1] = CONCAT44(uStack_1c,local_20);
    return;
  }
  *param_1 = -0x8000000000000000;
  _ZN4core3ptr98drop_in_place_LT_core__result__Result_LT_alloc__vec__Vec_LT_u8_GT__C_std__io__error__Error_GT__GT_17haaf19f7680e2ce25E
            (&local_40);
  return;
}