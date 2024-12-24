undefined  [16] __rustcall uu_env::EnvAppData::run_program(long param_1,long param_2,char param_3)

{
  code *pcVar1;
  undefined8 *****pppppuVar2;
  undefined8 ****ppppuVar3;
  char cVar4;
  undefined4 uVar5;
  ulong extraout_RDX;
  undefined **ppuVar6;
  undefined8 *****pppppuVar7;
  undefined auVar8 [16];
  undefined8 *****local_2d0;
  code *local_2c8;
  undefined8 ****ppppuStack_2c0;
  code *local_2b8;
  undefined8 local_2b0;
  code *local_2a8;
  undefined8 ****ppppuStack_2a0;
  undefined8 ****local_298;
  undefined8 local_290;
  undefined8 local_288;
  undefined4 local_280;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined8 local_270;
  undefined8 ****local_268;
  undefined8 local_260;
  long local_258;
  long local_250;
  undefined8 ****local_248;
  undefined8 ****local_240;
  undefined8 ****local_238;
  code *local_230;
  undefined8 *****local_228;
  code *local_220;
  undefined8 *****local_218;
  code *local_210;
  undefined local_198 [8];
  undefined8 local_190;
  undefined8 uStack_188;
  ulong local_180;
  undefined8 local_178;
  undefined local_100 [208];
  
  local_258 = *(long *)(param_2 + 0x58);
  if (local_258 == 0) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_bounds_check(0,0,&PTR_DAT_00249238);
  }
  pppppuVar7 = *(undefined8 ******)(param_2 + 0x50);
  local_280 = *(undefined4 *)pppppuVar7;
  uStack_27c = *(undefined4 *)((long)pppppuVar7 + 4);
  uStack_278 = *(undefined4 *)(pppppuVar7 + 1);
  uStack_274 = *(undefined4 *)((long)pppppuVar7 + 0xc);
  local_288 = 0x8000000000000000;
                    /* try { // try from 001ce04a to 001ce058 has its CatchHandler @ 001ce674 */
  _<alloc::borrow::Cow<B>as_core::clone::Clone>::clone(&local_2b0,&local_288);
                    /* try { // try from 001ce06b to 001ce077 has its CatchHandler @ 001ce679 */
  local_250 = param_1;
  std::process::Command::new
            (local_100,CONCAT44(uStack_27c,local_280),CONCAT44(uStack_274,uStack_278));
  local_248 = pppppuVar7 + 2;
                    /* try { // try from 001ce088 to 001ce0c6 has its CatchHandler @ 001ce67e */
  std::process::Command::args(local_100,local_248,local_258 + -1);
  pcVar1 = *(code **)(param_2 + 0x88);
  if (pcVar1 == (code *)0x0) {
    if (param_3 == '\0') goto LAB_001ce3cc;
  }
  else {
    pppppuVar2 = *(undefined8 ******)(param_2 + 0x90);
    _<std::process::Command_as_std::os::unix::process::CommandExt>::arg0
              (local_100,pcVar1,pppppuVar2);
                    /* try { // try from 001ce0c7 to 001ce0d0 has its CatchHandler @ 001ce651 */
    core::ptr::drop_in_place<alloc::borrow::Cow<std::ffi::os_str::OsStr>>(&local_2b0);
    local_2b0 = 0x8000000000000000;
    local_2a8 = pcVar1;
    ppppuStack_2a0 = pppppuVar2;
    if (param_3 == '\0') goto LAB_001ce3cc;
    local_198 = (undefined  [8])0x1;
    local_180 = CONCAT71(local_180._1_7_,1);
    local_2d0 = (undefined8 *****)local_198;
    local_2c8 = _<os_display::Quoted_as_core::fmt::Display>::fmt;
    local_238 = (undefined8 ****)&PTR_DAT_00249250;
    local_230 = (code *)0x2;
    local_218 = (undefined8 *****)0x0;
    local_228 = &local_2d0;
    local_220 = (code *)0x1;
                    /* try { // try from 001ce166 to 001ce2a5 has its CatchHandler @ 001ce67e */
    local_190 = pcVar1;
    uStack_188 = pppppuVar2;
    std::io::stdio::_eprint(&local_238);
  }
  local_198 = (undefined  [8])0x1;
  local_190 = (code *)CONCAT44(uStack_27c,local_280);
  uStack_188 = (undefined8 *****)CONCAT44(uStack_274,uStack_278);
  local_180 = local_180 & 0xffffffffffffff00;
  local_2c8 = _<os_display::Quoted_as_core::fmt::Display>::fmt;
  local_238 = (undefined8 ****)&PTR_DAT_00249270;
  local_230 = (code *)0x2;
  local_218 = (undefined8 *****)0x0;
  local_220 = (code *)0x1;
  local_2d0 = (undefined8 *****)local_198;
  local_228 = &local_2d0;
  std::io::stdio::_eprint(&local_238);
  local_298 = (undefined8 ****)&DAT_00124a55;
  local_290 = 6;
  local_198 = (undefined  [8])&DAT_00000001;
  local_190 = local_2a8;
  uStack_188 = (undefined8 *****)ppppuStack_2a0;
  local_180 = CONCAT71(local_180._1_7_,1);
  local_2d0 = &local_298;
  local_2c8 = _<&T_as_core::fmt::Display>::fmt;
  local_2b8 = _<os_display::Quoted_as_core::fmt::Display>::fmt;
  local_238 = (undefined8 ****)&DAT_00249290;
  local_230 = (code *)0x3;
  local_218 = (undefined8 ******)0x0;
  local_220 = (code *)0x2;
  ppppuStack_2c0 = (undefined8 ****)local_198;
  local_228 = &local_2d0;
  std::io::stdio::_eprint(&local_238);
  pppppuVar7 = pppppuVar7 + local_258 * 2;
  local_270 = (undefined8 *****)local_248;
  local_260 = 0;
  local_268 = pppppuVar7;
  auVar8 = _<core::iter::adapters::enumerate::Enumerate<I>as_core::iter::traits::iterator::Iterator>
           ::next(&local_270);
  if (auVar8._8_8_ != 0) {
    pppppuVar7 = (undefined8 *****)local_198;
    do {
      local_240 = (undefined8 ****)(auVar8._0_8_ + 1);
      local_2c8 = (code *)*auVar8._8_8_;
      ppppuStack_2c0 = (undefined8 ****)auVar8._8_8_[1];
      local_2d0 = (undefined8 *****)&DAT_00000001;
      local_2b8 = (code *)CONCAT71(local_2b8._1_7_,1);
      local_238 = &local_298;
      local_230 = _<&T_as_core::fmt::Display>::fmt;
      local_220 = core::fmt::num::imp::_<impl_core::fmt::Display_for_u64>::fmt;
      local_218 = &local_2d0;
      local_210 = _<os_display::Quoted_as_core::fmt::Display>::fmt;
      local_198 = (undefined  [8])&DAT_00249328;
      local_190 = (code *)0x4;
      local_178 = 0;
      uStack_188 = &local_238;
      local_180 = 3;
      local_228 = &local_240;
                    /* try { // try from 001ce3b5 to 001ce3ba has its CatchHandler @ 001ce680 */
      std::io::stdio::_eprint(pppppuVar7);
      auVar8 = _<core::iter::adapters::enumerate::Enumerate<I>as_core::iter::traits::iterator::Iterator>
               ::next(&local_270);
    } while (auVar8._8_8_ != 0);
  }
