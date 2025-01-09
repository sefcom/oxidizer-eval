/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * __rustcall uu_tail::args::Settings::from(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  undefined uVar4;
  undefined uVar5;
  undefined uVar6;
  undefined uVar7;
  byte bVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined **ppuVar12;
  undefined auVar13 [16];
  undefined auVar14 [16];
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  long **local_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 local_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  undefined2 local_190;
  undefined8 *local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  code *local_170;
  undefined4 local_15c;
  undefined8 local_158;
  undefined8 uStack_150;
  long **local_148;
  undefined8 uStack_140;
  undefined *local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  long *local_118;
  code *pcStack_110;
  undefined8 *local_100;
  code *pcStack_f8;
  long **local_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  long **pplStack_d8;
  undefined auStack_d0 [12];
  undefined4 uStack_c4;
  undefined8 local_c0;
  undefined2 local_b8;
  undefined local_b6;
  undefined4 local_b5;
  undefined local_b1;
  long local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  code *local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  long **local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  long **local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  long **local_38;
  
  cVar3 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(param_2,"F",1);
  uVar4 = 1;
  if (cVar3 == '\0') {
    uVar4 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(param_2,"retry",5);
  }
  uVar11 = 0;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&local_1d8,param_2,"follow",6)
  ;
  lVar9 = clap_builder::parser::error::MatchesError::unwrap("follow",6,&local_1d8);
  if (lVar9 == 0) {
    uVar11 = CONCAT71((int7)((ulong)uVar11 >> 8),2);
    local_15c = (undefined4)uVar11;
    if (cVar3 != '\0') goto LAB_001f8f8a;
  }
  else {
    uVar1 = *(undefined8 *)(lVar9 + 8);
    uVar2 = *(undefined8 *)(lVar9 + 0x10);
    if (cVar3 != '\0') {
      auVar13 = clap_builder::parser::matches::arg_matches::ArgMatches::index_of(param_2,"F",1);
      auVar14 = clap_builder::parser::matches::arg_matches::ArgMatches::index_of(param_2,"follow",6)
      ;
      if ((auVar13._0_8_ != 0) &&
         ((local_15c = (undefined4)CONCAT71((int7)((ulong)uVar11 >> 8),1), auVar14._0_8_ == 0 ||
          (auVar14._8_8_ < auVar13._8_8_)))) goto LAB_001f8f8c;
    }
    uVar11 = 0;
    cVar3 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(uVar1,uVar2,&DAT_0011ef30);
    if (cVar3 == '\0') {
      local_15c = 0;
    }
    else {
LAB_001f8f8a:
      local_15c = (undefined4)CONCAT71((int7)((ulong)uVar11 >> 8),1);
    }
  }
