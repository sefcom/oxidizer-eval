void _ZN7uu_stat15precision_trunc17hfc70d3e7a70986fcE
               (undefined8 param_1,undefined8 *param_2,long param_3,ulong param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined auVar7 [16];
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 **local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  long local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 **local_78;
  undefined8 *local_70;
  code *local_68;
  undefined4 *local_60;
  code *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  local_50 = param_1;
  _ZN49__LT_T_u20_as_u20_alloc__string__SpecToString_GT_14spec_to_string17h60326b3cf60faea8E
            (&local_a0,&local_50);
  lVar3 = local_90;
  uVar2 = uStack_98;
                    /* try { // try from 001746e2 to 00174779 has its CatchHandler @ 00174983 */
  auVar7 = _ZN4core3str21__LT_impl_u20_str_GT_4find17h7f8b36dc70f8d903E(uStack_98,local_90);
  lVar5 = auVar7._8_8_;
  if ((auVar7 & (undefined  [16])0x1) == (undefined  [16])0x0) {
    if (((param_3 == 0) || (param_3 == 1)) || (param_4 == 0)) {
LAB_001747f9:
      param_2[2] = local_90;
      *param_2 = local_a0;
      param_2[1] = uStack_98;
      return;
    }
    _ZN5alloc5slice29__LT_impl_u20__u5b_T_u5d__GT_6repeat17ha360e6025fa3e908E(&local_d0,param_4);
    local_78 = local_c0;
    local_88 = (undefined4)local_d0;
    uStack_84 = local_d0._4_4_;
    uStack_80 = (undefined4)uStack_c8;
    uStack_7c = uStack_c8._4_4_;
    local_68 = 
    _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
    local_60 = &local_88;
    local_58 = 
    _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
    local_d0 = &DAT_00219c80;
    uStack_c8 = 2;
    local_b0 = 0;
    local_c0 = &local_70;
    local_b8 = 2;
                    /* try { // try from 001747e2 to 001747f3 has its CatchHandler @ 00174964 */
    local_70 = &local_a0;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17h722d45d5108b1d7dE(&local_48,&local_d0);
LAB_001748f9:
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h44f04a5137e020d4E(&local_88);
    param_2[2] = local_38;
  }
  else {
    if (param_3 == 0) {
      lVar4 = _ZN4core3str6traits110__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeTo_LT_usize_GT__GT_3get17hf838fc4d891e0944E
                        (lVar5,uVar2,lVar3);
      if (lVar4 == 0) {
        ppuVar6 = &PTR_s_src_uu_stat_src_stat_rs_00219ca0;
        goto LAB_0017494f;
      }
                    /* try { // try from 00174829 to 0017487e has its CatchHandler @ 00174983 */
      _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h1259f2eee6e0998aE
                (&local_d0,lVar4);
    }
    else {
      if (param_3 == 1) goto LAB_001747f9;
      if (param_4 == 0) {
        lVar4 = _ZN4core3str6traits110__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeTo_LT_usize_GT__GT_3get17hf838fc4d891e0944E
                          (lVar5,uVar2,lVar3);
        if (lVar4 == 0) {
          ppuVar6 = &PTR_s_src_uu_stat_src_stat_rs_00219cb8;
LAB_0017494f:
                    /* try { // try from 0017494f to 0017495f has its CatchHandler @ 00174983 */
          (*(code *)PTR__ZN4core3str16slice_error_fail17h1a2885084e28d077E_00222268)
                    (uVar2,lVar3,0,lVar5,ppuVar6);
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h1259f2eee6e0998aE
                  (&local_d0,lVar4);
      }
      else {
        if ((ulong)(lVar3 - lVar5) <= param_4) {
          _ZN5alloc5slice29__LT_impl_u20__u5b_T_u5d__GT_6repeat17ha360e6025fa3e908E
                    (&local_d0,(param_4 - (lVar3 - lVar5)) + 1);
          local_78 = local_c0;
          local_88 = (undefined4)local_d0;
          uStack_84 = local_d0._4_4_;
          uStack_80 = (undefined4)uStack_c8;
          uStack_7c = uStack_c8._4_4_;
          local_68 = 
          _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
          local_60 = &local_88;
          local_58 = 
          _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
          local_d0 = &DAT_0011cfd0;
          uStack_c8 = 2;
          local_b0 = 0;
          local_c0 = &local_70;
          local_b8 = 2;
                    /* try { // try from 001748e7 to 001748f8 has its CatchHandler @ 00174962 */
          local_70 = &local_a0;
          _ZN4core6option15Option_LT_T_GT_11map_or_else17h722d45d5108b1d7dE(&local_48,&local_d0);
          goto LAB_001748f9;
        }
        lVar5 = lVar5 + param_4 + 1;
        lVar4 = _ZN4core3str6traits110__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeTo_LT_usize_GT__GT_3get17hf838fc4d891e0944E
                          (lVar5,uVar2,lVar3);
        if (lVar4 == 0) {
          ppuVar6 = &PTR_s_src_uu_stat_src_stat_rs_00219cd0;
          goto LAB_0017494f;
        }
        _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h1259f2eee6e0998aE
                  (&local_d0,lVar4);
      }
    }
    param_2[2] = local_c0;
    local_48 = (undefined4)local_d0;
    uStack_44 = local_d0._4_4_;
    uStack_40 = (undefined4)uStack_c8;
    uStack_3c = uStack_c8._4_4_;
  }
  *(undefined4 *)param_2 = local_48;
  *(undefined4 *)((long)param_2 + 4) = uStack_44;
  *(undefined4 *)(param_2 + 1) = uStack_40;
  *(undefined4 *)((long)param_2 + 0xc) = uStack_3c;
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h44f04a5137e020d4E(&local_a0);
  return;
}