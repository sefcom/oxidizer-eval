long * __rustcall
uu_realpath::prepare_relative_options
          (long *param_1,undefined8 param_2,undefined param_3,undefined param_4)

{
  long lVar1;
  long lVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  long *local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  long local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  long local_60;
  long lStack_58;
  long local_50;
  long local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  local_b0 = param_1;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
            (&local_e8,param_2,"relative-to",0xb);
  lVar4 = clap_builder::parser::error::MatchesError::unwrap("relative-to",0xb,&local_e8);
  if (lVar4 == 0) {
    local_48 = -0x8000000000000000;
  }
  else {
    core::ops::function::FnOnce::call_once
              (&local_48,*(undefined8 *)(lVar4 + 8),*(undefined8 *)(lVar4 + 0x10));
  }
                    /* try { // try from 001b64d6 to 001b6515 has its CatchHandler @ 001b670c */
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
            (&local_e8,param_2,"relative-base",0xd);
  lVar4 = clap_builder::parser::error::MatchesError::unwrap("relative-base",0xd,&local_e8);
  if (lVar4 == 0) {
    local_78 = -0x8000000000000000;
  }
  else {
    core::ops::function::FnOnce::call_once
              (&local_e8,*(undefined8 *)(lVar4 + 8),*(undefined8 *)(lVar4 + 0x10));
    local_68 = local_d8;
    local_78 = local_e8;
    uStack_70 = uStack_e0;
  }
  local_d8 = local_38;
  local_e8 = local_48;
  uStack_e0 = CONCAT44(uStack_3c,uStack_40);
                    /* try { // try from 001b654c to 001b6565 has its CatchHandler @ 001b66fd */
  canonicalize_relative_option(&local_90,&local_e8,param_3,param_4);
  lVar2 = local_80;
  lVar1 = local_88;
  lVar4 = local_90;
  if (local_90 == -0x7fffffffffffffff) {
    local_b0[1] = local_88;
    local_b0[2] = local_80;
    *local_b0 = -0x7fffffffffffffff;
    plVar6 = &local_78;
    plVar7 = local_b0;
  }
  else {
    local_60 = local_90;
    lStack_58 = local_88;
    local_50 = local_80;
    local_d8 = local_68;
    local_e8 = local_78;
    uStack_e0 = uStack_70;
                    /* try { // try from 001b65c5 to 001b65d6 has its CatchHandler @ 001b66eb */
    canonicalize_relative_option(&local_90,&local_e8,param_3,param_4);
    plVar7 = local_b0;
    if (local_90 == -0x7fffffffffffffff) {
      local_b0[1] = local_88;
      local_b0[2] = local_80;
      *local_b0 = -0x7fffffffffffffff;
    }
    else {
      local_a8 = local_90;
      local_a0 = local_88;
      local_98 = local_80;
      lVar5 = 0;
      if (local_90 != -0x8000000000000000) {
        lVar5 = local_88;
      }
                    /* try { // try from 001b664c to 001b6656 has its CatchHandler @ 001b66dc */
      if (((lVar4 == -0x8000000000000000) || (lVar5 == 0)) ||
         (cVar3 = std::path::Path::starts_with(lVar1,lVar2), cVar3 != '\0')) {
        *plVar7 = local_60;
        plVar7[1] = lStack_58;
        plVar7[4] = local_a0;
        plVar7[5] = local_98;
        plVar7[2] = local_50;
        plVar7[3] = local_a8;
        return plVar7;
      }
      *plVar7 = -0x8000000000000000;
      plVar7[3] = -0x8000000000000000;
                    /* try { // try from 001b66cd to 001b66d6 has its CatchHandler @ 001b66eb */
      core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(&local_a8);
    }
    plVar6 = &local_60;
  }
  core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(plVar6);
  return plVar7;
}