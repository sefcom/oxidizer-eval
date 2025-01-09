undefined8 * __rustcall uu_fmt::FmtOptions::from_matches(undefined8 *param_1,undefined8 param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  byte bVar4;
  byte bVar5;
  undefined uVar6;
  undefined uVar7;
  undefined uVar8;
  byte bVar9;
  undefined uVar10;
  undefined uVar11;
  uint uVar12;
  long lVar13;
  undefined8 uVar14;
  ulong uVar15;
  uint uVar16;
  undefined local_139;
  undefined **local_138;
  undefined8 uStack_130;
  ulong ***local_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  ulong *local_100;
  code *pcStack_f8;
  ulong local_f0;
  undefined local_e8;
  char local_e0;
  undefined local_df;
  ulong local_d8;
  ulong local_d0;
  undefined **local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  ulong local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  ulong **local_98;
  code *local_90;
  undefined *local_88;
  code *local_80;
  undefined local_78 [16];
  ulong local_68;
  undefined local_60 [16];
  ulong local_50;
  undefined local_48 [16];
  ulong local_38;
  
  bVar4 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag
                    (param_2,&DAT_00115090,0x10);
  bVar5 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag
                    (param_2,"crown-margin",0xc);
  uVar6 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag
                    (param_2,&DAT_00115100,0x10);
  uVar7 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag
                    (param_2,"uniform-spacing",0xf);
  uVar8 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(param_2,"quick",5);
  bVar9 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(param_2,"split-only",10);
  uVar10 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id
                     (param_2,"exact-prefix",0xc);
  uVar11 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id
                     (param_2,"skip-prefix",0xb);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&local_138,param_2,"prefix",6)
  ;
  lVar13 = clap_builder::parser::error::MatchesError::unwrap("prefix",6,&local_138);
  if (lVar13 == 0) {
    local_b0 = 0x8000000000000000;
  }
  else {
    core::ops::function::FnOnce::call_once(&local_b0,lVar13);
  }
                    /* try { // try from 001b4d61 to 001b4da1 has its CatchHandler @ 001b5315 */
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
            (&local_138,param_2,"skip-prefix",0xb);
  lVar13 = clap_builder::parser::error::MatchesError::unwrap("skip-prefix",0xb,&local_138);
  if (lVar13 == 0) {
    local_c8 = (undefined **)0x8000000000000000;
  }
  else {
    core::ops::function::FnOnce::call_once(&local_138,lVar13);
    local_b8 = (ulong)local_128;
    local_c8 = local_138;
    uStack_c0 = (undefined4)uStack_130;
    uStack_bc = uStack_130._4_4_;
  }
                    /* try { // try from 001b4dca to 001b51d5 has its CatchHandler @ 001b5303 */
  extract_width(&local_138,param_2);
  if (local_138 != (undefined **)0x0) {
    param_1[1] = uStack_130;
    param_1[2] = local_128;
    goto LAB_001b51e5;
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
            (&local_138,param_2,&DAT_00114928,4);
  lVar13 = clap_builder::parser::error::MatchesError::unwrap(&DAT_00114928,4,&local_138);
  if (lVar13 == 0) {
    if (uStack_130 != 0) {
      uVar15 = core::cmp::max_by((ulong)((long)local_128 * 0x5d) / 100,local_128 != (ulong ***)0x0);
      goto LAB_001b5013;
    }
    local_d0 = 0x4b;
    uVar15 = 0x46;
LAB_001b50af:
    uVar2 = local_d0;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
              (&local_138,param_2,"tab-width: ",9);
    lVar13 = clap_builder::parser::error::MatchesError::unwrap("tab-width: ",9,&local_138);
    if (lVar13 == 0) {
      local_d8 = 8;
LAB_001b522d:
      *param_1 = local_b0;
      param_1[1] = uStack_a8;
      param_1[4] = CONCAT44(uStack_bc,uStack_c0);
      param_1[5] = local_b8;
      param_1[2] = local_a0;
      param_1[3] = local_c8;
      param_1[6] = uVar2;
      param_1[7] = uVar15;
      param_1[8] = local_d8 + (local_d8 == 0);
      param_1[9] = CONCAT26(CONCAT11(uVar8,uVar7),
                            CONCAT24(CONCAT11(uVar11,uVar10),
                                     CONCAT13(bVar9,CONCAT12(uVar6,CONCAT11(bVar4 & ((bVar5 | bVar9)
                                                                                    ^ 1),
                                                                            (bVar9 ^ 1) & bVar5)))))
      ;
      return param_1;
    }
    pcVar1 = *(code **)(lVar13 + 8);
    uVar3 = *(ulong *)(lVar13 + 0x10);
    core::num::_<impl_core::str::traits::FromStr_for_usize>::from_str(&local_e0,pcVar1,uVar3);
    if (local_e0 == '\0') goto LAB_001b522d;
    local_139 = local_df;
    local_100 = (ulong *)0x0;
    local_e8 = 1;
    local_98 = &local_100;
    local_90 = _<os_display::Quoted_as_core::fmt::Display>::fmt;
    local_88 = &local_139;
    local_80 = _<core::num::error::ParseIntError_as_core::fmt::Display>::fmt;
    local_138 = &PTR_s_Invalid_TABWIDTH_specification__002263a8;
    uStack_130 = 2;
    uStack_118 = 0;
    local_128 = &local_98;
    uStack_120 = 2;
    pcStack_f8 = pcVar1;
    local_f0 = uVar3;
    core::option::Option<T>::map_or_else(local_48,&local_138);
    uStack_120 = CONCAT44(uStack_120._4_4_,1);
    local_128 = (ulong ***)local_38;
    uVar14 = ::alloc::boxed::Box<T>::new(&local_138);
  }
  else {
    pcVar1 = *(code **)(lVar13 + 8);
    uVar2 = *(ulong *)(lVar13 + 0x10);
    core::num::_<impl_core::str::traits::FromStr_for_usize>::from_str(&local_e0,pcVar1,uVar2);
    uVar15 = local_d8;
    if (local_e0 == '\0') {
      if (uStack_130 == 0) {
        if (local_d8 < 0x4c) {
          uVar12 = (int)local_d8 * 100;
          uVar16 = (uVar12 & 0xffff) * 0x6059 >> 0x10;
          local_128 = (ulong ***)
                      core::cmp::max_by(((uVar12 - uVar16 & 0xffff) >> 1) + uVar16 >> 6,local_d8 + 3
                                       );
          goto LAB_001b5013;
        }
        _<T_as_alloc::slice::hack::ConvertVec>::to_vec
                  (&local_100,"GOAL cannot be greater than WIDTH.",0x22);
        local_128 = (ulong ***)local_f0;
        uStack_120 = CONCAT44(uStack_120._4_4_,1);
        uVar14 = ::alloc::boxed::Box<T>::new(&local_138);
      }
      else if (local_128 < local_d8) {
        _<T_as_alloc::slice::hack::ConvertVec>::to_vec
                  (&local_100,"GOAL cannot be greater than WIDTH.",0x22);
        local_128 = (ulong ***)local_f0;
        uStack_120 = CONCAT44(uStack_120._4_4_,1);
        uVar14 = ::alloc::boxed::Box<T>::new(&local_138);
      }
      else {
LAB_001b5013:
        local_d0 = (ulong)local_128;
        if (local_128 < 0x9c5) goto LAB_001b50af;
        local_100 = &local_d0;
        pcStack_f8 = core::fmt::num::imp::_<impl_core::fmt::Display_for_u64>::fmt;
        local_138 = &PTR_DAT_00226388;
        uStack_130 = 2;
        uStack_118 = 0;
        uStack_120 = 1;
        local_128 = (ulong ***)&local_100;
        core::option::Option<T>::map_or_else(local_60,&local_138);
        uStack_120 = CONCAT44(uStack_120._4_4_,1);
        local_128 = (ulong ***)local_50;
        uVar14 = ::alloc::boxed::Box<T>::new(&local_138);
      }
    }
    else {
      local_100 = (ulong *)0x0;
      local_e8 = 1;
      local_98 = &local_100;
      local_90 = _<os_display::Quoted_as_core::fmt::Display>::fmt;
      local_138 = &PTR_s_invalid_goal__00226378;
      uStack_130 = 1;
      uStack_118 = 0;
      local_128 = &local_98;
      uStack_120 = 1;
      pcStack_f8 = pcVar1;
      local_f0 = uVar2;
      core::option::Option<T>::map_or_else(local_78,&local_138);
      uStack_120 = CONCAT44(uStack_120._4_4_,1);
      local_128 = (ulong ***)local_68;
      uVar14 = ::alloc::boxed::Box<T>::new(&local_138);
    }
  }
  param_1[1] = uVar14;
  param_1[2] = &PTR_drop_in_place<uucore_mods_error_USimpleError>_00226400;
LAB_001b51e5:
  *param_1 = 0x8000000000000001;
                    /* try { // try from 001b51f2 to 001b51fe has its CatchHandler @ 001b5315 */
  core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(&local_c8);
  core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(&local_b0);
  return param_1;
}