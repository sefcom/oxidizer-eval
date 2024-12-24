long __rustcall
uu_base32::base_common::fast_decode::decode_in_chunks_to_buffer
          (undefined8 param_1,long param_2,long param_3,ulong param_4,undefined8 param_5,
          ulong param_6,undefined8 param_7,long param_8)

{
  long lVar1;
  code *pcVar2;
  undefined auVar3 [16];
  long local_a8;
  long local_a0;
  undefined8 local_98;
  ulong local_90;
  undefined **local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined local_58 [16];
  long local_48;
  long local_40;
  
  if (param_4 == 0) {
    pcVar2 = *(code **)(param_2 + 0x20);
    local_98 = param_5;
    local_90 = param_6;
  }
  else {
    if (param_6 < param_4) {
      local_88 = &PTR_s_mid_>_len_0024a630;
      local_80 = 1;
      local_78 = 8;
      local_70 = 0;
      uStack_68 = 0;
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_fmt(&local_88,&PTR_s_src_uu_base32_src_base_common_rs_0024a670);
    }
    core::slice::_<impl[T]>::split_at_unchecked(&local_a8,param_5,param_6);
    _<alloc::vec::Vec<T,A>as_alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::
    spec_extend(param_8,local_a8,local_a0 + local_a8);
    if (*(long *)(param_8 + 0x10) != param_3) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic
                ("assertion failed: leftover_buffer.len() == decode_in_chunks_of_size",0x43,
                 &PTR_s_src_uu_base32_src_base_common_rs_0024a688);
    }
    pcVar2 = *(code **)(param_2 + 0x20);
    lVar1 = (*pcVar2)(param_1,*(undefined8 *)(param_8 + 8),param_3,param_7);
    if (lVar1 != 0) {
      return lVar1;
    }
    *(undefined8 *)(param_8 + 0x10) = 0;
  }
  core::slice::_<impl[T]>::chunks_exact(local_58,local_98,local_90,param_3);
  while( true ) {
    auVar3 = _<core::slice::iter::ChunksExact<T>as_core::iter::traits::iterator::Iterator>::next
                       (local_58);
    if (auVar3._0_8_ == 0) {
      _<alloc::vec::Vec<T,A>as_alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::
      spec_extend(param_8,local_48,local_40 + local_48);
      return 0;
    }
    if (auVar3._8_8_ != param_3) break;
    lVar1 = (*pcVar2)(param_1,auVar3._0_8_,param_3,param_7);
    if (lVar1 != 0) {
      return lVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic
            ("assertion failed: sl.len() == decode_in_chunks_of_size",0x36,
             &PTR_s_src_uu_base32_src_base_common_rs_0024a6b8);
}