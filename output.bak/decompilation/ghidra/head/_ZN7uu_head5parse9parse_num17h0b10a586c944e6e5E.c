long * __rustcall uu_head::parse::parse_num(long *param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  int extraout_EDX;
  long lVar5;
  bool bVar6;
  undefined auVar7 [16];
  long local_50;
  long lStack_48;
  long local_40;
  long lStack_38;
  
  auVar7 = core::str::_<impl_str>::trim_matches(param_2,param_3);
  lVar5 = auVar7._8_8_;
  lVar3 = auVar7._0_8_;
  lStack_48 = lVar3 + lVar5;
  local_50 = lVar3;
  iVar2 = core::str::validations::next_code_point(&local_50);
  if (iVar2 == 0) {
    _<T_as_alloc::slice::hack::ConvertVec>::to_vec(param_1 + 1,param_2,param_3);
    *param_1 = 1;
  }
  else {
    if ((extraout_EDX == 0x2b) || (extraout_EDX == 0x2d)) {
      auVar7 = core::str::traits::
               _<impl_core::slice::index::SliceIndex<str>for_core::ops::range::RangeFrom<usize>>::
               get(lVar3,lVar5);
      if (auVar7._0_8_ == 0) {
        core::str::slice_error_fail(lVar3,lVar5,1,lVar5,&PTR_s_src_uu_head_src_parse_rs_0022d098);
        pcVar1 = (code *)swi(3);
        plVar4 = (long *)(*pcVar1)();
        return plVar4;
      }
      bVar6 = extraout_EDX == 0x2d;
    }
    else {
      bVar6 = false;
    }
    auVar7 = core::str::_<impl_str>::trim_start_matches(auVar7._0_8_,auVar7._8_8_,0x30);
    if (auVar7._8_8_ == 0) {
      param_1[1] = 0;
    }
    else {
      uucore::parser::parse_size::parse_size_u64(&local_50,auVar7._0_8_);
      if ((int)local_50 != 3) {
        param_1[2] = local_40;
        param_1[3] = lStack_38;
        *param_1 = local_50;
        param_1[1] = lStack_48;
        return param_1;
      }
      param_1[1] = lStack_48;
    }
    *(bool *)(param_1 + 2) = bVar6;
    *param_1 = 3;
  }
  return param_1;
}