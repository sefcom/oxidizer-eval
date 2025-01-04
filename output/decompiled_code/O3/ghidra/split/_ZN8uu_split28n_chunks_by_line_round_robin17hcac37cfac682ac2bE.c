undefined  [16] __rustcall
uu_split::n_chunks_by_line_round_robin
          (long param_1,undefined8 param_2,ulong param_3,long param_4,long param_5)

{
  undefined uVar1;
  undefined auVar2 [16];
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined **ppuVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined auVar10 [16];
  long local_a8;
  undefined8 local_a0;
  undefined8 *local_98;
  undefined8 local_90;
  ulong local_88;
  undefined8 local_80;
  long local_78;
  undefined8 local_70;
  undefined8 *local_68;
  char local_60;
  byte bStack_5f;
  undefined6 uStack_5e;
  undefined8 *local_58;
  undefined8 local_50;
  long local_48;
  undefined8 *local_40;
  undefined8 local_38;
  
  local_90 = param_2;
  local_a8 = std::io::stdio::stdout();
  local_80 = std::io::stdio::Stderr::lock(&local_a8);
  local_78 = 0;
  local_70 = 8;
  local_68 = (undefined8 *)0x0;
  local_88 = param_3;
  if (param_4 == 1) {
    uVar1 = *(undefined *)(param_1 + 0xa2);
    if (param_3 == 0) {
      local_a8 = 0;
      local_a0 = 1;
      local_98 = (undefined8 *)0x0;
                    /* try { // try from 001cdebc to 001cdecb has its CatchHandler @ 001cdf9d */
      auVar10 = std::io::BufRead::read_until(local_90,uVar1,&local_a8);
      lVar3 = auVar10._8_8_;
      if (auVar10._0_8_ == 0) {
        puVar8 = (undefined8 *)0x0;
        if (lVar3 != 0) {
          ppuVar7 = &PTR_s_src_uu_split_src_split_rs_002485d0;
LAB_001cdf95:
          uVar4 = core::panicking::panic_const::panic_const_rem_by_zero(ppuVar7);
                    /* catch() { ... } // from try @ 001cdefc with catch @ 001cdf9b */
                    /* catch() { ... } // from try @ 001cdcaa with catch @ 001cdfc5 */
                    /* try { // try from 001cdfc8 to 001cdfe3 has its CatchHandler @ 001cdfec */
          core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&local_a8);
          core::ptr::drop_in_place<alloc::vec::Vec<uu_split::OutFile>>(&local_78);
          core::ptr::drop_in_place<std::io::stdio::StdoutLock>(local_80);
          auVar10 = _Unwind_Resume(uVar4);
          return auVar10;
        }
LAB_001cdf4d:
                    /* try { // try from 001cdf4d to 001cdf54 has its CatchHandler @ 001cdfbc */
        core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&local_a8);
                    /* try { // try from 001cdf55 to 001cdf5e has its CatchHandler @ 001cdfb7 */
        core::ptr::drop_in_place<alloc::vec::Vec<uu_split::OutFile>>(&local_78);
        core::ptr::drop_in_place<std::io::stdio::StdoutLock>(local_80);
        auVar2._8_8_ = 0;
        auVar2._0_8_ = puVar8;
        return auVar2 << 0x40;
      }
    }
    else {
      uVar9 = 0;
      puVar8 = &local_80;
      while( true ) {
        local_a8 = 0;
        local_a0 = 1;
        local_98 = (undefined8 *)0x0;
                    /* try { // try from 001cdcaa to 001cdd0a has its CatchHandler @ 001cdfc5 */
        auVar10 = std::io::BufRead::read_until(local_90,uVar1,&local_a8);
        lVar3 = auVar10._8_8_;
        if (auVar10._0_8_ != 0) break;
        if (lVar3 == 0) goto LAB_001cdf4d;
        if ((uVar9 | local_88) >> 0x20 == 0) {
          uVar5 = (uVar9 & 0xffffffff) % (local_88 & 0xffffffff);
        }
        else {
          uVar5 = uVar9 % local_88;
        }
        if ((uVar5 == param_5 - 1U) &&
           (lVar3 = _<std::io::stdio::StdoutLock_as_std::io::Write>::write_all
                              (puVar8,local_a0,local_98), lVar3 != 0)) {
                    /* try { // try from 001cdf3d to 001cdf45 has its CatchHandler @ 001cdfb3 */
          auVar10 = uucore::mods::error::
                    _<impl_core::convert::From<std::io::error::Error>for_alloc::boxed::Box<dyn_uucore::mods::error::UError>>
                    ::from(lVar3);
          goto LAB_001cdf1f;
        }
                    /* try { // try from 001cdd14 to 001cdd1b has its CatchHandler @ 001cdfc0 */
        core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&local_a8);
        uVar9 = uVar9 + 1;
      }
    }
  }
  else {
                    /* try { // try from 001cdd2c to 001cdd3a has its CatchHandler @ 001cdfbc */
    _<alloc::vec::Vec<uu_split::OutFile>as_uu_split::ManageOutFiles>::init
              (&local_a8,param_3,param_1,*(undefined *)(param_1 + 0xa1));
    puVar8 = local_98;
    lVar3 = local_a8;
    auVar10._8_8_ = local_98;
    auVar10._0_8_ = local_a0;
    if (local_a8 == -0x8000000000000000) goto LAB_001cdf27;
                    /* try { // try from 001cdd5c to 001cdd65 has its CatchHandler @ 001cdf9f */
    core::ptr::drop_in_place<alloc::vec::Vec<uu_split::OutFile>>(&local_78);
    local_78 = lVar3;
    local_70 = local_a0;
    local_68 = local_98;
    uVar1 = *(undefined *)(param_1 + 0xa2);
    if (local_88 == 0) {
      local_a8 = 0;
      local_a0 = 1;
      local_98 = (undefined8 *)0x0;
                    /* try { // try from 001cdefc to 001cdf0a has its CatchHandler @ 001cdf9b */
      auVar10 = std::io::BufRead::read_until(local_90,uVar1,&local_a8);
      lVar3 = auVar10._8_8_;
      if (auVar10._0_8_ == 0) {
        if (lVar3 != 0) {
          ppuVar7 = &PTR_s_src_uu_split_src_split_rs_002485b8;
          goto LAB_001cdf95;
        }
        goto LAB_001cdf4d;
      }
    }
    else {
      local_50 = *(undefined8 *)(param_1 + 0x88);
      uVar5 = 0;
      uVar9 = 0;
      local_48 = param_1;
      while( true ) {
        local_a8 = 0;
        local_a0 = 1;
        local_98 = (undefined8 *)0x0;
                    /* try { // try from 001cddca to 001cde6c has its CatchHandler @ 001cdfbe */
        auVar10 = std::io::BufRead::read_until(local_90,uVar1,&local_a8);
        lVar3 = auVar10._8_8_;
        if (auVar10._0_8_ != 0) break;
        if (lVar3 == 0) goto LAB_001cdf4d;
        local_38 = local_a0;
        local_40 = local_98;
        if ((uVar5 | local_88) >> 0x20 == 0) {
          uVar6 = (uVar5 & 0xffffffff) % (local_88 & 0xffffffff);
        }
        else {
          uVar6 = uVar5 % local_88;
        }
        _<alloc::vec::Vec<uu_split::OutFile>as_uu_split::ManageOutFiles>::get_writer
                  (&local_60,&local_78,uVar6,local_48);
        puVar8 = local_58;
        lVar3 = CONCAT62(uStack_5e,CONCAT11(bStack_5f,local_60));
        auVar10._8_8_ = local_58;
        auVar10._0_8_ = lVar3;
        if (lVar3 != 0) goto LAB_001cdf1f;
        custom_write_all(&local_60,local_38,local_40,local_58,local_50);
        if (local_60 != '\0') {
                    /* try { // try from 001cdf86 to 001cdf9a has its CatchHandler @ 001cdfb3 */
          auVar10 = uucore::mods::error::
                    _<impl_core::convert::From<std::io::error::Error>for_alloc::boxed::Box<dyn_uucore::mods::error::UError>>
                    ::from(local_58);
          goto LAB_001cdf1f;
        }
        uVar9 = uVar9 + ((ulong)bStack_5f ^ 1);
        if (uVar9 == local_88) goto LAB_001cdf4d;
                    /* try { // try from 001cde92 to 001cde99 has its CatchHandler @ 001cdfb5 */
        core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&local_a8);
        uVar5 = uVar5 + 1;
      }
    }
  }
                    /* try { // try from 001cdf10 to 001cdf18 has its CatchHandler @ 001cdfb3 */
  auVar10 = uucore::mods::error::
            _<impl_core::convert::From<std::io::error::Error>for_alloc::boxed::Box<dyn_uucore::mods::error::UError>>
            ::from(lVar3);
LAB_001cdf1f:
                    /* try { // try from 001cdf1f to 001cdf26 has its CatchHandler @ 001cdfbc */
  core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&local_a8);
LAB_001cdf27:
                    /* try { // try from 001cdf27 to 001cdf30 has its CatchHandler @ 001cdfb7 */
  core::ptr::drop_in_place<alloc::vec::Vec<uu_split::OutFile>>(&local_78);
  core::ptr::drop_in_place<std::io::stdio::StdoutLock>(local_80);
  return auVar10;
}