/* WARNING: Removing unreachable block (ram,0x001abca4) */
/* WARNING: Removing unreachable block (ram,0x001ac24d) */

undefined  [16] __rustcall
uu_paste::paste(long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,uint param_5)

{
  undefined auVar1 [16];
  uint uVar2;
  undefined *puVar3;
  char cVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar8;
  undefined uVar9;
  undefined8 **ppuVar10;
  undefined auVar11 [16];
  undefined auVar12 [16];
  undefined local_14d;
  uint local_14c;
  undefined8 *local_148;
  undefined8 local_140;
  undefined8 *local_138;
  undefined *puStack_130;
  undefined8 local_128;
  undefined8 *local_120;
  undefined **local_118;
  undefined8 local_110;
  undefined local_108 [16];
  ulong local_f8;
  undefined8 *local_e8;
  undefined8 *local_e0;
  long local_d8;
  long local_d0;
  long local_c8;
  undefined8 *local_c0;
  undefined *puStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 *puStack_a0;
  undefined8 *local_98;
  undefined8 *puStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 *local_58;
  undefined8 *puStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulong uVar7;
  
                    /* try { // try from 001abb3a to 001abb4c has its CatchHandler @ 001ac1c5 */
  parse_delimiters(&local_a8,param_3,param_4);
  local_148 = puStack_a0;
  if (local_a8 != 0) {
    core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(param_1);
    auVar12._8_8_ = local_98;
    auVar12._0_8_ = local_148;
    return auVar12;
  }
  local_120 = local_98;
  local_110 = 0;
                    /* try { // try from 001abb9c to 001abbb2 has its CatchHandler @ 001ac1d2 */
  local_d0 = param_1;
  ::alloc::raw_vec::RawVec<T,A>::try_allocate_in(&local_a8,*(undefined8 *)(param_1 + 0x10),0);
  local_118 = (undefined **)CONCAT44(local_118._4_4_,param_2);
  local_14c = param_5;
  if (local_a8 != 0) {
                    /* try { // try from 001ac198 to 001ac19d has its CatchHandler @ 001ac1d2 */
    uVar8 = ::alloc::raw_vec::handle_error(puStack_a0,local_98);
                    /* catch() { ... } // from try @ 001ac08d with catch @ 001ac19e */
                    /* catch() { ... } // from try @ 001abd35 with catch @ 001ac1de */
    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<alloc::string::String>>(local_108);
    core::ptr::drop_in_place<alloc::vec::Vec<uu_paste::InputSource>>(&local_e8);
    core::ptr::
    drop_in_place<core::cell::once::OnceCell<alloc::rc::Rc<core::cell::RefCell<std::io::stdio::Stdin>>>>
              (&local_110);
    core::ptr::drop_in_place<alloc::boxed::Box<[alloc::boxed::Box<[u8]>]>>(local_148,local_120);
    auVar12 = _Unwind_Resume(uVar8);
    return auVar12;
  }
  local_e8 = puStack_a0;
  local_e0 = local_98;
  local_d8 = 0;
  _<alloc::vec::Vec<T,A>as_core::iter::traits::collect::IntoIterator>::into_iter(local_108,param_1);
  _<alloc::vec::into_iter::IntoIter<T,A>as_core::iter::traits::iterator::Iterator>::next
            (&local_c0,local_108);
  if (local_c0 != (undefined8 *)0x8000000000000000) {
    do {
      uVar8 = local_b0;
      puVar3 = puStack_b8;
      local_128 = local_b0;
      local_138 = local_c0;
      puStack_130 = puStack_b8;
                    /* try { // try from 001abc6f to 001abd34 has its CatchHandler @ 001ac1ea */
      cVar4 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(puStack_b8,local_b0,"-",1);
      if (cVar4 == '\0') {
        std::fs::File::open(&local_a8,puVar3,uVar8);
        if ((int)local_a8 != 0) {
                    /* try { // try from 001ac087 to 001ac08c has its CatchHandler @ 001ac1a0 */
          auVar11 = uucore::mods::error::
                    _<impl_core::convert::From<std::io::error::Error>for_alloc::boxed::Box<dyn_uucore::mods::error::UError>>
                    ::from(puStack_a0);
                    /* try { // try from 001ac08d to 001ac09c has its CatchHandler @ 001ac19e */
          core::ptr::drop_in_place<alloc::string::String>(&local_138);
                    /* try { // try from 001ac09d to 001ac0a6 has its CatchHandler @ 001ac1d9 */
          core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<alloc::string::String>>
                    (local_108);
          goto LAB_001ac128;
        }
        std::io::buffered::bufreader::BufReader<R>::with_capacity(&local_a8,0x2000,local_a8._4_4_);
        local_48 = CONCAT44(uStack_84,local_88);
        uStack_40 = CONCAT44(uStack_7c,uStack_80);
        local_58 = local_98;
        puStack_50 = puStack_90;
      }
      else {
        puVar5 = (undefined8 *)core::cell::once::OnceCell<T>::get_or_try_init(&local_110);
        puVar5 = (undefined8 *)*puVar5;
        ::alloc::rc::RcInnerPtr::inc_strong(puVar5);
        local_a8 = 0;
        puStack_a0 = puVar5;
      }
      local_88 = (undefined4)local_48;
      uStack_84 = local_48._4_4_;
      uStack_80 = (undefined4)uStack_40;
      uStack_7c = uStack_40._4_4_;
      local_98 = local_58;
      puStack_90 = puStack_50;
      ::alloc::vec::Vec<T,A>::push(&local_e8,&local_a8);
                    /* try { // try from 001abd35 to 001abd3e has its CatchHandler @ 001ac1de */
      core::ptr::drop_in_place<alloc::string::String>(&local_138);
      _<alloc::vec::into_iter::IntoIter<T,A>as_core::iter::traits::iterator::Iterator>::next
                (&local_c0,local_108);
    } while (local_c0 != (undefined8 *)0x8000000000000000);
  }
                    /* try { // try from 001abd62 to 001abd87 has its CatchHandler @ 001ac1d9 */
  core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<alloc::string::String>>(local_108);
  local_a8 = std::io::stdio::stdout();
  local_140 = std::io::stdio::Stderr::lock(&local_a8);
  uVar2 = local_14c;
  uVar9 = (undefined)local_14c;
  local_c8 = local_d8;
                    /* try { // try from 001abda5 to 001abdbb has its CatchHandler @ 001ac1c0 */
  local_14d = uVar9;
  DelimiterState::new(&local_a8,local_148,local_120);
  local_138 = (undefined8 *)0x0;
  puStack_130 = &DAT_00000001;
  local_128 = 0;
  if ((char)local_118 == '\0') {
    _<T_as_alloc::vec::spec_from_elem::SpecFromElem>::from_elem(local_108,local_c8);
    ppuVar10 = &local_138;
    local_118 = &PTR_s_src_uu_paste_src_paste_rs_00213528;
    local_14c = uVar2 & 0xff;
    do {
      local_128 = 0;
      puStack_50 = local_e0 + local_d8 * 6;
      local_58 = local_e0;
      local_48 = 0;
      lVar6 = 0;
      while( true ) {
        auVar12 = _<core::iter::adapters::enumerate::Enumerate<I>as_core::iter::traits::iterator::Iterator>
                  ::next(&local_58);
        uVar7 = auVar12._0_8_;
        if (auVar12._8_8_ == 0) break;
        if (local_f8 <= uVar7) {
LAB_001ac182:
                    /* try { // try from 001ac182 to 001ac18f has its CatchHandler @ 001ac1e8 */
                    /* WARNING: Subroutine does not return */
          core::panicking::panic_bounds_check(uVar7,local_f8,local_118);
        }
        if (*(char *)(local_108._8_8_ + uVar7) == '\0') {
          InputSource::read_until(&local_c0,auVar12._8_8_,local_14c,ppuVar10);
          auVar11._8_8_ = puStack_b8;
          auVar11._0_8_ = local_c0;
          if (local_c0 != (undefined8 *)0x0) goto LAB_001ac10a;
          if (puStack_b8 == (undefined *)0x0) {
            if (local_f8 <= uVar7) {
              local_118 = &PTR_s_src_uu_paste_src_paste_rs_00213540;
              goto LAB_001ac182;
            }
            *(undefined *)(local_108._8_8_ + uVar7) = 1;
            goto LAB_001abf60;
          }
          remove_trailing_line_ending_byte(local_14c,ppuVar10);
        }
        else {
LAB_001abf60:
          lVar6 = lVar6 + 1;
        }
                    /* try { // try from 001abf63 to 001abfb2 has its CatchHandler @ 001ac203 */
        DelimiterState::write_delimiter(&local_a8,ppuVar10);
      }
      if (lVar6 == local_c8) {
                    /* try { // try from 001ac0a9 to 001ac0b2 has its CatchHandler @ 001ac1be */
        core::ptr::drop_in_place<alloc::vec::Vec<bool>>(local_108);
        goto LAB_001ac0b3;
      }
                    /* try { // try from 001ac02e to 001ac079 has its CatchHandler @ 001ac1d7 */
      DelimiterState::remove_trailing_delimiter(local_a8,local_98,ppuVar10);
      lVar6 = _<std::io::stdio::StdoutLock_as_std::io::Write>::write_all
                        (&local_140,puStack_130,local_128);
      if (lVar6 != 0) {
                    /* try { // try from 001ac0f0 to 001ac103 has its CatchHandler @ 001ac1e8 */
        auVar11 = uucore::mods::error::
                  _<impl_core::convert::From<std::io::error::Error>for_alloc::boxed::Box<dyn_uucore::mods::error::UError>>
                  ::from(lVar6);
        goto LAB_001ac10a;
      }
      lVar6 = _<std::io::stdio::StdoutLock_as_std::io::Write>::write_all(&local_140,&local_14d,1);
      if (lVar6 != 0) goto LAB_001ac0fb;
      DelimiterState::reset_to_first_delimiter(&local_a8);
    } while( true );
  }
                    /* try { // try from 001abde3 to 001abdec has its CatchHandler @ 001ac1be */
  local_108 = _<&mut_alloc::vec::Vec<T,A>as_core::iter::traits::collect::IntoIterator>::into_iter
                        (&local_e8);
  do {
    ppuVar10 = (undefined8 **)local_108;
    lVar6 = _<core::slice::iter::IterMut<T>as_core::iter::traits::iterator::Iterator>::next
                      (ppuVar10);
    if (lVar6 == 0) {
LAB_001ac0b3:
                    /* try { // try from 001ac0b3 to 001ac0bc has its CatchHandler @ 001ac1c0 */
      core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&local_138);
                    /* try { // try from 001ac0c2 to 001ac0c6 has its CatchHandler @ 001ac1d9 */
      core::ptr::drop_in_place<std::io::stdio::StdoutLock>(local_140);
                    /* try { // try from 001ac0c9 to 001ac0d2 has its CatchHandler @ 001ac1d2 */
      core::ptr::drop_in_place<alloc::vec::Vec<uu_paste::InputSource>>(&local_e8);
                    /* try { // try from 001ac0d3 to 001ac0dc has its CatchHandler @ 001ac1a2 */
      core::ptr::
      drop_in_place<core::cell::once::OnceCell<alloc::rc::Rc<core::cell::RefCell<std::io::stdio::Stdin>>>>
                (&local_110);
      core::ptr::drop_in_place<alloc::boxed::Box<[alloc::boxed::Box<[u8]>]>>(local_148,local_120);
      auVar1._8_8_ = 0;
      auVar1._0_8_ = ppuVar10;
      return auVar1 << 0x40;
    }
    local_128 = 0;
    while( true ) {
                    /* try { // try from 001abe30 to 001abe79 has its CatchHandler @ 001ac1e3 */
      InputSource::read_until(&local_58,lVar6,uVar9,&local_138);
      auVar11._8_8_ = puStack_50;
      auVar11._0_8_ = local_58;
      if (local_58 != (undefined8 *)0x0) goto LAB_001ac114;
      if (puStack_50 == (undefined8 *)0x0) break;
      remove_trailing_line_ending_byte(uVar2 & 0xff,&local_138);
      DelimiterState::write_delimiter(&local_a8,&local_138);
    }
                    /* try { // try from 001abe8c to 001abecb has its CatchHandler @ 001ac1bc */
    DelimiterState::remove_trailing_delimiter(local_a8,local_98,&local_138);
    lVar6 = _<std::io::stdio::StdoutLock_as_std::io::Write>::write_all
                      (&local_140,puStack_130,local_128);
    if (lVar6 != 0) {
                    /* try { // try from 001ac165 to 001ac16d has its CatchHandler @ 001ac1be */
      auVar11 = uucore::mods::error::
                _<impl_core::convert::From<std::io::error::Error>for_alloc::boxed::Box<dyn_uucore::mods::error::UError>>
                ::from(lVar6);
      goto LAB_001ac114;
    }
    lVar6 = _<std::io::stdio::StdoutLock_as_std::io::Write>::write_all(&local_140,&local_14d,1);
  } while (lVar6 == 0);
                    /* try { // try from 001abed5 to 001abef4 has its CatchHandler @ 001ac1be */
  auVar11 = uucore::mods::error::
            _<impl_core::convert::From<std::io::error::Error>for_alloc::boxed::Box<dyn_uucore::mods::error::UError>>
            ::from(lVar6);
