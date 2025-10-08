undefined  [16]
_ZN6uu_who8platform4unix6uumain17h0ce5c590433f3d26E(undefined8 param_1,undefined8 param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  undefined uVar9;
  undefined uVar10;
  char cVar11;
  undefined uVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  char cVar20;
  byte bVar21;
  byte bVar22;
  undefined auVar23 [16];
  undefined8 local_668;
  undefined8 local_650;
  undefined8 uStack_648;
  long lStack_640;
  undefined8 uStack_638;
  undefined4 local_630;
  undefined4 uStack_62c;
  undefined4 uStack_628;
  undefined4 uStack_624;
  undefined8 local_620;
  undefined local_618 [24];
  long local_600 [8];
  undefined8 local_5c0;
  undefined8 local_5b8;
  undefined8 local_5b0;
  undefined8 uStack_5a8;
  undefined4 local_5a0;
  undefined4 uStack_59c;
  undefined4 uStack_598;
  undefined4 uStack_594;
  undefined8 local_590;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  long lStack_2e8;
  undefined local_2e0;
  undefined local_2df;
  byte local_2de;
  byte local_2dd;
  undefined local_2dc;
  undefined8 local_2db;
  byte local_2d3;
  undefined local_2d2;
  
  (*(code *)PTR__ZN6uu_who6uu_app17h66b593fcffc444f9E_00205d20)(&local_2f8);
                    /* try { // try from 0015fae5 to 0015faef has its CatchHandler @ 0015ff27 */
  (*(code *)PTR__ZN6uu_who8platform4unix14get_long_usage17had9fcc63344d3619E_00205d28)(local_618);
  _ZN12clap_builder7builder7command7Command10after_help17h10203b70564a15beE
            (&local_5c0,&local_2f8,local_618);
  _ZN12clap_builder7builder7command7Command20try_get_matches_from17h778888cd595d27d0E
            (&local_650,&local_5c0,param_1,param_2);
  local_590 = local_620;
  local_5a0 = local_630;
  uStack_59c = uStack_62c;
  uStack_598 = uStack_628;
  uStack_594 = uStack_624;
  local_5b0 = lStack_640;
  uStack_5a8 = uStack_638;
  local_5c0 = local_650;
  local_5b8 = uStack_648;
                    /* try { // try from 0015fb82 to 0015fbc2 has its CatchHandler @ 0015ff39 */
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches12try_get_many17hb26010e58287709bE
            (&local_2f8,&local_5c0);
  _ZN12clap_builder6parser5error12MatchesError6unwrap17h12a87886debc1fc8E(local_600,&local_2f8);
  if (local_600[0] == 0) {
    local_650 = 0;
    uStack_648 = 8;
    lStack_640 = 0;
  }
  else {
    _ZN4core4iter6traits8iterator8Iterator7collect17h46fe471172d293d5E(&local_2f8,local_600);
    uStack_648 = uStack_2f0;
    lStack_640 = lStack_2e8;
    local_650 = local_2f8;
  }
                    /* try { // try from 0015fbfc to 0015fe54 has its CatchHandler @ 0015ff3e */
  uVar9 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_00205d38
          )(&local_5c0,"lookup",6);
  uVar10 = (*(code *)
             PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_00205d38
           )(&local_5c0,"count",5);
  cVar11 = (*(code *)
             PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_00205d38
           )(&local_5c0,"all",3);
  uVar12 = (*(code *)
             PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_00205d38
           )(&local_5c0,"heading",7);
  if (cVar11 == '\0') {
    bVar13 = (*(code *)
               PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_00205d38
             )(&local_5c0,&DAT_001191dc,4);
    cVar11 = (*(code *)
               PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_00205d38
             )(&local_5c0,&DAT_00119218,4);
    bVar14 = (*(code *)
               PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_00205d38
             )(&local_5c0,&DAT_001191e0,4);
    bVar15 = (*(code *)
               PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_00205d38
             )(&local_5c0,"login",5);
    bVar16 = (*(code *)
               PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_00205d38
             )(&local_5c0,"process",7);
    bVar17 = (*(code *)
               PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_00205d38
             )(&local_5c0,&DAT_001191cc,4);
    bVar18 = (*(code *)
               PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_00205d38
             )(&local_5c0,"runlevel",8);
    if ((bVar17 == 0 && bVar18 == 0) &&
        ((bVar15 == 0 && bVar16 == 0) && (cVar11 == '\0' && bVar14 == 0))) {
      bVar19 = (*(code *)
                 PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_00205d38
               )(&local_5c0,"users",5);
      bVar19 = bVar19 ^ 1;
    }
    else {
      bVar19 = 0;
    }
    cVar20 = (*(code *)
               PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_00205d38
             )(&local_5c0,"users",5);
    local_2d3 = bVar19;
    if (cVar20 != '\0') {
      local_2d3 = 1;
    }
    bVar22 = local_2d3;
    if (bVar18 != 0) {
      bVar22 = 1;
    }
    if (bVar15 != 0) {
      bVar22 = 1;
    }
    if (bVar14 != 0) {
      bVar22 = 1;
    }
    bVar21 = 0;
    if (bVar14 == 0) {
      bVar21 = bVar19;
    }
    auVar23[4] = cVar11;
    auVar23._0_4_ = (uint)bVar14 << 0x10 | (uint)bVar13;
    auVar23._5_3_ = 0;
    auVar23._8_8_ =
         (ulong)bVar15 | (ulong)bVar16 << 0x10 | (ulong)bVar17 << 0x20 | (ulong)bVar18 << 0x30;
    auVar23 = pshuflw(auVar23,auVar23,100);
    auVar23 = auVar23 & _DAT_001189b0;
    sVar1 = auVar23._0_2_;
    sVar2 = auVar23._2_2_;
    sVar3 = auVar23._4_2_;
    sVar4 = auVar23._6_2_;
    sVar5 = auVar23._8_2_;
    sVar6 = auVar23._10_2_;
    sVar7 = auVar23._12_2_;
    sVar8 = auVar23._14_2_;
    local_668 = CONCAT17((0 < sVar8) * (sVar8 < 0x100) * auVar23[0xe] - (0xff < sVar8),
                         CONCAT16((0 < sVar7) * (sVar7 < 0x100) * auVar23[0xc] - (0xff < sVar7),
                                  CONCAT15((0 < sVar6) * (sVar6 < 0x100) * auVar23[10] -
                                           (0xff < sVar6),
                                           CONCAT14((0 < sVar5) * (sVar5 < 0x100) * auVar23[8] -
                                                    (0xff < sVar5),
                                                    CONCAT13((0 < sVar4) * (sVar4 < 0x100) *
                                                             auVar23[6] - (0xff < sVar4),
                                                             CONCAT12((0 < sVar3) * (sVar3 < 0x100)
                                                                      * auVar23[4] - (0xff < sVar3),
                                                                      CONCAT11((0 < sVar2) *
                                                                               (sVar2 < 0x100) *
                                                                               auVar23[2] -
                                                                               (0xff < sVar2),
                                                                               (0 < sVar1) *
                                                                               (sVar1 < 0x100) *
                                                                               auVar23[0] -
                                                                               (0xff < sVar1))))))))
    ;
  }
  else {
    local_668 = _DAT_001188b0;
    bVar22 = 1;
    bVar21 = 0;
    local_2d3 = 1;
  }
  cVar11 = (*(code *)
             PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_00205d38
           )(&local_5c0,
             "only_hostname_user/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/slice.rsError flushing stdout: "
             ,0x12);
  local_2d2 = cVar11 != '\0' || lStack_640 == 2;
  lStack_2e8 = lStack_640;
  local_2f8 = local_650;
  uStack_2f0 = uStack_648;
  local_2db = local_668;
                    /* try { // try from 0015fecf to 0015fedc has its CatchHandler @ 0015ff15 */
  local_2e0 = uVar9;
  local_2df = uVar10;
  local_2de = bVar21;
  local_2dd = bVar22;
  local_2dc = uVar12;
  auVar23 = (*(code *)PTR__ZN6uu_who8platform4unix3Who4exec17hfa7301829d97906eE_00205d40)
                      (&local_2f8);
  _ZN4core3ptr48drop_in_place_LT_uu_who__platform__unix__Who_GT_17h0c02ef86784fcfa2E(&local_2f8);
  _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17h80080c2e7de54405E
            (&local_5c0);
  return auVar23;
}