LAB_001f8f8c:
  uVar5 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag
                    (param_2,"use-polling",0xb);
  FilterMode::from(&local_1d8,param_2);
  local_f0 = local_1c8;
  pcStack_f8 = uStack_1d0;
  local_100 = local_1d8;
  if (local_1d8 == (undefined **)&DAT_00000005) {
    param_1[1] = uStack_1d0;
    param_1[2] = local_1c8;
    *param_1 = 5;
    return param_1;
  }
  uVar6 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(param_2,"verbose",7);
  uVar7 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag
                    (param_2,"-presume-input-pipe",0x13);
  _<uu_tail::args::Settings_as_core::default::Default>::default(&local_1d8);
  local_c0 = local_198;
  auStack_d0._8_4_ = local_1a0;
  local_b8 = CONCAT11(uVar5,uVar4);
  local_b5 = CONCAT31(CONCAT21(local_b5._2_2_,(char)local_15c),uVar7);
  uStack_e8 = (undefined4)uStack_1c0;
  uStack_e4 = uStack_1c0._4_4_;
  uStack_e0 = (undefined4)uStack_1b8;
  uStack_dc = uStack_1b8._4_4_;
  auStack_d0._4_4_ = uStack_1a4;
  auStack_d0._0_4_ = uStack_1a8;
                    /* try { // try from 001f90a5 to 001f9146 has its CatchHandler @ 001f9759 */
  local_b6 = uVar6;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
            (&local_1d8,param_2,"sleep-interval",0xe);
  lVar9 = clap_builder::parser::error::MatchesError::unwrap("sleep-interval",0xe,&local_1d8);
  if (lVar9 != 0) {
    local_198 = 0xa0a0a0a0a0a0a0a;
    local_190 = 0xa0a;
    local_1d8 = (undefined **)_DAT_002bb4b0;
    uStack_1d0 = _UNK_002bb4b8;
    local_1c8 = _DAT_002bb4c0;
    uStack_1c0 = _UNK_002bb4c8;
    uStack_1b8 = PTR_call_once_002bb4d0;
    uStack_1b0 = PTR_call_once_002bb4d8;
    uStack_1a8 = _DAT_002bb4e0;
    uStack_1a4 = _UNK_002bb4e4;
    local_1a0 = _UNK_002bb4e8;
    uStack_19c = _UNK_002bb4ec;
    local_b0 = lVar9;
    fundu_core::parse::Parser::parse_single
              (&local_188,&local_1d8,*(undefined8 *)(lVar9 + 8),*(undefined8 *)(lVar9 + 0x10),
               &local_198);
    if ((int)local_188 != 8) {
      local_118 = &local_b0;
      pcStack_110 = _<&T_as_core::fmt::Display>::fmt;
      local_158 = &PTR_s_invalid_number_of_seconds____002bb450;
      uStack_150 = (code *)0x2;
      local_138 = (undefined *)0x0;
      local_148 = &local_118;
      uStack_140 = 1;
                    /* try { // try from 001f936d to 001f93b9 has its CatchHandler @ 001f974a */
      core::option::Option<T>::map_or_else(&local_90,&local_158);
      uStack_140 = CONCAT44(uStack_140._4_4_,1);
      local_158 = (undefined **)CONCAT44(uStack_8c,local_90);
      uStack_150 = (code *)CONCAT44(uStack_84,uStack_88);
      local_148 = (long **)local_80;
      uVar11 = ::alloc::boxed::Box<T>::new(&local_158);
      param_1[1] = uVar11;
      param_1[2] = &PTR_drop_in_place<uucore_mods_error_UUsageError>_002bb550;
      *param_1 = 5;
                    /* try { // try from 001f93d5 to 001f9570 has its CatchHandler @ 001f9759 */
      core::ptr::
      drop_in_place<core::result::Result<fundu_core::time::Duration,fundu_core::error::ParseError>>
                (&local_188);
      goto LAB_001f970f;
    }
    local_98 = local_170;
    local_a8 = (undefined4)local_180;
    uStack_a4 = local_180._4_4_;
    uStack_a0 = (undefined4)uStack_178;
    uStack_9c = uStack_178._4_4_;
                    /* try { // try from 001f916c to 001f9179 has its CatchHandler @ 001f974a */
    auStack_d0 = _<fundu_core::time::Duration_as_fundu_core::time::SaturatingInto<core::time::Duration>>
                 ::saturating_into(&local_a8);
                    /* try { // try from 001f9189 to 001f9305 has its CatchHandler @ 001f9759 */
    core::ptr::
    drop_in_place<core::result::Result<fundu_core::time::Duration,fundu_core::error::ParseError>>
              (&local_188);
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
            (&local_1d8,param_2,"max-unchanged-stats",0x13);
  lVar9 = clap_builder::parser::error::MatchesError::unwrap("max-unchanged-stats",0x13,&local_1d8);
  if (lVar9 == 0) {
LAB_001f91ee:
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&local_1d8,param_2,"pid",3);
    lVar9 = clap_builder::parser::error::MatchesError::unwrap("pid",3,&local_1d8);
    if (lVar9 == 0) {
LAB_001f9252:
      clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many
                (&local_1d8,param_2,"files",5);
      clap_builder::parser::error::MatchesError::unwrap(&local_158,"files",5,&local_1d8);
      if (local_158 != (undefined **)0x0) {
        uStack_1a8 = local_128;
        uStack_1a4 = uStack_124;
        local_1a0 = uStack_120;
        uStack_19c = uStack_11c;
        uStack_1b8 = local_138;
        uStack_1b0 = (undefined *)CONCAT44(uStack_12c,uStack_130);
        local_1c8 = local_148;
        uStack_1c0 = uStack_140;
        local_1d8 = local_158;
        uStack_1d0 = uStack_150;
        _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::
        from_iter(&local_188,&local_1d8);
        if (local_188 != (undefined8 *)0x8000000000000000) {
          uStack_1d0 = local_180;
          local_1c8 = uStack_178;
          local_1d8 = (undefined **)local_188;
          goto LAB_001f9588;
        }
      }
      from::___closure__(&local_1d8);
LAB_001f9588:
                    /* try { // try from 001f9588 to 001f9597 has its CatchHandler @ 001f9733 */
      core::ptr::drop_in_place<alloc::vec::Vec<uu_tail::paths::Input>>(&uStack_e8);
      pplStack_d8 = local_1c8;
      uStack_e8 = (undefined4)local_1d8;
      uStack_e4 = local_1d8._4_4_;
      uStack_e0 = (undefined4)uStack_1d0;
      uStack_dc = uStack_1d0._4_4_;
      if (local_1c8 < (long **)0x2) {
        bVar8 = 0;
      }
      else {
                    /* try { // try from 001f95b5 to 001f96f3 has its CatchHandler @ 001f9759 */
        bVar8 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag
                          (param_2,"quiet: warning: ",5);
        bVar8 = bVar8 ^ 1;
      }
      param_1[6] = auStack_d0._0_8_;
      param_1[7] = CONCAT44(uStack_c4,auStack_d0._8_4_);
      param_1[4] = CONCAT44(uStack_dc,uStack_e0);
      param_1[5] = pplStack_d8;
      param_1[2] = local_f0;
      param_1[3] = CONCAT44(uStack_e4,uStack_e8);
      *param_1 = local_100;
      param_1[1] = pcStack_f8;
      param_1[8] = local_c0;
      *(undefined2 *)(param_1 + 9) = local_b8;
      *(byte *)((long)param_1 + 0x4a) = bVar8;
      *(undefined4 *)((long)param_1 + 0x4b) = local_b5;
      *(undefined *)((long)param_1 + 0x4f) = local_b1;
      return param_1;
    }
    uVar11 = *(undefined8 *)(lVar9 + 8);
    uVar1 = *(undefined8 *)(lVar9 + 0x10);
    uVar10 = core::num::_<impl_core::str::traits::FromStr_for_i32>::from_str(uVar11,uVar1);
    if ((uVar10 & 1) == 0) {
      if (-1 < (long)uVar10) {
        local_c0 = CONCAT44((int)(uVar10 >> 0x20),(undefined4)local_c0);
        goto LAB_001f9252;
      }
      local_158 = (undefined **)0x0;
      uStack_140 = CONCAT71(uStack_140._1_7_,1);
      local_188 = &local_158;
      local_180 = _<os_display::Quoted_as_core::fmt::Display>::fmt;
      local_1d8 = &PTR_s_invalid_PID____002bb480;
      uStack_1d0 = (code *)0x1;
      uStack_1b8 = (undefined *)0x0;
      local_1c8 = &local_188;
      uStack_1c0 = 1;
      uStack_150 = (code *)uVar11;
      local_148 = (long **)uVar1;
      core::option::Option<T>::map_or_else(&local_60,&local_1d8);
      uStack_1c0 = CONCAT44(uStack_1c0._4_4_,1);
      local_1d8 = (undefined **)CONCAT44(uStack_5c,local_60);
      uStack_1d0 = (code *)CONCAT44(uStack_54,uStack_58);
      local_1c8 = local_50;
      uVar11 = ::alloc::boxed::Box<T>::new(&local_1d8);
    }
    else {
      local_118 = (long *)CONCAT71(local_118._1_7_,(char)(uVar10 >> 8));
      local_158 = (undefined **)0x0;
      uStack_140 = CONCAT71(uStack_140._1_7_,1);
      local_188 = &local_158;
      local_180 = _<os_display::Quoted_as_core::fmt::Display>::fmt;
      uStack_178 = &local_118;
      local_170 = _<core::num::error::ParseIntError_as_core::fmt::Display>::fmt;
      local_1d8 = &PTR_s_invalid_PID____002bb490;
      uStack_1d0 = (code *)0x2;
      uStack_1b8 = (undefined *)0x0;
      local_1c8 = &local_188;
      uStack_1c0 = 2;
      uStack_150 = (code *)uVar11;
      local_148 = (long **)uVar1;
      core::option::Option<T>::map_or_else(&local_48,&local_1d8);
      uStack_1c0 = CONCAT44(uStack_1c0._4_4_,1);
      local_1d8 = (undefined **)CONCAT44(uStack_44,local_48);
      uStack_1d0 = (code *)CONCAT44(uStack_3c,uStack_40);
      local_1c8 = local_38;
      uVar11 = ::alloc::boxed::Box<T>::new(&local_1d8);
    }
    param_1[1] = uVar11;
    ppuVar12 = &PTR_drop_in_place<uucore_mods_error_USimpleError>_002bb3c8;
  }
  else {
    uVar11 = *(undefined8 *)(lVar9 + 8);
    uVar1 = *(undefined8 *)(lVar9 + 0x10);
    uVar10 = core::num::_<impl_core::str::traits::FromStr_for_u32>::from_str(uVar11,uVar1);
    if ((uVar10 & 1) == 0) {
      local_c0 = CONCAT44(local_c0._4_4_,(int)(uVar10 >> 0x20));
      goto LAB_001f91ee;
    }
    local_158 = (undefined **)0x0;
    uStack_140 = CONCAT71(uStack_140._1_7_,1);
    local_188 = &local_158;
    local_180 = _<os_display::Quoted_as_core::fmt::Display>::fmt;
    local_1d8 = &PTR_s_invalid_maximum_number_of_unchan_002bb470;
    uStack_1d0 = (code *)0x1;
    uStack_1b8 = (undefined *)0x0;
    local_1c8 = &local_188;
    uStack_1c0 = 1;
    uStack_150 = (code *)uVar11;
    local_148 = (long **)uVar1;
    core::option::Option<T>::map_or_else(&local_78,&local_1d8);
    uStack_1c0 = CONCAT44(uStack_1c0._4_4_,1);
    local_1d8 = (undefined **)CONCAT44(uStack_74,local_78);
    uStack_1d0 = (code *)CONCAT44(uStack_6c,uStack_70);
    local_1c8 = local_68;
    uVar11 = ::alloc::boxed::Box<T>::new(&local_1d8);
    param_1[1] = uVar11;
    ppuVar12 = &PTR_drop_in_place<uucore_mods_error_UUsageError>_002bb550;
  }
  param_1[2] = ppuVar12;
  *param_1 = 5;
LAB_001f970f:
  core::ptr::drop_in_place<uu_tail::args::Settings>(&local_100);
  return param_1;
}