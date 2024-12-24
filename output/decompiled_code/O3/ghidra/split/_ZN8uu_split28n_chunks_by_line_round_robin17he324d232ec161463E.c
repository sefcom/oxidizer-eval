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
                    /* try { // try from 001cdf8c to 001cdf9b has its CatchHandler @ 001ce06d */
      auVar10 = std::io::BufRead::read_until(local_90,uVar1,&local_a8);
      lVar3 = auVar10._8_8_;
      if (auVar10._0_8_ == 0) {
        puVar8 = (undefined8 *)0x0;
        if (lVar3 != 0) {
          ppuVar7 = &PTR_s_src_uu_split_src_split_rs_00248af0;
LAB_001ce065:
          uVar4 = core::panicking::panic_const::panic_const_rem_by_zero(ppuVar7);
                    /* catch() { ... } // from try @ 001cdfcc with catch @ 001ce06b */
                    /* catch() { ... } // from try @ 001cdd7a with catch @ 001ce095 */
                    /* try { // try from 001ce098 to 001ce0b3 has its CatchHandler @ 001ce0bc */
          core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&local_a8);
          core::ptr::drop_in_place<alloc::vec::Vec<uu_split::OutFile>>(&local_78);
          core::ptr::drop_in_place<std::io::stdio::StdoutLock>(local_80);
          auVar10 = _Unwind_Resume(uVar4);
          return auVar10;
        }
LAB_001ce01d:
                    /* try { // try from 001ce01d to 001ce024 has its CatchHandler @ 001ce08c */
        core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&local_a8);
                    /* try { // try from 001ce025 to 001ce02e has its CatchHandler @ 001ce087 */
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
                    /* try { // try from 001cdd7a to 001cddda has its CatchHandler @ 001ce095 */
        auVar10 = std::io::BufRead::read_until(local_90,uVar1,&local_a8);
        lVar3 = auVar10._8_8_;
        if (auVar10._0_8_ != 0) break;
        if (lVar3 == 0) goto LAB_001ce01d;
        if ((uVar9 | local_88) >> 0x20 == 0) {
          uVar5 = (uVar9 & 0xffffffff) % (local_88 & 0xffffffff);
        }
        else {
          uVar5 = uVar9 % local_88;
        }
        if ((uVar5 == param_5 - 1U) &&
           (lVar3 = _<std::io::stdio::StdoutLock_as_std::io::Write>::write_all
                              (puVar8,local_a0,local_98), lVar3 != 0)) {
                    /* try { // try from 001ce00d to 001ce015 has its CatchHandler @ 001ce083 */
          auVar10 = uucore::mods::error::
                    _<impl_core::convert::From<std::io::error::Error>for_alloc::boxed::Box<dyn_uucore::mods::error::UError>>
                    ::from(lVar3);
          goto LAB_001cdfef;
        }
                    /* try { // try from 001cdde4 to 001cddeb has its CatchHandler @ 001ce090 */
        core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&local_a8);
        uVar9 = uVar9 + 1;
      }
    }
  }
  else {
                    /* try { // try from 001cddfc to 001cde0a has its CatchHandler @ 001ce08c */
    _<alloc::vec::Vec<uu_split::OutFile>as_uu_split::ManageOutFiles>::init
              (&local_a8,param_3,param_1,*(undefined *)(param_1 + 0xa1));
    puVar8 = local_98;
    lVar3 = local_a8;
    auVar10._8_8_ = local_98;
    auVar10._0_8_ = local_a0;
    if (local_a8 == -0x8000000000000000) goto LAB_001cdff7;
                    /* try { // try from 001cde2c to 001cde35 has its CatchHandler @ 001ce06f */
    core::ptr::drop_in_place<alloc::vec::Vec<uu_split::OutFile>>(&local_78);
    local_78 = lVar3;
    local_70 = local_a0;
    local_68 = local_98;
    uVar1 = *(undefined *)(param_1 + 0xa2);
    if (local_88 == 0) {
      local_a8 = 0;
      local_a0 = 1;
      local_98 = (undefined8 *)0x0;
                    /* try { // try from 001cdfcc to 001cdfda has its CatchHandler @ 001ce06b */
      auVar10 = std::io::BufRead::read_until(local_90,uVar1,&local_a8);
      lVar3 = auVar10._8_8_;
      if (auVar10._0_8_ == 0) {
        if (lVar3 != 0) {
          ppuVar7 = &PTR_s_src_uu_split_src_split_rs_00248ad8;
          goto LAB_001ce065;
        }
        goto LAB_001ce01d;
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
                    /* try { // try from 001cde9a to 001cdf3c has its CatchHandler @ 001ce08e */
        auVar10 = std::io::BufRead::read_until(local_90,uVar1,&local_a8);
        lVar3 = auVar10._8_8_;
        if (auVar10._0_8_ != 0) break;
        if (lVar3 == 0) goto LAB_001ce01d;
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
        if (lVar3 != 0) goto LAB_001cdfef;
        custom_write_all(&local_60,local_38,local_40,local_58,local_50);
        if (local_60 != '\0') {
                    /* try { // try from 001ce051 to 001ce06a has its CatchHandler @ 001ce083 */
          auVar10 = uucore::mods::error::
                    _<impl_core::convert::From<std::io::error::Error>for_alloc::boxed::Box<dyn_uucore::mods::error::UError>>
                    ::from(local_58);
          goto LAB_001cdfef;
        }
        uVar9 = uVar9 + ((ulong)bStack_5f ^ 1);
        if (uVar9 == local_88) goto LAB_001ce01d;
                    /* try { // try from 001cdf62 to 001cdf69 has its CatchHandler @ 001ce085 */
        core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&local_a8);
        uVar5 = uVar5 + 1;
      }
    }
  }
                    /* try { // try from 001cdfe0 to 001cdfe8 has its CatchHandler @ 001ce083 */
  auVar10 = uucore::mods::error::
            _<impl_core::convert::From<std::io::error::Error>for_alloc::boxed::Box<dyn_uucore::mods::error::UError>>
            ::from(lVar3);
LAB_001cdfef:
                    /* try { // try from 001cdfef to 001cdff6 has its CatchHandler @ 001ce08c */
  core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&local_a8);
LAB_001cdff7:
                    /* try { // try from 001cdff7 to 001ce000 has its CatchHandler @ 001ce087 */
  core::ptr::drop_in_place<alloc::vec::Vec<uu_split::OutFile>>(&local_78);
  core::ptr::drop_in_place<std::io::stdio::StdoutLock>(local_80);
  return auVar10;
}