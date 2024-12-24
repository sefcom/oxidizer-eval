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
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  long **local_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined4 uStack_188;
  undefined4 uStack_184;
  int local_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  undefined2 local_170;
  undefined8 *local_168;
  code *local_160;
  long **pplStack_158;
  code *local_150;
  undefined4 local_13c;
  undefined8 local_138;
  undefined8 uStack_130;
  long **local_128;
  undefined8 uStack_120;
  undefined *local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  int iStack_100;
  undefined4 uStack_fc;
  long *local_f8;
  code *pcStack_f0;
  undefined8 *local_e8;
  code *pcStack_e0;
  long **local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  long **pplStack_c0;
  undefined8 uStack_b8;
  int local_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined2 local_a0;
  undefined local_9e;
  undefined4 local_9d;
  undefined local_99;
  long local_98;
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
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&local_1b8,param_2,"follow",6)
  ;
  lVar9 = clap_builder::parser::error::MatchesError::unwrap("follow",6,&local_1b8);
  if (lVar9 == 0) {
    uVar11 = CONCAT71((int7)((ulong)uVar11 >> 8),2);
    local_13c = (undefined4)uVar11;
    if (cVar3 != '\0') goto LAB_001f9eba;
  }
  else {
    uVar1 = *(undefined8 *)(lVar9 + 8);
    uVar2 = *(undefined8 *)(lVar9 + 0x10);
    if (cVar3 != '\0') {
      auVar13 = clap_builder::parser::matches::arg_matches::ArgMatches::index_of(param_2,"F",1);
      auVar14 = clap_builder::parser::matches::arg_matches::ArgMatches::index_of(param_2,"follow",6)
      ;
      if ((auVar13._0_8_ != 0) &&
         ((local_13c = (undefined4)CONCAT71((int7)((ulong)uVar11 >> 8),1), auVar14._0_8_ == 0 ||
          (auVar14._8_8_ < auVar13._8_8_)))) goto LAB_001f9ebc;
    }
    uVar11 = 0;
    cVar3 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(uVar1,uVar2,&DAT_0011f2b0);
    if (cVar3 == '\0') {
      local_13c = 0;
    }
    else {
LAB_001f9eba:
      local_13c = (undefined4)CONCAT71((int7)((ulong)uVar11 >> 8),1);
    }
  }
