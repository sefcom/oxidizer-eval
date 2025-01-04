undefined  [16] __rustcall uu_sort::uumain::uumain(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined uVar5;
  char cVar6;
  byte bVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 ***pppuVar11;
  undefined8 ****ppppuVar12;
  int extraout_EDX;
  long *plVar13;
  undefined8 uVar14;
  undefined8 ****unaff_R13;
  char *pcVar15;
  bool bVar16;
  undefined auVar17 [16];
  undefined local_618 [12];
  undefined4 uStack_60c;
  undefined8 local_608;
  undefined4 uStack_600;
  undefined4 uStack_5fc;
  undefined4 local_5f8;
  undefined4 uStack_5f4;
  undefined4 uStack_5f0;
  undefined4 uStack_5ec;
  undefined4 local_5d8;
  undefined4 uStack_5d4;
  undefined4 uStack_5d0;
  undefined4 uStack_5cc;
  undefined4 local_5c8;
  undefined4 uStack_5c4;
  undefined4 uStack_5c0;
  undefined4 uStack_5bc;
  undefined4 local_5b8;
  undefined4 uStack_5b4;
  undefined4 uStack_5b0;
  undefined4 uStack_5ac;
  undefined8 local_598;
  undefined8 uStack_590;
  undefined8 local_588;
  undefined4 uStack_580;
  undefined4 uStack_57c;
  undefined4 local_578;
  undefined4 uStack_574;
  undefined4 uStack_570;
  undefined4 uStack_56c;
  undefined7 uStack_568;
  char local_561;
  undefined8 ***local_558;
  undefined8 uStack_550;
  undefined8 ***local_548;
  long local_540;
  undefined8 local_538;
  undefined8 ***pppuStack_530;
  undefined8 ***local_528;
  undefined8 ***pppuStack_520;
  undefined8 ***local_518;
  char local_510;
  char cStack_50f;
  undefined2 uStack_50e;
  undefined4 uStack_50c;
  undefined4 uStack_508;
  undefined4 uStack_504;
  undefined8 ***local_500;
  undefined8 local_4f8;
  undefined8 local_4f0;
  undefined8 local_4e8;
  undefined8 ***pppuStack_4e0;
  undefined8 local_4d8;
  undefined8 uStack_4d0;
  undefined8 ***local_4c8;
  undefined4 local_4c0;
  undefined4 uStack_4bc;
  undefined4 uStack_4b8;
  undefined4 uStack_4b4;
  undefined8 local_4b0;
  undefined uStack_4a8;
  undefined7 uStack_4a7;
  undefined uStack_4a0;
  undefined8 uStack_49f;
  undefined8 ***local_490;
  ulong local_488;
  int local_480;
  undefined8 local_47c;
  undefined4 local_474;
  undefined4 local_470;
  undefined4 uStack_46c;
  undefined4 uStack_468;
  undefined4 uStack_464;
  undefined4 local_460;
  undefined4 local_458;
  undefined4 uStack_454;
  undefined4 uStack_450;
  undefined4 uStack_44c;
  undefined8 ***pppuStack_448;
  undefined8 ***local_418;
  long local_410;
  long local_408;
  undefined8 **local_400;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  undefined8 local_3d8;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined8 local_398;
  undefined local_390;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined8 ***local_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 ***local_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined8 ***local_f0;
  undefined8 ***local_e8;
  undefined8 ***local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined5 uStack_b8;
  char cStack_b3;
  undefined uStack_b2;
  char local_b1;
  undefined local_b0 [16];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 ***local_68;
  long local_60 [3];
  long local_48 [3];
  
  local_460 = CONCAT22(local_460._2_2_,0xa06);
  local_47c = 0;
  local_474 = 0;
  local_4f8 = 0;
  local_4f0 = 8;
  local_4e8 = 0;
  pppuStack_4e0 = (undefined8 ****)0x0;
  local_480 = 0x110000;
  local_4d8 = 1;
  uStack_4d0 = 0;
  local_490 = (undefined8 ****)0x3b9aca00;
  local_4c8 = (undefined8 ****)0x8000000000000000;
  local_488 = 0x20;
  local_4b0 = 0;
  uStack_4a8 = 0;
  uStack_4a7 = 0;
  uStack_4a0 = 0;
  uStack_49f = 0;
                    /* try { // try from 001bcc78 to 001bcc9b has its CatchHandler @ 001be52e */
  (*(code *)PTR_uu_app_00306cf0)(&local_3f8);
  clap_builder::builder::command::Command::try_get_matches_from
            (local_618,&local_3f8,param_1,param_2);
  if ((undefined8 ****)local_618._0_8_ == (undefined8 ****)0x8000000000000000) {
    local_3f8 = (undefined **)stack0xfffffffffffff9f0;
                    /* try { // try from 001bccb9 to 001bcced has its CatchHandler @ 001be505 */
    uVar9 = clap_builder::error::Error<F>::print(&local_3f8);
    core::result::Result<T,E>::unwrap(uVar9);
    if ((*(byte *)((long)local_3f8 + 0xd5) & 0x1d) != 0xc) {
      (*(code *)PTR_set_exit_code_00306cf8)(2);
    }
                    /* try { // try from 001bccf6 to 001bccfa has its CatchHandler @ 001be52e */
    core::ptr::drop_in_place<clap_builder::error::Error>(local_3f8);
    ppppuVar12 = (undefined8 ****)0x0;
    goto LAB_001be388;
  }
  local_5b8 = local_5f8;
  uStack_5b4 = uStack_5f4;
  uStack_5b0 = uStack_5f0;
  uStack_5ac = uStack_5ec;
  local_5c8 = (undefined4)local_608;
  uStack_5c4 = local_608._4_4_;
  uStack_5c0 = uStack_600;
  uStack_5bc = uStack_5fc;
  local_5d8 = local_618._0_4_;
  uStack_5d4 = local_618._4_4_;
  uStack_5d0 = local_618._8_4_;
  uStack_5cc = uStack_60c;
                    /* try { // try from 001bcd2a to 001bced3 has its CatchHandler @ 001be529 */
  uVar5 = (*(code *)PTR_get_flag_00306d00)(&local_5d8,"debug",5);
  local_47c = CONCAT71(local_47c._1_7_,uVar5);
  cVar6 = (*(code *)PTR_contains_id_00306d08)(&local_5d8,"files0-from",0xb);
  if (cVar6 == '\0') {
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many
              (&local_3f8,&local_5d8,"files",5);
    clap_builder::parser::error::MatchesError::unwrap(local_618,"files",5,&local_3f8);
    if ((undefined8 ****)local_618._0_8_ == (undefined8 ****)0x0) {
LAB_001bceff:
      local_558 = (undefined8 ****)0x0;
      uStack_550 = (undefined8 ****)&DAT_00000008;
      local_548 = (undefined8 ****)0x0;
    }
    else {
      local_3d8 = CONCAT44(uStack_5f4,local_5f8);
      local_3e8 = local_608;
      uStack_3e0 = (undefined8 ****)CONCAT44(uStack_5fc,uStack_600);
      _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter
                (&local_458,&local_3f8);
      local_558 = (undefined8 ***)CONCAT44(uStack_454,local_458);
      local_3f8 = (undefined **)CONCAT44(uStack_44c,uStack_450);
      uStack_3f0 = (undefined8 ****)pppuStack_448;
      if ((undefined8 ****)local_558 == (undefined8 ****)0x8000000000000000) goto LAB_001bceff;
      uStack_550 = (undefined8 ****)CONCAT44(uStack_44c,uStack_450);
      local_548 = pppuStack_448;
    }
  }
  else {
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many
              (&local_3f8,&local_5d8,"files0-from",0xb);
    clap_builder::parser::error::MatchesError::unwrap(local_618,"files0-from",0xb);
    if ((undefined8 ****)local_618._0_8_ == (undefined8 ****)0x0) {
LAB_001bce1b:
      local_540 = 0;
      local_538 = 8;
      pppuStack_530 = (undefined8 ****)0x0;
    }
    else {
      local_3d8 = CONCAT44(uStack_5f4,local_5f8);
      local_3e8 = local_608;
      uStack_3e0 = (undefined8 ****)CONCAT44(uStack_5fc,uStack_600);
      _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter
                (&local_458,&local_3f8);
      local_540 = CONCAT44(uStack_454,local_458);
      local_3f8 = (undefined **)CONCAT44(uStack_44c,uStack_450);
      uStack_3f0 = (undefined8 ****)pppuStack_448;
      if (local_540 == -0x8000000000000000) goto LAB_001bce1b;
      local_538 = CONCAT44(uStack_44c,uStack_450);
      pppuStack_530 = pppuStack_448;
    }
    local_528 = (undefined8 ****)0x0;
    pppuStack_520 = (undefined8 ***)&DAT_00000008;
    local_518 = (undefined8 ****)0x0;
    local_408 = local_538 + (long)pppuStack_530 * 0x18;
    local_410 = local_538;
    lVar10 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next
                       (&local_410);
    if (lVar10 != 0) {
      local_418 = (undefined8 ****)0x8000000000000001;
      do {
                    /* try { // try from 001bcff0 to 001bd02b has its CatchHandler @ 001be545 */
        open(&local_3f8,lVar10);
        unaff_R13 = local_3e8;
        ppppuVar12 = uStack_3f0;
        if ((undefined8 ****)local_3f8 != (undefined8 ****)0x0) {
                    /* try { // try from 001bd17d to 001bd18f has its CatchHandler @ 001be4c9 */
          core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(&local_528);
                    /* try { // try from 001bd190 to 001bd19c has its CatchHandler @ 001be529 */
          core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(&local_540);
          goto LAB_001be37e;
        }
        std::io::buffered::bufreader::BufReader<R>::with_capacity(local_b0,0x2000);
        local_398 = local_80;
        local_3a8 = local_90;
        uStack_3a0 = uStack_88;
        local_3b8 = local_a0;
        uStack_3b0 = uStack_98;
        local_3f8 = (undefined **)local_418;
        uStack_3e0 = (undefined8 ****)local_418;
        local_390 = 0;
                    /* try { // try from 001bd090 to 001bd09a has its CatchHandler @ 001be54a */
        while (_<core::iter::adapters::flatten::FlattenCompat<I,U>as_core::iter::traits::iterator::Iterator>
               ::next(&local_510,&local_3f8),
              CONCAT44(uStack_50c,CONCAT22(uStack_50e,CONCAT11(cStack_50f,local_510))) !=
              -0x8000000000000000) {
          local_588 = (undefined8 ****)local_500;
          local_598 = (undefined8 ****)
                      CONCAT44(uStack_50c,CONCAT22(uStack_50e,CONCAT11(cStack_50f,local_510)));
          uStack_590 = (code *)CONCAT44(uStack_504,uStack_508);
                    /* try { // try from 001bd0db to 001bd11b has its CatchHandler @ 001be54f */
          (*(code *)PTR_from_utf8_00306d10)(local_618,uStack_590);
          uVar9 = core::result::Result<T,E>::expect(local_618);
          (*(code *)PTR_to_owned_00306ca8)(local_618,uVar9);
          pppuStack_448 = local_608;
          local_458 = local_618._0_4_;
          uStack_454 = local_618._4_4_;
          uStack_450 = local_618._8_4_;
          uStack_44c = uStack_60c;
          ::alloc::vec::Vec<T,A>::push(&local_528,&local_458);
                    /* try { // try from 001bd11c to 001bd123 has its CatchHandler @ 001be54a */
          core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&local_598);
        }
                    /* try { // try from 001bd130 to 001bd137 has its CatchHandler @ 001be545 */
        core::ptr::
        drop_in_place<core::iter::adapters::flatten::Flatten<std::io::Split<std::io::buffered::bufreader::BufReader<alloc::boxed::Box<dyn_std::io::Read_core::marker::Send>>>>>
                  (&local_3f8);
        lVar10 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next
                           (&local_410);
      } while (lVar10 != 0);
    }
    local_558 = local_528;
    uStack_550 = (undefined8 ****)pppuStack_520;
    local_548 = local_518;
                    /* try { // try from 001bd16e to 001bd17a has its CatchHandler @ 001be529 */
    core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(&local_540);
  }
                    /* try { // try from 001bd1ba to 001bd5b8 has its CatchHandler @ 001be533 */
  cVar6 = (*(code *)PTR_get_flag_00306d00)(&local_5d8,"human-numeric-sort",0x12);
  uVar5 = 1;
  if (cVar6 == '\0') {
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
              (&local_3f8,&local_5d8,&DAT_00124384,4);
    lVar10 = clap_builder::parser::error::MatchesError::unwrap(&DAT_00124384,4,&local_3f8);
    if ((lVar10 == 0) ||
       (cVar6 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                          (*(undefined8 *)(lVar10 + 8),*(undefined8 *)(lVar10 + 0x10),
                           "human-numeric",0xd), cVar6 == '\0')) {
      cVar6 = (*(code *)PTR_get_flag_00306d00)(&local_5d8,"month-sort",10);
      uVar5 = 3;
      if (cVar6 == '\0') {
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
                  (&local_3f8,&local_5d8,&DAT_00124384,4);
        lVar10 = clap_builder::parser::error::MatchesError::unwrap(&DAT_00124384,4,&local_3f8);
        if ((lVar10 == 0) ||
           (cVar6 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                              (*(undefined8 *)(lVar10 + 8),*(undefined8 *)(lVar10 + 0x10),"month",5)
           , cVar6 == '\0')) {
          cVar6 = (*(code *)PTR_get_flag_00306d00)(&local_5d8,"general-numeric-sort",0x14);
          uVar5 = 2;
          if (cVar6 == '\0') {
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
                      (&local_3f8,&local_5d8,&DAT_00124384,4);
            lVar10 = clap_builder::parser::error::MatchesError::unwrap(&DAT_00124384,4,&local_3f8);
            if ((lVar10 == 0) ||
               (cVar6 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                                  (*(undefined8 *)(lVar10 + 8),*(undefined8 *)(lVar10 + 0x10),
                                   "general-numeric",0xf), cVar6 == '\0')) {
              cVar6 = (*(code *)PTR_get_flag_00306d00)(&local_5d8,"numeric-sort",0xc);
              if (cVar6 == '\0') {
                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
                          (&local_3f8,&local_5d8,&DAT_00124384,4);
                lVar10 = clap_builder::parser::error::MatchesError::unwrap
                                   (&DAT_00124384,4,&local_3f8);
                if ((lVar10 == 0) ||
                   (cVar6 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                                      (*(undefined8 *)(lVar10 + 8),*(undefined8 *)(lVar10 + 0x10),
                                       "numeric",7), cVar6 == '\0')) {
                  cVar6 = (*(code *)PTR_get_flag_00306d00)(&local_5d8,"version-sort",0xc);
                  uVar5 = 4;
                  if (cVar6 == '\0') {
                    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
                              (&local_3f8,&local_5d8,&DAT_00124384,4);
                    lVar10 = clap_builder::parser::error::MatchesError::unwrap
                                       (&DAT_00124384,4,&local_3f8);
                    if ((lVar10 == 0) ||
                       (cVar6 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                                          (*(undefined8 *)(lVar10 + 8),
                                           *(undefined8 *)(lVar10 + 0x10),"version",7),
                       cVar6 == '\0')) {
                      cVar6 = (*(code *)PTR_get_flag_00306d00)(&local_5d8,"random-sort",0xb);
                      if (cVar6 == '\0') {
                        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
                                  (&local_3f8,&local_5d8,&DAT_00124384,4);
                        lVar10 = clap_builder::parser::error::MatchesError::unwrap
                                           (&DAT_00124384,4,&local_3f8);
                        uVar5 = 6;
                        if ((lVar10 == 0) ||
                           (cVar6 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                                              (*(undefined8 *)(lVar10 + 8),
                                               *(undefined8 *)(lVar10 + 0x10),"random",6),
                           cVar6 == '\0')) goto LAB_001bd4cf;
                      }
                      (*(code *)PTR_get_rand_string_00306d18)(&local_3f8);
                      local_470 = (undefined4)local_3f8;
                      uStack_46c = local_3f8._4_4_;
                      uStack_468 = (undefined4)uStack_3f0;
                      uStack_464 = uStack_3f0._4_4_;
                      local_474 = CONCAT13(1,(undefined3)local_474);
                      uVar5 = 5;
                    }
                  }
                  goto LAB_001bd4cf;
                }
              }
              uVar5 = 0;
            }
          }
        }
      }
    }
  }
