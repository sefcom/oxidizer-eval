uint __rustcall uu_ls::extract_quoting_style(undefined8 param_1,uint param_2)

{
  char cVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  undefined local_100 [8];
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  long local_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 *local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 *local_58;
  code *local_50;
  undefined local_48 [32];
  
  uVar5 = 0x137037;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
            (&local_f8,param_1,"quoting-style",0xd);
  lVar3 = clap_builder::parser::error::MatchesError::unwrap("quoting-style",0xd,&local_f8);
  if (lVar3 != 0) {
    uVar2 = match_quoting_style_name
                      (*(undefined8 *)(lVar3 + 8),*(undefined8 *)(lVar3 + 0x10),param_2 & 0xff);
    uVar4 = uVar2 >> 0x10;
    if ((uVar4 & 0xff) == 4) {
      local_f8 = &PTR_DAT_00312520;
      uStack_f0 = 1;
      local_e8 = (undefined8 *)local_100;
      local_e0 = 0;
      uStack_d8 = 0;
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_fmt(&local_f8,&PTR_DAT_00312530);
    }
    uVar5 = uVar2 >> 8;
    goto LAB_0021f9c1;
  }
  cVar1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(param_1,"literal",7);
  if (cVar1 != '\0') {
LAB_0021f903:
    uVar4 = 3;
    uVar2 = param_2;
    goto LAB_0021f9c1;
  }
  cVar1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(param_1,"escape",6);
  if (cVar1 != '\0') {
    uVar4 = 2;
    uVar2 = 0;
    goto LAB_0021f9c1;
  }
  cVar1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(param_1,"quote-name",10);
  if (cVar1 != '\0') {
    uVar4 = 2;
    uVar2 = 2;
    goto LAB_0021f9c1;
  }
  cVar1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(param_1,"dired",5);
  if (cVar1 != '\0') goto LAB_0021f903;
  std::env::var(&local_c8,&DAT_00134ed7,0xd);
  if (local_c8 == 0) {
    local_a8 = local_c0;
    uStack_a4 = uStack_bc;
    uStack_a0 = uStack_b8;
    uStack_9c = uStack_b4;
    local_98 = local_b0;
                    /* try { // try from 0021fa00 to 0021fa27 has its CatchHandler @ 0021fbcd */
    uVar2 = match_quoting_style_name(CONCAT44(uStack_b4,uStack_b8),local_b0,param_2 & 0xff);
    uVar4 = uVar2 >> 0x10;
    if ((uVar4 & 0xff) != 4) {
                    /* try { // try from 0021fa7f to 0021fa88 has its CatchHandler @ 0021fbb6 */
      core::ptr::drop_in_place<alloc::string::String>(&local_a8);
      uVar5 = uVar2 >> 8;
      if (local_c8 != 0) {
        core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>
                  (&local_c8);
      }
      goto LAB_0021f9c1;
    }
    std::env::args(local_48);
                    /* try { // try from 0021fa28 to 0021fa6a has its CatchHandler @ 0021fbbb */
    _<std::env::Args_as_core::iter::traits::iterator::Iterator>::next(&local_68,local_48);
    if (local_68 == (undefined4 *)0x8000000000000000) {
      _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_f8,&DAT_00134ee4,2);
      local_78 = local_e8;
      local_88 = (undefined4)local_f8;
      uStack_84 = local_f8._4_4_;
      uStack_80 = (undefined4)uStack_f0;
      uStack_7c = uStack_f0._4_4_;
    }
    else {
      local_78 = local_58;
      local_88 = (undefined4)local_68;
      uStack_84 = local_68._4_4_;
      uStack_80 = (undefined4)uStack_60;
      uStack_7c = uStack_60._4_4_;
    }
    local_68 = &local_88;
    uStack_60 = _<alloc::string::String_as_core::fmt::Display>::fmt;
    local_58 = (undefined8 *)&local_a8;
    local_50 = _<alloc::string::String_as_core::fmt::Display>::fmt;
    local_f8 = (undefined **)&DAT_00312548;
    uStack_f0 = 3;
    uStack_d8 = 0;
    local_e0 = 2;
                    /* try { // try from 0021fb2b to 0021fb35 has its CatchHandler @ 0021fba4 */
    local_e8 = &local_68;
    std::io::stdio::_eprint(&local_f8);
                    /* try { // try from 0021fb36 to 0021fb42 has its CatchHandler @ 0021fbbb */
    core::ptr::drop_in_place<alloc::string::String>(&local_88);
                    /* try { // try from 0021fb43 to 0021fb4f has its CatchHandler @ 0021fbcd */
    core::ptr::drop_in_place<std::env::Args>(local_48);
                    /* try { // try from 0021fb50 to 0021fb59 has its CatchHandler @ 0021fbb6 */
    core::ptr::drop_in_place<alloc::string::String>(&local_a8);
    if (local_c8 != 0) goto LAB_0021f988;
  }
  else {
LAB_0021f988:
    core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>
              (&local_c8);
  }
  local_f8 = (undefined **)std::io::stdio::stdout();
  cVar1 = std::sys::pal::unix::io::is_terminal(&local_f8);
  uVar4 = 3;
  if (cVar1 != '\0') {
    uVar4 = param_2 & 0xff;
  }
  uVar2 = 1;
  if (cVar1 == '\0') {
    uVar2 = param_2 & 0xff;
  }
  uVar5 = 0;
LAB_0021f9c1:
  return uVar2 & 0xff | (uVar5 & 0xff) << 8 | (uVar4 & 0xff) << 0x10;
}