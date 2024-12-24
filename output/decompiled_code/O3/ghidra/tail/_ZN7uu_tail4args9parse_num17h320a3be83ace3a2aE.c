void __rustcall uu_tail::args::parse_num(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  int extraout_EDX;
  long lVar5;
  undefined auVar6 [16];
  long local_58;
  long local_50;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  
  auVar6 = core::str::_<impl_str>::trim_matches(param_2,param_3);
  lVar5 = auVar6._8_8_;
  lVar3 = auVar6._0_8_;
  local_50 = lVar5 + lVar3;
  local_58 = lVar3;
  iVar2 = core::str::validations::next_code_point(&local_58);
  if (iVar2 != 0) {
    if (extraout_EDX == 0x2b) {
      auVar6 = core::str::traits::
               _<impl_core::slice::index::SliceIndex<str>for_core::ops::range::RangeFrom<usize>>::
               get(lVar3,lVar5);
      if (auVar6._0_8_ == 0) {
LAB_001fb057:
        uVar4 = core::str::slice_error_fail
                          (lVar3,lVar5,1,lVar5,&PTR_s_src_uu_tail_src_args_rs_002bd660);
                    /* catch() { ... } // from try @ 001fafee with catch @ 001fb072 */
                    /* try { // try from 001fb075 to 001fb07c has its CatchHandler @ 001fb085 */
        core::ptr::
        drop_in_place<core::result::Result<u64,uucore::parser::parse_size::ParseSizeError>>
                  (&local_58);
        _Unwind_Resume(uVar4);
        return;
      }
      bVar1 = true;
      goto LAB_001fafbc;
    }
    if (extraout_EDX == 0x2d) {
      auVar6 = core::str::traits::
               _<impl_core::slice::index::SliceIndex<str>for_core::ops::range::RangeFrom<usize>>::
               get(lVar3,lVar5);
      if (auVar6._0_8_ == 0) goto LAB_001fb057;
      bVar1 = false;
      goto LAB_001fafbc;
    }
  }
  bVar1 = false;
LAB_001fafbc:
  uucore::parser::parse_size::parse_size_u64(&local_58,auVar6._0_8_,auVar6._8_8_);
  if ((int)local_58 == 3) {
    if (local_50 == 0) {
      if (bVar1) {
        param_1[1] = 2;
      }
      else {
        param_1[1] = 3;
      }
    }
    else if (bVar1) {
      param_1[1] = 1;
      param_1[2] = local_50;
    }
    else {
      param_1[1] = 0;
      param_1[2] = local_50;
    }
    uVar4 = 3;
  }
  else {
                    /* try { // try from 001fafee to 001faffd has its CatchHandler @ 001fb072 */
    _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_38,auVar6._0_8_,auVar6._8_8_);
    param_1[3] = local_28;
    *(undefined4 *)(param_1 + 1) = local_38;
    *(undefined4 *)((long)param_1 + 0xc) = uStack_34;
    *(undefined4 *)(param_1 + 2) = uStack_30;
    *(undefined4 *)((long)param_1 + 0x14) = uStack_2c;
    uVar4 = 1;
  }
  *param_1 = uVar4;
  core::ptr::drop_in_place<core::result::Result<u64,uucore::parser::parse_size::ParseSizeError>>
            (&local_58);
  return;
}