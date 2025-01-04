undefined8 * __rustcall uu_ls::Config::from(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  undefined *puVar5;
  byte bVar6;
  undefined2 uVar7;
  undefined4 uVar8;
  undefined2 uVar9;
  undefined uVar10;
  char cVar11;
  undefined uVar12;
  char cVar13;
  byte bVar14;
  undefined uVar15;
  byte bVar16;
  undefined uVar17;
  undefined uVar18;
  byte bVar19;
  byte bVar20;
  char cVar21;
  undefined uVar22;
  undefined uVar23;
  undefined uVar24;
  undefined uVar25;
  undefined uVar26;
  undefined uVar27;
  undefined4 uVar28;
  uint uVar29;
  uint uVar30;
  long lVar31;
  long lVar32;
  undefined8 uVar33;
  ulong uVar34;
  ulong uVar35;
  undefined8 *puVar36;
  ulong uVar37;
  ulong uVar38;
  undefined uVar39;
  long lVar40;
  undefined uVar41;
  undefined auVar42 [16];
  byte local_454;
  char local_450;
  char local_44c;
  char local_438;
  byte local_420;
  undefined local_408 [16];
  undefined8 local_3f8;
  undefined local_3f0;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  undefined8 local_3d8;
  byte local_3c8;
  undefined uStack_3c7;
  undefined2 uStack_3c6;
  undefined4 uStack_3c4;
  undefined8 uStack_3c0;
  undefined4 local_3b8;
  undefined4 uStack_3b4;
  undefined4 uStack_3b0;
  undefined4 uStack_3ac;
  undefined4 uStack_3a8;
  undefined4 uStack_3a4;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  undefined4 uStack_398;
  undefined4 uStack_394;
  undefined7 *local_390;
  undefined8 uStack_388;
  undefined1 *local_380;
  undefined8 local_378;
  undefined1 *puStack_370;
  undefined8 local_368;
  undefined1 *puStack_360;
  undefined8 local_358;
  undefined1 *puStack_350;
  undefined8 local_348;
  undefined6 *local_340;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 local_300;
  undefined4 local_2f8;
  undefined4 uStack_2f4;
  undefined *puStack_2f0;
  long local_2e8;
  uint local_2e0;
  uint local_2dc;
  uint local_2d8;
  uint local_2d4;
  undefined8 *local_2d0;
  code *pcStack_2c8;
  undefined8 local_2c0;
  byte local_2b8;
  undefined uStack_2b7;
  undefined2 uStack_2b6;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined4 local_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined4 local_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined4 local_288;
  undefined4 uStack_284;
  undefined8 uStack_280;
  undefined local_278 [96];
  undefined4 local_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  long local_208;
  undefined4 local_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  long local_1f0;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  long local_1d8;
  long local_1d0;
  undefined8 local_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 local_1b8;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  long local_170;
  undefined8 local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined3 uStack_158;
  undefined4 uStack_155;
  undefined4 uStack_151;
  undefined4 uStack_14d;
  undefined uStack_149;
  undefined8 local_148;
  long local_c0 [3];
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
  undefined8 local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  uVar10 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag
                     (param_2,&anon_3f7e092f2ea554bdd060175bd8ea63d9_35_llvm_16502254941234113161,7)
  ;
  extract_format(&local_3c8,param_2);
  bVar14 = local_3c8;
  lVar31 = CONCAT44(uStack_3c0._4_4_,(undefined4)uStack_3c0);
  uVar33 = CONCAT44(uStack_3b4,local_3b8);
  cVar11 = extract_files(param_2);
  uVar28 = uStack_3b4;
  local_454 = 1;
  uStack_3b4 = (undefined4)((ulong)param_2 >> 0x20);
  uVar8 = uStack_3b4;
  uStack_3c0 = (undefined *)CONCAT44(uStack_3c0._4_4_,(undefined4)uStack_3c0);
  if (bVar14 != 1) {
    if (lVar31 == 0) {
LAB_0022027c:
      local_168 = (undefined **)0x0;
    }
    else {
      auVar42 = from::___closure__(param_2,lVar31,uVar33);
      local_168 = auVar42._8_8_;
      if (auVar42._0_8_ == 0) goto LAB_0022027c;
    }
    local_2b8 = 0x56;
    uStack_2b7 = 0x6e;
    uStack_2b6 = 0x13;
    uStack_2b4 = 0;
    uStack_2b0 = 1;
    uStack_2ac = 0;
    local_2a8 = 0x136e57;
    uStack_2a4 = 0;
    uStack_2a0 = 1;
    uStack_29c = 0;
    local_298 = 0x136e58;
    uStack_294 = 0;
    uStack_290 = 0xf;
    uStack_28c = 0;
    local_288 = 0x13707c;
    uStack_284 = 0;
    uStack_280 = 9;
    uStack_3c0 = local_278;
    local_3c8 = (byte)&local_2b8;
    uStack_3c7 = (undefined)((ulong)&local_2b8 >> 8);
    uStack_3c6 = (undefined2)((ulong)&local_2b8 >> 0x10);
    uStack_3c4 = (undefined4)((ulong)&local_2b8 >> 0x20);
    local_3b8 = (undefined4)param_2;
    uStack_3b0 = 0;
    uStack_3ac = 0;
    uStack_398 = 0;
    uStack_394 = 0;
    uVar12 = core::iter::adapters::flatten::FlattenCompat<I,U>::iter_try_fold(&local_3c8,&local_168)
    ;
    cVar13 = _<core::ops::control_flow::ControlFlow<B,C>as_core::cmp::PartialEq>::eq(uVar12);
    local_454 = 1;
    uVar28 = uStack_3b4;
    if (cVar13 == '\0') {
      clap_builder::parser::matches::arg_matches::ArgMatches::indices_of
                (&local_2b8,param_2,
                 &anon_8bf1419b86641518549345aedc57e906_0_llvm_11260003342554782039,1);
      local_454 = bVar14;
      uVar28 = uStack_3b4;
      if (CONCAT44(uStack_2b4,CONCAT22(uStack_2b6,CONCAT11(uStack_2b7,local_2b8))) != 0) {
        local_3b8 = local_2a8;
        uStack_3b4 = uStack_2a4;
        local_3c8 = local_2b8;
        uStack_3c7 = uStack_2b7;
        uStack_3c6 = uStack_2b6;
        uStack_3c4 = uStack_2b4;
        uStack_3c0._0_4_ = uStack_2b0;
        uStack_3c0._4_4_ = uStack_2ac;
        cVar13 = clap_builder::parser::matches::arg_matches::ArgMatches::value_source
                           (param_2,&
                                    anon_8bf1419b86641518549345aedc57e906_0_llvm_11260003342554782039
                            ,1);
        uVar28 = uStack_3b4;
        uStack_3c0 = (undefined *)CONCAT44(uStack_3c0._4_4_,(undefined4)uStack_3c0);
        if (cVar13 == '\x02') {
          uVar12 = core::iter::traits::iterator::Iterator::try_fold(&local_3c8,&local_168);
          cVar13 = _<core::ops::control_flow::ControlFlow<B,C>as_core::cmp::PartialEq>::eq(uVar12);
          local_454 = 2;
          uVar28 = uStack_3b4;
          uStack_3c0 = (undefined *)CONCAT44(uStack_3c0._4_4_,(undefined4)uStack_3c0);
          if (cVar13 == '\0') {
            local_454 = bVar14;
            uStack_3c0 = (undefined *)CONCAT44(uStack_3c0._4_4_,(undefined4)uStack_3c0);
          }
        }
      }
    }
  }
  uStack_3b4 = uVar28;
  uVar12 = extract_sort(param_2);
  uVar28 = extract_time(param_2);
  bVar14 = extract_color(param_2);
  uVar15 = extract_hyperlink(param_2);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
            (&local_3c8,param_2,"block-size",10);
  lVar31 = clap_builder::parser::error::MatchesError::unwrap("block-size",10,&local_3c8);
  if (lVar31 == 0) {
    uVar29 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(param_2,"si",2);
    uVar37 = (ulong)uVar29;
LAB_00220578:
    bVar19 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag
                       (param_2,"human-readable",0xe);
    bVar16 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(param_2,"kibibytes",9)
    ;
    uVar29 = 2;
    if ((char)uVar37 == '\0') {
      uVar29 = (uint)bVar19;
    }
  }
  else {
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
              (&local_3c8,param_2,"block-size",10);
    lVar32 = clap_builder::parser::error::MatchesError::unwrap("block-size",10,&local_3c8);
    if (lVar32 == 0) {
      core::option::unwrap_failed(&PTR_DAT_00312418);
LAB_00221bf7:
      uVar33 = core::option::unwrap_failed(&PTR_DAT_00312430);
                    /* catch() { ... } // from try @ 00221699 with catch @ 00221c04 */
      core::ptr::drop_in_place<uu_ls::TimeStyle>(&local_1c8);
      core::ptr::drop_in_place<std::ffi::os_str::OsString>(&local_2f8);
      core::ptr::drop_in_place<core::option::Option<std::ffi::os_str::OsString>>(local_c0);
      if ((local_438 != '\0') && (CONCAT44(uStack_1e4,local_1e8) != -0x8000000000000000)) {
        core::ptr::drop_in_place<std::ffi::os_str::OsString>(&local_1e8);
      }
      if ((local_44c != '\0') && (CONCAT44(uStack_1fc,local_200) != -0x8000000000000000)) {
        core::ptr::drop_in_place<std::ffi::os_str::OsString>(&local_200);
      }
      if ((CONCAT44(uStack_214,local_218) != -0x8000000000000000) && (local_450 != '\0')) {
        core::ptr::drop_in_place<std::ffi::os_str::OsString>(&local_218);
      }
      puVar36 = (undefined8 *)_Unwind_Resume(uVar33);
      return puVar36;
    }
    cVar13 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                       (*(undefined8 *)(lVar32 + 8),*(undefined8 *)(lVar32 + 0x10),&DAT_00134e79,2);
    uVar37 = CONCAT71((uint7)(uint3)((uint)uVar28 >> 8),1);
    if (cVar13 == '\0') {
      uVar29 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(param_2,"si",2);
      uVar37 = (ulong)uVar29;
    }
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
              (&local_3c8,param_2,"block-size",10);
    lVar32 = clap_builder::parser::error::MatchesError::unwrap("block-size",10,&local_3c8);
    if (lVar32 == 0) goto LAB_00221bf7;
    cVar13 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                       (*(undefined8 *)(lVar32 + 8),*(undefined8 *)(lVar32 + 0x10),&DAT_00134e7b,0xe
                       );
    if (cVar13 == '\0') goto LAB_00220578;
    bVar16 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(param_2,"kibibytes",9)
    ;
    bVar19 = 1;
    uVar29 = (int)uVar37 + 1;
  }
  std::env::var_os(&local_218,&DAT_00134eca,9);
                    /* try { // try from 002205d4 to 002205ec has its CatchHandler @ 00221c98 */
  std::env::var_os(&local_200,&DAT_00134ed3,10);
                    /* try { // try from 002205f3 to 00220611 has its CatchHandler @ 00221c90 */
  std::env::var_os(&local_1e8,&DAT_00134edd,0xd);
                    /* try { // try from 00220618 to 0022063c has its CatchHandler @ 00221ca5 */
  std::env::var_os(local_c0,&DAT_00134eea,0xf);
  if (lVar31 == 0) {
    if (CONCAT44(uStack_1e4,local_1e8) != -0x8000000000000000) {
      local_2e8 = local_1d8;
      local_2f8 = local_1e8;
      uStack_2f4 = uStack_1e4;
      puStack_2f0 = (undefined *)CONCAT44(uStack_1dc,uStack_1e0);
      bVar2 = 1;
      goto LAB_00220737;
    }
    if (CONCAT44(uStack_1fc,local_200) != -0x8000000000000000) {
      local_2e8 = local_1f0;
      local_2f8 = local_200;
      uStack_2f4 = uStack_1fc;
      puStack_2f0 = (undefined *)CONCAT44(uStack_1f4,uStack_1f8);
      bVar2 = 0;
      bVar4 = true;
      goto LAB_00220745;
    }
    if (CONCAT44(uStack_214,local_218) == -0x8000000000000000) {
      std::sys::os_str::bytes::Slice::to_owned(&local_3c8,1,0);
      goto LAB_0022066a;
    }
    local_2e8 = local_208;
    local_2f8 = local_218;
    uStack_2f4 = uStack_214;
    puStack_2f0 = (undefined *)CONCAT44(uStack_20c,uStack_210);
    bVar3 = true;
    bVar2 = 0;
    bVar4 = false;
  }
  else {
                    /* try { // try from 00220650 to 002206fb has its CatchHandler @ 00221ca0 */
    std::sys::os_str::bytes::Slice::to_owned
              (&local_3c8,*(undefined8 *)(lVar31 + 8),*(undefined8 *)(lVar31 + 0x10));
LAB_0022066a:
    local_2e8 = CONCAT44(uStack_3b4,local_3b8);
    local_2f8 = CONCAT22(uStack_3c6,CONCAT11(uStack_3c7,local_3c8));
    uStack_2f4 = uStack_3c4;
    bVar2 = 0;
    puStack_2f0 = uStack_3c0;
LAB_00220737:
    bVar4 = false;
LAB_00220745:
    bVar3 = false;
  }
  local_2d4 = uVar29;
  if ((bVar19 == 0 && (char)uVar37 == '\0') && (local_2e8 != 0)) {
                    /* try { // try from 0022076c to 00220780 has its CatchHandler @ 00221cac */
    std::sys::os_str::bytes::Slice::to_string_lossy(local_408,puStack_2f0);
                    /* try { // try from 0022078b to 00220798 has its CatchHandler @ 00221c64 */
    uucore::parser::parse_size::parse_size_u64(&local_2b8,local_408._8_8_,local_3f8);
    if (CONCAT22(uStack_2b6,CONCAT11(uStack_2b7,local_2b8)) == 3) {
      lVar40 = CONCAT44(uStack_2ac,uStack_2b0);
      if (bVar3) {
        lVar32 = lVar40;
        if (bVar16 != 0) {
          lVar32 = 0x400;
        }
        lVar40 = 1;
      }
      else {
        lVar32 = 0x400;
        if (bVar16 == 0) {
          lVar32 = lVar40;
        }
        if (lVar31 != 0) {
          lVar32 = lVar40;
        }
      }
LAB_0022090a:
                    /* try { // try from 0022090a to 00220916 has its CatchHandler @ 00221c64 */
      core::ptr::drop_in_place<core::result::Result<u64,uucore::parser::parse_size::ParseSizeError>>
                (&local_2b8);
                    /* try { // try from 00220917 to 00220a95 has its CatchHandler @ 00221cac */
      core::ptr::drop_in_place<alloc::borrow::Cow<str>>(local_408);
      goto LAB_00220921;
    }
    if (lVar31 == 0) {
      lVar40 = 1;
      lVar32 = 0x400;
      if (!bVar3) {
        lVar40 = 0x400;
      }
      goto LAB_0022090a;
    }
                    /* try { // try from 0022081b to 00220860 has its CatchHandler @ 00221c0c */
    _<alloc::string::String_as_core::clone::Clone>::clone(&local_168,lVar31);
    uStack_3b0 = (undefined4)CONCAT43(uStack_155,uStack_158);
    uStack_3ac = (undefined4)
                 (CONCAT17((undefined)uStack_151,CONCAT43(uStack_155,uStack_158)) >> 0x20);
    uStack_3c0._0_4_ = (undefined4)local_168;
    uStack_3c0._4_4_ = local_168._4_4_;
    local_3b8 = uStack_160;
    uStack_3b4 = uStack_15c;
    local_3c8 = 3;
    uVar33 = ::alloc::boxed::Box<T>::new(&local_3c8);
    param_1[1] = uVar33;
    param_1[2] = &PTR_drop_in_place<uu_ls_LsError>_00312480;
    *param_1 = 0x8000000000000000;
                    /* try { // try from 00220878 to 00220884 has its CatchHandler @ 00221c64 */
    core::ptr::drop_in_place<core::result::Result<u64,uucore::parser::parse_size::ParseSizeError>>
              (&local_2b8);
                    /* try { // try from 00220885 to 0022088e has its CatchHandler @ 00221cac */
    core::ptr::drop_in_place<alloc::borrow::Cow<str>>(local_408);
  }
  else {
    if (local_c0[0] == -0x8000000000000000) {
      lVar32 = 0x400;
      if ((char)uVar37 != '\0') {
        lVar32 = 1000;
      }
    }
    else {
      lVar32 = (ulong)bVar16 * 0x200 + 0x200;
    }
    lVar40 = 1;
LAB_00220921:
    uVar17 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag
                       (param_2,&anon_3f7e092f2ea554bdd060175bd8ea63d9_18_llvm_16502254941234113161,
                        6);
    cVar13 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag
                       (param_2,"no-groupParseInt",8);
    if (cVar13 == '\0') {
      uVar29 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag
                         (param_2,&anon_8bf1419b86641518549345aedc57e906_7_llvm_11260003342554782039
                          ,1);
      uVar29 = uVar29 ^ 1;
    }
    else {
      uVar29 = 0;
    }
    bVar16 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag
                       (param_2,&anon_8bf1419b86641518549345aedc57e906_6_llvm_11260003342554782039,1
                       );
    uVar18 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag
                       (param_2,anon_8bf1419b86641518549345aedc57e906_8_llvm_11260003342554782039,
                        0xf);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
              (&local_3c8,param_2,
               &anon_3f7e092f2ea554bdd060175bd8ea63d9_17_llvm_16502254941234113161,5);
    uVar33 = clap_builder::parser::error::MatchesError::unwrap
                       (&anon_3f7e092f2ea554bdd060175bd8ea63d9_17_llvm_16502254941234113161,5,
                        &local_3c8);
    parse_width(&local_2b8,uVar33);
    uVar9 = uStack_2b6;
    if (local_2b8 == 7) {
      cVar13 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag
                         (param_2,anon_3f7e092f2ea554bdd060175bd8ea63d9_15_llvm_16502254941234113161
                          ,0x12);
      if (cVar13 == '\0') {
                    /* try { // try from 00220b26 to 00220bbb has its CatchHandler @ 00221cac */
        cVar13 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag
                           (param_2,
                            anon_3f7e092f2ea554bdd060175bd8ea63d9_16_llvm_16502254941234113161,0x12)
        ;
        bVar19 = 1;
        if (cVar13 == '\0') {
          uVar33 = std::io::stdio::stdout();
          local_3c8 = (byte)uVar33;
          uStack_3c7 = (undefined)((ulong)uVar33 >> 8);
          uStack_3c6 = (undefined2)((ulong)uVar33 >> 0x10);
          uStack_3c4 = (undefined4)((ulong)uVar33 >> 0x20);
          bVar19 = std::sys::pal::unix::io::is_terminal(&local_3c8);
          bVar19 = bVar19 ^ 1;
        }
      }
      else {
        bVar19 = 0;
      }
      uVar30 = extract_quoting_style(param_2);
      cVar13 = extract_indicator_style(param_2);
      bVar20 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag
                         (param_2,&
                                  anon_3f7e092f2ea554bdd060175bd8ea63d9_38_llvm_16502254941234113161
                          ,5);
      if ((local_454 != 1 & (bVar20 ^ 1)) == 0) {
        parse_time_style(&local_2b8,param_2);
        if (local_2b8 != 7) {
          local_168 = (undefined **)
                      CONCAT17((undefined)uStack_2b0,
                               CONCAT43(uStack_2b4,CONCAT21(uStack_2b6,uStack_2b7)));
          uStack_158 = (undefined3)((uint)local_2a8 >> 8);
          uStack_155 = uStack_2a4;
          uStack_151 = uStack_2a0;
          uStack_14d = uStack_29c;
          uStack_160 = (undefined4)CONCAT43(uStack_2ac,uStack_2b0._1_3_);
          uStack_15c = (undefined4)
                       (CONCAT17((undefined)local_2a8,CONCAT43(uStack_2ac,uStack_2b0._1_3_)) >> 0x20
                       );
          uStack_398 = local_288;
          uStack_394 = uStack_284;
          uStack_3a8 = local_298;
          uStack_3a4 = uStack_294;
          uStack_3a0 = uStack_290;
          uStack_39c = uStack_28c;
          uStack_3c7 = uStack_2b7;
          uStack_3c6 = uStack_2b6;
          uStack_3c4 = uStack_2b4;
          uStack_3c0._0_4_ = uStack_2b0;
          uStack_3c0._4_4_ = (undefined4)(CONCAT44(uStack_15c,uStack_160) >> 0x18);
          local_3b8 = local_2a8;
          uStack_3b4 = uStack_2a4;
          uStack_3b0 = uStack_2a0;
          uStack_3ac = uStack_29c;
          local_3c8 = local_2b8;
          uVar33 = ::alloc::boxed::Box<T>::new(&local_3c8);
          goto LAB_00220a96;
        }
        local_1b8 = CONCAT44(uStack_29c,uStack_2a0);
        local_1c8 = CONCAT44(uStack_2ac,uStack_2b0);
        uStack_1c0 = local_2a8;
        uStack_1bc = uStack_2a4;
      }
      else {
        local_1c8 = 0x8000000000000002;
      }
      local_2d0 = (undefined8 *)0x0;
      pcStack_2c8 = (code *)0x8;
      local_2c0 = 0;
      local_1d0 = lVar32;
                    /* try { // try from 00220c2e to 00220d24 has its CatchHandler @ 00221caa */
      cVar21 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag
                         (param_2,anon_3f7e092f2ea554bdd060175bd8ea63d9_23_llvm_16502254941234113161
                          ,0xe);
      if (cVar21 != '\0') {
        glob::Pattern::new(&local_3c8,&DAT_00134ef9,2);
        core::result::Result<T,E>::unwrap(&local_2b8,&local_3c8,&PTR_DAT_003124f0);
        ::alloc::vec::Vec<T,A>::push(&local_2d0,&local_2b8);
        glob::Pattern::new(&local_3c8,&DAT_00134efb,3);
        core::result::Result<T,E>::unwrap(&local_2b8,&local_3c8,&PTR_DAT_00312508);
        ::alloc::vec::Vec<T,A>::push(&local_2d0,&local_2b8);
      }
      clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many
                (&local_3c8,param_2,
                 &anon_3f7e092f2ea554bdd060175bd8ea63d9_34_llvm_16502254941234113161,6);
      clap_builder::parser::error::MatchesError::unwrap
                (&local_2b8,&anon_3f7e092f2ea554bdd060175bd8ea63d9_34_llvm_16502254941234113161,6,
                 &local_3c8);
      local_2dc = uVar30 >> 8;
      uStack_3c0._0_4_ = CONCAT22(uStack_2b6,CONCAT11(uStack_2b7,local_2b8));
      local_390 = (undefined7 *)CONCAT44(uStack_284,local_288);
      uStack_388 = uStack_280;
      uStack_3a0 = local_298;
      uStack_39c = uStack_294;
      uStack_398 = uStack_290;
      uStack_394 = uStack_28c;
      uStack_3b0 = local_2a8;
      uStack_3ac = uStack_2a4;
      uStack_3a8 = uStack_2a0;
      uStack_3a4 = uStack_29c;
      uStack_3c0._4_4_ = uStack_2b4;
      local_3b8 = uStack_2b0;
      uStack_3b4 = uStack_2ac;
      local_368 = local_198;
      puStack_360 = (undefined1 *)uStack_190;
      local_358 = local_188;
      puStack_350 = (undefined1 *)uStack_180;
      local_348 = local_178;
      local_328 = local_198;
      uStack_320 = uStack_190;
      local_318 = local_188;
      uStack_310 = uStack_180;
      local_308 = local_178;
      local_3c8 = 1;
      uStack_3c7 = 0;
      uStack_3c6 = 0;
      uStack_3c4 = 0;
      local_380 = (undefined1 *)0x0;
      local_340 = (undefined6 *)0x0;
      local_2d8 = uVar29;
      local_170 = lVar40;
      while( true ) {
        lVar31 = _<core::iter::adapters::flatten::FlattenCompat<I,U>as_core::iter::traits::iterator::Iterator>
                 ::next(&local_3c8);
        if (lVar31 == 0) break;
        uVar33 = *(undefined8 *)(lVar31 + 8);
        uVar1 = *(undefined8 *)(lVar31 + 0x10);
        uucore::parser::parse_glob::from_str(&local_2b8,uVar33,uVar1);
        if (CONCAT44(uStack_2b4,CONCAT22(uStack_2b6,CONCAT11(uStack_2b7,local_2b8))) ==
            -0x8000000000000000) {
          local_408 = uucore::util_name();
          local_3e8 = (undefined8 *)local_408;
          uStack_3e0 = _<&T_as_core::fmt::Display>::fmt;
          local_168 = (undefined **)&DAT_003123b8;
          uStack_160 = 2;
          uStack_15c = 0;
          local_148 = 0;
          uStack_158 = SUB83(&local_3e8,0);
          uStack_155 = (undefined4)((ulong)&local_3e8 >> 0x18);
          uStack_151._0_1_ = (undefined)((ulong)&local_3e8 >> 0x38);
          uStack_151 = CONCAT31(1,(undefined)uStack_151);
          uStack_14d = 0;
          uStack_149 = 0;
          std::io::stdio::_eprint(&local_168);
          local_408._0_8_ = 0;
          local_3f0 = 1;
          local_3e8 = (undefined8 *)local_408;
          uStack_3e0 = _<os_display::Quoted_as_core::fmt::Display>::fmt;
          local_168 = &PTR_DAT_003123d8;
          uStack_160 = 2;
          uStack_15c = 0;
          local_148 = 0;
          uStack_158 = SUB83(&local_3e8,0);
          uStack_155 = (undefined4)((ulong)&local_3e8 >> 0x18);
          uStack_151._0_1_ = (undefined)((ulong)&local_3e8 >> 0x38);
          uStack_151 = CONCAT31(1,(undefined)uStack_151);
          uStack_14d = 0;
          uStack_149 = 0;
          local_408._8_8_ = uVar33;
          local_3f8 = uVar1;
          std::io::stdio::_eprint(&local_168);
        }
        else {
          local_78 = CONCAT44(uStack_284,local_288);
          local_a8 = CONCAT22(uStack_2b6,CONCAT11(uStack_2b7,local_2b8));
          local_88 = local_298;
          uStack_84 = uStack_294;
          uStack_80 = uStack_290;
          uStack_7c = uStack_28c;
          local_98 = local_2a8;
          uStack_94 = uStack_2a4;
          uStack_90 = uStack_2a0;
          uStack_8c = uStack_29c;
          uStack_a4 = uStack_2b4;
          uStack_a0 = uStack_2b0;
          uStack_9c = uStack_2ac;
                    /* try { // try from 00220ea0 to 00220fd2 has its CatchHandler @ 00221cb3 */
          ::alloc::vec::Vec<T,A>::push(&local_2d0,&local_a8);
        }
      }
      if (cVar11 == '\x02') {
                    /* try { // try from 00220fe3 to 00221021 has its CatchHandler @ 00221caa */
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many
                  (&local_3c8,param_2,
                   &anon_3f7e092f2ea554bdd060175bd8ea63d9_33_llvm_16502254941234113161,4);
        clap_builder::parser::error::MatchesError::unwrap
                  (&local_2b8,&anon_3f7e092f2ea554bdd060175bd8ea63d9_33_llvm_16502254941234113161,4,
                   &local_3c8);
        uStack_3c0._0_4_ = CONCAT22(uStack_2b6,CONCAT11(uStack_2b7,local_2b8));
        local_390 = (undefined7 *)CONCAT44(uStack_284,local_288);
        uStack_388 = uStack_280;
        uStack_3a0 = local_298;
        uStack_39c = uStack_294;
        uStack_398 = uStack_290;
        uStack_394 = uStack_28c;
        uStack_3b0 = local_2a8;
        uStack_3ac = uStack_2a4;
        uStack_3a8 = uStack_2a0;
        uStack_3a4 = uStack_29c;
        uStack_3c0._4_4_ = uStack_2b4;
        local_3b8 = uStack_2b0;
        uStack_3b4 = uStack_2ac;
        local_368 = local_198;
        puStack_360 = (undefined1 *)uStack_190;
        local_358 = local_188;
        puStack_350 = (undefined1 *)uStack_180;
        local_348 = local_178;
        local_328 = local_198;
        uStack_320 = uStack_190;
        local_318 = local_188;
        uStack_310 = uStack_180;
        local_308 = local_178;
        local_3c8 = 1;
        uStack_3c7 = 0;
        uStack_3c6 = 0;
        uStack_3c4 = 0;
        local_380 = (undefined1 *)0x0;
        local_340 = (undefined6 *)0x0;
        while( true ) {
          lVar31 = _<core::iter::adapters::flatten::FlattenCompat<I,U>as_core::iter::traits::iterator::Iterator>
                   ::next(&local_3c8);
          if (lVar31 == 0) break;
          uVar33 = *(undefined8 *)(lVar31 + 8);
          uVar1 = *(undefined8 *)(lVar31 + 0x10);
          uucore::parser::parse_glob::from_str(&local_2b8,uVar33,uVar1);
          if (CONCAT44(uStack_2b4,CONCAT22(uStack_2b6,CONCAT11(uStack_2b7,local_2b8))) ==
              -0x8000000000000000) {
            local_408 = uucore::util_name();
            local_3e8 = (undefined8 *)local_408;
            uStack_3e0 = _<&T_as_core::fmt::Display>::fmt;
            local_168 = (undefined **)&DAT_003123b8;
            uStack_160 = 2;
            uStack_15c = 0;
            local_148 = 0;
            uStack_158 = SUB83(&local_3e8,0);
            uStack_155 = (undefined4)((ulong)&local_3e8 >> 0x18);
            uStack_151._0_1_ = (undefined)((ulong)&local_3e8 >> 0x38);
            uStack_151 = CONCAT31(1,(undefined)uStack_151);
            uStack_14d = 0;
            uStack_149 = 0;
            std::io::stdio::_eprint(&local_168);
            local_408._0_8_ = 0;
            local_3f0 = 1;
            local_3e8 = (undefined8 *)local_408;
            uStack_3e0 = _<os_display::Quoted_as_core::fmt::Display>::fmt;
            local_168 = &PTR_DAT_003123f8;
            uStack_160 = 2;
            uStack_15c = 0;
            local_148 = 0;
            uStack_158 = SUB83(&local_3e8,0);
            uStack_155 = (undefined4)((ulong)&local_3e8 >> 0x18);
            uStack_151._0_1_ = (undefined)((ulong)&local_3e8 >> 0x38);
            uStack_151 = CONCAT31(1,(undefined)uStack_151);
            uStack_14d = 0;
            uStack_149 = 0;
            local_408._8_8_ = uVar33;
            local_3f8 = uVar1;
            std::io::stdio::_eprint(&local_168);
          }
          else {
            local_38 = CONCAT44(uStack_284,local_288);
            local_68 = CONCAT22(uStack_2b6,CONCAT11(uStack_2b7,local_2b8));
            local_48 = local_298;
            uStack_44 = uStack_294;
            uStack_40 = uStack_290;
            uStack_3c = uStack_28c;
            local_58 = local_2a8;
            uStack_54 = uStack_2a4;
            uStack_50 = uStack_2a0;
            uStack_4c = uStack_29c;
            uStack_64 = uStack_2b4;
            uStack_60 = uStack_2b0;
            uStack_5c = uStack_2ac;
                    /* try { // try from 00221160 to 00221292 has its CatchHandler @ 00221cb1 */
            ::alloc::vec::Vec<T,A>::push(&local_2d0,&local_68);
          }
        }
      }
                    /* try { // try from 00221298 to 00221625 has its CatchHandler @ 00221caa */
      uVar34 = from::___closure__(param_2,&
                                          anon_3f7e092f2ea554bdd060175bd8ea63d9_37_llvm_16502254941234113161
                                  ,4);
      uStack_3c0._0_4_ = 0x136e4d;
      uStack_3c0._4_4_ = 0;
      local_3b8 = 1;
      uStack_3b4 = 0;
      uStack_3b0 = 0x136e4c;
      uStack_3ac = 0;
      uStack_3a8 = 1;
      uStack_3a4 = 0;
      uStack_3a0 = 0x136e55;
      uStack_39c = 0;
      uStack_398 = 1;
      uStack_394 = 0;
      local_390 = (undefined7 *)&anon_8bf1419b86641518549345aedc57e906_1_llvm_11260003342554782039;
      uStack_388 = 4;
      local_380 = &anon_8bf1419b86641518549345aedc57e906_7_llvm_11260003342554782039;
      local_378 = 1;
      puStack_370 = &anon_8bf1419b86641518549345aedc57e906_6_llvm_11260003342554782039;
      local_368 = 1;
      puStack_360 = anon_8bf1419b86641518549345aedc57e906_8_llvm_11260003342554782039;
      local_358 = 0xf;
      puStack_350 = &anon_8bf1419b86641518549345aedc57e906_0_llvm_11260003342554782039;
      local_348 = 1;
      local_340 = &anon_3f7e092f2ea554bdd060175bd8ea63d9_20_llvm_16502254941234113161;
      local_338 = 6;
      uStack_330 = 0;
      local_328 = 9;
      local_3c8 = (byte)param_2;
      bVar6 = local_3c8;
      uStack_3c7 = (undefined)((ulong)param_2 >> 8);
      uVar39 = uStack_3c7;
      uStack_3c6 = (undefined2)((ulong)param_2 >> 0x10);
      uVar7 = uStack_3c6;
      uStack_3c4 = uVar8;
      auVar42 = core::iter::traits::iterator::Iterator::reduce(&local_3c8);
      uVar37 = auVar42._8_8_;
      if (auVar42._0_8_ == 0) {
        uVar37 = 0;
      }
      if (uVar37 < uVar34) {
        local_454 = 2 - (local_454 == 1);
      }
      uVar34 = from::___closure__(param_2,&
                                          anon_3f7e092f2ea554bdd060175bd8ea63d9_37_llvm_16502254941234113161
                                  ,4);
      uStack_3c0._0_4_ = 0x137059;
      uStack_3c0._4_4_ = 0;
      local_3b8 = 5;
      uStack_3b4 = 0;
      uStack_3b0 = 0;
      uStack_3ac = 0;
      uStack_3a8 = 1;
      uStack_3a4 = 0;
      local_3c8 = bVar6;
      uStack_3c7 = uVar39;
      uStack_3c6 = uVar7;
      uStack_3c4 = uVar8;
      auVar42 = core::iter::traits::iterator::Iterator::reduce(&local_3c8);
      uVar37 = auVar42._8_8_;
      if (auVar42._0_8_ == 0) {
        uVar37 = 0;
      }
      uVar35 = from::___closure__(param_2,&
                                          anon_3f7e092f2ea554bdd060175bd8ea63d9_37_llvm_16502254941234113161
                                  ,4);
      uStack_3c0._0_4_ = 0x136ff8;
      uStack_3c0._4_4_ = 0;
      local_3b8 = 0x12;
      uStack_3b4 = 0;
      uStack_3b0 = 0x13700a;
      uStack_3ac = 0;
      uStack_3a8 = 0x12;
      uStack_3a4 = 0;
      uStack_3a0 = 0;
      uStack_39c = 0;
      uStack_398 = 2;
      uStack_394 = 0;
      local_3c8 = bVar6;
      uStack_3c7 = uVar39;
      uStack_3c6 = uVar7;
      uStack_3c4 = uVar8;
      auVar42 = core::iter::traits::iterator::Iterator::reduce(&local_3c8);
      uVar38 = auVar42._8_8_;
      if (auVar42._0_8_ == 0) {
        uVar38 = 0;
      }
      if (uVar38 < uVar35) {
        bVar19 = 1;
      }
      uVar35 = from::___closure__(param_2,&
                                          anon_3f7e092f2ea554bdd060175bd8ea63d9_37_llvm_16502254941234113161
                                  ,4);
      uStack_3c0._0_4_ = 0x136feb;
      uStack_3c0._4_4_ = 0;
      local_3b8 = 0xd;
      uStack_3b4 = 0;
      uStack_3b0 = 0x137766;
      uStack_3ac = 0;
      uStack_3a8 = 10;
      uStack_3a4 = 0;
      uStack_3a0 = 0x137759;
      uStack_39c = 0;
      uStack_398 = 6;
      uStack_394 = 0;
      local_390 = &anon_9938bf1084d6f67f99da587aeb78cfa9_29_llvm_7263189302602752264;
      uStack_388 = 7;
      local_380 = (undefined1 *)0x0;
      local_378 = 4;
      local_3c8 = bVar6;
      uStack_3c7 = uVar39;
      uStack_3c6 = uVar7;
      uStack_3c4 = uVar8;
      auVar42 = core::iter::traits::iterator::Iterator::reduce(&local_3c8);
      uVar38 = auVar42._8_8_;
      if (auVar42._0_8_ == 0) {
        uVar38 = 0;
      }
      local_420 = (byte)uVar30;
      if (uVar38 < uVar35) {
        local_420 = bVar19;
      }
      uVar39 = 3;
      if (uVar35 <= uVar38) {
        uVar39 = (char)(uVar30 >> 0x10);
      }
      if ((bVar14 & uVar34 <= uVar37) == 0) {
        local_168 = (undefined **)0x8000000000000000;
        if (bVar20 == 0) goto LAB_00221772;
LAB_0022163e:
                    /* try { // try from 0022163e to 00221674 has its CatchHandler @ 00221c73 */
        cVar21 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag
                           (param_2,&
                                    anon_3f7e092f2ea554bdd060175bd8ea63d9_37_llvm_16502254941234113161
                            ,4);
        uVar29 = 1;
        if (cVar21 != '\0') {
          local_3c8 = 4;
          uVar33 = ::alloc::boxed::Box<T>::new(&local_3c8);
          param_1[1] = uVar33;
          param_1[2] = &PTR_drop_in_place<uu_ls_LsError>_00312480;
          *param_1 = 0x8000000000000000;
                    /* try { // try from 0022168c to 00221698 has its CatchHandler @ 00221caa */
          core::ptr::drop_in_place<core::option::Option<lscolors::LsColors>>(&local_168);
                    /* try { // try from 00221699 to 002216a5 has its CatchHandler @ 00221c04 */
          core::ptr::drop_in_place<alloc::vec::Vec<glob::Pattern>>(&local_2d0);
                    /* try { // try from 002216a6 to 0022172b has its CatchHandler @ 00221cac */
          core::ptr::drop_in_place<uu_ls::TimeStyle>(&local_1c8);
          goto LAB_00220aad;
        }
      }
      else {
        lscolors::LsColors::from_env(&local_3c8);
        if (CONCAT44(uStack_3c4,CONCAT22(uStack_3c6,CONCAT11(uStack_3c7,local_3c8))) ==
            -0x8000000000000000) {
          _<lscolors::LsColors_as_core::default::Default>::default(&local_2b8);
        }
        else {
          (*(code *)PTR_memcpy_0031da60)(&local_2b8,&local_3c8,0xa0);
        }
        (*(code *)PTR_memcpy_0031da60)(&local_168,&local_2b8,0xa0);
        if (bVar20 != 0) goto LAB_0022163e;
LAB_00221772:
                    /* try { // try from 00221772 to 00221845 has its CatchHandler @ 00221c73 */
        cVar21 = dired::is_dired_arg_present();
        uVar29 = 1;
        if (cVar21 == '\0') {
          uVar29 = (uint)local_454;
        }
      }
      cVar21 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag
                         (param_2,anon_902b05dc61fef0513c491a1430f3d56c_9_llvm_11494158254235805547,
                          0xb);
      bVar14 = 3;
      if (cVar21 == '\0') {
        cVar21 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag
                           (param_2,
                            anon_902b05dc61fef0513c491a1430f3d56c_10_llvm_11494158254235805547,0x18)
        ;
        bVar14 = 2;
        if (cVar21 == '\0') {
          cVar21 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag
                             (param_2,
                              anon_902b05dc61fef0513c491a1430f3d56c_11_llvm_11494158254235805547,
                              0x27);
          bVar14 = 1;
          if (cVar21 == '\0') {
            bVar14 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag
                               (param_2,
                                anon_3f7e092f2ea554bdd060175bd8ea63d9_24_llvm_16502254941234113161,9
                               );
            bVar14 = ~bVar14 & cVar13 != '\x03' & (char)uVar29 != '\x01';
          }
        }
      }
      uVar22 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag
                         (param_2,anon_3f7e092f2ea554bdd060175bd8ea63d9_27_llvm_16502254941234113161
                          ,9);
      uVar23 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag
                         (param_2,&
                                  anon_3f7e092f2ea554bdd060175bd8ea63d9_26_llvm_16502254941234113161
                          ,7);
      local_3d8 = local_2c0;
      local_3e8 = local_2d0;
      uStack_3e0 = pcStack_2c8;
                    /* try { // try from 00221863 to 00221880 has its CatchHandler @ 00221c1e */
      uVar24 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag
                         (param_2,anon_3f7e092f2ea554bdd060175bd8ea63d9_24_llvm_16502254941234113161
                          ,9);
      (*(code *)PTR_memcpy_0031da60)(&local_2b8,&local_168,0xa0);
                    /* try { // try from 002218aa to 002218d7 has its CatchHandler @ 00221c3a */
      uVar25 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag
                         (param_2,&
                                  anon_3f7e092f2ea554bdd060175bd8ea63d9_25_llvm_16502254941234113161
                          ,5);
      uVar26 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag
                         (param_2,&anon_0961294ef8eb7b5431de28de81a5ae4f_9_llvm_9099371528486416302,
                          4);
      local_3f8 = local_1b8;
      local_408._0_8_ = local_1c8;
      local_408._12_4_ = uStack_1bc;
      local_408._8_4_ = uStack_1c0;
      local_2e0 = uVar29;
                    /* try { // try from 002218fe to 0022192a has its CatchHandler @ 00221c29 */
      uVar27 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag
                         (param_2,anon_3f7e092f2ea554bdd060175bd8ea63d9_36_llvm_16502254941234113161
                          ,0x17);
      cVar21 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag
                         (param_2,&
                                  anon_3f7e092f2ea554bdd060175bd8ea63d9_37_llvm_16502254941234113161
                          ,4);
      puVar5 = PTR_memcpy_0031da60;
      uVar41 = 10;
      if (cVar21 != '\0') {
        uVar41 = 0;
      }
      local_3b8 = (undefined4)local_3d8;
      uStack_3b4 = (undefined4)((ulong)local_3d8 >> 0x20);
      local_3c8 = (byte)local_3e8;
      uStack_3c7 = (undefined)((ulong)local_3e8 >> 8);
      uStack_3c6 = (undefined2)((ulong)local_3e8 >> 0x10);
      uStack_3c4 = local_3e8._4_4_;
      uStack_3c0._0_4_ = (undefined4)uStack_3e0;
      uStack_3c0._4_4_ = uStack_3e0._4_4_;
      (*(code *)PTR_memcpy_0031da60)(&uStack_3b0,&local_2b8,0xa0);
      uStack_310 = local_408._0_8_;
      local_308 = local_408._8_8_;
      local_300 = local_3f8;
      (*(code *)puVar5)(param_1,&local_3c8,0xd0);
      param_1[0x1a] = local_170;
      param_1[0x1b] = local_1d0;
      *(undefined *)(param_1 + 0x1c) = uVar17;
      *(char *)((long)param_1 + 0xe1) = (char)local_2d8;
      *(byte *)((long)param_1 + 0xe2) = bVar16 ^ 1;
      *(undefined *)((long)param_1 + 0xe3) = uVar18;
      *(undefined2 *)((long)param_1 + 0xe4) = uVar9;
      *(undefined *)((long)param_1 + 0xe6) = uVar22;
      *(undefined *)((long)param_1 + 0xe7) = uVar23;
      *(undefined *)(param_1 + 0x1d) = uVar24;
      *(undefined *)((long)param_1 + 0xe9) = uVar25;
      *(undefined *)((long)param_1 + 0xea) = uVar26;
      *(undefined *)((long)param_1 + 0xeb) = uVar10;
      *(undefined *)((long)param_1 + 0xec) = 0;
      *(undefined *)((long)param_1 + 0xed) = uVar27;
      *(byte *)((long)param_1 + 0xee) = bVar20;
      *(undefined *)((long)param_1 + 0xef) = uVar15;
      *(char *)(param_1 + 0x1e) = cVar11;
      *(char *)((long)param_1 + 0xf1) = (char)local_2d4;
      *(byte *)((long)param_1 + 0xf2) = bVar14;
      *(char *)((long)param_1 + 0xf3) = (char)uVar28;
      *(char *)((long)param_1 + 0xf4) = cVar13;
      *(byte *)((long)param_1 + 0xf5) = local_420;
      *(char *)((long)param_1 + 0xf6) = (char)local_2dc;
      *(undefined *)((long)param_1 + 0xf7) = uVar39;
      *(char *)(param_1 + 0x1f) = (char)local_2e0;
      *(undefined *)((long)param_1 + 0xf9) = uVar12;
      *(undefined *)((long)param_1 + 0xfa) = uVar41;
                    /* try { // try from 00221aea to 00221af6 has its CatchHandler @ 00221ca0 */
      core::ptr::drop_in_place<std::ffi::os_str::OsString>(&local_2f8);
                    /* try { // try from 00221af7 to 00221b03 has its CatchHandler @ 00221ca5 */
      core::ptr::drop_in_place<core::option::Option<std::ffi::os_str::OsString>>(local_c0);
      if ((bool)(~bVar2 & CONCAT44(uStack_1e4,local_1e8) != -0x8000000000000000)) {
                    /* try { // try from 00221b23 to 00221b2f has its CatchHandler @ 00221c90 */
        core::ptr::drop_in_place<std::ffi::os_str::OsString>(&local_1e8);
      }
      if (!bVar4 && CONCAT44(uStack_1fc,local_200) != -0x8000000000000000) {
                    /* try { // try from 00221b4d to 00221b59 has its CatchHandler @ 00221c98 */
        core::ptr::drop_in_place<std::ffi::os_str::OsString>(&local_200);
      }
      goto LAB_00221b5a;
    }
    uStack_394 = uStack_284;
    uStack_3a4 = uStack_294;
    uStack_3a0 = uStack_290;
    uStack_39c = uStack_28c;
    uStack_398 = local_288;
    uStack_3b4 = uStack_2a4;
    uStack_3b0 = uStack_2a0;
    uStack_3ac = uStack_29c;
    uStack_3a8 = local_298;
    uStack_3c4 = uStack_2b4;
    uStack_3c0._0_4_ = uStack_2b0;
    uStack_3c0._4_4_ = uStack_2ac;
    local_3b8 = local_2a8;
    local_3c8 = local_2b8;
    uStack_3c7 = uStack_2b7;
    uStack_3c6 = uStack_2b6;
    uVar33 = ::alloc::boxed::Box<T>::new(&local_3c8);
LAB_00220a96:
    param_1[1] = uVar33;
    param_1[2] = &PTR_drop_in_place<uu_ls_LsError>_00312480;
    *param_1 = 0x8000000000000000;
  }
LAB_00220aad:
                    /* try { // try from 00220aad to 00220ab9 has its CatchHandler @ 00221ca0 */
  core::ptr::drop_in_place<std::ffi::os_str::OsString>(&local_2f8);
                    /* try { // try from 00220aba to 00220ac6 has its CatchHandler @ 00221ca5 */
  core::ptr::drop_in_place<core::option::Option<std::ffi::os_str::OsString>>(local_c0);
  if ((bool)(~bVar2 & CONCAT44(uStack_1e4,local_1e8) != -0x8000000000000000)) {
                    /* try { // try from 00220ae6 to 00220af2 has its CatchHandler @ 00221c90 */
    core::ptr::drop_in_place<std::ffi::os_str::OsString>(&local_1e8);
  }
  if (!bVar4 && CONCAT44(uStack_1fc,local_200) != -0x8000000000000000) {
                    /* try { // try from 00220b14 to 00220b20 has its CatchHandler @ 00221c98 */
    core::ptr::drop_in_place<std::ffi::os_str::OsString>(&local_200);
  }
LAB_00221b5a:
  if (!bVar3 && CONCAT44(uStack_214,local_218) != -0x8000000000000000) {
    core::ptr::drop_in_place<std::ffi::os_str::OsString>(&local_218);
  }
  return param_1;
}