LAB_001ac114:
                    /* try { // try from 001ac114 to 001ac11d has its CatchHandler @ 001ac1c0 */
  core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&local_138);
                    /* try { // try from 001ac123 to 001ac127 has its CatchHandler @ 001ac1d9 */
  core::ptr::drop_in_place<std::io::stdio::StdoutLock>(local_140);
LAB_001ac128:
                    /* try { // try from 001ac12a to 001ac133 has its CatchHandler @ 001ac1d2 */
  core::ptr::drop_in_place<alloc::vec::Vec<uu_paste::InputSource>>(&local_e8);
                    /* try { // try from 001ac134 to 001ac13d has its CatchHandler @ 001ac1a2 */
  core::ptr::
  drop_in_place<core::cell::once::OnceCell<alloc::rc::Rc<core::cell::RefCell<std::io::stdio::Stdin>>>>
            (&local_110);
  core::ptr::drop_in_place<alloc::boxed::Box<[alloc::boxed::Box<[u8]>]>>(local_148,local_120);
  return auVar11;
LAB_001ac0fb:
  auVar11 = uucore::mods::error::
            _<impl_core::convert::From<std::io::error::Error>for_alloc::boxed::Box<dyn_uucore::mods::error::UError>>
            ::from(lVar6);
LAB_001ac10a:
                    /* try { // try from 001ac10a to 001ac113 has its CatchHandler @ 001ac1be */
  core::ptr::drop_in_place<alloc::vec::Vec<bool>>(local_108);
  goto LAB_001ac114;
}