void __rustcall uu_cut::cut_files(long param_1,ulong *param_2)

{
  char cVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  ulong *puVar7;
  undefined **ppuVar8;
  undefined auVar9 [16];
  undefined local_e8 [16];
  undefined local_d8 [16];
  undefined **local_c8;
  code *local_c0;
  uint local_b4;
  undefined *local_b0;
  undefined **ppuStack_a8;
  undefined **local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined *local_80;
  undefined **local_78;
  ulong *local_70;
  ulong local_68;
  ulong local_60;
  ulong *local_58;
  long local_50;
  long local_48;
  long local_40;
  ulong local_38;
  
  lVar3 = *(long *)(param_1 + 0x10);
  local_58 = param_2;
  local_50 = param_1;
  if (lVar3 == 0) {
                    /* try { // try from 001b717d to 001b71b3 has its CatchHandler @ 001b76b6 */
    _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_b0,"-: \n: Is a directory\n",1);
    local_c8 = local_a0;
    local_d8._0_8_ = local_b0;
    local_d8._8_8_ = ppuStack_a8;
    ::alloc::vec::Vec<T,A>::push(param_1,local_d8);
    lVar3 = *(long *)(param_1 + 0x10);
  }
  local_48 = *(long *)(param_1 + 8);
  local_40 = local_48 + lVar3 * 0x18;
  lVar3 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next(&local_48);
  if (lVar3 == 0) {
LAB_001b7688:
    core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(local_50);
    return;
  }
  local_38 = *local_58;
  local_60 = local_58[8];
  local_68 = local_58[9];
  local_70 = local_58 + 1;
  local_b4 = 0;
LAB_001b723a:
  if ((local_b4 & 1) != 0) {
    do {
      ppuVar6 = *(undefined ***)(lVar3 + 8);
      ppuVar8 = *(undefined ***)(lVar3 + 0x10);
                    /* try { // try from 001b7391 to 001b747c has its CatchHandler @ 001b76cb */
      cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                        (ppuVar6,ppuVar8,"-: \n: Is a directory\n",1);
      if (cVar1 == '\0') {
        cVar1 = std::path::Path::is_dir(ppuVar6,ppuVar8);
        if (cVar1 == '\0') goto LAB_001b7490;
        local_d8 = uucore::util_name();
        local_e8._8_8_ = _<&T_as_core::fmt::Display>::fmt;
        local_b0 = &DAT_00229ea8;
        ppuStack_a8 = (undefined **)0x2;
        local_90 = 0;
        local_98 = 1;
        local_e8._0_8_ = local_d8;
        local_a0 = (undefined **)local_e8;
        std::io::stdio::_eprint(&local_b0);
        local_d8._0_8_ = (undefined *)0x0;
        local_c0 = (code *)((ulong)local_c0 & 0xffffffffffffff00);
        local_e8._8_8_ = _<os_display::Quoted_as_core::fmt::Display>::fmt;
        local_b0 = &DAT_00229ec8;
        ppuStack_a8 = (undefined **)0x2;
        local_90 = 0;
        local_98 = 1;
        local_e8._0_8_ = local_d8;
        local_d8._8_8_ = ppuVar6;
        local_c8 = ppuVar8;
        local_a0 = (undefined **)local_e8;
        std::io::stdio::_eprint(&local_b0);
        uucore::mods::error::set_exit_code(1);
      }
      lVar3 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next
                        (&local_48);
      if (lVar3 == 0) goto LAB_001b7688;
    } while( true );
  }
  while( true ) {
    ppuVar6 = *(undefined ***)(lVar3 + 8);
    ppuVar8 = *(undefined ***)(lVar3 + 0x10);
                    /* try { // try from 001b7258 to 001b7347 has its CatchHandler @ 001b76c9 */
    cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                      (ppuVar6,ppuVar8,"-: \n: Is a directory\n",1);
    if (cVar1 != '\0') break;
    cVar1 = std::path::Path::is_dir(ppuVar6,ppuVar8);
    if (cVar1 == '\0') goto LAB_001b7490;
    local_d8 = uucore::util_name();
    local_e8._8_8_ = _<&T_as_core::fmt::Display>::fmt;
    local_b0 = &DAT_00229ea8;
    ppuStack_a8 = (undefined **)0x2;
    local_90 = 0;
    local_98 = 1;
    local_e8._0_8_ = local_d8;
    local_a0 = (undefined **)local_e8;
    std::io::stdio::_eprint(&local_b0);
    local_d8._0_8_ = (undefined *)0x0;
    local_c0 = (code *)((ulong)local_c0 & 0xffffffffffffff00);
    local_e8._8_8_ = _<os_display::Quoted_as_core::fmt::Display>::fmt;
    local_b0 = &DAT_00229ec8;
    ppuStack_a8 = (undefined **)0x2;
    local_90 = 0;
    local_98 = 1;
    local_e8._0_8_ = local_d8;
    local_d8._8_8_ = ppuVar6;
    local_c8 = ppuVar8;
    local_a0 = (undefined **)local_e8;
    std::io::stdio::_eprint(&local_b0);
    uucore::mods::error::set_exit_code(1);
    lVar3 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next(&local_48);
    if (lVar3 == 0) goto LAB_001b7688;
  }
  if (local_38 < 2) {
    uVar4 = std::io::stdio::stdin();
    puVar7 = local_70;
    puVar5 = (undefined *)cut_bytes(uVar4,local_60,local_68,local_70);
  }
  else {
    uVar4 = std::io::stdio::stdin();
    puVar7 = local_70;
    puVar5 = (undefined *)cut_fields(uVar4,local_60,local_68,local_70);
  }
  local_b4 = (uint)CONCAT71((int7)((ulong)puVar7 >> 8),1);
  if (puVar5 != (undefined *)0x0) {
    local_78 = &PTR_drop_in_place<uucore_mods_error_USimpleError>_00229df0;
    local_80 = puVar5;
    uVar2 = _<uucore::mods::error::USimpleError_as_uucore::mods::error::UError>::code(puVar5);
                    /* try { // try from 001b75f2 to 001b7664 has its CatchHandler @ 001b76a7 */
    uucore::mods::error::set_exit_code(uVar2);
    auVar9 = uucore::util_name();
    local_d8._8_8_ = _<&T_as_core::fmt::Display>::fmt;
    local_c8 = &local_80;
    local_c0 = _<alloc::boxed::Box<T,A>as_core::fmt::Display>::fmt;
    local_b0 = &DAT_00229e78;
    ppuStack_a8 = (undefined **)0x3;
    local_90 = 0;
    local_98 = 2;
    local_d8._0_8_ = local_e8;
    local_a0 = (undefined **)local_d8;
    local_e8 = auVar9;
    std::io::stdio::_eprint(&local_b0);
                    /* try { // try from 001b7665 to 001b766e has its CatchHandler @ 001b76c7 */
    core::ptr::drop_in_place<alloc::boxed::Box<dyn_uucore::mods::error::UError>>(&local_80);
  }
  goto LAB_001b766f;
