char _ZN7uu_sort13FieldSelector9get_range13resolve_index17hd65278e590ae86b0E
               (undefined8 param_1,ulong param_2,long param_3,ulong param_4,ulong *param_5)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined auVar6 [16];
  undefined auVar7 [12];
  long local_40;
  long local_38;
  undefined8 local_30;
  
  uVar1 = *param_5;
  if ((param_3 != 0) && (param_4 < uVar1)) {
    return '\x03';
  }
  uVar2 = param_5[1];
  if (uVar2 == 0) {
    if (param_3 != 0) {
      if (uVar1 - 1 < param_4) {
        return (*(long *)(param_3 + 8 + (uVar1 - 1) * 0x10) == 0) + '\x01';
      }
      goto LAB_00221fb7;
    }
  }
  else {
    if (uVar1 == 1) {
      lVar5 = 0;
      if (*(char *)(param_5 + 2) == '\0') goto LAB_00221f06;
LAB_00221eb9:
      auVar6 = _ZN4core3str6traits112__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeFrom_LT_usize_GT__GT_3get17hccefea64a1916a27E
                         (lVar5,param_1,param_2);
      lVar3 = auVar6._0_8_;
      if (lVar3 != 0) {
        local_38 = lVar3 + auVar6._8_8_;
        local_30 = 0;
        local_40 = lVar3;
        auVar7 = _ZN4core4iter6traits8iterator8Iterator8try_fold17hebbd1e5cdfe1aaa4E(&local_40);
        lVar3 = _ZN4core6option15Option_LT_T_GT_6map_or17h7394a4af2de8fef7E
                          (auVar7._0_8_,auVar7._8_4_,auVar6._8_8_);
        lVar5 = lVar5 + lVar3;
        goto LAB_00221f06;
      }
      ppuVar4 = &PTR_s_src_uu_sort_src_sort_rs_002ffbc8;
    }
    else {
      if (param_3 == 0) {
        _ZN4core6option13unwrap_failed17h0e11329e76906eaaE(&PTR_s_src_uu_sort_src_sort_rs_002ffb98);
LAB_00221fd4:
                    /* WARNING: Subroutine does not return */
        _ZN4core9panicking18panic_bounds_check17h25a5330941572dd1E();
      }
      if (param_4 <= uVar1 - 1) goto LAB_00221fd4;
      lVar5 = *(long *)(param_3 + (uVar1 - 1) * 0x10);
      if (*(char *)(param_5 + 2) != '\0') goto LAB_00221eb9;
LAB_00221f06:
      auVar6 = _ZN4core3str6traits112__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeFrom_LT_usize_GT__GT_3get17hccefea64a1916a27E
                         (lVar5,param_1,param_2);
      lVar3 = auVar6._0_8_;
      if (lVar3 != 0) {
        local_38 = lVar3 + auVar6._8_8_;
        local_30 = 0;
        local_40 = lVar3;
        lVar3 = _ZN4core4iter6traits8iterator8Iterator10advance_by17hf1b9bd9a791e7d45E
                          (&local_40,uVar2 - 1);
        if (lVar3 == 0) {
          _ZN87__LT_core__str__iter__CharIndices_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17he645eee637d411aeE
                    (&local_40);
        }
        lVar3 = _ZN4core6option15Option_LT_T_GT_6map_or17h0a742836e118e24eE();
        return (param_2 <= (ulong)(lVar3 + lVar5)) * '\x03';
      }
      ppuVar4 = &PTR_s_src_uu_sort_src_sort_rs_002ffbe0;
    }
    _ZN4core3str16slice_error_fail17h5dbb61534404fe7eE(param_1,param_2,lVar5,param_2,ppuVar4);
  }
  _ZN4core6option13unwrap_failed17h0e11329e76906eaaE(&PTR_s_src_uu_sort_src_sort_rs_002ffb68);
LAB_00221fb7:
                    /* WARNING: Subroutine does not return */
  _ZN4core9panicking18panic_bounds_check17h25a5330941572dd1E();
}