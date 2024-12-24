undefined8 * __rustcall uu_fold::handle_obsolete(undefined8 *param_1,long param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulong extraout_RDX;
  undefined *puVar8;
  undefined auVar9 [16];
  undefined auVar10 [16];
  ulong local_90;
  long lStack_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  long local_60;
  long local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  local_58 = param_2 + param_3 * 0x18;
  local_50 = 0;
  local_60 = param_2;
  auVar9 = _<core::iter::adapters::enumerate::Enumerate<I>as_core::iter::traits::iterator::Iterator>
           ::next(&local_60);
  if (auVar9._8_8_ != 0) {
    do {
      uVar1 = *(ulong *)(auVar9._8_8_ + 8);
      lVar2 = *(long *)(auVar9._8_8_ + 0x10);
      local_90 = local_90 & 0xffffffff00000000;
      auVar10 = core::char::methods::encode_utf8_raw(0x2d,&local_90);
      cVar3 = core::slice::_<impl[T]>::starts_with(uVar1,lVar2,auVar10._0_8_,auVar10._8_8_);
      if (cVar3 != '\0') {
        lStack_88 = lVar2 + uVar1;
        local_90 = uVar1;
        lVar5 = _<core::str::iter::Chars_as_core::iter::traits::iterator::Iterator>::advance_by
                          (&local_90);
        puVar8 = &DAT_00110000;
        if (lVar5 == 0) {
          iVar4 = core::str::validations::next_code_point(&local_90);
          puVar8 = (undefined *)(extraout_RDX & 0xffffffff);
          if (iVar4 == 0) {
            puVar8 = &DAT_00110000;
          }
        }
        cVar3 = core::option::Option<T>::map_or(puVar8);
        if (cVar3 != '\0') {
          _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_48,param_2,param_3);
                    /* try { // try from 001b1b15 to 001b1b35 has its CatchHandler @ 001b1bcb */
          ::alloc::vec::Vec<T,A>::remove
                    (&local_90,&local_48,auVar9._0_8_,&PTR_s_src_uu_fold_src_fold_rs_0021bb38);
          core::ptr::drop_in_place<alloc::string::String>(&local_90);
          local_68 = local_38;
          local_78 = local_48;
          uStack_74 = uStack_44;
          uStack_70 = uStack_40;
          uStack_6c = uStack_3c;
          lVar5 = core::str::traits::
                  _<impl_core::slice::index::SliceIndex<str>for_core::ops::range::RangeFrom<usize>>
                  ::get(uVar1,lVar2);
          if (lVar5 != 0) {
                    /* try { // try from 001b1b5a to 001b1bbb has its CatchHandler @ 001b1bbc */
            _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_90,lVar5);
            param_1[5] = local_80;
            param_1[3] = local_90;
            param_1[4] = lStack_88;
            param_1[2] = local_68;
            *param_1 = CONCAT44(uStack_74,local_78);
            param_1[1] = CONCAT44(uStack_6c,uStack_70);
            return param_1;
          }
          uVar6 = core::str::slice_error_fail
                            (uVar1,lVar2,1,lVar2,&PTR_s_src_uu_fold_src_fold_rs_0021bb50);
                    /* catch() { ... } // from try @ 001b1b5a with catch @ 001b1bbc */
                    /* try { // try from 001b1bbf to 001b1bd7 has its CatchHandler @ 001b1be0 */
          core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&local_78);
          puVar7 = (undefined8 *)_Unwind_Resume(uVar6);
          return puVar7;
        }
      }
      auVar9 = _<core::iter::adapters::enumerate::Enumerate<I>as_core::iter::traits::iterator::Iterator>
               ::next(&local_60);
    } while (auVar9._8_8_ != 0);
  }
  _<T_as_alloc::slice::hack::ConvertVec>::to_vec(param_1,param_2,param_3);
  param_1[3] = 0x8000000000000000;
  return param_1;
}