LAB_001ce3cc:
                    /* try { // try from 001ce3cc to 001ce3de has its CatchHandler @ 001ce67e */
  std::process::Command::status(&local_270,local_100);
  ppppuVar3 = local_268;
  if ((int)local_270 == 0) {
    if (local_270._4_4_ == 0) {
                    /* try { // try from 001ce59c to 001ce5a8 has its CatchHandler @ 001ce679 */
      core::ptr::drop_in_place<std::process::Command>(local_100);
                    /* try { // try from 001ce5a9 to 001ce5b2 has its CatchHandler @ 001ce674 */
      core::ptr::drop_in_place<alloc::borrow::Cow<std::ffi::os_str::OsStr>>(&local_2b0);
      core::ptr::drop_in_place<alloc::borrow::Cow<std::ffi::os_str::OsStr>>(&local_288);
      auVar8._8_8_ = 0;
      auVar8._0_8_ = pppppuVar7;
      return auVar8 << 0x40;
    }
    if (((ulong)local_270 & 0x7f00000000) != 0) {
      if ('\x01' < (char)(((byte)((ulong)local_270 >> 0x20) & 0x7f) + 1)) goto LAB_001ce5e6;
      ppuVar6 = &PTR_DAT_002492c0;
      do {
                    /* try { // try from 001ce5e0 to 001ce636 has its CatchHandler @ 001ce64f */
        core::option::unwrap_failed(ppuVar6);
LAB_001ce5e6:
        uVar5 = _<nix::sys::signal::Signal_as_core::convert::TryFrom<i32>>::try_from();
        core::result::Result<T,E>::unwrap(uVar5,extraout_RDX & 0xffffffff);
        nix::sys::signal::SigSet::all(&local_238);
        nix::sys::signal::SigAction::new(local_198,&local_238);
        nix::sys::signal::sigaction(&local_238,extraout_RDX & 0xffffffff,local_198);
        nix::sys::signal::raise(extraout_RDX & 0xffffffff);
        ppuVar6 = &PTR_DAT_002492f0;
      } while( true );
    }
                    /* try { // try from 001ce450 to 001ce455 has its CatchHandler @ 001ce64f */
    auVar8 = uucore::mods::error::
             _<impl_core::convert::From<i32>for_alloc::boxed::Box<dyn_uucore::mods::error::UError>>
             ::from(local_270._4_4_ >> 8 & 0xff);
  }
  else {
    cVar4 = std::io::error::Error::kind(local_268);
    if ((cVar4 == '\0') || (cVar4 = std::io::error::Error::kind(ppppuVar3), cVar4 == '\x14')) {
                    /* try { // try from 001ce41e to 001ce422 has its CatchHandler @ 001ce642 */
      auVar8 = make_error_no_such_file_or_dir
                         (*(undefined *)(local_250 + 1),CONCAT44(uStack_27c,local_280),
                          CONCAT44(uStack_274,uStack_278));
                    /* try { // try from 001ce423 to 001ce430 has its CatchHandler @ 001ce67e */
      core::ptr::drop_in_place<std::io::error::Error>(&local_268);
    }
    else {
      local_298 = ppppuVar3;
                    /* try { // try from 001ce466 to 001ce552 has its CatchHandler @ 001ce665 */
      _local_198 = uucore::util_name();
      local_2c8 = _<&T_as_core::fmt::Display>::fmt;
      local_238 = (undefined8 ****)&DAT_00249138;
      local_230 = (code *)0x2;
      local_218 = (undefined8 *****)0x0;
      local_228 = &local_2d0;
      local_220 = (code *)0x1;
      local_2d0 = (undefined8 *****)local_198;
      std::io::stdio::_eprint(&local_238);
      local_198 = (undefined  [8])&local_298;
      local_190 = _<std::io::error::Error_as_core::fmt::Debug>::fmt;
      local_238 = (undefined8 ****)&PTR_DAT_00249308;
      local_230 = (code *)0x2;
      local_218 = (undefined8 ******)0x0;
      local_220 = (code *)0x1;
      local_228 = (undefined8 *****)local_198;
      std::io::stdio::_eprint(&local_238);
      auVar8 = uucore::mods::error::
               _<impl_core::convert::From<i32>for_alloc::boxed::Box<dyn_uucore::mods::error::UError>>
               ::from(0x7e);
                    /* try { // try from 001ce553 to 001ce562 has its CatchHandler @ 001ce640 */
      core::ptr::drop_in_place<std::io::error::Error>(&local_298);
    }
  }
                    /* try { // try from 001ce563 to 001ce56f has its CatchHandler @ 001ce679 */
  core::ptr::drop_in_place<std::process::Command>(local_100);
                    /* try { // try from 001ce570 to 001ce579 has its CatchHandler @ 001ce674 */
  core::ptr::drop_in_place<alloc::borrow::Cow<std::ffi::os_str::OsStr>>(&local_2b0);
  core::ptr::drop_in_place<alloc::borrow::Cow<std::ffi::os_str::OsStr>>(&local_288);
  return auVar8;
}