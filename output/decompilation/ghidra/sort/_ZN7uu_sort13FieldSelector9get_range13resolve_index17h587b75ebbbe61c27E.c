long _ZN7uu_sort13FieldSelector9get_range13resolve_index17h587b75ebbbe61c27E
               (undefined8 param_1,ulong param_2,long param_3,ulong param_4,ulong *param_5)

{
  char cVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  long lVar5;
  undefined **ppuVar6;
  long unaff_R14;
  undefined auVar7 [16];
  undefined auVar8 [12];
  long local_40;
  long local_38;
  undefined8 local_30;
  
  uVar2 = *param_5;
  if (param_3 != 0 && param_4 < uVar2) {
    return 3;
  }
  uVar3 = param_5[1];
  if (uVar3 == 0) {
    if (param_3 == 0) {
      (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_00296f50)
                (&PTR_s_src_uu_sort_src_sort_rs_0028d140);
LAB_001d3ea6:
      (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_00296f50)
                (&PTR_s_src_uu_sort_src_sort_rs_0028d170);
LAB_001d3eb3:
      ppuVar6 = &PTR_s_src_uu_sort_src_sort_rs_0028d1a0;
      goto LAB_001d3eba;
    }
    if (uVar2 - 1 < param_4) {
      return (ulong)(*(long *)(param_3 + 8 + (uVar2 - 1) * 0x10) == 0) + 1;
    }
  }
  else {
    if (uVar2 == 1) {
      unaff_R14 = 0;
      cVar1 = *(char *)(param_5 + 2);
    }
    else {
      if (param_3 == 0) goto LAB_001d3ea6;
      if (param_4 <= uVar2 - 1) goto LAB_001d3edc;
      unaff_R14 = *(long *)(param_3 + (uVar2 - 1) * 0x10);
      cVar1 = *(char *)(param_5 + 2);
    }
    if (cVar1 != '\0') {
      auVar7 = _ZN4core3str6traits112__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeFrom_LT_usize_GT__GT_3get17h28e9e81c5537bbedE
                         (unaff_R14,param_1,param_2);
      lVar5 = auVar7._0_8_;
      if (lVar5 == 0) goto LAB_001d3eb3;
      local_38 = lVar5 + auVar7._8_8_;
      local_30 = 0;
      local_40 = lVar5;
      auVar8 = _ZN4core4iter6traits8iterator8Iterator8try_fold17h76c06b666351fd08E(&local_40);
      lVar5 = _ZN4core6option15Option_LT_T_GT_6map_or17h19d14ea526fb5a80E
                        (auVar8._0_8_,auVar8._8_4_,auVar7._8_8_);
      unaff_R14 = unaff_R14 + lVar5;
    }
    auVar7 = _ZN4core3str6traits112__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeFrom_LT_usize_GT__GT_3get17h28e9e81c5537bbedE
                       (unaff_R14,param_1,param_2);
    lVar5 = auVar7._0_8_;
    if (lVar5 != 0) {
      local_38 = lVar5 + auVar7._8_8_;
      local_30 = 0;
      local_40 = lVar5;
      lVar5 = _ZN4core4iter6traits8iterator8Iterator10advance_by17hd51928b9fe23b462E
                        (&local_40,uVar3 - 1);
      if (lVar5 == 0) {
        _ZN87__LT_core__str__iter__CharIndices_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h3a48939ae6ec65bfE
                  (&local_40);
      }
      lVar5 = _ZN4core6option15Option_LT_T_GT_6map_or17h19d14ea526fb5a80E();
      return (ulong)(param_2 <= (ulong)(lVar5 + unaff_R14)) * 3;
    }
    ppuVar6 = &PTR_s_src_uu_sort_src_sort_rs_0028d1b8;
LAB_001d3eba:
    (*(code *)PTR__ZN4core3str16slice_error_fail17h1a2885084e28d077E_002975c8)
              (param_1,param_2,unaff_R14,param_2,ppuVar6);
  }
  (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_00296cb8)();
LAB_001d3edc:
  (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_00296cb8)();
  pcVar4 = (code *)swi(3);
  lVar5 = (*pcVar4)();
  return lVar5;
}