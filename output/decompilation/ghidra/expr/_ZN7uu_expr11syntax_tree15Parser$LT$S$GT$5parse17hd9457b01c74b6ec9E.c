void _ZN7uu_expr11syntax_tree15Parser_LT_S_GT_5parse17hd9457b01c74b6ec9E
               (long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined local_90 [8];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  long lStack_30;
  long local_28;
  long lStack_20;
  
  if (param_2[1] == 0) {
    param_1[1] = 3;
  }
  else {
    _ZN7uu_expr11syntax_tree15Parser_LT_S_GT_16parse_precedence17h425891ff58303efeE
              (&local_40,param_2,0);
    uStack_60 = lStack_30;
    lVar2 = uStack_60;
    local_58 = local_28;
    lVar3 = local_58;
    uStack_50 = lStack_20;
    lVar4 = uStack_50;
    if (CONCAT44(uStack_3c,local_40) != -0x7ffffffffffffffb) {
      uStack_60._0_4_ = (undefined4)lStack_30;
      uStack_60._4_4_ = (undefined4)((ulong)lStack_30 >> 0x20);
      local_58._0_4_ = (undefined4)local_28;
      local_58._4_4_ = (undefined4)((ulong)local_28 >> 0x20);
      uStack_50._0_4_ = (undefined4)lStack_20;
      uStack_50._4_4_ = (undefined4)((ulong)lStack_20 >> 0x20);
      local_78 = (undefined4)local_58;
      uStack_74 = local_58._4_4_;
      uStack_70 = (undefined4)uStack_50;
      uStack_6c = uStack_50._4_4_;
      local_88 = uStack_38;
      uStack_84 = uStack_34;
      uStack_80 = (undefined4)uStack_60;
      uStack_7c = uStack_60._4_4_;
      uVar1 = param_2[2];
      if (uVar1 < (ulong)param_2[1]) {
        uStack_60 = lVar2;
        local_58 = lVar3;
        uStack_50 = lVar4;
        uVar5 = _ZN73__LT_alloc__string__String_u20_as_u20_core__convert__AsRef_LT_str_GT__GT_6as_ref17h0a9eb36fc0b98c5fE
                          (*(undefined8 *)(*param_2 + 8 + uVar1 * 0x18),
                           *(undefined8 *)(*param_2 + 0x10 + uVar1 * 0x18));
                    /* try { // try from 0019c132 to 0019c13e has its CatchHandler @ 0019c190 */
        _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17ha1ed10b7b3735d74E
                  (&local_40,uVar5);
        param_1[4] = lStack_30;
        *(undefined4 *)(param_1 + 2) = local_40;
        *(undefined4 *)((long)param_1 + 0x14) = uStack_3c;
        *(undefined4 *)(param_1 + 3) = uStack_38;
        *(undefined4 *)((long)param_1 + 0x1c) = uStack_34;
        param_1[1] = 0;
        *param_1 = -0x7ffffffffffffffb;
        _ZN4core3ptr50drop_in_place_LT_uu_expr__syntax_tree__AstNode_GT_17h702ff2a2ff59954aE
                  (local_90);
        return;
      }
      param_1[4] = lStack_20;
      param_1[2] = lStack_30;
      param_1[3] = local_28;
      *param_1 = CONCAT44(uStack_3c,local_40);
      param_1[1] = CONCAT44(uStack_34,uStack_38);
      return;
    }
    param_1[3] = local_28;
    param_1[4] = lStack_20;
    param_1[1] = CONCAT44(uStack_34,uStack_38);
    param_1[2] = lStack_30;
  }
  *param_1 = -0x7ffffffffffffffb;
  return;
}