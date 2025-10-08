void _ZN5uu_od12parse_inputs20parse_offset_operand17ha005a18be9ae1bf0E
               (undefined8 *param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  undefined8 uVar4;
  char *pcVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  undefined **ppuVar9;
  long unaff_R13;
  undefined auVar10 [16];
  undefined4 local_50 [2];
  long local_48;
  long local_40;
  undefined8 *local_38;
  
  local_50[0] = 0;
  uVar4 = _ZN4core4char7methods15encode_utf8_raw17h5e8f6d90a161f6f4E(0x2b,local_50);
  bVar1 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_11starts_with17ha3dd105fff9094a1E
                    (param_2,param_3,uVar4,1);
  auVar10 = _ZN4core3str6traits108__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__Range_LT_usize_GT__GT_3get17h6f62413506656e8fE
                      (bVar1,param_3,param_2,param_3);
  if (auVar10._0_8_ == 0) {
    ppuVar9 = &PTR_s_src_uu_od_src_parse_inputs_rs_00202738;
    goto LAB_0016acb3;
  }
  cVar2 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_11starts_with17ha3dd105fff9094a1E
                    (auVar10._0_8_,auVar10._8_8_,"0x",2);
  local_38 = param_1;
  if (cVar2 == '\0') {
    auVar10 = _ZN4core3str6traits108__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__Range_LT_usize_GT__GT_3get17h6f62413506656e8fE
                        (bVar1,param_3,param_2,param_3);
    lVar7 = auVar10._0_8_;
    if (lVar7 == 0) goto LAB_0016acac;
    cVar2 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_11starts_with17ha3dd105fff9094a1E
                      (lVar7,auVar10._8_8_,"0X",2);
    if (cVar2 == '\0') {
      local_50[0] = 0;
      uVar4 = _ZN4core4char7methods15encode_utf8_raw17h5e8f6d90a161f6f4E(0x62,local_50);
      bVar3 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_9ends_with17h0e81aafc98d6f07cE
                        (lVar7,auVar10._8_8_,uVar4);
      unaff_R13 = param_3 - (ulong)bVar3;
      auVar10 = _ZN4core3str6traits108__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__Range_LT_usize_GT__GT_3get17h6f62413506656e8fE
                          (bVar1,unaff_R13,param_2,param_3);
      if (auVar10._0_8_ == 0) goto LAB_0016acc5;
      lVar7 = 1;
      if (bVar3 != 0) {
        lVar7 = 0x200;
      }
      local_50[0] = 0;
      local_40 = auVar10._0_8_;
      uVar4 = _ZN4core4char7methods15encode_utf8_raw17h5e8f6d90a161f6f4E(0x2e,local_50);
      bVar3 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_9ends_with17h0e81aafc98d6f07cE
                        (local_40,auVar10._8_8_,uVar4);
      iVar8 = (uint)bVar3 * 2 + 8;
      unaff_R13 = unaff_R13 - (ulong)bVar3;
      goto LAB_0016ac29;
    }
  }
  bVar1 = bVar1 | 2;
  iVar8 = 0x10;
  lVar7 = 1;
  unaff_R13 = param_3;
LAB_0016ac29:
  auVar10 = _ZN4core3str6traits108__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__Range_LT_usize_GT__GT_3get17h6f62413506656e8fE
                      (bVar1,unaff_R13,param_2,param_3);
  if (auVar10._0_8_ != 0) {
    _ZN4core3num21__LT_impl_u20_u64_GT_16from_ascii_radix17h3a465e09cf2726d1E
              (local_50,auVar10._0_8_,auVar10._8_8_,iVar8);
    pcVar5 = (char *)0x0;
    if ((char)local_50[0] != '\0') {
      pcVar5 = 
      "parse failednulsohstxetxeotenqackbelbshtnlvtffcrsosidledc1dc2dc3dc4naksynetbcanemsubescfsgsrsussp!\"$%&\'*+,./012"
      ;
    }
    lVar6 = 0xc;
    if ((char)local_50[0] == '\0') {
      lVar6 = lVar7 * local_48;
    }
    *local_38 = pcVar5;
    local_38[1] = lVar6;
    return;
  }
  ppuVar9 = &PTR_s_src_uu_od_src_parse_inputs_rs_00202780;
  do {
    (*(code *)PTR__ZN4core3str16slice_error_fail17h1a2885084e28d077E_0020acd0)
              (param_2,param_3,bVar1,unaff_R13,ppuVar9);
LAB_0016acac:
    ppuVar9 = &PTR_s_src_uu_od_src_parse_inputs_rs_00202750;
LAB_0016acb3:
    (*(code *)PTR__ZN4core3str16slice_error_fail17h1a2885084e28d077E_0020acd0)
              (param_2,param_3,bVar1,param_3,ppuVar9);
LAB_0016acc5:
    ppuVar9 = &PTR_s_src_uu_od_src_parse_inputs_rs_00202768;
  } while( true );
}