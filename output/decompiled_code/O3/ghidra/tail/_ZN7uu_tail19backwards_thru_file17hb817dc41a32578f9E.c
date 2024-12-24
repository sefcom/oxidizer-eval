void __rustcall uu_tail::backwards_thru_file(undefined8 param_1,ulong param_2,char param_3)

{
  ulong uVar1;
  undefined auVar2 [16];
  long local_d0;
  long local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  long local_a8;
  long local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  long local_80;
  long local_78;
  long local_70;
  undefined8 local_68;
  undefined local_58 [32];
  undefined8 local_38;
  
  chunks::ReverseChunks::new(local_58,param_1);
  local_38 = 0;
  _<core::iter::adapters::enumerate::Enumerate<I>as_core::iter::traits::iterator::Iterator>::next
            (&local_98,local_58);
  if (CONCAT44(uStack_8c,local_90) != -0x8000000000000000) {
    uVar1 = 0;
    do {
      local_b8 = local_90;
      uStack_b4 = uStack_8c;
      uStack_b0 = uStack_88;
      uStack_ac = uStack_84;
      local_d0 = CONCAT44(uStack_84,uStack_88);
      local_c8 = local_d0 + local_80;
      local_a8 = local_80;
      local_c0 = 0;
      if (((local_98 == 0) && (local_80 != 0)) && (*(char *)(local_80 + -1 + local_d0) == param_3))
      {
        _<core::iter::adapters::enumerate::Enumerate<I>as_core::iter::traits::double_ended::DoubleEndedIterator>
        ::next_back(&local_d0);
      }
      local_68 = local_c0;
      local_78 = local_d0;
      local_70 = local_c8;
      while( true ) {
        auVar2 = _<core::iter::adapters::enumerate::Enumerate<I>as_core::iter::traits::double_ended::DoubleEndedIterator>
                 ::next_back(&local_78);
        if (auVar2._8_8_ == (char *)0x0) break;
        if ((*auVar2._8_8_ == param_3) && (uVar1 = uVar1 + 1, param_2 <= uVar1)) {
                    /* try { // try from 00213af1 to 00213b16 has its CatchHandler @ 00213b33 */
          auVar2 = _<std::fs::File_as_std::io::Seek>::seek(param_1,2,auVar2._0_8_ + 1);
          core::result::Result<T,E>::unwrap(auVar2._0_8_,auVar2._8_8_,&PTR_s_src_uu_t_002be7d0);
          core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&local_b8);
          return;
        }
      }
      core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&local_b8);
      _<core::iter::adapters::enumerate::Enumerate<I>as_core::iter::traits::iterator::Iterator>::
      next(&local_98,local_58);
    } while (CONCAT44(uStack_8c,local_90) != -0x8000000000000000);
  }
  return;
}