long * __rustcall uu_mktemp::Options::from(long *param_1,undefined8 param_2)

{
  bool bVar1;
  char cVar2;
  undefined uVar3;
  undefined uVar4;
  undefined uVar5;
  undefined uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  long local_b8;
  long local_a8;
  long lStack_a0;
  long local_98;
  long local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  long lStack_78;
  undefined8 local_68;
  long lStack_60;
  long local_58;
  long local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&local_f8,param_2,"tmpdir",6);
  uVar7 = clap_builder::parser::error::MatchesError::unwrap("tmpdir",6,&local_f8);
  lVar8 = core::option::Option<T>::or_else(uVar7,param_2);
  if (lVar8 == 0) {
    local_48 = -0x8000000000000000;
  }
  else {
    _<alloc::vec::Vec<T,A>as_core::clone::Clone>::clone(&local_48,lVar8);
  }
                    /* try { // try from 001beb88 to 001bec94 has its CatchHandler @ 001bef4d */
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
            (&local_f8,param_2,"templateDeadlock",8);
  lVar8 = clap_builder::parser::error::MatchesError::unwrap("templateDeadlock",8,&local_f8);
  if (lVar8 == 0) {
    if (local_48 == -0x8000000000000000) {
      core::ops::function::FnOnce::call_once(&local_f8);
    }
    else {
      uStack_f0 = CONCAT44(uStack_3c,local_40);
      uStack_e8 = CONCAT44(uStack_34,uStack_38);
      local_f8 = local_48;
    }
    local_98 = uStack_e8;
    local_a8 = local_f8;
    lStack_a0 = uStack_f0;
                    /* try { // try from 001bed38 to 001bed4d has its CatchHandler @ 001beeeb */
    _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_c8,"tmp.XXXXXXXXXX",0xe);
    uStack_e8 = local_b8;
    local_f8 = local_c8;
    uStack_f0 = uStack_c0;
    local_c8 = local_a8;
    uStack_c0 = lStack_a0;
    local_b8 = local_98;
    bVar1 = false;
    goto LAB_001bed78;
  }
  std::env::var(&local_f8,"TMPDIR",6);
  if (local_f8 == 0) {
    core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>
              (&local_f8);
    cVar2 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(param_2,"t",1);
    if (cVar2 == '\0') goto LAB_001bec40;
    std::env::var_os(&local_f8,"TMPDIR",6);
    if (local_f8 != -0x8000000000000000) goto LAB_001bec99;
LAB_001beca6:
    bVar1 = true;
    local_88 = local_f8;
  }
  else {
    core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>
              (&local_f8);
LAB_001bec40:
    if (local_48 == -0x8000000000000000) {
      cVar2 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(param_2,"t",1);
      if (cVar2 == '\0') {
        cVar2 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id
                          (param_2,"tmpdir",6);
        bVar1 = true;
        local_88 = -0x8000000000000000;
        if (cVar2 == '\0') goto LAB_001becbe;
      }
      std::env::temp_dir(&local_f8);
LAB_001bec99:
      local_68 = uStack_f0;
      lStack_60 = uStack_e8;
      goto LAB_001beca6;
    }
    local_68 = CONCAT44(uStack_3c,local_40);
    lStack_60 = CONCAT44(uStack_34,uStack_38);
    bVar1 = false;
    local_88 = local_48;
  }
LAB_001becbe:
  uStack_80 = (undefined4)local_68;
  uStack_7c = local_68._4_4_;
  lStack_78 = lStack_60;
                    /* try { // try from 001becd0 to 001becdd has its CatchHandler @ 001beefa */
  _<alloc::string::String_as_core::clone::Clone>::clone(&local_a8,lVar8);
  local_b8 = lStack_78;
  uStack_c0 = CONCAT44(uStack_7c,uStack_80);
  local_c8 = local_88;
  local_f8 = local_a8;
  uStack_f0 = lStack_a0;
  uStack_e8 = local_98;
LAB_001bed78:
  local_58 = local_b8;
  local_68 = local_c8;
  lStack_60 = uStack_c0;
  lStack_78 = uStack_e8;
  local_88 = local_f8;
  uStack_80 = (undefined4)uStack_f0;
  uStack_7c = uStack_f0._4_4_;
                    /* try { // try from 001beda8 to 001bedeb has its CatchHandler @ 001bef29 */
  uVar3 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(param_2,"directory",9);
  uVar4 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(param_2,"dry-run",7);
  uVar5 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(param_2,"quiet",5);
  local_98 = local_58;
  local_a8 = local_68;
  lStack_a0 = lStack_60;
                    /* try { // try from 001bee09 to 001bee43 has its CatchHandler @ 001bef18 */
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&local_f8,param_2,"suffix",6);
  lVar8 = clap_builder::parser::error::MatchesError::unwrap("suffix",6,&local_f8);
  if (lVar8 == 0) {
    local_c8._0_4_ = 0;
    local_c8._4_4_ = 0x80000000;
  }
  else {
    core::ops::function::FnOnce::call_once(&local_f8,lVar8);
    local_b8 = uStack_e8;
    local_c8._0_4_ = (undefined4)local_f8;
    local_c8._4_4_ = local_f8._4_4_;
    uStack_c0 = uStack_f0;
  }
                    /* try { // try from 001bee68 to 001bee7c has its CatchHandler @ 001bef09 */
  uVar6 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(param_2,"t",1);
  param_1[2] = lStack_78;
  *param_1 = local_88;
  param_1[1] = CONCAT44(uStack_7c,uStack_80);
  *(undefined *)(param_1 + 9) = uVar3;
  *(undefined *)((long)param_1 + 0x49) = uVar4;
  *(undefined *)((long)param_1 + 0x4a) = uVar5;
  param_1[3] = local_a8;
  param_1[4] = lStack_a0;
  param_1[5] = local_98;
  *(undefined4 *)(param_1 + 6) = (undefined4)local_c8;
  *(undefined4 *)((long)param_1 + 0x34) = local_c8._4_4_;
  *(undefined4 *)(param_1 + 7) = (undefined4)uStack_c0;
  *(undefined4 *)((long)param_1 + 0x3c) = uStack_c0._4_4_;
  param_1[8] = local_b8;
  *(undefined *)((long)param_1 + 0x4b) = uVar6;
  if (bVar1) {
    core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(&local_48);
  }
  return param_1;
}