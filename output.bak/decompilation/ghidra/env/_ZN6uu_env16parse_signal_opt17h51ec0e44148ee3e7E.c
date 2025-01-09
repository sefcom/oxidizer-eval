undefined  [16] __rustcall
uu_env::parse_signal_opt(undefined **param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  char cVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined **unaff_RBX;
  undefined auVar5 [16];
  undefined *local_118;
  undefined **ppuStack_110;
  long **local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined **local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined **local_c8;
  undefined local_c0 [16];
  undefined local_b0;
  undefined ***local_a8;
  code *local_a0;
  undefined local_98 [16];
  undefined8 local_88;
  undefined8 local_80;
  long local_78;
  undefined local_70;
  undefined local_68 [32];
  undefined local_48 [16];
  undefined8 local_38;
  
  if (param_3 != 0) {
    local_70 = 0;
    local_80 = param_2;
    local_78 = param_3;
    _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
              (local_98,&local_80);
                    /* try { // try from 001cc442 to 001cc44b has its CatchHandler @ 001cc644 */
    ::alloc::raw_vec::RawVec<T,A>::try_allocate_in(&local_118,local_88,0);
    if (local_118 != (undefined *)0x0) {
                    /* try { // try from 001cc62d to 001cc632 has its CatchHandler @ 001cc644 */
      uVar4 = ::alloc::raw_vec::handle_error(ppuStack_110,local_108);
                    /* catch() { ... } // from try @ 001cc5b9 with catch @ 001cc633 */
                    /* catch() { ... } // from try @ 001cc4e8 with catch @ 001cc656 */
      core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<&std::ffi::os_str::OsStr>>(local_68);
      auVar5 = _Unwind_Resume(uVar4);
      return auVar5;
    }
    local_e0 = ppuStack_110;
    local_d8 = local_108;
    local_d0 = 0;
    _<alloc::vec::Vec<T,A>as_core::iter::traits::collect::IntoIterator>::into_iter
              (&local_118,local_98);
                    /* try { // try from 001cc487 to 001cc493 has its CatchHandler @ 001cc635 */
    _<alloc::vec::into_iter::IntoIter<T,A>as_core::iter::traits::iterator::Iterator>::fold
              (&local_118,&local_e0);
    _<alloc::vec::Vec<T,A>as_core::iter::traits::collect::IntoIterator>::into_iter
              (local_68,&local_e0);
    auVar5 = _<alloc::vec::into_iter::IntoIter<T,A>as_core::iter::traits::iterator::Iterator>::next
                       (local_68);
    if (auVar5._0_8_ != 0) {
      do {
                    /* try { // try from 001cc4e8 to 001cc544 has its CatchHandler @ 001cc656 */
        std::ffi::os_str::_<impl_core::convert::TryFrom<&std::ffi::os_str::OsStr>for&str>::try_from
                  (&local_118,auVar5._0_8_,auVar5._8_8_);
        if (local_118 != (undefined *)0x0) {
          local_c8 = (undefined **)0x1;
          local_b0 = 1;
          local_a8 = &local_c8;
          local_a0 = _<os_display::Quoted_as_core::fmt::Display>::fmt;
          local_118 = &DAT_002488b0;
          ppuStack_110 = (undefined **)0x2;
          local_f8 = 0;
          local_108 = (long **)&local_a8;
          local_100 = 1;
                    /* try { // try from 001cc5b9 to 001cc5f1 has its CatchHandler @ 001cc633 */
          local_c0 = auVar5;
          core::option::Option<T>::map_or_else(local_48,&local_118);
          local_100 = CONCAT44(local_100._4_4_,1);
          local_108 = (long **)local_38;
          puVar3 = (undefined *)::alloc::boxed::Box<T>::new(&local_118);
          unaff_RBX = &PTR_drop_in_place<uucore_mods_error_USimpleError>_00248908;
LAB_001cc603:
          core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<&std::ffi::os_str::OsStr>>
                    (local_68);
          goto LAB_001cc613;
        }
        parse_signal_value(&local_118,ppuStack_110,local_108);
        ppuVar1 = ppuStack_110;
        unaff_RBX = ppuStack_110;
        puVar3 = local_118;
        if (local_118 != (undefined *)0x0) goto LAB_001cc603;
        local_c8 = ppuStack_110;
        cVar2 = _<T_as_core::slice::cmp::SliceContains>::slice_contains
                          (&local_c8,param_1[0xd],param_1[0xe]);
        if (cVar2 == '\0') {
          ::alloc::vec::Vec<T,A>::push(param_1 + 0xc,ppuVar1);
        }
        auVar5 = _<alloc::vec::into_iter::IntoIter<T,A>as_core::iter::traits::iterator::Iterator>::
                 next(local_68);
      } while (auVar5._0_8_ != 0);
    }
    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<&std::ffi::os_str::OsStr>>(local_68);
    unaff_RBX = param_1;
  }
  puVar3 = (undefined *)0x0;
LAB_001cc613:
  auVar5._8_8_ = unaff_RBX;
  auVar5._0_8_ = puVar3;
  return auVar5;
}