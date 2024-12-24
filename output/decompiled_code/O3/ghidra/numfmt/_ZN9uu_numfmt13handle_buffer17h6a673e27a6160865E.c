undefined  [16] __rustcall uu_numfmt::handle_buffer(undefined8 param_1,long param_2)

{
  ulong uVar1;
  undefined auVar2 [16];
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined auVar5 [16];
  undefined **local_c0;
  code *local_b8;
  undefined *local_b0;
  undefined **ppuStack_a8;
  undefined ***local_a0;
  undefined *local_98;
  undefined **local_90;
  undefined ***pppuStack_88;
  undefined ***local_80;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 *local_60;
  undefined8 local_58;
  ulong local_50;
  undefined *local_48;
  undefined **local_40;
  undefined ***local_38;
  
  ppuVar4 = (undefined **)0x8000000000000001;
  local_60 = &local_68;
  local_58 = 0;
  local_68 = param_1;
  _<core::iter::adapters::enumerate::Enumerate<I>as_core::iter::traits::iterator::Iterator>::next
            (&local_50,&local_60);
  if (local_48 != (undefined *)0x8000000000000001) {
    uVar1 = *(ulong *)(param_2 + 0xc0);
    ppuVar4 = &local_b0;
    do {
      if (local_48 == (undefined *)0x8000000000000000) {
        local_c0 = local_40;
                    /* try { // try from 001719f8 to 00171a2d has its CatchHandler @ 00171a5a */
        _<T_as_alloc::string::ToString>::to_string(&local_b0,&local_c0);
        local_80 = local_a0;
        local_90 = (undefined **)local_b0;
        pppuStack_88 = (undefined ***)ppuStack_a8;
        local_98 = (undefined *)0x0;
        uVar3 = ::alloc::boxed::Box<T>::new(&local_98);
        core::ptr::drop_in_place<std::io::error::Error>(&local_c0);
        auVar5._8_8_ = &PTR_drop_in_place<uu_numfmt_errors_NumfmtError>_00233480;
        auVar5._0_8_ = uVar3;
        return auVar5;
      }
      if (local_50 < uVar1) {
        local_b0 = local_48;
        ppuStack_a8 = local_40;
        local_a0 = local_38;
        local_b8 = _<alloc::string::String_as_core::fmt::Display>::fmt;
        local_98 = &DAT_00233428;
        local_90 = (undefined **)0x2;
        local_78 = 0;
        pppuStack_88 = &local_c0;
        local_80 = (undefined ***)0x1;
                    /* try { // try from 0017199a to 001719a4 has its CatchHandler @ 00171a69 */
        local_c0 = ppuVar4;
        (*(code *)PTR__print_0023a3c0)(&local_98);
        core::ptr::drop_in_place<alloc::string::String>(ppuVar4);
      }
      else {
        local_98 = local_48;
        local_90 = local_40;
        pppuStack_88 = local_38;
                    /* try { // try from 001719cf to 001719d7 has its CatchHandler @ 00171a78 */
        auVar5 = (*(code *)PTR_format_and_handle_validation_0023a3b8)(local_40,local_38,param_2);
        core::ptr::drop_in_place<alloc::string::String>(&local_98);
        if (auVar5._0_8_ != 0) {
          return auVar5;
        }
      }
      _<core::iter::adapters::enumerate::Enumerate<I>as_core::iter::traits::iterator::Iterator>::
      next(&local_50,&local_60);
    } while (local_48 != (undefined *)0x8000000000000001);
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = ppuVar4;
  return auVar2 << 0x40;
}