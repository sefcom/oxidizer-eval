void __rustcall
uu_sort::chunks::read_to_buffer
          (undefined8 *param_1,undefined4 *param_2,long param_3,long param_4,ulong param_5,
          ulong param_6,char param_7)

{
  ulong uVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  bool bVar7;
  undefined auVar8 [16];
  ulong local_90;
  long local_88;
  long lStack_80;
  long local_78;
  undefined4 local_70 [4];
  ulong local_60;
  long local_58;
  ulong local_50;
  undefined local_48 [16];
  undefined8 local_38;
  
  uVar6 = *(ulong *)(param_3 + 0x10) - param_6;
  local_58 = param_4;
  if (param_6 <= *(ulong *)(param_3 + 0x10)) {
    param_6 = param_6 + *(long *)(param_3 + 8);
    local_50 = param_5 >> 1;
    local_60 = uVar6;
LAB_0025df00:
    while( true ) {
      auVar8 = _<std::process::ChildStderr_as_std::io::Read>::read(param_2,param_6,uVar6);
      uVar5 = auVar8._8_8_;
      if (auVar8._0_8_ == 0) break;
LAB_0025df17:
      cVar2 = std::io::error::Error::kind(uVar5);
      if (cVar2 != '#') {
                    /* try { // try from 0025e0fb to 0025e12f has its CatchHandler @ 0025e22b */
        local_90 = uVar5;
        _<T_as_alloc::string::ToString>::to_string(local_48,&local_90);
        local_70[0] = 2;
        local_78 = local_38;
        uVar4 = ::alloc::boxed::Box<T>::new(&local_88);
        param_1[1] = uVar4;
        param_1[2] = &PTR_drop_in_place<uucore_mods_error_USimpleError>_00301a40;
        *param_1 = 1;
        core::ptr::drop_in_place<std::io::error::Error>(local_90);
        return;
      }
      core::ptr::drop_in_place<std::io::error::Error>(uVar5);
    }
    if (local_58 == 1) {
      do {
        if (uVar5 != 0) goto LAB_0025dfb7;
        if (uVar6 != 0) goto LAB_0025e060;
        param_6 = *(ulong *)(param_3 + 0x10);
        if (param_5 <= param_6) goto LAB_0025dfd8;
        uVar6 = param_6 * 2;
        if (local_50 <= param_6) {
          uVar6 = param_5;
        }
        ::alloc::vec::Vec<T,A>::resize(param_3,uVar6,0);
        uVar1 = *(ulong *)(param_3 + 0x10);
        uVar6 = uVar1 - param_6;
        if (uVar1 < param_6) {
          core::slice::index::slice_start_index_len_fail
                    (param_6,uVar1,&PTR_s_src_uu_sort_src_chunks_rs_00301960);
          goto LAB_0025e1c1;
        }
        param_6 = param_6 + *(long *)(param_3 + 8);
        auVar8 = _<std::process::ChildStderr_as_std::io::Read>::read(param_2,param_6,uVar6);
        uVar5 = auVar8._8_8_;
      } while (auVar8._0_8_ == 0);
      goto LAB_0025df17;
    }
    if (uVar5 == 0) {
      if (uVar6 != 0) {
LAB_0025e060:
        uVar5 = local_60;
        if (local_60 != uVar6) {
          uVar5 = *(ulong *)(param_3 + 0x10);
          lVar3 = uVar5 - uVar6;
          if (uVar5 <= lVar3 - 1U) goto LAB_0025e1f1;
          if (*(char *)(*(long *)(param_3 + 8) + (lVar3 - 1U)) != param_7) {
            if (uVar5 < uVar6) goto LAB_0025e20e;
            *(char *)(*(long *)(param_3 + 8) + lVar3) = param_7;
            uVar6 = uVar6 - 1;
            uVar5 = *(ulong *)(param_3 + 0x10);
            lVar3 = uVar5 - uVar6;
          }
          if (uVar5 < uVar6) {
            core::slice::index::slice_start_index_len_fail
                      (lVar3,uVar5,&PTR_s_src_uu_sort_src_chunks_rs_003019d8);
LAB_0025e20e:
                    /* WARNING: Subroutine does not return */
            core::panicking::panic_bounds_check(lVar3);
          }
          param_6 = lVar3 + *(long *)(param_3 + 8);
          uVar5 = uVar6;
        }
        uVar6 = uVar5;
        _<core::iter::sources::empty::Empty<T>as_core::iter::traits::iterator::Iterator>::next
                  (&local_88);
        lVar3 = local_78;
        if (local_88 == 0) {
          param_1[1] = *(long *)(param_3 + 0x10) - uVar6;
          *(undefined *)(param_1 + 2) = 0;
          uVar4 = 0;
        }
        else {
          if (lStack_80 == 0) {
            core::ptr::drop_in_place<std::process::ChildStdout>(*param_2);
            *param_2 = (int)lVar3;
            local_60 = uVar6;
            goto LAB_0025df00;
          }
          param_1[1] = lStack_80;
          param_1[2] = local_78;
          uVar4 = 1;
        }
        *param_1 = uVar4;
        return;
      }
      param_6 = *(ulong *)(param_3 + 0x10);
LAB_0025dfd8:
      local_88 = *(long *)(param_3 + 8);
      local_78 = param_6 + local_88;
      local_70[0] = CONCAT31(local_70[0]._1_3_,param_7);
      lStack_80 = local_88;
      auVar8 = memchr::arch::generic::memchr::Iter::next_back(&local_88,local_70);
      lVar3 = memchr::arch::generic::memchr::Iter::next_back(&local_88,local_70);
      if (lVar3 == 1) {
        if (auVar8._0_8_ != 0) {
          param_1[1] = auVar8._8_8_ + 1;
          *(undefined *)(param_1 + 2) = 1;
          *param_1 = 0;
          return;
        }
        uVar4 = core::option::unwrap_failed(&PTR_s_src_uu_sort_src_chunks_rs_00301978);
                    /* catch() { ... } // from try @ 0025e0fb with catch @ 0025e22b */
                    /* try { // try from 0025e233 to 0025e237 has its CatchHandler @ 0025e240 */
        core::ptr::drop_in_place<std::io::error::Error>(local_90);
                    /* WARNING: Subroutine does not return */
        _Unwind_Resume(uVar4);
      }
      param_6 = *(ulong *)(param_3 + 0x10);
      ::alloc::vec::Vec<T,A>::resize(param_3,param_6 + 0x2800,0);
      uVar6 = *(ulong *)(param_3 + 0x10) - param_6;
      if (*(ulong *)(param_3 + 0x10) < param_6) goto LAB_0025e1d1;
      param_6 = param_6 + *(long *)(param_3 + 8);
      goto LAB_0025df00;
    }
LAB_0025dfb7:
    bVar7 = uVar5 <= uVar6;
    uVar6 = uVar6 - uVar5;
    if (bVar7) {
      param_6 = param_6 + uVar5;
      goto LAB_0025df00;
    }
LAB_0025e1c1:
    core::slice::index::slice_start_index_len_fail(uVar5);
LAB_0025e1d1:
    core::slice::index::slice_start_index_len_fail(param_6);
  }
  core::slice::index::slice_start_index_len_fail(param_6);
LAB_0025e1f1:
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_bounds_check();
}