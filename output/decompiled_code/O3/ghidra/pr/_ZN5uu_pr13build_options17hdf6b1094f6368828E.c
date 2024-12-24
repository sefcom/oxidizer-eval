undefined8 * __rustcall
uu_pr::build_options
          (undefined8 *param_1,undefined8 param_2,long *param_3,undefined8 *******param_4,
          undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  char *pcVar2;
  bool bVar3;
  undefined8 *******pppppppuVar4;
  byte bVar5;
  char cVar6;
  char cVar7;
  long lVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 *******pppppppuVar11;
  char *pcVar12;
  undefined8 uVar13;
  undefined8 *******pppppppuVar14;
  char *pcVar15;
  undefined8 *******pppppppuVar16;
  ulong uVar17;
  long lVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined local_33d;
  undefined4 local_33c;
  undefined8 *local_338;
  byte local_329;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined4 local_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined8 local_2e8;
  undefined4 local_2cc;
  undefined8 local_2c8;
  uint local_2bc;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 ******local_298;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined4 local_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined8 local_278;
  undefined8 local_268;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 local_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined8 ******local_248;
  undefined8 ******local_240;
  undefined8 ******local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 ******local_220;
  undefined8 ******local_218;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined8 ******local_208;
  undefined8 ******local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 ******local_1d8;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 ******local_1b8;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 ******local_198;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 ******local_178;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 ******local_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined local_120 [32];
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined local_e8 [32];
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
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined local_48 [24];
  
  local_338 = param_1;
  local_238 = param_4;
  local_230 = param_5;
  local_228 = param_6;
  bVar5 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(param_2,"form-feed",9);
  cVar6 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(param_2,"merge",5);
  if (cVar6 != '\0') {
    cVar7 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(param_2,"column",6);
    if (cVar7 != '\0') {
      pcVar15 = 
      "cannot specify number of columns when printing in parallel/home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/regex-1.11.1/src/regex/string.rsinvalid + argument invalid --pages argument invalid - argument "
      ;
      uVar13 = 0x3a;
LAB_002c39f2:
      _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_328,pcVar15,uVar13);
      local_338[1] = 0x8000000000000001;
      local_338[2] = local_328;
      local_338[3] = uStack_320;
      local_338[4] = local_318;
      *local_338 = 2;
      return local_338;
    }
    cVar7 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(param_2,"across",6);
    if (cVar7 != '\0') {
      pcVar15 = "cannot specify both printing across and printing in parallel";
      uVar13 = 0x3c;
      goto LAB_002c39f2;
    }
  }
  local_329 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(param_2,"merge",5);
  pcVar15 = "header";
  local_2c8 = param_2;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&local_328,param_2,"header",6)
  ;
  lVar8 = clap_builder::parser::error::MatchesError::unwrap("header",6,&local_328);
  if (lVar8 == 0) {
    lVar18 = 0;
    if (cVar6 != '\0') goto LAB_002c3a8e;
LAB_002c3aa0:
    if ((undefined8 *******)local_238 == (undefined8 *******)0x0) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_bounds_check(0,0,&PTR_s_src_uu_pr_src_pr_rs_00408890);
    }
    lVar1 = *param_3;
    pcVar2 = (char *)param_3[1];
    cVar7 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(lVar1,pcVar2,"-",1);
    pcVar12 = (char *)0x0;
    lVar8 = 1;
    if (cVar7 == '\0') {
      pcVar12 = pcVar2;
      lVar8 = lVar1;
    }
  }
  else {
    lVar18 = *(long *)(lVar8 + 8);
    pcVar15 = *(char **)(lVar8 + 0x10);
    if (cVar6 == '\0') goto LAB_002c3aa0;
LAB_002c3a8e:
    pcVar12 = (char *)0x0;
    lVar8 = 1;
  }
  if (lVar18 != 0) {
    lVar8 = lVar18;
    pcVar12 = pcVar15;
  }
  _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_328,lVar8,pcVar12);
  local_198 = local_318;
  local_1a8 = (undefined4)local_328;
  uStack_1a4 = local_328._4_4_;
  uStack_1a0 = (undefined4)uStack_320;
  uStack_19c = uStack_320._4_4_;
                    /* try { // try from 002c3b26 to 002c3c4f has its CatchHandler @ 002c4df4 */
  _<uu_pr::NumberingMode_as_core::default::Default>::default(&local_328);
  pppppppuVar16 = local_308;
  core::ptr::drop_in_place<uu_pr::NumberingMode>(&local_328);
  parse_usize(&local_2b8,local_2c8,"first-line-number",0x11);
  pppppppuVar11 = (undefined8 *******)uStack_2b0;
  pppppppuVar14 = (undefined8 *******)local_2b8;
  uStack_320 = pppppppuVar16;
  local_328 = (undefined **)0x8000000000000005;
  if ((undefined8 *******)local_2b8 != (undefined8 *******)0x8000000000000006) {
    local_148 = (undefined4)local_2a8;
    uStack_144 = local_2a8._4_4_;
    uStack_140 = (undefined4)uStack_2a0;
    uStack_13c = uStack_2a0._4_4_;
    core::ptr::drop_in_place<core::result::Result<usize,uu_pr::PrError>>(&local_328);
    pppppppuVar16 = pppppppuVar11;
    if (pppppppuVar14 != (undefined8 *******)0x8000000000000005) {
      *(undefined4 *)(local_338 + 3) = local_148;
      *(undefined4 *)((long)local_338 + 0x1c) = uStack_144;
      *(undefined4 *)(local_338 + 4) = uStack_140;
      *(undefined4 *)((long)local_338 + 0x24) = uStack_13c;
      local_338[1] = pppppppuVar14;
      local_338[2] = pppppppuVar11;
      *local_338 = 2;
      goto LAB_002c4ac3;
    }
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
            (&local_328,local_2c8,"number-lines",0xc);
  lVar8 = clap_builder::parser::error::MatchesError::unwrap("number-lines",0xc,&local_328);
  if (lVar8 == 0) {
    local_2b8 = (char *)0x8000000000000000;
  }
  else {
    build_options::___closure__
              (&local_328,pppppppuVar16,*(undefined8 *)(lVar8 + 8),*(undefined8 *)(lVar8 + 0x10));
    local_298 = local_308;
    local_2a8 = local_318;
    uStack_2a0 = (code *)uStack_310;
    local_2b8 = (char *)local_328;
    uStack_2b0 = (code *)uStack_320;
  }
  core::option::Option<T>::or_else(&local_148,&local_2b8,local_2c8);
  uVar13 = local_2c8;
                    /* try { // try from 002c3c50 to 002c3cae has its CatchHandler @ 002c4de5 */
  cVar7 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag
                    (local_2c8,"double-space",0xc);
  if (cVar7 == '\0') {
    _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_328,"\n argument ",1);
    local_1d8 = local_318;
    local_1e8 = (undefined4)local_328;
    uStack_1e4 = local_328._4_4_;
    uStack_1e0 = (undefined4)uStack_320;
    uStack_1dc = uStack_320._4_4_;
  }
  else {
    ::alloc::str::_<impl_str>::repeat(&local_1e8,"\n argument ",1,2);
  }
                    /* try { // try from 002c3cc9 to 002c3cde has its CatchHandler @ 002c4de0 */
  _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_328,"\n argument ",1);
  local_178 = local_318;
  local_188 = (undefined4)local_328;
  uStack_184 = local_328._4_4_;
  uStack_180 = (undefined4)uStack_320;
  uStack_17c = uStack_320._4_4_;
  if (cVar6 == '\0') {
    if ((undefined8 *******)local_238 == (undefined8 *******)0x0) {
                    /* try { // try from 002c4d2d to 002c4d3d has its CatchHandler @ 002c4def */
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_bounds_check(0,0,&PTR_s_src_uu_pr_src_pr_rs_004088a8);
    }
    lVar8 = *param_3;
    lVar18 = param_3[1];
                    /* try { // try from 002c3d15 to 002c3d8e has its CatchHandler @ 002c4def */
    cVar6 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(lVar8,lVar18,"-",1);
    if (cVar6 != '\0') goto LAB_002c3d34;
    uVar9 = file_last_modified_time(&local_168,lVar8,lVar18);
  }
  else {
LAB_002c3d34:
    chrono::offset::local::Local::now(&local_268);
    local_2b8 = "%b %d %H:%M %Y";
    uStack_2b0 = (code *)0xe;
    local_2a8 = (undefined8 *******)&DAT_00000008;
    uStack_2a0 = (code *)0x0;
    chrono::datetime::DateTime<Tz>::format_with_items(&local_328,&local_268,&local_2b8);
                    /* try { // try from 002c3d8f to 002c3da0 has its CatchHandler @ 002c4d8e */
    _<T_as_alloc::string::ToString>::to_string(&local_168,&local_328);
                    /* try { // try from 002c3da1 to 002c3de4 has its CatchHandler @ 002c4def */
    uVar9 = core::ptr::
            drop_in_place<chrono::format::formatting::DelayedFormat<chrono::format::strftime::StrftimeItems>>
                      (&local_328);
  }
  local_2cc = (undefined4)CONCAT71((int7)((ulong)uVar9 >> 8),1);
                    /* try { // try from 002c3deb to 002c3e1a has its CatchHandler @ 002c4dea */
  regex::regex::string::Regex::new(&local_328,"\\s*\\+(\\d+:*\\d*)\\s*",0x12);
  core::result::Result<T,E>::unwrap(local_120,&local_328,&PTR_s_src_uu_pr_src_pr_rs_004088c0);
                    /* try { // try from 002c3e1b to 002c43eb has its CatchHandler @ 002c4df9 */
  regex::regex::string::Regex::captures_at(&local_2b8,local_120,local_230,local_228);
  if ((int)local_2b8 == 2) {
    local_248 = (undefined8 ******)&DAT_00000001;
LAB_002c3efd:
    regex::regex::string::Regex::captures_at(&local_2b8,local_120,local_230,local_228);
    if ((int)local_2b8 == 2) {
      uVar9 = 0;
    }
    else {
      local_2e8 = local_278;
      local_2f8 = local_288;
      uStack_2f4 = uStack_284;
      uStack_2f0 = uStack_280;
      uStack_2ec = uStack_27c;
      local_308 = (undefined8 *******)local_298;
      uStack_300 = uStack_290;
      uStack_2fc = uStack_28c;
      local_318 = local_2a8;
      uStack_310 = (undefined8 *******)uStack_2a0;
      local_328 = (undefined **)local_2b8;
      uStack_320 = (undefined8 *******)uStack_2b0;
      uVar9 = build_options::___closure__(&local_328);
    }
    lVar8 = core::option::Option<T>::filter(uVar9);
    if (lVar8 == 0) {
      bVar3 = false;
LAB_002c3fdd:
      clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
                (&local_328,uVar13,"pages",5);
      lVar8 = clap_builder::parser::error::MatchesError::unwrap("pages",5,&local_328);
      if (lVar8 != 0) {
        build_options::___closure__
                  (&local_328,*(undefined8 *)(lVar8 + 8),*(undefined8 *)(lVar8 + 0x10));
        local_268 = uStack_320;
        uStack_260 = (undefined4)local_318;
        uStack_25c = local_318._4_4_;
        if ((undefined8 *******)local_328 != (undefined8 *******)0x8000000000000000) {
          uStack_2b0 = (code *)uStack_320;
          local_2a8 = local_318;
          local_2b8 = (char *)local_328;
          core::ops::function::FnOnce::call_once(&local_328,uVar13,&local_2b8);
          local_a8 = (undefined4)local_318;
          uStack_a4 = local_318._4_4_;
          uStack_a0 = (undefined4)uStack_310;
          uStack_9c = uStack_310._4_4_;
          if ((undefined8 *******)local_328 == (undefined8 *******)0x8000000000000005) {
            local_248 = uStack_320;
          }
          else {
            pppppppuVar16 = uStack_320;
            pppppppuVar14 = (undefined8 *******)local_328;
            uVar19 = (undefined4)local_318;
            uVar20 = local_318._4_4_;
            uVar21 = (undefined4)uStack_310;
            uVar22 = uStack_310._4_4_;
            if ((undefined8 *******)local_328 != (undefined8 *******)0x8000000000000006)
            goto LAB_002c4796;
          }
        }
      }
      local_150 = local_248;
      clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
                (&local_328,uVar13,"pages",5);
      uVar9 = clap_builder::parser::error::MatchesError::unwrap("pages",5,&local_328);
      lVar8 = core::option::Option<T>::filter(uVar9);
      if (lVar8 == 0) {
LAB_002c41b9:
        if (bVar3) goto LAB_002c41cd;
        local_1f0 = 0;
      }
      else {
        build_options::___closure__
                  (&local_328,*(undefined8 *)(lVar8 + 8),*(undefined8 *)(lVar8 + 0x10));
        local_268 = uStack_320;
        uStack_260 = (undefined4)local_318;
        uStack_25c = local_318._4_4_;
        if ((undefined8 *******)local_328 == (undefined8 *******)0x8000000000000000)
        goto LAB_002c41b9;
        uStack_2b0 = (code *)uStack_320;
        local_2a8 = local_318;
        local_2b8 = (char *)local_328;
        core::ops::function::FnOnce::call_once(&local_328,uVar13,&local_2b8);
        local_98 = (undefined4)local_318;
        uStack_94 = local_318._4_4_;
        uStack_90 = (undefined4)uStack_310;
        uStack_8c = uStack_310._4_4_;
        if ((undefined8 *******)local_328 != (undefined8 *******)0x8000000000000005) {
          pppppppuVar16 = uStack_320;
          pppppppuVar14 = (undefined8 *******)local_328;
          uVar19 = (undefined4)local_318;
          uVar20 = local_318._4_4_;
          uVar21 = (undefined4)uStack_310;
          uVar22 = uStack_310._4_4_;
          if ((undefined8 *******)local_328 != (undefined8 *******)0x8000000000000006)
          goto LAB_002c4796;
          goto LAB_002c41b9;
        }
        local_240 = uStack_320;
LAB_002c41cd:
        local_268 = (undefined8 *******)local_240;
        if (local_240 < local_248) {
          local_2b8 = (char *)&local_150;
          uStack_2b0 = core::fmt::num::imp::_<impl_core::fmt::Display_for_u64>::fmt;
          local_2a8 = (undefined8 *******)&local_268;
          uStack_2a0 = core::fmt::num::imp::_<impl_core::fmt::Display_for_u64>::fmt;
          local_328 = &PTR_s_invalid___pages_argument_____004088d8;
          uStack_320 = (undefined8 *******)0x3;
          local_308 = (undefined8 *******)0x0;
          uStack_310 = (undefined8 *******)0x2;
          local_318 = (undefined8 *******)&local_2b8;
          core::option::Option<T>::map_or_else(&local_60,&local_328);
          local_338[4] = local_50;
          *(undefined4 *)(local_338 + 2) = local_60;
          *(undefined4 *)((long)local_338 + 0x14) = uStack_5c;
          *(undefined4 *)(local_338 + 3) = uStack_58;
          *(undefined4 *)((long)local_338 + 0x1c) = uStack_54;
          local_338[1] = 0x8000000000000001;
          *local_338 = 2;
          goto LAB_002c4a82;
        }
        local_1f0 = 1;
      }
      parse_usize(&local_2b8,uVar13,"length",6);
      pppppppuVar14 = (undefined8 *******)uStack_2b0;
      pppppppuVar16 = (undefined8 *******)local_2b8;
      uStack_320 = (undefined8 *******)((ulong)(bVar5 ^ 1) * 3 + 0x3f);
      local_328 = (undefined **)0x8000000000000005;
      pppppppuVar11 = uStack_320;
      if ((undefined8 *******)local_2b8 == (undefined8 *******)0x8000000000000006) {
LAB_002c42e7:
        local_2bc = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag
                              (uVar13,"omit-header",0xb);
        local_2bc = local_2bc ^ 1;
        pppppppuVar14 = (undefined8 *******)((long)pppppppuVar11 + -10);
      }
      else {
        local_268 = local_2a8;
        uStack_260 = (undefined4)uStack_2a0;
        uStack_25c = uStack_2a0._4_4_;
        core::ptr::drop_in_place<core::result::Result<usize,uu_pr::PrError>>(&local_328);
        if (pppppppuVar16 != (undefined8 *******)0x8000000000000005) {
          *(undefined4 *)(local_338 + 3) = (undefined4)local_268;
          *(undefined4 *)((long)local_338 + 0x1c) = local_268._4_4_;
          *(undefined4 *)(local_338 + 4) = uStack_260;
          *(undefined4 *)((long)local_338 + 0x24) = uStack_25c;
          local_338[1] = pppppppuVar16;
          local_338[2] = pppppppuVar14;
          *local_338 = 2;
          goto LAB_002c4a82;
        }
        pppppppuVar11 = pppppppuVar14;
        if (&DAT_00000009 < pppppppuVar14) goto LAB_002c42e7;
        local_2bc = 0;
      }
      cVar6 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(uVar13,"form-feed",9)
      ;
      if (cVar6 == '\0') {
        _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_328,"\n argument ",1);
        local_1b8 = local_318;
        local_1c8 = (undefined4)local_328;
        uStack_1c4 = local_328._4_4_;
        uStack_1c0 = (undefined4)uStack_320;
        uStack_1bc = uStack_320._4_4_;
      }
      else {
        puVar10 = (undefined *)::alloc::alloc::Global::alloc_impl(1,1);
        if (puVar10 == (undefined *)0x0) {
                    /* try { // try from 002c4d40 to 002c4d4f has its CatchHandler @ 002c4df9 */
                    /* WARNING: Subroutine does not return */
          ::alloc::alloc::handle_alloc_error(1,1);
        }
        *puVar10 = 0xc;
        ::alloc::slice::hack::into_vec(local_48,puVar10,1);
        ::alloc::string::String::from_utf8(&local_328,local_48);
        core::result::Result<T,E>::unwrap(&local_1c8,&local_328,&PTR_s_src_uu_pr_src_pr_rs_00408908)
        ;
      }
                    /* try { // try from 002c4406 to 002c44d8 has its CatchHandler @ 002c4da0 */
      local_33d = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag
                            (uVar13,"across",6);
      clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
                (&local_328,uVar13,"sep-string",10);
      lVar8 = clap_builder::parser::error::MatchesError::unwrap("sep-string",10,&local_328);
      if (lVar8 == 0) {
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
                  (&local_328,uVar13,"separator",9);
        lVar8 = clap_builder::parser::error::MatchesError::unwrap("separator",9,&local_328);
        if (lVar8 != 0) goto LAB_002c4487;
LAB_002c44af:
        local_268 = (undefined8 *******)((ulong)local_268 & 0xffffffff00000000);
        uVar9 = core::char::methods::encode_utf8_raw(9,&local_268);
        _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_328,uVar9);
        uStack_210 = (undefined4)uStack_320;
        uStack_20c = uStack_320._4_4_;
        pppppppuVar16 = local_318;
      }
      else {
LAB_002c4487:
        core::ops::function::FnOnce::call_once(&local_328,lVar8);
        uStack_210 = SUB84(uStack_320,0);
        local_2b8 = (char *)uStack_320;
        uStack_2b0 = (code *)local_318;
        if ((undefined8 *******)local_328 == (undefined8 *******)0x8000000000000000)
        goto LAB_002c44af;
        uStack_20c = uStack_320._4_4_;
        pppppppuVar16 = (undefined8 *******)local_328;
      }
      local_33c = (undefined4)CONCAT71((int7)((ulong)pppppppuVar16 >> 8),1);
      local_218 = (undefined8 ******)local_328;
      local_208 = local_318;
                    /* try { // try from 002c4516 to 002c4663 has its CatchHandler @ 002c4da5 */
      cVar6 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(uVar13,"width",5);
      pppppppuVar16 = (undefined8 *******)&DAT_00000048;
      if (cVar6 != '\0') {
        cVar6 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id
                          (local_2c8,"separator",9);
        pppppppuVar16 = (undefined8 *******)&DAT_00000048;
        if (cVar6 != '\0') {
          pppppppuVar16 = (undefined8 *******)0x200;
        }
      }
      parse_usize(&local_2b8,local_2c8,"width");
      pppppppuVar4 = (undefined8 *******)uStack_2b0;
      pppppppuVar11 = (undefined8 *******)local_2b8;
      local_328 = (undefined **)0x8000000000000005;
      uStack_320 = pppppppuVar16;
      if ((undefined8 *******)local_2b8 == (undefined8 *******)0x8000000000000006) {
LAB_002c45cc:
        local_220 = pppppppuVar16;
        cVar6 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag
                          (local_2c8,"join-lines",10);
        if ((cVar6 == '\0') &&
           (parse_usize(&local_328,local_2c8,"page-width"),
           (undefined8 *******)local_328 != (undefined8 *******)0x8000000000000006)) {
          uVar13 = 1;
          pppppppuVar16 = uStack_320;
          if ((undefined8 *******)local_328 != (undefined8 *******)0x8000000000000005) {
            *(undefined4 *)(local_338 + 3) = (undefined4)local_318;
            *(undefined4 *)((long)local_338 + 0x1c) = local_318._4_4_;
            *(undefined4 *)(local_338 + 4) = (undefined4)uStack_310;
            *(undefined4 *)((long)local_338 + 0x24) = uStack_310._4_4_;
            local_338[1] = local_328;
            local_338[2] = uStack_320;
            *local_338 = 2;
            goto LAB_002c4a68;
          }
        }
        else {
          uVar13 = 0;
          pppppppuVar16 = (undefined8 *******)local_200;
        }
        local_200 = pppppppuVar16;
        local_1f8 = uVar13;
        regex::regex::string::Regex::new(&local_328,"\\s*-(\\d+)\\s*",0xc);
        pppppppuVar16 = (undefined8 *******)0x0;
        uVar13 = core::result::Result<T,E>::unwrap
                           (local_e8,&local_328,&PTR_s_src_uu_pr_src_pr_rs_00408920);
        local_33c = (undefined4)CONCAT71((int7)((ulong)uVar13 >> 8),1);
                    /* try { // try from 002c466a to 002c4858 has its CatchHandler @ 002c4d79 */
        regex::regex::string::Regex::captures_at(&local_2b8,local_e8,local_230,local_228);
        uVar13 = local_2c8;
        if ((int)local_2b8 == 2) {
          bVar3 = true;
LAB_002c47d6:
          parse_usize(&local_328,uVar13,"column",6);
          if ((undefined8 *******)local_328 != (undefined8 *******)0x8000000000000006) {
            pppppppuVar16 = uStack_320;
            if ((undefined8 *******)local_328 == (undefined8 *******)0x8000000000000005)
            goto LAB_002c4899;
            pppppppuVar11 = (undefined8 *******)local_328;
            local_258 = (undefined4)local_318;
            uStack_254 = local_318._4_4_;
            uStack_250 = (undefined4)uStack_310;
            uStack_24c = uStack_310._4_4_;
            goto LAB_002c49d7;
          }
          uStack_2a0 = (code *)&local_220;
          local_2b8 = (char *)local_218;
          uStack_2b0._0_4_ = uStack_210;
          uStack_2b0._4_4_ = uStack_20c;
          local_2a8 = (undefined8 *******)local_208;
          local_298 = (undefined8 ******)&local_33d;
          if (bVar3) {
            local_328 = (undefined **)0x8000000000000000;
            local_33c = 0;
            core::ptr::drop_in_place<uu_pr::build_options::__closure__>(&local_2b8);
          }
          else {
LAB_002c4899:
            uStack_2a0 = (code *)&local_220;
            local_2b8 = (char *)local_218;
            uStack_2b0._4_4_ = uStack_20c;
            uStack_2b0._0_4_ = uStack_210;
            local_2a8 = (undefined8 *******)local_208;
            local_318 = (undefined8 *******)local_208;
            local_328 = (undefined **)local_218;
            uStack_320 = (undefined8 *******)CONCAT44(uStack_20c,uStack_210);
            uStack_310 = (undefined8 *******)local_220;
            uStack_300 = CONCAT31(uStack_300._1_3_,local_33d);
            local_308 = pppppppuVar16;
          }
                    /* try { // try from 002c48ce to 002c495a has its CatchHandler @ 002c4d62 */
          parse_usize(&local_268,uVar13,"indent",6);
          pppppppuVar16 = local_268;
          uStack_2b0 = (code *)0x0;
          local_2b8 = (char *)0x8000000000000005;
          if (local_268 == (undefined8 *******)0x8000000000000006) {
            uVar13 = 0;
LAB_002c493e:
            ::alloc::str::_<impl_str>::repeat(&local_100," ",1,uVar13);
                    /* try { // try from 002c495b to 002c49cc has its CatchHandler @ 002c4d50 */
            cVar6 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag
                              (local_2c8,"join-lines",10);
            uVar17 = (ulong)local_329;
            if ((undefined8 *******)local_328 != (undefined8 *******)0x8000000000000000) {
              _<alloc::string::String_as_core::clone::Clone>::clone(&local_2b8,&local_328);
              local_268 = (undefined8 *******)uStack_2b0;
              uStack_260 = (undefined4)local_2a8;
              uStack_25c = local_2a8._4_4_;
              if ((undefined8 *******)local_2b8 != (undefined8 *******)0x8000000000000000)
              goto LAB_002c4aff;
            }
            build_options::___closure__(&local_2b8,uVar17);
LAB_002c4aff:
            pppppppuVar16 = (undefined8 *******)local_238;
            uVar13 = local_1f8;
            if ((uVar17 == 0) &&
               (pppppppuVar16 = local_308,
               (undefined8 *******)local_328 == (undefined8 *******)0x8000000000000000)) {
              if (cVar6 != '\0') {
                uVar13 = 0;
              }
            }
            else if (cVar6 == '\0') {
              if (&DAT_00000001 < pppppppuVar16) {
                local_200 = (undefined8 ******)&DAT_00000048;
                if ((undefined8 *******)local_328 != (undefined8 *******)0x8000000000000000) {
                  local_200 = uStack_310;
                }
                uVar13 = 1;
              }
            }
            else {
              uVar13 = 0;
            }
            local_338[0x1f] = local_128;
            local_338[0x1d] = local_138;
            local_338[0x1e] = uStack_130;
            local_338[0x1b] = CONCAT44(uStack_144,local_148);
            local_338[0x1c] = CONCAT44(uStack_13c,uStack_140);
            local_338[8] = local_198;
            local_338[6] = CONCAT44(uStack_1a4,local_1a8);
            local_338[7] = CONCAT44(uStack_19c,uStack_1a0);
            local_338[0xb] = local_178;
            local_338[9] = CONCAT44(uStack_184,local_188);
            local_338[10] = CONCAT44(uStack_17c,uStack_180);
            local_338[0xe] = local_1d8;
            local_338[0xc] = CONCAT44(uStack_1e4,local_1e8);
            local_338[0xd] = CONCAT44(uStack_1dc,uStack_1e0);
            local_338[0xf] = local_168;
            local_338[0x10] = uStack_160;
            local_338[0x11] = local_158;
            local_338[0x12] = CONCAT44(uStack_1c4,local_1c8);
            local_338[0x13] = CONCAT44(uStack_1bc,uStack_1c0);
            local_338[0x14] = local_1b8;
            local_338[0x20] = local_328;
            local_338[0x21] = uStack_320;
            *(undefined4 *)(local_338 + 0x22) = (undefined4)local_318;
            *(undefined4 *)((long)local_338 + 0x114) = local_318._4_4_;
            *(undefined4 *)(local_338 + 0x23) = (undefined4)uStack_310;
            *(undefined4 *)((long)local_338 + 0x11c) = uStack_310._4_4_;
            *(undefined4 *)(local_338 + 0x24) = (undefined4)local_308;
            *(undefined4 *)((long)local_338 + 0x124) = local_308._4_4_;
            *(undefined4 *)(local_338 + 0x25) = uStack_300;
            *(undefined4 *)((long)local_338 + 300) = uStack_2fc;
            local_338[0x15] = local_100;
            local_338[0x16] = uStack_f8;
            local_338[0x17] = local_f0;
            *(int *)(local_338 + 0x18) = (int)local_2b8;
            *(undefined4 *)((long)local_338 + 0xc4) = local_2b8._4_4_;
            *(undefined4 *)(local_338 + 0x19) = (undefined4)uStack_2b0;
            *(undefined4 *)((long)local_338 + 0xcc) = uStack_2b0._4_4_;
            local_338[0x1a] = local_2a8;
            *local_338 = local_1f0;
            local_338[1] = local_240;
            local_338[2] = uVar17;
            local_338[3] = local_238;
            local_338[4] = uVar13;
            local_338[5] = local_200;
            local_338[0x26] = local_248;
            local_338[0x27] = pppppppuVar14;
            *(char *)(local_338 + 0x28) = cVar7;
            *(char *)((long)local_338 + 0x141) = (char)local_2bc;
            *(byte *)((long)local_338 + 0x142) = bVar5;
            *(char *)((long)local_338 + 0x143) = cVar6;
            local_33c = 0;
                    /* try { // try from 002c4cf5 to 002c4d01 has its CatchHandler @ 002c4da5 */
            core::ptr::drop_in_place<regex::regex::string::Regex>(local_e8);
            local_2cc = 0;
                    /* try { // try from 002c4d0a to 002c4d16 has its CatchHandler @ 002c4dea */
            core::ptr::drop_in_place<regex::regex::string::Regex>(local_120);
            return local_338;
          }
          uVar13 = CONCAT44(uStack_25c,uStack_260);
          local_78 = local_258;
          uStack_74 = uStack_254;
          uStack_70 = uStack_250;
          uStack_6c = uStack_24c;
          core::ptr::drop_in_place<core::result::Result<usize,uu_pr::PrError>>(&local_2b8);
          if (pppppppuVar16 == (undefined8 *******)0x8000000000000005) goto LAB_002c493e;
          *(undefined4 *)(local_338 + 3) = local_78;
          *(undefined4 *)((long)local_338 + 0x1c) = uStack_74;
          *(undefined4 *)(local_338 + 4) = uStack_70;
          *(undefined4 *)((long)local_338 + 0x24) = uStack_6c;
          local_338[1] = pppppppuVar16;
          local_338[2] = uVar13;
          *local_338 = 2;
          local_33c = 0;
                    /* try { // try from 002c4a21 to 002c4a2a has its CatchHandler @ 002c4d79 */
          core::ptr::drop_in_place<core::option::Option<uu_pr::ColumnModeOptions>>(&local_328);
          bVar3 = true;
          local_33c = 0;
        }
        else {
          local_2e8 = local_278;
          local_2f8 = local_288;
          uStack_2f4 = uStack_284;
          uStack_2f0 = uStack_280;
          uStack_2ec = uStack_27c;
          local_308 = (undefined8 *******)local_298;
          uStack_300 = uStack_290;
          uStack_2fc = uStack_28c;
          local_318 = local_2a8;
          uStack_310 = (undefined8 *******)uStack_2a0;
          local_328 = (undefined **)local_2b8;
          uStack_320 = (undefined8 *******)uStack_2b0;
          build_options::___closure__(&local_268,&local_328);
          pppppppuVar16 = (undefined8 *******)CONCAT44(uStack_25c,uStack_260);
          local_88 = local_258;
          uStack_84 = uStack_254;
          uStack_80 = uStack_250;
          uStack_7c = uStack_24c;
          if (local_268 == (undefined8 *******)0x8000000000000005) {
            bVar3 = false;
            goto LAB_002c47d6;
          }
          bVar3 = true;
          pppppppuVar11 = local_268;
          if (local_268 == (undefined8 *******)0x8000000000000006) goto LAB_002c47d6;
LAB_002c49d7:
          *(undefined4 *)(local_338 + 3) = local_258;
          *(undefined4 *)((long)local_338 + 0x1c) = uStack_254;
          *(undefined4 *)(local_338 + 4) = uStack_250;
          *(undefined4 *)((long)local_338 + 0x24) = uStack_24c;
          local_338[1] = pppppppuVar11;
          local_338[2] = pppppppuVar16;
          *local_338 = 2;
          local_33c = (undefined4)CONCAT71((int7)((ulong)pppppppuVar11 >> 8),1);
          bVar3 = false;
        }
                    /* try { // try from 002c4a38 to 002c4a44 has its CatchHandler @ 002c4da5 */
        core::ptr::drop_in_place<regex::regex::string::Regex>(local_e8);
        if (!bVar3) goto LAB_002c4a68;
      }
      else {
        local_268 = local_2a8;
        uStack_260 = (undefined4)uStack_2a0;
        uStack_25c = uStack_2a0._4_4_;
        core::ptr::drop_in_place<core::result::Result<usize,uu_pr::PrError>>(&local_328);
        pppppppuVar16 = pppppppuVar4;
        if (pppppppuVar11 == (undefined8 *******)0x8000000000000005) goto LAB_002c45cc;
        *(undefined4 *)(local_338 + 3) = (undefined4)local_268;
        *(undefined4 *)((long)local_338 + 0x1c) = local_268._4_4_;
        *(undefined4 *)(local_338 + 4) = uStack_260;
        *(undefined4 *)((long)local_338 + 0x24) = uStack_25c;
        local_338[1] = pppppppuVar11;
        local_338[2] = pppppppuVar4;
        *local_338 = 2;
LAB_002c4a68:
                    /* try { // try from 002c4a68 to 002c4a74 has its CatchHandler @ 002c4da0 */
        core::ptr::drop_in_place<alloc::string::String>(&local_218);
      }
                    /* try { // try from 002c4a75 to 002c4a81 has its CatchHandler @ 002c4df9 */
      core::ptr::drop_in_place<alloc::string::String>(&local_1c8);
    }
    else {
      build_options::___closure__(&local_328,lVar8);
      local_240 = uStack_320;
      local_b8 = (undefined4)local_318;
      uStack_b4 = local_318._4_4_;
      uStack_b0 = (undefined4)uStack_310;
      uStack_ac = uStack_310._4_4_;
      if ((undefined8 *******)local_328 == (undefined8 *******)0x8000000000000005) {
        bVar3 = true;
        goto LAB_002c3fdd;
      }
      if ((undefined8 *******)local_328 == (undefined8 *******)0x8000000000000006) {
        bVar3 = false;
        goto LAB_002c3fdd;
      }
      *(undefined4 *)(local_338 + 3) = (undefined4)local_318;
      *(undefined4 *)((long)local_338 + 0x1c) = local_318._4_4_;
      *(undefined4 *)(local_338 + 4) = (undefined4)uStack_310;
      *(undefined4 *)((long)local_338 + 0x24) = uStack_310._4_4_;
      local_338[1] = local_328;
      local_338[2] = uStack_320;
      *local_338 = 2;
    }
  }
  else {
    local_2e8 = local_278;
    local_2f8 = local_288;
    uStack_2f4 = uStack_284;
    uStack_2f0 = uStack_280;
    uStack_2ec = uStack_27c;
    local_308 = (undefined8 *******)local_298;
    uStack_300 = uStack_290;
    uStack_2fc = uStack_28c;
    local_318 = local_2a8;
    uStack_310 = (undefined8 *******)uStack_2a0;
    local_328 = (undefined **)local_2b8;
    uStack_320 = (undefined8 *******)uStack_2b0;
    build_options::___closure__(&local_268,&local_328);
    local_c8 = local_258;
    uStack_c4 = uStack_254;
    uStack_c0 = uStack_250;
    uStack_bc = uStack_24c;
    local_248 = (undefined8 *******)CONCAT44(uStack_25c,uStack_260);
    if ((local_268 == (undefined8 *******)0x8000000000000005) ||
       (local_248 = (undefined8 ******)&DAT_00000001,
       pppppppuVar16 = (undefined8 *******)CONCAT44(uStack_25c,uStack_260),
       pppppppuVar14 = local_268, uVar19 = local_258, uVar20 = uStack_254, uVar21 = uStack_250,
       uVar22 = uStack_24c, local_268 == (undefined8 *******)0x8000000000000006)) goto LAB_002c3efd;
LAB_002c4796:
    *(undefined4 *)(local_338 + 3) = uVar19;
    *(undefined4 *)((long)local_338 + 0x1c) = uVar20;
    *(undefined4 *)(local_338 + 4) = uVar21;
    *(undefined4 *)((long)local_338 + 0x24) = uVar22;
    local_338[1] = pppppppuVar14;
    local_338[2] = pppppppuVar16;
    *local_338 = 2;
  }
LAB_002c4a82:
                    /* try { // try from 002c4a82 to 002c4a8e has its CatchHandler @ 002c4dea */
  core::ptr::drop_in_place<regex::regex::string::Regex>(local_120);
                    /* try { // try from 002c4a8f to 002c4a9b has its CatchHandler @ 002c4def */
  core::ptr::drop_in_place<alloc::string::String>(&local_168);
                    /* try { // try from 002c4a9c to 002c4aa8 has its CatchHandler @ 002c4de0 */
  core::ptr::drop_in_place<alloc::string::String>(&local_188);
                    /* try { // try from 002c4aa9 to 002c4ab5 has its CatchHandler @ 002c4de5 */
  core::ptr::drop_in_place<alloc::string::String>(&local_1e8);
                    /* try { // try from 002c4ab6 to 002c4ac2 has its CatchHandler @ 002c4df4 */
  core::ptr::drop_in_place<core::option::Option<uu_pr::NumberingMode>>(&local_148);
LAB_002c4ac3:
  core::ptr::drop_in_place<alloc::string::String>(&local_1a8);
  return local_338;
}