LAB_001b7490:
                    /* try { // try from 001b7490 to 001b7504 has its CatchHandler @ 001b76c7 */
  std::fs::File::open(&local_b0,ppuVar6,ppuVar8);
  _<core::result::Result<T,std::io::error::Error>as_uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn_uucore::mods::error::UError>>>>
  ::map_err_context(local_d8,&local_b0,lVar3);
  puVar5 = (undefined *)local_d8._0_8_;
  ppuVar6 = (undefined **)local_d8._8_8_;
  if ((undefined *)local_d8._0_8_ == (undefined *)0x0) {
    puVar5 = (undefined *)cut_files::___closure__(local_58,local_d8._8_8_ & 0xffffffff);
    ppuVar6 = &PTR_drop_in_place<uucore_mods_error_USimpleError>_00229df0;
    if (puVar5 == (undefined *)0x0) goto LAB_001b766f;
  }
                    /* try { // try from 001b751f to 001b7597 has its CatchHandler @ 001b76b8 */
  local_80 = puVar5;
  local_78 = ppuVar6;
  uVar2 = (*(code *)ppuVar6[0xc])(puVar5);
  uucore::mods::error::set_exit_code(uVar2);
  auVar9 = uucore::util_name();
  local_d8._8_8_ = _<&T_as_core::fmt::Display>::fmt;
  local_c8 = &local_80;
  local_c0 = _<alloc::boxed::Box<T,A>as_core::fmt::Display>::fmt;
  local_b0 = &DAT_00229e78;
  ppuStack_a8 = (undefined **)0x3;
  local_90 = 0;
  local_98 = 2;
  local_d8._0_8_ = local_e8;
  local_a0 = (undefined **)local_d8;
  local_e8 = auVar9;
  std::io::stdio::_eprint(&local_b0);
                    /* try { // try from 001b7598 to 001b75c9 has its CatchHandler @ 001b76c7 */
  core::ptr::drop_in_place<alloc::boxed::Box<dyn_uucore::mods::error::UError>>(&local_80);
LAB_001b766f:
  lVar3 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next(&local_48);
  if (lVar3 == 0) goto LAB_001b7688;
  goto LAB_001b723a;
}