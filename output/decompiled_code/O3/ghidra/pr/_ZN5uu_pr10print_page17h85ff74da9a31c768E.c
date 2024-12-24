undefined  [16] __rustcall
uu_pr::print_page(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined auVar5 [16];
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  long local_e0;
  long local_d8;
  undefined8 local_d0;
  undefined local_c0 [8];
  long local_b8;
  long local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined local_48 [24];
  
  local_e8 = *(undefined8 *)(param_3 + 0x50);
  local_f0 = *(undefined8 *)(param_3 + 0x58);
  uVar3 = *(undefined8 *)(param_3 + 0x98);
  uVar1 = *(undefined8 *)(param_3 + 0xa0);
  header_content(local_48,param_3,param_4);
                    /* try { // try from 002c6c9d to 002c6ca6 has its CatchHandler @ 002c6ef3 */
  trailer_content(local_c0,*(undefined *)(param_3 + 0x141),*(undefined *)(param_3 + 0x142));
  local_88 = uVar1;
  local_80 = uVar3;
  local_78 = param_1;
  local_70 = param_2;
                    /* try { // try from 002c6cc4 to 002c6cdf has its CatchHandler @ 002c6efa */
  local_68 = std::io::stdio::stdout();
  local_f8 = std::io::stdio::Stderr::lock(&local_68);
  _<alloc::vec::Vec<T,A>as_core::iter::traits::collect::IntoIterator>::into_iter(&local_e0,local_48)
  ;
  _<alloc::vec::into_iter::IntoIter<T,A>as_core::iter::traits::iterator::Iterator>::next
            (&local_60,&local_e0);
  if (CONCAT44(uStack_5c,local_60) != -0x8000000000000000) {
    do {
      local_a8 = local_60;
      uStack_a4 = uStack_5c;
      uStack_a0 = uStack_58;
      uStack_9c = uStack_54;
      local_98 = local_50;
                    /* try { // try from 002c6d4f to 002c6d6a has its CatchHandler @ 002c6f09 */
      lVar2 = _<std::io::stdio::StdoutLock_as_std::io::Write>::write_all
                        (&local_f8,CONCAT44(uStack_54,uStack_58));
      if ((lVar2 != 0) ||
         (lVar2 = _<std::io::stdio::StdoutLock_as_std::io::Write>::write_all
                            (&local_f8,local_e8,local_f0), lVar2 != 0)) {
                    /* try { // try from 002c6dcc to 002c6dd5 has its CatchHandler @ 002c6ef1 */
        core::ptr::drop_in_place<alloc::string::String>(&local_a8);
                    /* try { // try from 002c6dd6 to 002c6ddf has its CatchHandler @ 002c6ef8 */
        core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<alloc::string::String>>(&local_e0);
        goto LAB_002c6ea6;
      }
                    /* try { // try from 002c6d73 to 002c6d7c has its CatchHandler @ 002c6f04 */
      core::ptr::drop_in_place<alloc::string::String>(&local_a8);
      _<alloc::vec::into_iter::IntoIter<T,A>as_core::iter::traits::iterator::Iterator>::next
                (&local_60,&local_e0);
    } while (CONCAT44(uStack_5c,local_60) != -0x8000000000000000);
  }
                    /* try { // try from 002c6d97 to 002c6dbb has its CatchHandler @ 002c6ef8 */
  core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<alloc::string::String>>(&local_e0);
  auVar5 = write_columns(local_78,local_70,param_3,&local_f8);
  lVar4 = auVar5._8_8_;
  lVar2 = lVar4;
  if (auVar5._0_8_ == 0) {
    local_d8 = local_b8 + local_b0 * 0x18;
    local_e0 = local_b8;
    local_d0 = 0;
    auVar5 = _<core::iter::adapters::enumerate::Enumerate<I>as_core::iter::traits::iterator::Iterator>
             ::next(&local_e0);
    if (auVar5._8_8_ != 0) {
      do {
                    /* try { // try from 002c6e48 to 002c6e6f has its CatchHandler @ 002c6eff */
        lVar2 = _<std::io::stdio::StdoutLock_as_std::io::Write>::write_all
                          (&local_f8,*(undefined8 *)(auVar5._8_8_ + 8),
                           *(undefined8 *)(auVar5._8_8_ + 0x10));
        if ((lVar2 != 0) ||
           ((auVar5._0_8_ + 1 != local_b0 &&
            (lVar2 = _<std::io::stdio::StdoutLock_as_std::io::Write>::write_all
                               (&local_f8,local_e8,local_f0), lVar2 != 0)))) goto LAB_002c6ea6;
        auVar5 = _<core::iter::adapters::enumerate::Enumerate<I>as_core::iter::traits::iterator::Iterator>
                 ::next(&local_e0);
      } while (auVar5._8_8_ != 0);
    }
                    /* try { // try from 002c6e7a to 002c6e9d has its CatchHandler @ 002c6ef8 */
    lVar2 = _<std::io::stdio::StdoutLock_as_std::io::Write>::write_all(&local_f8,local_80,local_88);
    if ((lVar2 == 0) &&
       (lVar2 = _<std::io::stdio::StdoutLock_as_std::io::Write>::flush(&local_f8), lVar2 == 0)) {
                    /* try { // try from 002c6ede to 002c6ee2 has its CatchHandler @ 002c6efa */
      core::ptr::drop_in_place<std::io::stdio::StdoutLock>(local_f8);
      core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(local_c0);
      uVar3 = 0;
      goto LAB_002c6ec3;
    }
  }
LAB_002c6ea6:
  lVar4 = lVar2;
                    /* try { // try from 002c6eac to 002c6eb0 has its CatchHandler @ 002c6efa */
  core::ptr::drop_in_place<std::io::stdio::StdoutLock>(local_f8);
  core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(local_c0);
  uVar3 = 1;
LAB_002c6ec3:
  auVar5._8_8_ = lVar4;
  auVar5._0_8_ = uVar3;
  return auVar5;
}