undefined8 * __rustcall
uu_nl::helper::parse_options(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 **ppuVar2;
  undefined uVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 **local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  long *local_b8;
  code *pcStack_b0;
  undefined8 local_a8;
  long local_98;
  long *local_90;
  code *local_88;
  undefined8 local_80;
  long *local_78;
  code *local_70;
  undefined8 local_68;
  long *local_60;
  code *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  local_d0 = 0;
  uStack_c8 = 8;
  local_c0 = 0;
                    /* try { // try from 002b7e25 to 002b7efc has its CatchHandler @ 002b835f */
  uVar3 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag
                    (param_3,&DAT_0016ff14,0xb);
  *(undefined *)(param_2 + 0x10) = uVar3;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
            (&local_108,param_3,&DAT_0016ff1f,0x11);
  lVar4 = clap_builder::parser::error::MatchesError::unwrap(&DAT_0016ff1f,0x11,&local_108);
  if (lVar4 != 0) {
    local_98 = lVar4;
    if (*(long *)(lVar4 + 0x10) == 1) {
      local_b8 = &local_98;
      pcStack_b0 = _<&T_as_core::fmt::Display>::fmt;
      local_108 = (long *)&DAT_003dab80;
      uStack_100 = (code *)0x2;
      local_e8 = 0;
      local_f8 = &local_b8;
      local_f0 = 1;
      core::option::Option<T>::map_or_else(&local_48,&local_108);
      local_108 = (long *)CONCAT44(uStack_44,local_48);
      uStack_100 = (code *)CONCAT44(uStack_3c,uStack_40);
      local_f8 = (undefined8 **)local_38;
    }
    else {
      _<alloc::string::String_as_core::clone::Clone>::clone(&local_108,lVar4);
    }
                    /* try { // try from 002b7f01 to 002b7f08 has its CatchHandler @ 002b8347 */
    core::ptr::drop_in_place<alloc::string::String>(param_2 + 6);
    param_2[8] = local_f8;
    *(undefined4 *)(param_2 + 6) = (undefined4)local_108;
    *(undefined4 *)((long)param_2 + 0x34) = local_108._4_4_;
    *(undefined4 *)(param_2 + 7) = (undefined4)uStack_100;
    *(undefined4 *)((long)param_2 + 0x3c) = uStack_100._4_4_;
  }
                    /* try { // try from 002b7f1c to 002b7fec has its CatchHandler @ 002b835f */
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
            (&local_108,param_3,&DAT_001618c0,0x10);
  lVar4 = clap_builder::parser::error::MatchesError::unwrap(&DAT_001618c0,0x10,&local_108);
  if (lVar4 != 0) {
    _<alloc::string::String_as_core::clone::Clone>::clone_from(param_2 + 9,lVar4);
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
            (&local_108,param_3,&DAT_0016ff31,0xd);
  lVar4 = clap_builder::parser::error::MatchesError::unwrap(&DAT_0016ff31,0xd,&local_108);
  if (lVar4 == 0) {
    uVar3 = 1;
  }
  else {
    uVar3 = core::ops::function::FnOnce::call_once(lVar4);
  }
  *(undefined *)((long)param_2 + 0x81) = uVar3;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
            (&local_108,param_3,&DAT_001617d0,0x10);
  lVar4 = clap_builder::parser::error::MatchesError::unwrap(&DAT_001617d0,0x10,&local_108);
  if (lVar4 != 0) {
    uVar5 = core::ops::function::FnOnce::call_once
                      (*(undefined8 *)(lVar4 + 8),*(undefined8 *)(lVar4 + 0x10));
    core::ops::function::FnOnce::call_once(&local_108,uVar5);
    ppuVar2 = local_f8;
    pcVar1 = uStack_100;
    if (local_108 != (long *)0x8000000000000001) {
      if (local_108 == (long *)0x8000000000000000) {
                    /* try { // try from 002b8016 to 002b801a has its CatchHandler @ 002b833b */
        core::ptr::drop_in_place<uu_nl::NumberingStyle>(*param_2,param_2[1]);
        *param_2 = pcVar1;
        param_2[1] = ppuVar2;
      }
      else {
        local_90 = local_108;
        local_88 = uStack_100;
        local_80 = local_f8;
                    /* try { // try from 002b8039 to 002b8047 has its CatchHandler @ 002b8339 */
        ::alloc::vec::Vec<T,A>::push(&local_d0,&local_90);
      }
    }
  }
                    /* try { // try from 002b8048 to 002b808f has its CatchHandler @ 002b835f */
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
            (&local_108,param_3,&DAT_0016ff3e,0xe);
  lVar4 = clap_builder::parser::error::MatchesError::unwrap(&DAT_0016ff3e,0xe,&local_108);
  if (lVar4 != 0) {
    uVar5 = core::ops::function::FnOnce::call_once
                      (*(undefined8 *)(lVar4 + 8),*(undefined8 *)(lVar4 + 0x10));
    core::ops::function::FnOnce::call_once(&local_108,uVar5);
    ppuVar2 = local_f8;
    pcVar1 = uStack_100;
    if (local_108 != (long *)0x8000000000000001) {
      if (local_108 == (long *)0x8000000000000000) {
                    /* try { // try from 002b80ba to 002b80be has its CatchHandler @ 002b832c */
        core::ptr::drop_in_place<uu_nl::NumberingStyle>(param_2[2],param_2[3]);
        param_2[2] = pcVar1;
        param_2[3] = ppuVar2;
      }
      else {
        local_78 = local_108;
        local_70 = uStack_100;
        local_68 = local_f8;
                    /* try { // try from 002b80e1 to 002b80f2 has its CatchHandler @ 002b832a */
        ::alloc::vec::Vec<T,A>::push(&local_d0,&local_78);
      }
    }
  }
                    /* try { // try from 002b80f3 to 002b813a has its CatchHandler @ 002b835f */
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
            (&local_108,param_3,&DAT_00160fc0,0x10);
  lVar4 = clap_builder::parser::error::MatchesError::unwrap(&DAT_00160fc0,0x10,&local_108);
  if (lVar4 != 0) {
    uVar5 = core::ops::function::FnOnce::call_once
                      (*(undefined8 *)(lVar4 + 8),*(undefined8 *)(lVar4 + 0x10));
    core::ops::function::FnOnce::call_once(&local_108,uVar5);
    ppuVar2 = local_f8;
    pcVar1 = uStack_100;
    if (local_108 != (long *)0x8000000000000001) {
      if (local_108 == (long *)0x8000000000000000) {
                    /* try { // try from 002b8165 to 002b8169 has its CatchHandler @ 002b831d */
        core::ptr::drop_in_place<uu_nl::NumberingStyle>(param_2[4],param_2[5]);
        param_2[4] = pcVar1;
        param_2[5] = ppuVar2;
      }
      else {
        local_60 = local_108;
        local_58 = uStack_100;
        local_50 = local_f8;
                    /* try { // try from 002b818c to 002b819d has its CatchHandler @ 002b831b */
        ::alloc::vec::Vec<T,A>::push(&local_d0,&local_60);
      }
    }
  }
                    /* try { // try from 002b819e to 002b82e7 has its CatchHandler @ 002b835f */
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
            (&local_108,param_3,&DAT_0016ff4c,0xc);
  plVar6 = (long *)clap_builder::parser::error::MatchesError::unwrap(&DAT_0016ff4c,0xc,&local_108);
  if (plVar6 != (long *)0x0) {
    if (*plVar6 == 0) {
      _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_108,&DAT_0016ff58,0x47);
      local_a8 = local_f8;
      local_b8 = local_108;
      pcStack_b0 = uStack_100;
      ::alloc::vec::Vec<T,A>::push(&local_d0,&local_b8);
    }
    else {
      param_2[0xf] = *plVar6;
    }
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
            (&local_108,param_3,"join-blank-lines",0x10);
  plVar6 = (long *)clap_builder::parser::error::MatchesError::unwrap
                             ("join-blank-lines",0x10,&local_108);
  if (plVar6 != (long *)0x0) {
    if (*plVar6 == 0) {
      _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_108,&DAT_0016ff9f,0x4a);
      local_a8 = local_f8;
      local_b8 = local_108;
      pcStack_b0 = uStack_100;
      ::alloc::vec::Vec<T,A>::push(&local_d0,&local_b8);
    }
    else {
      param_2[0xe] = *plVar6;
    }
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
            (&local_108,param_3,"line-increment",0xe);
  puVar7 = (undefined8 *)
           clap_builder::parser::error::MatchesError::unwrap("line-increment",0xe,&local_108);
  if (puVar7 != (undefined8 *)0x0) {
    param_2[0xd] = *puVar7;
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
            (&local_108,param_3,"starting-line-number",0x14);
  puVar7 = (undefined8 *)
           clap_builder::parser::error::MatchesError::unwrap("starting-line-number",0x14,&local_108)
  ;
  if (puVar7 != (undefined8 *)0x0) {
    param_2[0xc] = *puVar7;
  }
  param_1[2] = local_c0;
  *param_1 = local_d0;
  param_1[1] = uStack_c8;
  return param_1;
}