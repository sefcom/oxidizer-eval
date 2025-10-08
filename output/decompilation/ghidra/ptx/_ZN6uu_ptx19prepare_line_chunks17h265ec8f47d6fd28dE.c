void _ZN6uu_ptx19prepare_line_chunks17h265ec8f47d6fd28dE
               (undefined8 *param_1,long param_2,ulong param_3,undefined8 param_4,undefined8 param_5
               ,ulong param_6,long param_7,ulong param_8,undefined8 param_9,undefined8 param_10)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined auVar7 [16];
  undefined auVar8 [16];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  auVar7 = _ZN4core3str6traits110__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeTo_LT_usize_GT__GT_3get17hf838fc4d891e0944E
                     (param_3,param_5,param_6);
  lVar5 = auVar7._0_8_;
  if (lVar5 == 0) {
    (*(code *)PTR__ZN4core3str16slice_error_fail17h1a2885084e28d077E_00380258)
              (param_5,param_6,0,param_3,&PTR_s_src_uu_ptx_src_ptx_rs_00351c50);
  }
  else {
    lVar6 = lVar5 + auVar7._8_8_;
    lVar2 = _ZN81__LT_core__str__iter__Chars_u20_as_u20_core__iter__traits__iterator__Iterator_GT_5count17h41a8767c0185b7ecE
                      (lVar5,lVar6);
    auVar8 = _ZN4core3str6traits108__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__Range_LT_usize_GT__GT_3get17h6f62413506656e8fE
                       (param_3,param_4,param_5,param_6);
    lVar3 = auVar8._0_8_;
    if (lVar3 != 0) {
      lVar4 = _ZN81__LT_core__str__iter__Chars_u20_as_u20_core__iter__traits__iterator__Iterator_GT_5count17h41a8767c0185b7ecE
                        (lVar3,lVar3 + auVar8._8_8_);
      param_3 = lVar4 + lVar2;
      if (*(char *)(param_2 + 0x5a) == '\0') {
        auVar7 = _ZN106__LT_core__ops__range__Range_LT_usize_GT__u20_as_u20_core__slice__index__SliceIndex_LT__u5b_T_u5d__GT__GT_5index17h599a73c91ae99f33E
                           (0,lVar2,param_7,param_8,&PTR_s_src_uu_ptx_src_ptx_rs_00351c80);
      }
      else {
        lVar2 = _ZN81__LT_core__str__iter__Chars_u20_as_u20_core__iter__traits__iterator__Iterator_GT_5count17h41a8767c0185b7ecE
                          (lVar5,lVar6);
        auVar7 = _ZN4core3str21__LT_impl_u20_str_GT_18trim_start_matches17h0b3398452a83d790E
                           (lVar5,auVar7._8_8_,param_9,param_10);
        auVar7 = _ZN4core3str21__LT_impl_u20_str_GT_18trim_start_matches17h4916abcead74b5deE
                           (auVar7._0_8_,auVar7._8_8_);
        lVar5 = _ZN81__LT_core__str__iter__Chars_u20_as_u20_core__iter__traits__iterator__Iterator_GT_5count17h41a8767c0185b7ecE
                          (auVar7._0_8_,auVar7._8_8_ + auVar7._0_8_);
        auVar7 = _ZN106__LT_core__ops__range__Range_LT_usize_GT__u20_as_u20_core__slice__index__SliceIndex_LT__u5b_T_u5d__GT__GT_5index17h599a73c91ae99f33E
                           (lVar2 - lVar5,lVar2,param_7,param_8,
                            &PTR_s_src_uu_ptx_src_ptx_rs_00351c98);
      }
      _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17he9e3a9b23988b07fE
                (&local_a8,lVar3,auVar8._8_8_);
      if (param_3 <= param_8) {
                    /* try { // try from 0022d9a3 to 0022d9bb has its CatchHandler @ 0022da78 */
        _ZN6uu_ptx17get_output_chunks17h0c2bb66b7373631aE
                  (&local_90,auVar7._0_8_,auVar7._8_8_,local_98,param_3 * 4 + param_7,
                   param_8 - param_3,param_2);
        param_1[2] = local_80;
        *param_1 = local_90;
        param_1[1] = uStack_88;
        param_1[5] = local_68;
        param_1[3] = local_78;
        param_1[4] = uStack_70;
        param_1[0xb] = local_50;
        param_1[9] = local_60;
        param_1[10] = uStack_58;
        param_1[0xe] = local_38;
        param_1[0xc] = local_48;
        param_1[0xd] = uStack_40;
        param_1[8] = local_98;
        param_1[6] = local_a8;
        param_1[7] = uStack_a0;
        return;
      }
      goto LAB_0022da63;
    }
  }
  (*(code *)PTR__ZN4core3str16slice_error_fail17h1a2885084e28d077E_00380258)
            (param_5,param_6,param_3,param_4,&PTR_s_src_uu_ptx_src_ptx_rs_00351c68);
  param_8 = param_6;
LAB_0022da63:
                    /* try { // try from 0022da63 to 0022da75 has its CatchHandler @ 0022da78 */
  (*(code *)PTR__ZN4core5slice5index26slice_start_index_len_fail17h5fe115fcacae7da6E_003800f0)
            (param_3,param_8,&PTR_s_src_uu_ptx_src_ptx_rs_00351cb0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}