LAB_001f9ebc:
  uVar5 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag
                    (param_2,"use-polling",0xb);
  FilterMode::from(&local_1b8,param_2);
  local_d8 = local_1a8;
  pcStack_e0 = uStack_1b0;
  local_e8 = local_1b8;
  if (local_1b8 == (undefined **)&DAT_00000005) {
    param_1[1] = uStack_1b0;
    param_1[2] = local_1a8;
    *param_1 = 5;
    return param_1;
  }
  uVar6 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(param_2,"verbose",7);
  uVar7 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag
                    (param_2,"-presume-input-pipe",0x13);
  _<uu_tail::args::Settings_as_core::default::Default>::default(&local_1b8);
  local_a8 = local_178;
  local_b0 = local_180;
  local_a0 = CONCAT11(uVar5,uVar4);
  local_9d = CONCAT31(CONCAT21(local_9d._2_2_,(char)local_13c),uVar7);
  uStack_d0 = (undefined4)uStack_1a0;
  uStack_cc = uStack_1a0._4_4_;
  uStack_c8 = (undefined4)uStack_198;
  uStack_c4 = uStack_198._4_4_;
  uStack_b8 = (code *)CONCAT44(uStack_184,uStack_188);
                    /* try { // try from 001f9fd5 to 001fa076 has its CatchHandler @ 001fa68f */
  local_9e = uVar6;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
            (&local_1b8,param_2,"sleep-interval",0xe);
  lVar9 = clap_builder::parser::error::MatchesError::unwrap("sleep-interval",0xe,&local_1b8);
  if (lVar9 != 0) {
    local_178 = 0xa0a0a0a0a0a0a0a;
    local_170 = 0xa0a;
    local_1b8 = (undefined **)_DAT_002bd420;
    uStack_1b0 = _UNK_002bd428;
    local_1a8 = _DAT_002bd430;
    uStack_1a0 = _UNK_002bd438;
    uStack_198 = PTR_call_once_002bd440;
    uStack_190 = PTR_call_once_002bd448;
    uStack_188 = _DAT_002bd450;
    uStack_184 = _UNK_002bd454;
    local_180 = _UNK_002bd458;
    uStack_17c = _UNK_002bd45c;
    local_98 = lVar9;
    fundu_core::parse::Parser::parse_single
              (&local_168,&local_1b8,*(undefined8 *)(lVar9 + 8),*(undefined8 *)(lVar9 + 0x10),
               &local_178);
    if ((int)local_168 != 8) {
      local_f8 = &local_98;
      pcStack_f0 = _<&T_as_core::fmt::Display>::fmt;
      local_138 = &PTR_s_invalid_number_of_seconds____002bd488;
      uStack_130 = (code *)0x2;
      local_118 = (undefined *)0x0;
      local_128 = &local_f8;
      uStack_120 = 1;
                    /* try { // try from 001fa104 to 001fa150 has its CatchHandler @ 001fa680 */
      core::option::Option<T>::map_or_else(&local_90,&local_138);
      uStack_120 = CONCAT44(uStack_120._4_4_,1);
      local_138 = (undefined **)CONCAT44(uStack_8c,local_90);
      uStack_130 = (code *)CONCAT44(uStack_84,uStack_88);
      local_128 = (long **)local_80;
      uVar11 = ::alloc::boxed::Box<T>::new(&local_138);
      param_1[1] = uVar11;
      param_1[2] = &PTR_drop_in_place<uucore_mods_error_UUsageError>_002bd4e0;
      *param_1 = 5;
                    /* try { // try from 001fa16c to 001fa4a6 has its CatchHandler @ 001fa68f */
      core::ptr::
      drop_in_place<core::result::Result<fundu_core::time::Duration,fundu_core::error::ParseError>>
                (&local_168);
      goto LAB_001fa645;
    }
    local_b0 = (int)pplStack_158;
    if (local_160 == (code *)0x0) {
      uStack_b8 = (code *)0x0;
      if (((char)local_150 != '\0') && (uStack_b8 = (code *)0x0, (int)pplStack_158 != 0))
      goto LAB_001fa185;
    }
    else {
      uStack_b8 = local_160;
      if ((char)local_150 != '\0') {
LAB_001fa185:
        local_b0 = 0;
        uStack_b8 = (code *)0x0;
      }
    }
    core::ptr::
    drop_in_place<core::result::Result<fundu_core::time::Duration,fundu_core::error::ParseError>>
              (&local_168);
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
            (&local_1b8,param_2,"max-unchanged-stats",0x13);
  lVar9 = clap_builder::parser::error::MatchesError::unwrap("max-unchanged-stats",0x13,&local_1b8);
  if (lVar9 == 0) {
LAB_001fa1fd:
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&local_1b8,param_2,"pid",3);
    lVar9 = clap_builder::parser::error::MatchesError::unwrap("pid",3,&local_1b8);
    if (lVar9 == 0) {
LAB_001fa261:
      clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many
                (&local_1b8,param_2,"files",5);
      clap_builder::parser::error::MatchesError::unwrap(&local_138,"files",5,&local_1b8);
      if (local_138 != (undefined **)0x0) {
        uStack_188 = local_108;
        uStack_184 = uStack_104;
        local_180 = iStack_100;
        uStack_17c = uStack_fc;
        uStack_198 = local_118;
        uStack_190 = (undefined *)CONCAT44(uStack_10c,uStack_110);
        local_1a8 = local_128;
        uStack_1a0 = uStack_120;
        local_1b8 = local_138;
        uStack_1b0 = uStack_130;
        _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::
        from_iter(&local_168,&local_1b8);
        if (local_168 != (undefined8 *)0x8000000000000000) {
          uStack_1b0 = local_160;
          local_1a8 = pplStack_158;
          local_1b8 = (undefined **)local_168;
          goto LAB_001fa4be;
        }
      }
      from::___closure__(&local_1b8);
LAB_001fa4be:
                    /* try { // try from 001fa4be to 001fa4cd has its CatchHandler @ 001fa669 */
      core::ptr::drop_in_place<alloc::vec::Vec<uu_tail::paths::Input>>(&uStack_d0);
      pplStack_c0 = local_1a8;
      uStack_d0 = (undefined4)local_1b8;
      uStack_cc = local_1b8._4_4_;
      uStack_c8 = (undefined4)uStack_1b0;
      uStack_c4 = uStack_1b0._4_4_;
      if (local_1a8 < (long **)0x2) {
        bVar8 = 0;
      }
      else {
                    /* try { // try from 001fa4eb to 001fa629 has its CatchHandler @ 001fa68f */
        bVar8 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag
                          (param_2,"quiet: warning: ",5);
        bVar8 = bVar8 ^ 1;
      }
      param_1[6] = uStack_b8;
      param_1[7] = CONCAT44(uStack_ac,local_b0);
      param_1[4] = CONCAT44(uStack_c4,uStack_c8);
      param_1[5] = pplStack_c0;
      param_1[2] = local_d8;
      param_1[3] = CONCAT44(uStack_cc,uStack_d0);
      *param_1 = local_e8;
      param_1[1] = pcStack_e0;
      param_1[8] = local_a8;
      *(undefined2 *)(param_1 + 9) = local_a0;
      *(byte *)((long)param_1 + 0x4a) = bVar8;
      *(undefined4 *)((long)param_1 + 0x4b) = local_9d;
      *(undefined *)((long)param_1 + 0x4f) = local_99;
      return param_1;
    }
    uVar11 = *(undefined8 *)(lVar9 + 8);
    uVar1 = *(undefined8 *)(lVar9 + 0x10);
    uVar10 = core::num::_<impl_core::str::traits::FromStr_for_i32>::from_str(uVar11,uVar1);
    if ((uVar10 & 1) == 0) {
      if (-1 < (long)uVar10) {
        local_a8 = CONCAT44((int)(uVar10 >> 0x20),(undefined4)local_a8);
        goto LAB_001fa261;
      }
      local_138 = (undefined **)0x0;
      uStack_120 = CONCAT71(uStack_120._1_7_,1);
      local_168 = &local_138;
      local_160 = _<os_display::Quoted_as_core::fmt::Display>::fmt;
      local_1b8 = &PTR_s_invalid_PID____002bd560;
      uStack_1b0 = (code *)0x1;
      uStack_198 = (undefined *)0x0;
      local_1a8 = &local_168;
      uStack_1a0 = 1;
      uStack_130 = (code *)uVar11;
      local_128 = (long **)uVar1;
      core::option::Option<T>::map_or_else(&local_60,&local_1b8);
      uStack_1a0 = CONCAT44(uStack_1a0._4_4_,1);
      local_1b8 = (undefined **)CONCAT44(uStack_5c,local_60);
      uStack_1b0 = (code *)CONCAT44(uStack_54,uStack_58);
      local_1a8 = local_50;
      uVar11 = ::alloc::boxed::Box<T>::new(&local_1b8);
    }
    else {
      local_f8 = (long *)CONCAT71(local_f8._1_7_,(char)(uVar10 >> 8));
      local_138 = (undefined **)0x0;
      uStack_120 = CONCAT71(uStack_120._1_7_,1);
      local_168 = &local_138;
      local_160 = _<os_display::Quoted_as_core::fmt::Display>::fmt;
      pplStack_158 = &local_f8;
      local_150 = _<core::num::error::ParseIntError_as_core::fmt::Display>::fmt;
      local_1b8 = &PTR_s_invalid_PID____002bd570;
      uStack_1b0 = (code *)0x2;
      uStack_198 = (undefined *)0x0;
      local_1a8 = &local_168;
      uStack_1a0 = 2;
      uStack_130 = (code *)uVar11;
      local_128 = (long **)uVar1;
      core::option::Option<T>::map_or_else(&local_48,&local_1b8);
      uStack_1a0 = CONCAT44(uStack_1a0._4_4_,1);
      local_1b8 = (undefined **)CONCAT44(uStack_44,local_48);
      uStack_1b0 = (code *)CONCAT44(uStack_3c,uStack_40);
      local_1a8 = local_38;
      uVar11 = ::alloc::boxed::Box<T>::new(&local_1b8);
    }
    param_1[1] = uVar11;
    ppuVar12 = &PTR_drop_in_place<uucore_mods_error_USimpleError>_002bd388;
  }
  else {
    uVar11 = *(undefined8 *)(lVar9 + 8);
    uVar1 = *(undefined8 *)(lVar9 + 0x10);
    uVar10 = core::num::_<impl_core::str::traits::FromStr_for_u32>::from_str(uVar11,uVar1);
    if ((uVar10 & 1) == 0) {
      local_a8 = CONCAT44(local_a8._4_4_,(int)(uVar10 >> 0x20));
      goto LAB_001fa1fd;
    }
    local_138 = (undefined **)0x0;
    uStack_120 = CONCAT71(uStack_120._1_7_,1);
    local_168 = &local_138;
    local_160 = _<os_display::Quoted_as_core::fmt::Display>::fmt;
    local_1b8 = &PTR_s_invalid_maximum_number_of_unchan_002bd550;
    uStack_1b0 = (code *)0x1;
    uStack_198 = (undefined *)0x0;
    local_1a8 = &local_168;
    uStack_1a0 = 1;
    uStack_130 = (code *)uVar11;
    local_128 = (long **)uVar1;
    core::option::Option<T>::map_or_else(&local_78,&local_1b8);
    uStack_1a0 = CONCAT44(uStack_1a0._4_4_,1);
    local_1b8 = (undefined **)CONCAT44(uStack_74,local_78);
    uStack_1b0 = (code *)CONCAT44(uStack_6c,uStack_70);
    local_1a8 = local_68;
    uVar11 = ::alloc::boxed::Box<T>::new(&local_1b8);
    param_1[1] = uVar11;
    ppuVar12 = &PTR_drop_in_place<uucore_mods_error_UUsageError>_002bd4e0;
  }
  param_1[2] = ppuVar12;
  *param_1 = 5;
LAB_001fa645:
  core::ptr::drop_in_place<uu_tail::args::Settings>(&local_e8);
  return param_1;
}