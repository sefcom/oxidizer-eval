void _ZN5uu_od12parse_inputs20parse_offset_operand17h71d36fc2ef6ee229E
               (undefined8 *param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  byte bVar2;
  char cVar3;
  byte bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char *pcVar7;
  long lVar8;
  int iVar9;
  undefined **ppuVar10;
  long unaff_R13;
  undefined auVar11 [16];
  undefined4 local_50 [2];
  long local_48;
  undefined8 local_40;
  undefined8 *local_38;
  
  local_50[0] = 0;
  uVar5 = _ZN4core4char7methods15encode_utf8_raw17h4a752b0d300141c4E(0x2b,local_50);
  bVar2 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_11starts_with17h0450dff97e96928eE
                    (param_2,param_3,uVar5,1);
  auVar11 = _ZN4core3str6traits108__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__Range_LT_usize_GT__GT_3get17h3d479bbd9c610d76E
                      (bVar2,param_3,param_2,param_3);
  uVar5 = auVar11._8_8_;
  lVar8 = auVar11._0_8_;
  if (lVar8 == 0) {
    _ZN4core3str16slice_error_fail17h5dbb61534404fe7eE
              (param_2,param_3,bVar2,param_3,&PTR_s_src_uu_od_src_parse_inputs_rs_00241f00);
  }
  else {
    local_38 = param_1;
    cVar3 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_11starts_with17h0450dff97e96928eE
                      (lVar8,uVar5,"0x",2);
    if ((cVar3 == '\0') &&
       (cVar3 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_11starts_with17h0450dff97e96928eE
                          (lVar8,uVar5,"0X",2), cVar3 == '\0')) {
      local_50[0] = 0;
      uVar6 = _ZN4core4char7methods15encode_utf8_raw17h4a752b0d300141c4E(0x62,local_50);
      bVar4 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_9ends_with17h6fe0f80c1a24b85aE
                        (lVar8,uVar5,uVar6,1);
      unaff_R13 = param_3 - (ulong)bVar4;
      auVar11 = _ZN4core3str6traits108__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__Range_LT_usize_GT__GT_3get17h3d479bbd9c610d76E
                          (bVar2,unaff_R13,param_2,param_3);
      local_40 = auVar11._8_8_;
      if (auVar11._0_8_ == 0) {
        ppuVar10 = &PTR_s_src_uu_od_src_parse_inputs_rs_00241f18;
        goto LAB_001d32b1;
      }
      lVar8 = 0x200;
      if (bVar4 == 0) {
        lVar8 = 1;
      }
      local_50[0] = 0;
      uVar5 = _ZN4core4char7methods15encode_utf8_raw17h4a752b0d300141c4E(0x2e,local_50);
      bVar4 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_9ends_with17h6fe0f80c1a24b85aE
                        (auVar11._0_8_,local_40,uVar5,1);
      unaff_R13 = unaff_R13 - (ulong)bVar4;
      iVar9 = (uint)bVar4 * 2 + 8;
    }
    else {
      bVar2 = bVar2 | 2;
      lVar8 = 1;
      iVar9 = 0x10;
      unaff_R13 = param_3;
    }
    auVar11 = _ZN4core3str6traits108__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__Range_LT_usize_GT__GT_3get17h3d479bbd9c610d76E
                        (bVar2,unaff_R13,param_2,param_3);
    if (auVar11._0_8_ != 0) {
      _ZN4core3num21__LT_impl_u20_u64_GT_14from_str_radix17h99ae39453f343bd7E
                (local_50,auVar11._0_8_,auVar11._8_8_,iVar9);
      lVar8 = lVar8 * local_48;
      pcVar7 = (char *)0x0;
      if ((char)local_50[0] != '\0') {
        pcVar7 = "parse failed";
        lVar8 = 0xc;
      }
      local_38[1] = lVar8;
      *local_38 = pcVar7;
      return;
    }
  }
  ppuVar10 = &PTR_s_src_uu_od_src_parse_inputs_rs_00241f30;
LAB_001d32b1:
  _ZN4core3str16slice_error_fail17h5dbb61534404fe7eE(param_2,param_3,bVar2,unaff_R13,ppuVar10);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}