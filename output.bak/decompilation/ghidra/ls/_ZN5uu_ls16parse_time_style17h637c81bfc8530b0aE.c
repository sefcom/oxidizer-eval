void __rustcall uu_ls::parse_time_style(undefined *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  int extraout_EDX;
  undefined **ppuVar10;
  undefined auVar11 [16];
  undefined auVar12 [16];
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined7 uStack_e0;
  undefined uStack_d9;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  puVar6 = (undefined8 *)::alloc::alloc::Global::alloc_impl(0x78);
  if (puVar6 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    ::alloc::alloc::handle_alloc_error(8,0x78);
  }
                    /* try { // try from 0021e7b9 to 0021e7d1 has its CatchHandler @ 0021ec48 */
  _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_f0,&DAT_00124710,8);
  local_58 = CONCAT17(uStack_d9,uStack_e0);
  local_68 = local_f0;
  uStack_64 = uStack_ec;
  uStack_60 = uStack_e8;
  uStack_5c = uStack_e4;
                    /* try { // try from 0021e7ec to 0021e801 has its CatchHandler @ 0021ec36 */
  _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_f0,&DAT_00124818,8);
  local_38 = CONCAT17(uStack_d9,uStack_e0);
  local_48 = local_f0;
  uStack_44 = uStack_ec;
  uStack_40 = uStack_e8;
  uStack_3c = uStack_e4;
                    /* try { // try from 0021e81c to 0021e831 has its CatchHandler @ 0021ec24 */
  _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_f0,&DAT_00134b6e,3);
  local_78 = CONCAT17(uStack_d9,uStack_e0);
  local_88 = CONCAT44(uStack_ec,local_f0);
  uStack_80 = CONCAT44(uStack_e4,uStack_e8);
                    /* try { // try from 0021e849 to 0021e85e has its CatchHandler @ 0021ec15 */
  _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_f0,&DAT_00134b71,6);
  local_98 = CONCAT17(uStack_d9,uStack_e0);
  local_a8 = local_f0;
  uStack_a4 = uStack_ec;
  uStack_a0 = uStack_e8;
  uStack_9c = uStack_e4;
                    /* try { // try from 0021e873 to 0021e888 has its CatchHandler @ 0021ec06 */
  _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_f0,&DAT_00134b77,0x30);
  local_b8 = CONCAT17(uStack_d9,uStack_e0);
  local_c8 = CONCAT44(uStack_ec,local_f0);
  uStack_c0 = CONCAT44(uStack_e4,uStack_e8);
  puVar6[2] = local_58;
  *puVar6 = CONCAT44(uStack_64,local_68);
  puVar6[1] = CONCAT44(uStack_5c,uStack_60);
  puVar6[5] = local_38;
  puVar6[3] = CONCAT44(uStack_44,local_48);
  puVar6[4] = CONCAT44(uStack_3c,uStack_40);
  puVar6[8] = local_78;
  puVar6[6] = local_88;
  puVar6[7] = uStack_80;
  puVar6[9] = CONCAT44(uStack_a4,local_a8);
  puVar6[10] = CONCAT44(uStack_9c,uStack_a0);
  puVar6[0xb] = local_98;
  *(undefined4 *)(puVar6 + 0xc) = local_f0;
  *(undefined4 *)((long)puVar6 + 100) = uStack_ec;
  *(undefined4 *)(puVar6 + 0xd) = uStack_e8;
  *(undefined4 *)((long)puVar6 + 0x6c) = uStack_e4;
  puVar6[0xe] = local_b8;
  ::alloc::slice::hack::into_vec(&local_a8,puVar6,5);
                    /* try { // try from 0021e91c to 0021eac5 has its CatchHandler @ 0021ec5b */
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
            (&local_f0,param_2,anon_3f7e092f2ea554bdd060175bd8ea63d9_31_llvm_16502254941234113161,10
            );
  lVar7 = clap_builder::parser::error::MatchesError::unwrap
                    (anon_3f7e092f2ea554bdd060175bd8ea63d9_31_llvm_16502254941234113161,10,&local_f0
                    );
  if (lVar7 == 0) {
    cVar3 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag
                      (param_2,anon_3f7e092f2ea554bdd060175bd8ea63d9_32_llvm_16502254941234113161,9)
    ;
    if (cVar3 != '\0') goto LAB_0021ea78;
LAB_0021eaca:
    uVar8 = 0x8000000000000003;
  }
  else {
    cVar3 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag
                      (param_2,anon_3f7e092f2ea554bdd060175bd8ea63d9_32_llvm_16502254941234113161,9)
    ;
    if (cVar3 != '\0') {
      clap_builder::parser::matches::arg_matches::ArgMatches::indices_of
                (&local_f0,param_2,
                 anon_3f7e092f2ea554bdd060175bd8ea63d9_32_llvm_16502254941234113161,9);
      if (CONCAT44(uStack_ec,local_f0) == 0) {
        ppuVar10 = &PTR_DAT_003121f0;
        goto LAB_0021ebdc;
      }
      auVar11 = core::iter::traits::iterator::Iterator::fold(&local_c8);
      clap_builder::parser::matches::arg_matches::ArgMatches::indices_of
                (&local_f0,param_2,
                 anon_3f7e092f2ea554bdd060175bd8ea63d9_31_llvm_16502254941234113161,10);
      if (CONCAT44(uStack_ec,local_f0) == 0) {
        ppuVar10 = &PTR_DAT_00312208;
        goto LAB_0021ebdc;
      }
      local_b8 = CONCAT17(uStack_d9,uStack_e0);
      local_c8 = CONCAT44(uStack_ec,local_f0);
      uStack_c0 = CONCAT44(uStack_e4,uStack_e8);
      auVar12 = core::iter::traits::iterator::Iterator::fold(&local_c8);
      if ((auVar11._0_8_ != 0) && ((auVar12._0_8_ == 0 || (auVar12._8_8_ < auVar11._8_8_))))
      goto LAB_0021ea78;
    }
    lVar1 = *(long *)(lVar7 + 8);
    lVar2 = *(long *)(lVar7 + 0x10);
    cVar3 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(lVar1,lVar2,&DAT_00124710,8);
    if (cVar3 == '\0') {
      cVar3 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(lVar1,lVar2,&DAT_00124818,8);
      if (cVar3 == '\0') {
        cVar3 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(lVar1,lVar2,&DAT_00134b6e,3);
        if (cVar3 == '\0') {
          cVar3 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(lVar1,lVar2,&DAT_00134b71,6);
          if (cVar3 == '\0') {
            uStack_80 = lVar1 + lVar2;
            local_88 = lVar1;
            iVar4 = core::str::validations::next_code_point(&local_88);
            iVar5 = 0x110000;
            if (iVar4 != 0) {
              iVar5 = extraout_EDX;
            }
            if (iVar5 != 0x2b) {
              if (iVar5 != 0x110000) {
                    /* try { // try from 0021eb2c to 0021eba4 has its CatchHandler @ 0021ec5b */
                _<alloc::string::String_as_core::clone::Clone>::clone(&local_c8,lVar7);
                *(undefined8 *)(param_1 + 0x30) = local_98;
                *(ulong *)(param_1 + 0x20) = CONCAT44(uStack_a4,local_a8);
                *(ulong *)(param_1 + 0x28) = CONCAT44(uStack_9c,uStack_a0);
                uStack_ec._3_1_ = (undefined)local_c8;
                uStack_e8 = (undefined4)((ulong)local_c8 >> 8);
                uStack_e4._0_3_ = (undefined3)((ulong)local_c8 >> 0x28);
                uStack_e4._3_1_ = (undefined)uStack_c0;
                *param_1 = 6;
                *(ulong *)(param_1 + 1) = CONCAT44(uStack_ec,local_f0);
                *(ulong *)(param_1 + 9) = CONCAT44(uStack_e4,uStack_e8);
                *(undefined8 *)(param_1 + 0x10) = uStack_c0;
                *(undefined8 *)(param_1 + 0x18) = local_b8;
                return;
              }
              do {
                ppuVar10 = &PTR_DAT_00312220;
LAB_0021ebdc:
                    /* try { // try from 0021ebdc to 0021ec05 has its CatchHandler @ 0021ec5b */
                core::option::unwrap_failed(ppuVar10);
              } while( true );
            }
            lVar9 = core::str::traits::
                    _<impl_core::slice::index::SliceIndex<str>for_core::ops::range::RangeFrom<usize>>
                    ::get(1,lVar1,lVar2);
            if (lVar9 == 0) {
              uVar8 = core::str::slice_error_fail(lVar1,lVar2,1,lVar2,&PTR_DAT_00312238);
                    /* catch() { ... } // from try @ 0021e873 with catch @ 0021ec06 */
                    /* try { // try from 0021ec09 to 0021ec45 has its CatchHandler @ 0021ec70 */
              core::ptr::drop_in_place<alloc::string::String>(&local_a8);
              core::ptr::drop_in_place<alloc::string::String>(&local_88);
              core::ptr::drop_in_place<alloc::string::String>(&local_48);
              core::ptr::drop_in_place<alloc::string::String>(&local_68);
              _<alloc::boxed::Box<T,A>as_core::ops::drop::Drop>::drop(lVar7);
              _Unwind_Resume(uVar8);
              return;
            }
            _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_f0,lVar9);
            *(ulong *)(param_1 + 0x18) = CONCAT17(uStack_d9,uStack_e0);
            *(undefined4 *)(param_1 + 8) = local_f0;
            *(undefined4 *)(param_1 + 0xc) = uStack_ec;
            *(undefined4 *)(param_1 + 0x10) = uStack_e8;
            *(undefined4 *)(param_1 + 0x14) = uStack_e4;
            goto LAB_0021eadc;
          }
          goto LAB_0021eaca;
        }
        uVar8 = 0x8000000000000002;
      }
      else {
        uVar8 = 0x8000000000000001;
      }
    }
    else {
LAB_0021ea78:
      uVar8 = 0x8000000000000000;
    }
  }
  *(undefined8 *)(param_1 + 8) = uVar8;
LAB_0021eadc:
  *param_1 = 7;
  core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&local_a8);
  return;
}