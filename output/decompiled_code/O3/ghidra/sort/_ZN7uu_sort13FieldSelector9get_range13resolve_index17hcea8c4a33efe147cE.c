char __rustcall
uu_sort::FieldSelector::get_range::resolve_index
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
      goto LAB_00221027;
    }
  }
  else {
    if (uVar1 == 1) {
      lVar5 = 0;
      if (*(char *)(param_5 + 2) == '\0') goto LAB_00220f76;
LAB_00220f29:
      auVar6 = core::str::traits::
               _<impl_core::slice::index::SliceIndex<str>for_core::ops::range::RangeFrom<usize>>::
               get(lVar5,param_1,param_2);
      lVar3 = auVar6._0_8_;
      if (lVar3 != 0) {
        local_38 = lVar3 + auVar6._8_8_;
        local_30 = 0;
        local_40 = lVar3;
        auVar7 = core::iter::traits::iterator::Iterator::try_fold(&local_40);
        lVar3 = core::option::Option<T>::map_or(auVar7._0_8_,auVar7._8_4_,auVar6._8_8_);
        lVar5 = lVar5 + lVar3;
        goto LAB_00220f76;
      }
      ppuVar4 = &PTR_s_src_uu_sort_src_sort_rs_002ff0a0;
    }
    else {
      if (param_3 == 0) {
        core::option::unwrap_failed(&PTR_s_src_uu_sort_src_sort_rs_002ff070);
LAB_00221044:
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_bounds_check();
      }
      if (param_4 <= uVar1 - 1) goto LAB_00221044;
      lVar5 = *(long *)(param_3 + (uVar1 - 1) * 0x10);
      if (*(char *)(param_5 + 2) != '\0') goto LAB_00220f29;
LAB_00220f76:
      auVar6 = core::str::traits::
               _<impl_core::slice::index::SliceIndex<str>for_core::ops::range::RangeFrom<usize>>::
               get(lVar5,param_1,param_2);
      lVar3 = auVar6._0_8_;
      if (lVar3 != 0) {
        local_38 = lVar3 + auVar6._8_8_;
        local_30 = 0;
        local_40 = lVar3;
        lVar3 = core::iter::traits::iterator::Iterator::advance_by(&local_40,uVar2 - 1);
        if (lVar3 == 0) {
          _<core::str::iter::CharIndices_as_core::iter::traits::iterator::Iterator>::next(&local_40)
          ;
        }
        lVar3 = core::option::Option<T>::map_or();
        return (param_2 <= (ulong)(lVar3 + lVar5)) * '\x03';
      }
      ppuVar4 = &PTR_s_src_uu_sort_src_sort_rs_002ff0b8;
    }
    core::str::slice_error_fail(param_1,param_2,lVar5,param_2,ppuVar4);
  }
  core::option::unwrap_failed(&PTR_s_src_uu_sort_src_sort_rs_002ff040);
LAB_00221027:
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_bounds_check();
}