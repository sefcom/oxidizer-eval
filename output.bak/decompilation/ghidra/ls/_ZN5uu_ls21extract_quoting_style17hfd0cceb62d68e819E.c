uint __rustcall uu_ls::extract_quoting_style(undefined8 param_1,uint param_2)

{
  char cVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
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
  
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
            (&local_f8,param_1,anon_3f7e092f2ea554bdd060175bd8ea63d9_14_llvm_16502254941234113161,
             0xd);
  lVar3 = clap_builder::parser::error::MatchesError::unwrap
                    (anon_3f7e092f2ea554bdd060175bd8ea63d9_14_llvm_16502254941234113161,0xd,
                     &local_f8);
  if (lVar3 != 0) {
    uVar2 = match_quoting_style_name
                      (*(undefined8 *)(lVar3 + 8),*(undefined8 *)(lVar3 + 0x10),param_2 & 0xff);
    uVar4 = uVar2 >> 0x10;
    if ((uVar4 & 0xff) == 4) {
      local_f8 = &PTR_DAT_00312320;
      uStack_f0 = 1;
      local_e8 = (undefined8 *)local_100;
      local_e0 = 0;
      uStack_d8 = 0;
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_fmt(&local_f8,&PTR_DAT_00312360);
    }
    param_2 = uVar2 >> 8;
    goto LAB_0021f9c3;
  }
  cVar1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag
                    (param_1,&anon_9938bf1084d6f67f99da587aeb78cfa9_29_llvm_7263189302602752264,7);
  if (cVar1 != '\0') {
LAB_0021f99e:
    uVar4 = 3;
    uVar2 = param_2;
    goto LAB_0021f9c3;
  }
  cVar1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag
                    (param_1,&anon_9938bf1084d6f67f99da587aeb78cfa9_28_llvm_7263189302602752264,6);
  if (cVar1 != '\0') {
    uVar4 = 2;
    uVar2 = 0;
    goto LAB_0021f9c3;
  }
  cVar1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag
                    (param_1,anon_9938bf1084d6f67f99da587aeb78cfa9_30_llvm_7263189302602752264,10);
  if (cVar1 != '\0') {
    uVar2 = 2;
    uVar4 = 2;
    goto LAB_0021f9c3;
  }
  cVar1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag
                    (param_1,&anon_3f7e092f2ea554bdd060175bd8ea63d9_38_llvm_16502254941234113161,5);
  if (cVar1 != '\0') goto LAB_0021f99e;
  std::env::var(&local_c8,&DAT_00134e1c,0xd);
  if (local_c8 == 0) {
    local_a8 = local_c0;
    uStack_a4 = uStack_bc;
    uStack_a0 = uStack_b8;
    uStack_9c = uStack_b4;
    local_98 = local_b0;
                    /* try { // try from 0021fa9a to 0021fac1 has its CatchHandler @ 0021fc65 */
    uVar2 = match_quoting_style_name(CONCAT44(uStack_b4,uStack_b8),local_b0,param_2 & 0xff);
    uVar4 = uVar2 >> 0x10;
    if ((uVar4 & 0xff) != 4) {
                    /* try { // try from 0021fb19 to 0021fb22 has its CatchHandler @ 0021fc4e */
      core::ptr::drop_in_place<alloc::string::String>(&local_a8);
      param_2 = uVar2 >> 8;
      if (local_c8 != 0) {
        core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>
                  (&local_c8);
      }
      goto LAB_0021f9c3;
    }
    std::env::args(local_48);
                    /* try { // try from 0021fac2 to 0021fb04 has its CatchHandler @ 0021fc53 */
    _<std::env::Args_as_core::iter::traits::iterator::Iterator>::next(&local_68,local_48);
    if (local_68 == (undefined4 *)0x8000000000000000) {
      _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_f8,&DAT_00134dd7,2);
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
    local_f8 = (undefined **)&DAT_00312330;
    uStack_f0 = 3;
    uStack_d8 = 0;
    local_e0 = 2;
                    /* try { // try from 0021fbc3 to 0021fbcd has its CatchHandler @ 0021fc3c */
    local_e8 = &local_68;
    std::io::stdio::_eprint(&local_f8);
                    /* try { // try from 0021fbce to 0021fbda has its CatchHandler @ 0021fc53 */
    core::ptr::drop_in_place<alloc::string::String>(&local_88);
                    /* try { // try from 0021fbdb to 0021fbe7 has its CatchHandler @ 0021fc65 */
    core::ptr::drop_in_place<std::env::Args>(local_48);
                    /* try { // try from 0021fbe8 to 0021fbf1 has its CatchHandler @ 0021fc4e */
    core::ptr::drop_in_place<alloc::string::String>(&local_a8);
    if (local_c8 != 0) goto LAB_0021fa44;
  }
  else {
LAB_0021fa44:
    core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>
              (&local_c8);
  }
  local_f8 = (undefined **)std::io::stdio::stdout();
  cVar1 = std::sys::pal::unix::io::is_terminal(&local_f8);
  uVar2 = 1;
  if (cVar1 == '\0') {
    uVar2 = param_2 & 0xff;
  }
  uVar4 = 3;
  if (cVar1 != '\0') {
    uVar4 = param_2 & 0xff;
  }
  param_2 = 0;
LAB_0021f9c3:
  return uVar2 & 0xff | (param_2 & 0xff) << 8 | (uVar4 & 0xff) << 0x10;
}