LAB_001bd4cf:
  local_460 = CONCAT31(local_460._1_3_,uVar5);
  uVar5 = (*(code *)PTR_get_flag_00306d00)(&local_5d8,"dictionary-order",0x10);
  local_47c._0_4_ = CONCAT13(uVar5,(undefined3)local_47c);
  uVar5 = (*(code *)PTR_get_flag_00306d00)(&local_5d8,"ignore-nonprinting",0x12);
  local_47c._0_5_ = CONCAT14(uVar5,(undefined4)local_47c);
  cVar6 = (*(code *)PTR_contains_id_00306d08)(&local_5d8,"parallelDeadlock",8);
  if (cVar6 != '\0') {
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
              (&local_3f8,&local_5d8,"parallelDeadlock",8);
    lVar10 = clap_builder::parser::error::MatchesError::unwrap("parallelDeadlock",8,&local_3f8);
    if (lVar10 == 0) {
LAB_001bd5a0:
      _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_3f8,"0",1);
    }
    else {
      core::ops::function::FnOnce::call_once(&local_3f8,lVar10);
      local_618._0_8_ = uStack_3f0;
      unique0x10001f5b = (code *)local_3e8;
      if ((undefined8 ****)local_3f8 == (undefined8 ****)0x8000000000000000) goto LAB_001bd5a0;
    }
    ppppuVar12 = (undefined8 ****)local_3f8;
                    /* try { // try from 001bd5d7 to 001bd5e6 has its CatchHandler @ 001be4e7 */
    local_458 = (undefined4)uStack_3f0;
    uStack_454 = uStack_3f0._4_4_;
    uStack_450 = (undefined4)local_3e8;
    uStack_44c = local_3e8._4_4_;
    core::ptr::drop_in_place<alloc::string::String>(&pppuStack_4e0);
    pppuStack_4e0 = ppppuVar12;
    local_4d8 = CONCAT44(uStack_454,local_458);
    uStack_4d0 = CONCAT44(uStack_44c,uStack_450);
                    /* try { // try from 001bd5fc to 001bd73b has its CatchHandler @ 001be533 */
    std::env::set_var("RAYON_NUM_THREADS",0x11,&pppuStack_4e0);
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
            (&local_3f8,&local_5d8,"buffer-size",0xb);
  uVar9 = clap_builder::parser::error::MatchesError::unwrap("buffer-size",0xb,&local_3f8);
  uStack_3f0 = (undefined8 ****)0x3b9aca00;
  local_3f8 = (undefined **)0x0;
  core::option::Option<T>::map_or(local_618,uVar9,&local_3f8);
  ppppuVar12 = (undefined8 ****)local_618._0_8_;
  unaff_R13 = (undefined8 ****)stack0xfffffffffffff9f0;
  if ((undefined8 ****)local_618._0_8_ == (undefined8 ****)0x0) {
    local_490 = (undefined8 ***)stack0xfffffffffffff9f0;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
              (&local_3f8,&local_5d8,"temporary-directory",0x13);
    lVar10 = clap_builder::parser::error::MatchesError::unwrap
                       ("temporary-directory",0x13,&local_3f8);
    if (lVar10 == 0) {
LAB_001bd703:
      core::ops::function::FnOnce::call_once(&local_3f8);
    }
    else {
      core::ops::function::FnOnce::call_once
                (&local_3f8,*(undefined8 *)(lVar10 + 8),*(undefined8 *)(lVar10 + 0x10));
      local_618._0_8_ = uStack_3f0;
      unique0x10001f6b = (code *)local_3e8;
      if ((undefined8 ****)local_3f8 == (undefined8 ****)0x8000000000000000) goto LAB_001bd703;
    }
    (*(code *)PTR_new_00306d20)(&local_458,&local_3f8);
                    /* try { // try from 001bd73c to 001bd791 has its CatchHandler @ 001be517 */
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
              (&local_3f8,&local_5d8,"compress-program",0x10);
    lVar10 = clap_builder::parser::error::MatchesError::unwrap("compress-program",0x10,&local_3f8);
    ppppuVar12 = (undefined8 ****)0x8000000000000000;
    if (lVar10 != 0) {
      core::ops::function::FnOnce::call_once(&local_3f8,lVar10);
      local_618._0_8_ = uStack_3f0;
      unique0x10001f7b = (code *)local_3e8;
      ppppuVar12 = (undefined8 ****)local_3f8;
    }
                    /* try { // try from 001bd7a6 to 001bd7b5 has its CatchHandler @ 001be4d1 */
    core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(&local_4c8);
    local_4c0 = local_618._0_4_;
    uStack_4bc = local_618._4_4_;
    uStack_4b8 = local_618._8_4_;
    uStack_4b4 = uStack_60c;
                    /* try { // try from 001bd7c7 to 001bdfe1 has its CatchHandler @ 001be517 */
    local_4c8 = ppppuVar12;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
              (&local_3f8,&local_5d8,"batch-size");
    pppuVar11 = (undefined8 ***)
                clap_builder::parser::error::MatchesError::unwrap("batch-size",10,&local_3f8);
    uVar4 = local_488;
    if (pppuVar11 == (undefined8 ***)0x0) {
LAB_001bdbd5:
      local_488 = uVar4;
      cVar6 = (*(code *)PTR_get_flag_00306d00)(&local_5d8,"zero-terminated",0xf);
      uVar5 = 10;
      if (cVar6 != '\0') {
        uVar5 = 0;
      }
      local_460._0_2_ = CONCAT11(uVar5,(undefined)local_460);
      uVar5 = (*(code *)PTR_get_flag_00306d00)(&local_5d8,"merge",5);
      local_47c._0_6_ = CONCAT15(uVar5,(undefined5)local_47c);
      uVar5 = (*(code *)PTR_contains_id_00306d08)(&local_5d8,"check",5);
      local_474._0_2_ = CONCAT11(uVar5,(undefined)local_474);
      cVar6 = (*(code *)PTR_get_flag_00306d00)(&local_5d8,"check-silent",0xc);
      if (cVar6 == '\0') {
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
                  (&local_3f8,&local_5d8,"check",5);
        lVar10 = clap_builder::parser::error::MatchesError::unwrap("check",5,&local_3f8);
        if (lVar10 != 0) {
          uVar9 = *(undefined8 *)(lVar10 + 8);
          uVar14 = *(undefined8 *)(lVar10 + 0x10);
          cVar6 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                            (uVar9,uVar14,"silentOpenFailederrorReadFailedParseKeyError",6);
          if ((cVar6 != '\0') ||
             (cVar6 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(uVar9,uVar14,"quiet",5),
             cVar6 != '\0')) goto LAB_001bdcd0;
        }
      }
      else {
LAB_001bdcd0:
        local_474._0_3_ = CONCAT21(0x101,(undefined)local_474);
      }
      uVar5 = (*(code *)PTR_get_flag_00306d00)(&local_5d8,"ignore-case",0xb);
      local_47c._0_3_ = CONCAT12(uVar5,(undefined2)local_47c);
      uVar5 = (*(code *)PTR_get_flag_00306d00)(&local_5d8,"ignore-leading-blanks",0x15);
      local_47c._0_2_ = CONCAT11(uVar5,(undefined)local_47c);
      uVar5 = (*(code *)PTR_get_flag_00306d00)(&local_5d8,"reverse",7);
      local_47c._0_7_ = CONCAT16(uVar5,(undefined6)local_47c);
      uVar5 = (*(code *)PTR_get_flag_00306d00)(&local_5d8,"stable",6);
      local_47c = CONCAT17(uVar5,(undefined7)local_47c);
      uVar5 = (*(code *)PTR_get_flag_00306d00)(&local_5d8,"unique",6);
      uVar3 = local_474;
      local_474 = CONCAT31(local_474._1_3_,uVar5);
      if ((undefined8 ****)local_548 == (undefined8 ****)0x0) {
        _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_100,"-",1);
        local_3e8 = (undefined8 ****)local_f0;
        local_3f8 = (undefined **)CONCAT44(uStack_fc,local_100);
        uStack_3f0 = (undefined8 ****)CONCAT44(uStack_f4,uStack_f8);
        ::alloc::vec::Vec<T,A>::push(&local_558,&local_3f8);
      }
      else if ((local_548 != (undefined8 ***)&DAT_00000001) &&
              (local_474._1_1_ = SUB41(uVar3,1), bVar16 = local_474._1_1_ != '\0', bVar16)) {
        unique0x10001fc3 = (code *)uStack_550[4];
        local_608 = (undefined8 ****)uStack_550[5];
        local_618._0_8_ = &DAT_00000001;
        uStack_600 = CONCAT31(uStack_600._1_3_,1);
        uStack_590 = (code *)PTR_fmt_00306d30;
        local_3f8 = &PTR_s_extra_operand_not_allowed_with___002fc128;
        uStack_3f0 = (undefined8 ****)0x2;
        local_3d8 = 0;
        local_3e8 = (undefined8 ****)&local_598;
        uStack_3e0 = (undefined8 ****)0x1;
        local_598 = (undefined8 ****)local_618;
        core::option::Option<T>::map_or_else(&local_130,&local_3f8);
        uStack_3e0 = (undefined8 ****)CONCAT44(uStack_3e0._4_4_,2);
        local_3f8 = (undefined **)CONCAT44(uStack_12c,local_130);
        uStack_3f0 = (undefined8 ****)CONCAT44(uStack_124,uStack_128);
        local_3e8 = (undefined8 ****)local_120;
        ppppuVar12 = (undefined8 ****)::alloc::boxed::Box<T>::new(&local_3f8);
        goto LAB_001be35a;
      }
      clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
                (&local_3f8,&local_5d8,"field-separator",0xf);
      lVar10 = clap_builder::parser::error::MatchesError::unwrap("field-separator",0xf,&local_3f8);
      iVar8 = local_480;
      if (lVar10 != 0) {
        (*(code *)PTR_try_from_00306d40)
                  (&local_3f8,*(undefined8 *)(lVar10 + 8),*(undefined8 *)(lVar10 + 0x10));
        ppppuVar12 = local_3e8;
        pcVar15 = (char *)uStack_3f0;
        if ((undefined8 ****)local_3f8 == (undefined8 ****)0x0) {
          bVar7 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(uStack_3f0,local_3e8,"\\0",2);
          if (bVar7 != 0) {
            pcVar15 = "";
          }
          if ((ppppuVar12 == (undefined8 ****)&DAT_00000001 | bVar7) == 1) {
            uStack_3f0 = (undefined8 ****)((long)pcVar15 + 1);
            local_3f8 = (undefined **)pcVar15;
            iVar8 = core::str::validations::next_code_point(&local_3f8);
            if ((iVar8 == 0) || (iVar8 = extraout_EDX, extraout_EDX == 0x110000)) {
                    /* try { // try from 001be496 to 001be4a2 has its CatchHandler @ 001be517 */
              (*(code *)PTR_unwrap_failed_00306d78)
                        (&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_002fc1e8);
                    /* WARNING: Does not return */
              pcVar1 = (code *)invalidInstructionException();
              (*pcVar1)();
            }
            goto LAB_001bdfa8;
          }
          local_618._0_8_ = (undefined8 ****)0x0;
          local_608 = ppppuVar12;
          uStack_600 = CONCAT31(uStack_600._1_3_,1);
          uStack_590 = (code *)PTR_fmt_00306d30;
          local_3f8 = &PTR_s_separator_must_be_exactly_one_ch_002fc148;
          uStack_3f0 = (undefined8 ****)0x1;
          local_3d8 = 0;
          local_3e8 = (undefined8 ****)&local_598;
          uStack_3e0 = (undefined8 ****)0x1;
          unique0x100028f5 = (code *)pcVar15;
          local_598 = (undefined8 ****)local_618;
          core::option::Option<T>::map_or_else(&local_118,&local_3f8);
          uStack_3e0 = (undefined8 ****)CONCAT44(uStack_3e0._4_4_,2);
          local_3f8 = (undefined **)CONCAT44(uStack_114,local_118);
          uStack_3f0 = (undefined8 ****)CONCAT44(uStack_10c,uStack_110);
          local_3e8 = (undefined8 ****)local_108;
          ppppuVar12 = (undefined8 ****)::alloc::boxed::Box<T>::new(&local_3f8);
        }
        else {
          ppppuVar12 = (undefined8 ****)
                       uumain::___closure__
                                 (*(undefined8 *)(lVar10 + 8),*(undefined8 *)(lVar10 + 0x10));
        }
        goto LAB_001be35a;
      }
LAB_001bdfa8:
      local_480 = iVar8;
      clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many
                (&local_3f8,&local_5d8,"keymsgOpenTmpFileFailedCompressProgExecutionFailed",3);
      clap_builder::parser::error::MatchesError::unwrap
                (local_618,"keymsgOpenTmpFileFailedCompressProgExecutionFailed",3,&local_3f8);
      puVar2 = PTR_parse_00306d48;
      if ((undefined8 ****)local_618._0_8_ != (undefined8 ****)0x0) {
        uStack_3e0 = (undefined8 ****)CONCAT44(uStack_5fc,uStack_600);
        local_3d8 = CONCAT44(uStack_5f4,local_5f8);
        local_3e8 = local_608;
        local_3f8 = (undefined **)local_618._0_8_;
        uStack_3f0 = (undefined8 ****)stack0xfffffffffffff9f0;
        while (lVar10 = _<clap_builder::parser::matches::arg_matches::ValuesRef<T>as_core::iter::traits::iterator::Iterator>
                        ::next(&local_3f8), lVar10 != 0) {
          (*(code *)puVar2)(&local_598,*(undefined8 *)(lVar10 + 8),*(undefined8 *)(lVar10 + 0x10),
                            &local_4f8);
          ppppuVar12 = local_598;
          unaff_R13 = (undefined8 ****)uStack_590;
          if (local_561 == '\x02') goto LAB_001be364;
          uStack_b8 = (undefined5)uStack_568;
          cStack_b3 = (char)((uint7)uStack_568 >> 0x28);
          uStack_b2 = (undefined)((uint7)uStack_568 >> 0x30);
          local_d8 = (undefined4)local_588;
          uStack_d4 = local_588._4_4_;
          uStack_d0 = uStack_580;
          uStack_cc = uStack_57c;
          local_c8 = local_578;
          uStack_c4 = uStack_574;
          uStack_c0 = uStack_570;
          uStack_bc = uStack_56c;
          local_e8 = local_598;
          local_e0 = (undefined8 ***)uStack_590;
          local_b1 = local_561;
          if ((cStack_b3 == '\x05') && (local_474._3_1_ == '\0')) {
            (*(code *)PTR_get_rand_string_00306d18)(&local_598);
            local_470 = (undefined4)local_598;
            uStack_46c = local_598._4_4_;
            uStack_468 = (undefined4)uStack_590;
            uStack_464 = uStack_590._4_4_;
            local_474 = CONCAT13(1,(undefined3)local_474);
          }
                    /* try { // try from 001be060 to 001be107 has its CatchHandler @ 001be503 */
          ::alloc::vec::Vec<T,A>::push(&local_4f8,&local_e8);
        }
      }
                    /* try { // try from 001be128 to 001be1c7 has its CatchHandler @ 001be517 */
      cVar6 = (*(code *)PTR_contains_id_00306d08)
                        (&local_5d8,"keymsgOpenTmpFileFailedCompressProgExecutionFailed",3);
      if (cVar6 == '\0') {
        local_598 = (undefined8 ****)&DAT_00000001;
        uStack_590 = (code *)&DAT_00000001;
        local_588 = (undefined8 ****)CONCAT71(local_588._1_7_,(char)(local_47c >> 8));
        local_608 = (undefined8 ****)CONCAT71(local_608._1_7_,2);
        (*(code *)PTR_new_00306d50)
                  (&local_3f8,&local_598,local_618,
                   (ulong)local_460 << 0x28 | local_47c >> 8 & 0xffffffff |
                   (local_47c >> 0x30 & 0xff) << 0x20);
        core::result::Result<T,E>::unwrap(local_618,&local_3f8);
        ::alloc::vec::Vec<T,A>::push(&local_4f8,local_618);
      }
      unique0x00004700 = (code *)(uStack_550 + (long)local_548 * 3);
      local_618._0_8_ = uStack_550;
      while (lVar10 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next
                                (local_618), lVar10 != 0) {
                    /* try { // try from 001be20d to 001be241 has its CatchHandler @ 001be501 */
        open(&local_3f8,lVar10);
        ppppuVar12 = uStack_3f0;
        unaff_R13 = local_3e8;
        if ((undefined8 ****)local_3f8 != (undefined8 ****)0x0) goto LAB_001be364;
        core::ptr::
        drop_in_place<alloc::boxed::Box<dyn_core::error::Error_core::marker::Sync_core::marker::Send>>
                  (uStack_3f0,local_3e8);
      }
                    /* try { // try from 001be244 to 001be359 has its CatchHandler @ 001be517 */
      clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
                (&local_3f8,&local_5d8,"output",6);
      auVar17 = clap_builder::parser::error::MatchesError::unwrap("output",6,&local_3f8);
      uVar9 = auVar17._8_8_;
      lVar10 = auVar17._0_8_;
      if (lVar10 == 0) {
        uVar14 = 0;
      }
      else {
        uVar14 = *(undefined8 *)(lVar10 + 8);
        uVar9 = *(undefined8 *)(lVar10 + 0x10);
      }
                    /* try { // try from 001be3af to 001be3b7 has its CatchHandler @ 001be517 */
      (*(code *)PTR_new_00306d58)(local_618,uVar14,uVar9);
      ppppuVar12 = (undefined8 ****)stack0xfffffffffffff9f0;
      unaff_R13 = local_608;
      if ((undefined8 ****)local_618._0_8_ != (undefined8 ****)0x8000000000000001) {
        uStack_580 = uStack_600;
        uStack_57c = uStack_5fc;
        local_598 = (undefined8 ****)local_618._0_8_;
        uStack_590 = stack0xfffffffffffff9f0;
        local_588 = local_608;
                    /* try { // try from 001be3fd to 001be40a has its CatchHandler @ 001be4b7 */
        (*(code *)PTR_init_precomputed_00306d60)(&local_4f8);
        local_3e8 = local_588;
        uStack_3e0 = (undefined8 ****)CONCAT44(uStack_57c,uStack_580);
        local_3f8 = (undefined **)local_598;
        uStack_3f0 = (undefined8 ****)uStack_590;
                    /* try { // try from 001be43b to 001be458 has its CatchHandler @ 001be4b5 */
        auVar17 = (*(code *)PTR_exec_00306d68)
                            (uStack_550,local_548,&local_4f8,&local_3f8,&local_458);
        unaff_R13 = auVar17._8_8_;
        ppppuVar12 = auVar17._0_8_;
                    /* try { // try from 001be459 to 001be46c has its CatchHandler @ 001be4a5 */
        (*(code *)PTR_wait_if_signal_00306d70)(&local_458);
                    /* try { // try from 001be46d to 001be479 has its CatchHandler @ 001be533 */
        core::ptr::drop_in_place<uu_sort::tmp_dir::TmpDirWrapper>(&local_458);
                    /* try { // try from 001be47a to 001be486 has its CatchHandler @ 001be529 */
        core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(&local_558);
                    /* try { // try from 001be487 to 001be490 has its CatchHandler @ 001be52e */
        core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&local_5d8)
        ;
        goto LAB_001be388;
      }
    }
    else {
      local_400 = pppuVar11;
      (*(code *)PTR_from_str_00306d28)(&local_510,pppuVar11[1],pppuVar11[2]);
      if (local_510 == '\0') {
        uVar4 = CONCAT44(uStack_504,uStack_508);
        if (1 < CONCAT44(uStack_504,uStack_508)) goto LAB_001bdbd5;
        _local_618 = (*(code *)PTR_util_name_00306cd0)();
        uStack_590 = _<&T_as_core::fmt::Display>::fmt;
        local_3f8 = (undefined **)&DAT_002fc050;
        uStack_3f0 = (undefined8 ****)0x2;
        local_3d8 = 0;
        local_3e8 = (undefined8 ****)&local_598;
        uStack_3e0 = (undefined8 ****)0x1;
        local_598 = (undefined8 ****)local_618;
        (*(code *)PTR__eprint_00306cd8)(&local_3f8);
        local_618._0_8_ = &local_400;
        stack0xfffffffffffff9f0 = _<&T_as_core::fmt::Display>::fmt;
        local_3f8 = &PTR_s_invalid___batch_size_argument____002fc0c8;
        uStack_3f0 = (undefined8 ****)0x2;
        local_3d8 = 0;
        uStack_3e0 = (undefined8 ****)0x1;
        local_3e8 = (undefined8 ****)local_618;
        (*(code *)PTR__eprint_00306cd8)(&local_3f8);
        _<T_as_alloc::slice::hack::ConvertVec>::to_vec
                  (local_618,"minimum --batch-size argument is \'2\'",0x24);
        local_3e8 = local_608;
        local_3f8 = (undefined **)local_618._0_8_;
        uStack_3f0 = (undefined8 ****)stack0xfffffffffffff9f0;
        uStack_3e0 = (undefined8 ****)CONCAT44(uStack_3e0._4_4_,2);
        ppppuVar12 = (undefined8 ****)::alloc::boxed::Box<T>::new(&local_3f8);
        goto LAB_001be35a;
      }
      if (cStack_50f == '\x02') {
        _local_618 = (*(code *)PTR_util_name_00306cd0)();
        uStack_590 = _<&T_as_core::fmt::Display>::fmt;
        local_3f8 = (undefined **)&DAT_002fc050;
        uStack_3f0 = (undefined8 ****)0x2;
        local_3d8 = 0;
        uStack_3e0 = (undefined8 ****)0x1;
        local_598 = (undefined8 ****)local_618;
        local_3e8 = (undefined8 ****)&local_598;
        (*(code *)PTR__eprint_00306cd8)(&local_3f8);
        unique0x10001f83 = (code *)pppuVar11[1];
        local_608 = (undefined8 ****)pppuVar11[2];
        local_618._0_8_ = (undefined8 ****)0x0;
        uStack_600 = CONCAT31(uStack_600._1_3_,1);
        uStack_590 = (code *)PTR_fmt_00306d30;
        local_3f8 = &PTR_s___batch_size_argument_too_large_002fc0e8;
        uStack_3f0 = (undefined8 ****)0x2;
        local_3d8 = 0;
        uStack_3e0 = (undefined8 ****)&DAT_00000001;
        local_598 = (undefined8 ****)local_618;
        local_3e8 = (undefined8 ****)&local_598;
        (*(code *)PTR__eprint_00306cd8)(&local_3f8);
        (*(code *)PTR_get_rlimit_00306d38)(local_618);
        ppppuVar12 = (undefined8 ****)local_618._0_8_;
        unaff_R13 = (undefined8 ****)stack0xfffffffffffff9f0;
        if ((undefined8 ****)local_618._0_8_ != (undefined8 ****)0x0) goto LAB_001be364;
        local_528 = (undefined8 ***)stack0xfffffffffffff9f0;
        local_598 = &local_528;
        uStack_590 = (code *)PTR_fmt_00306c08;
        local_3f8 = &PTR_s_maximum___batch_size_argument_wi_002fc108;
        uStack_3f0 = (undefined8 ****)0x1;
        local_3d8 = 0;
        uStack_3e0 = (undefined8 ****)0x1;
        plVar13 = local_60;
        local_3e8 = (undefined8 ****)&local_598;
        core::option::Option<T>::map_or_else(plVar13,&local_3f8);
      }
      else {
        unique0x10001fa3 = (code *)pppuVar11[1];
        local_608 = (undefined8 ****)pppuVar11[2];
        local_618._0_8_ = (undefined8 ****)0x0;
        uStack_600 = CONCAT31(uStack_600._1_3_,1);
        uStack_590 = (code *)PTR_fmt_00306d30;
        local_3f8 = &PTR_s_invalid___batch_size_argument_002fc118;
        uStack_3f0 = (undefined8 ****)0x1;
        local_3d8 = 0;
        local_3e8 = (undefined8 ****)&local_598;
        uStack_3e0 = (undefined8 ****)0x1;
        plVar13 = local_48;
        local_598 = (undefined8 ****)local_618;
        core::option::Option<T>::map_or_else(plVar13,&local_3f8);
      }
      local_3e8 = (undefined8 ****)plVar13[2];
      local_78 = *(undefined4 *)plVar13;
      uStack_74 = *(undefined4 *)((long)plVar13 + 4);
      local_3f8 = (undefined **)*plVar13;
      uStack_70 = *(undefined4 *)(plVar13 + 1);
      uStack_6c = *(undefined4 *)((long)plVar13 + 0xc);
      uStack_3f0 = (undefined8 ****)plVar13[1];
      uStack_3e0 = (undefined8 ****)CONCAT44(uStack_3e0._4_4_,2);
      local_68 = local_3e8;
      ppppuVar12 = (undefined8 ****)::alloc::boxed::Box<T>::new(&local_3f8);
LAB_001be35a:
      unaff_R13 = (undefined8 ****)&PTR_drop_in_place<uucore_mods_error_UUsageError>_002fc178;
    }
LAB_001be364:
                    /* try { // try from 001be364 to 001be370 has its CatchHandler @ 001be533 */
    core::ptr::drop_in_place<uu_sort::tmp_dir::TmpDirWrapper>(&local_458);
  }
                    /* try { // try from 001be371 to 001be37d has its CatchHandler @ 001be529 */
  core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(&local_558);
LAB_001be37e:
                    /* try { // try from 001be37e to 001be387 has its CatchHandler @ 001be52e */
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&local_5d8);
LAB_001be388:
  core::ptr::drop_in_place<uu_sort::GlobalSettings>(&local_4f8);
  auVar17._8_8_ = unaff_R13;
  auVar17._0_8_ = ppppuVar12;
  return auVar17;
}