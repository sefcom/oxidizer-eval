undefined  [16] _ZN7uu_kill6uumain6uumain17h6ef9ffba962f0a6aE(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined auVar2 [16];
  char cVar3;
  byte bVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  int iVar8;
  ulong uVar9;
  undefined auVar10 [16];
  long local_3e0;
  undefined8 local_3d8;
  long lStack_3d0;
  undefined local_3c8 [16];
  undefined8 local_3b8;
  undefined4 uStack_3b0;
  undefined4 uStack_3ac;
  undefined4 local_3a8;
  undefined4 uStack_3a4;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  undefined8 local_398;
  undefined4 local_388;
  undefined4 uStack_384;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  undefined4 local_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined8 local_358;
  undefined local_350 [16];
  undefined8 local_340;
  long local_338 [8];
  undefined4 local_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined8 uStack_2e8;
  undefined4 local_2e0;
  
  _ZN6uucore4Args14collect_ignore17hb8fa0324ef445f0bE(local_350,param_1,param_2);
                    /* try { // try from 00158f37 to 00158f53 has its CatchHandler @ 001592db */
  auVar10 = (*(code *)PTR__ZN7uu_kill15handle_obsolete17h472cae1b62eba817E_001ee068)(local_350);
  uVar7 = auVar10._8_8_;
  (*(code *)PTR__ZN7uu_kill6uu_app17h67c2defd3341e89eE_001ee070)(&local_2f8);
  local_3b8 = local_340;
  _ZN12clap_builder7builder7command7Command20try_get_matches_from17hb26244fb1e28f500E
            (&local_388,&local_2f8,local_3c8);
  local_398 = local_358;
  local_3a8 = local_368;
  uStack_3a4 = uStack_364;
  uStack_3a0 = uStack_360;
  uStack_39c = uStack_35c;
  uStack_3b0 = uStack_370;
  uStack_3ac = uStack_36c;
                    /* try { // try from 00158fe4 to 00159080 has its CatchHandler @ 001592f3 */
  cVar3 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001ee088
          )(local_3c8,*(undefined8 *)PTR__ZN7uu_kill7options5TABLE17hf5e406d79938cf60E_001ee080,
            *(undefined8 *)(PTR__ZN7uu_kill7options5TABLE17hf5e406d79938cf60E_001ee080 + 8));
  iVar8 = 1;
  if (cVar3 == '\0') {
    bVar4 = (*(code *)
              PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001ee088
            )(local_3c8,*(undefined8 *)PTR__ZN7uu_kill7options4LIST17h983d52dbeefec214E_001ee090,
              *(undefined8 *)(PTR__ZN7uu_kill7options4LIST17h983d52dbeefec214E_001ee090 + 8));
    iVar8 = (uint)bVar4 * 2;
  }
  uVar1 = *(undefined8 *)PTR__ZN7uu_kill7options15PIDS_OR_SIGNALS17h74df70473b295d74E_001ee098;
  uVar6 = *(undefined8 *)(PTR__ZN7uu_kill7options15PIDS_OR_SIGNALS17h74df70473b295d74E_001ee098 + 8)
  ;
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches12try_get_many17h7cd62d38944a9616E
            (&local_2f8,local_3c8,uVar1,uVar6);
  _ZN12clap_builder6parser5error12MatchesError6unwrap17h04ad0e183c3ed2e3E
            (local_338,uVar1,uVar6,&local_2f8);
  if (local_338[0] == 0) {
LAB_0015909b:
    local_3e0 = 0;
    local_3d8 = 8;
    lStack_3d0 = 0;
  }
  else {
    _ZN4core4iter6traits8iterator8Iterator7collect17h754db76a78b8b07bE(&local_2f8,local_338);
    local_3e0 = CONCAT44(uStack_2f4,local_2f8);
    local_388 = uStack_2f0;
    uStack_384 = uStack_2ec;
    uStack_380 = (undefined4)uStack_2e8;
    uStack_37c = uStack_2e8._4_4_;
    if (local_3e0 == -0x8000000000000000) goto LAB_0015909b;
    local_3d8 = CONCAT44(uStack_2ec,uStack_2f0);
    lStack_3d0 = uStack_2e8;
  }
  if (iVar8 != 0) {
    if (iVar8 == 1) {
                    /* try { // try from 001590c0 to 001590d2 has its CatchHandler @ 001592cc */
      (*(code *)PTR__ZN7uu_kill5table17h9adbfdcf596cda83E_001ee0a0)();
    }
    else {
      (*(code *)PTR__ZN7uu_kill4list17h0b8bd48cc010fd8eE_001ee0a8)(&local_3e0);
    }
    uVar6 = 0;
    goto LAB_001590d6;
  }
  if ((auVar10 & (undefined  [16])0x1) == (undefined  [16])0x0) {
    uVar1 = *(undefined8 *)PTR__ZN7uu_kill7options6SIGNAL17ha5de88967dceae53E_001ee0b0;
    uVar6 = *(undefined8 *)((long)PTR__ZN7uu_kill7options6SIGNAL17ha5de88967dceae53E_001ee0b0 + 8);
                    /* try { // try from 00159129 to 001591fc has its CatchHandler @ 001592cc */
    _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17hed8fbb0e98fe6897E
              (&local_2f8,local_3c8,uVar1,uVar6);
    lVar5 = _ZN12clap_builder6parser5error12MatchesError6unwrap17he5cf21e4e2801c28E
                      (uVar1,uVar6,&local_2f8);
    if (lVar5 != 0) {
      (*(code *)PTR__ZN7uu_kill18parse_signal_value17h198dbdcf792084b2E_001ee0b8)
                (&local_2f8,*(undefined8 *)(lVar5 + 8),*(undefined8 *)(lVar5 + 0x10));
      uVar7 = CONCAT44(uStack_2ec,uStack_2f0);
      auVar10._8_8_ = uVar7;
      auVar10._0_8_ = CONCAT44(uStack_2f4,local_2f8);
      if (CONCAT44(uStack_2f4,local_2f8) != 0) goto LAB_0015921a;
      goto LAB_00159110;
    }
    uVar7 = 0xf;
LAB_0015918f:
    cVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h64357ef2ac88b3dfE
                      (*(undefined8 *)
                        (PTR__ZN6uucore8features7signals11ALL_SIGNALS17hb6c41a286543a4a8E_001ee0c0 +
                        uVar7 * 0x10),
                       *(undefined8 *)
                        (PTR__ZN6uucore8features7signals11ALL_SIGNALS17hb6c41a286543a4a8E_001ee0c0 +
                        uVar7 * 0x10 + 8),&DAT_00117b0c,4);
    uVar9 = 0;
    if (cVar3 == '\0') goto LAB_001591be;
  }
  else {
LAB_00159110:
    if (uVar7 < 0x20) goto LAB_0015918f;
LAB_001591be:
    auVar10 = _ZN78__LT_nix__sys__signal__Signal_u20_as_u20_core__convert__TryFrom_LT_i32_GT__GT_8try_from17h9a35f89cbe212992E
                        (uVar7 & 0xffffffff);
    uVar9 = auVar10._8_8_ & 0xffffffff;
    if ((auVar10 & (undefined  [16])0x1) != (undefined  [16])0x0) {
      auVar10 = (*(code *)
                  PTR__ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7b5f769e1554bcc2E_001ee0c8
                )(uVar9 << 0x20 | 2);
      goto LAB_0015921a;
    }
  }
  (*(code *)PTR__ZN7uu_kill10parse_pids17h21a5e6a2b47128d6E_001ee0d0)
            (&local_2f8,local_3d8,lStack_3d0);
  lVar5 = CONCAT44(uStack_2f4,local_2f8);
  uVar1 = CONCAT44(uStack_2ec,uStack_2f0);
  auVar10._8_8_ = uStack_2e8;
  auVar10._0_8_ = uVar1;
  if (lVar5 != -0x8000000000000000) {
    if (uStack_2e8 == 0) {
      _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17hffb4d74c12d8fb8dE
                (&local_388,
                 "no process ID specified\nTry --help for more information./home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/slice.rsError flushing stdout: "
                 ,0x38);
      local_2f8 = local_388;
      uStack_2f4 = uStack_384;
      uStack_2f0 = uStack_380;
      uStack_2ec = uStack_37c;
      local_2e0 = 1;
      uVar6 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h51260f68952d93e0E(&local_2f8);
    }
    else {
                    /* try { // try from 0015924b to 001592a5 has its CatchHandler @ 001592bc */
      (*(code *)PTR__ZN7uu_kill4kill17hf0ec59056e3b4307E_001ee0d8)(uVar9,uVar1,uStack_2e8);
      uVar6 = 0;
    }
    _ZN4core3ptr47drop_in_place_LT_alloc__vec__Vec_LT_i32_GT__GT_17h2dc59426f0799ab8E(lVar5,uVar1);
LAB_001590d6:
    _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT_17hac24f6519a3c6bb6E
              (&local_3e0);
    _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17he82a2865757df048E
              (local_3c8);
    auVar2._8_8_ = &
                   PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17h26d13528c86f3d90E_001e6c38
    ;
    auVar2._0_8_ = uVar6;
    return auVar2;
  }
LAB_0015921a:
  _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT_17hac24f6519a3c6bb6E
            (&local_3e0);
  _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17he82a2865757df048E
            (local_3c8);
  return auVar10;
}