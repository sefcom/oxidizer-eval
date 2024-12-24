undefined8 * __rustcall uu_csplit::CsplitOptions::new(undefined8 *param_1,undefined8 param_2)

{
  undefined uVar1;
  undefined uVar2;
  undefined uVar3;
  undefined uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 **local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined local_e0 [24];
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 *local_40;
  code *local_38;
  
  uVar1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(param_2,"keep-files",10);
  uVar2 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(param_2,"quiet",5);
  uVar3 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag
                    (param_2,"elide-empty-files",0x11);
  uVar4 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag
                    (param_2,&DAT_00165e60,0x10);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&local_c8,param_2,"prefix",6);
  lVar5 = clap_builder::parser::error::MatchesError::unwrap("prefix",6,&local_c8);
  if (lVar5 == 0) {
    local_e0._0_8_ = 0x8000000000000000;
  }
  else {
    _<alloc::string::String_as_core::clone::Clone>::clone(local_e0,lVar5);
  }
                    /* try { // try from 002bef58 to 002bef99 has its CatchHandler @ 002bf1bd */
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
            (&local_c8,param_2,"suffix-format",0xd);
  lVar5 = clap_builder::parser::error::MatchesError::unwrap("suffix-format",0xd,&local_c8);
  if (lVar5 == 0) {
    local_68 = 0x8000000000000000;
  }
  else {
    _<alloc::string::String_as_core::clone::Clone>::clone(&local_c8,lVar5);
    local_68 = CONCAT44(uStack_c4,local_c8);
    uStack_60 = uStack_c0;
    uStack_5c = uStack_bc;
  }
                    /* try { // try from 002befbe to 002befff has its CatchHandler @ 002bf1ab */
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
            (&local_c8,param_2,"digits: ",6);
  lVar5 = clap_builder::parser::error::MatchesError::unwrap("digits: ",6,&local_c8);
  if (lVar5 == 0) {
    local_118 = (undefined *)0x8000000000000000;
  }
  else {
    _<alloc::string::String_as_core::clone::Clone>::clone(&local_c8,lVar5);
    local_118 = (undefined *)CONCAT44(uStack_c4,local_c8);
  }
  split_name::SplitName::new(&local_c8,local_e0,&local_68,&local_118);
  if (CONCAT44(uStack_c4,local_c8) != -0x8000000000000000) {
    param_1[10] = local_78;
    param_1[0xb] = uStack_70;
    param_1[8] = local_88;
    param_1[9] = uStack_80;
    param_1[6] = local_98;
    param_1[7] = uStack_90;
    param_1[4] = CONCAT44(uStack_a4,local_a8);
    param_1[5] = uStack_a0;
    param_1[2] = CONCAT44(uStack_b4,local_b8);
    param_1[3] = CONCAT44(uStack_ac,uStack_b0);
    *param_1 = CONCAT44(uStack_c4,local_c8);
    param_1[1] = CONCAT44(uStack_bc,uStack_c0);
    *(undefined *)(param_1 + 0xc) = uVar1;
    *(undefined *)((long)param_1 + 0x61) = uVar2;
    *(undefined *)((long)param_1 + 0x62) = uVar3;
    *(undefined *)((long)param_1 + 99) = uVar4;
    return param_1;
  }
  local_48 = uStack_a0;
  uStack_50 = local_a8;
  uStack_4c = uStack_a4;
  uStack_60 = local_b8;
  uStack_5c = uStack_b4;
                    /* try { // try from 002bf0e0 to 002bf198 has its CatchHandler @ 002bf199 */
  local_e0._0_16_ = uucore::util_name();
  local_38 = _<&T_as_core::fmt::Display>::fmt;
  local_118 = &DAT_003e2b38;
  uStack_110 = 2;
  local_f8 = 0;
  local_108 = &local_40;
  local_100 = 1;
  local_40 = (undefined8 *)local_e0;
  std::io::stdio::_eprint(&local_118);
  local_e0._8_8_ = _<uu_csplit::csplit_error::CsplitError_as_core::fmt::Display>::fmt;
  local_118 = &DAT_003e2b58;
  uStack_110 = 2;
  local_f8 = 0;
  local_100 = 1;
  local_108 = (undefined8 **)local_e0;
  local_e0._0_8_ = &local_68;
  std::io::stdio::_eprint(&local_118);
  uVar6 = std::process::exit(1);
                    /* catch() { ... } // from try @ 002bf0e0 with catch @ 002bf199 */
                    /* try { // try from 002bf19c to 002bf1c9 has its CatchHandler @ 002bf1d2 */
  core::ptr::drop_in_place<uu_csplit::csplit_error::CsplitError>(&local_68);
  puVar7 = (undefined8 *)_Unwind_Resume(uVar6);
  return puVar7;
}