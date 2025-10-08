undefined (*) [16]
_ZN11uu_unexpand16expand_shortcuts17hf9e317c33afe99dbE
          (undefined (*param_1) [16],long param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  char cVar6;
  undefined uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  undefined auVar11 [16];
  undefined local_d0 [16];
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined (*local_a0) [16];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 local_78;
  long local_70;
  undefined local_68 [48];
  undefined2 local_38;
  
  local_d0 = _ZN5alloc7raw_vec20RawVecInner_LT_A_GT_16with_capacity_in17h0f389c1011ab4014E
                       (param_3,8,0x18,&PTR_s_src_uu_unexpand_src_unexpand_rs_001e8118);
  local_c0 = 0;
  if (param_3 != 0) {
    param_3 = param_3 * 0x18;
    bVar5 = false;
    cVar4 = '\0';
    local_a0 = param_1;
    do {
      uVar1 = *(undefined8 *)(param_2 + 8);
      uVar2 = *(undefined8 *)(param_2 + 0x10);
      local_b8 = local_b8 & 0xffffffff00000000;
      uVar8 = _ZN4core4char7methods15encode_utf8_raw17h5e8f6d90a161f6f4E(0x2d,&local_b8);
                    /* try { // try from 0015c321 to 0015c3e4 has its CatchHandler @ 0015c4c6 */
      cVar6 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_11starts_with17h8efff08fd85b21e0E
                        (uVar1,uVar2,uVar8);
      if (cVar6 == '\0') {
LAB_0015c3c0:
        (*(code *)
          PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17h94782b8343b62bd8E_001eea68
        )(&local_b8,param_2);
        _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17hd88ea85f4ae5c379E
                  (local_d0,&local_b8,&PTR_s_src_uu_unexpand_src_unexpand_rs_001e8148);
        cVar6 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h7c2f39b0c4e545c7E
                          (uVar1,uVar2,"--all",5);
        if (cVar6 == '\0') {
          cVar6 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h7c2f39b0c4e545c7E
                            (uVar1,uVar2,"-a",2);
          if (cVar6 == '\0') goto LAB_0015c2f6;
        }
        bVar5 = true;
      }
      else {
        auVar11 = _ZN4core3str6traits112__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeFrom_LT_usize_GT__GT_3get17h28e9e81c5537bbedE
                            (uVar1,uVar2);
        lVar10 = auVar11._8_8_;
        uVar9 = auVar11._0_8_;
        if (uVar9 == 0) {
          (*(code *)PTR__ZN4core3str16slice_error_fail17h1a2885084e28d077E_001eebb0)
                    (uVar1,uVar2,1,uVar2,&PTR_s_src_uu_unexpand_src_unexpand_rs_001e8130);
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        uStack_b0 = uVar9 + lVar10;
        local_b8 = uVar9;
        uVar7 = _ZN4core4iter6traits8iterator8Iterator8try_fold17h5635a8b1e58caf26E(&local_b8);
        cVar6 = _ZN90__LT_core__ops__control_flow__ControlFlow_LT_B_C_C_GT__u20_as_u20_core__cmp__PartialEq_GT_2eq17h6d9bdb0da19e3277E
                          (uVar7);
        if (cVar6 == '\0') goto LAB_0015c3c0;
        _ZN52__LT_char_u20_as_u20_core__str__pattern__Pattern_GT_13into_searcher17h19abee4db16fb58dE
                  (local_68,uVar9,lVar10);
        local_78 = 0;
        local_38 = 1;
        cVar4 = '\x01';
        local_70 = lVar10;
        _ZN4core4iter6traits8iterator8Iterator4fold17hfcc987b97c2fdfd0E(&local_78,local_d0);
      }
LAB_0015c2f6:
      param_1 = local_a0;
      param_2 = param_2 + 0x18;
      param_3 = param_3 + -0x18;
    } while (param_3 != 0);
    if (cVar4 == -1 && !bVar5) {
                    /* try { // try from 0015c43a to 0015c4c3 has its CatchHandler @ 0015c4c8 */
      _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17hc756f0904f45cd83E
                (&local_b8,"--first-only",0xc);
      local_88 = local_a8;
      local_98 = (undefined4)local_b8;
      uStack_94 = local_b8._4_4_;
      uStack_90 = (undefined4)uStack_b0;
      uStack_8c = uStack_b0._4_4_;
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17hd88ea85f4ae5c379E
                (local_d0,&local_98,&PTR_s_src_uu_unexpand_src_unexpand_rs_001e8160);
    }
  }
  *(undefined8 *)param_1[1] = local_c0;
  *param_1 = local_d0;
  return param_1;
}