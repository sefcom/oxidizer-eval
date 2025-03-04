undefined8 *
_ZN5uu_cp7Options12from_matches17h583c69bc9ce4dd71E(undefined8 *param_1,undefined8 param_2)

{
  code *pcVar1;
  char cVar2;
  char cVar3;
  undefined uVar4;
  undefined uVar5;
  undefined uVar6;
  undefined uVar7;
  undefined uVar8;
  undefined uVar9;
  undefined uVar10;
  undefined uVar11;
  undefined uVar12;
  undefined uVar13;
  undefined uVar14;
  byte bVar15;
  undefined uVar16;
  undefined8 *puVar17;
  long lVar18;
  undefined extraout_DL;
  undefined8 uVar19;
  ulong uVar20;
  undefined uVar21;
  ulong uVar22;
  undefined8 uVar23;
  undefined auVar24 [16];
  undefined auVar25 [16];
  undefined4 local_2ec;
  undefined2 local_2e8;
  undefined4 local_2e4;
  undefined local_2e0;
  undefined local_2df;
  undefined local_2c4;
  undefined4 local_2c0;
  undefined2 local_2bc;
  undefined local_2ba;
  undefined local_2b9;
  undefined4 local_2b8;
  undefined4 local_2b4;
  undefined2 local_2b0;
  byte local_2ae;
  byte local_2ad;
  undefined4 local_2ac;
  undefined8 local_2a8;
  undefined8 *puStack_2a0;
  undefined8 local_298;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined4 uStack_288;
  undefined4 uStack_284;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  char *local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 local_248;
  code *pcStack_240;
  undefined8 local_238;
  undefined local_228 [16];
  undefined local_218 [8];
  undefined8 local_210;
  undefined8 uStack_208;
  long local_200;
  undefined **local_1f8;
  undefined8 *puStack_1f0;
  undefined8 local_1e8;
  undefined8 *local_1e0;
  undefined4 local_1d8;
  undefined8 *local_1d0;
  undefined4 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 *local_1a8;
  undefined8 uStack_1a0;
  long local_198;
  long local_188;
  undefined local_180;
  undefined7 uStack_17f;
  long local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined6 local_120;
  undefined2 uStack_11a;
  long local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 *local_f0;
  code *pcStack_e8;
  undefined8 local_e0;
  long local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  int local_70 [2];
  char *local_68;
  undefined local_48 [24];
  
  puVar17 = (undefined8 *)_ZN5alloc5alloc6Global10alloc_impl17hf61749d460433fffE();
  if (puVar17 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    _ZN5alloc5alloc18handle_alloc_error17h3816d26e7f8ae8a1E(8,0x10);
  }
  *puVar17 = &DAT_0012bfb1;
  puVar17[1] = 7;
  _ZN5alloc5slice4hack8into_vec17hce11acc89baabf5dE(local_48,puVar17,1);
  _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17hffc5b9d8006f6404E
            (&local_2a8,local_48);
  auVar24 = _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h7172e60caa969428E
                      (&local_2a8);
  if (auVar24._0_8_ != 0) {
    do {
      uVar23 = auVar24._8_8_;
                    /* try { // try from 00201b93 to 00201bad has its CatchHandler @ 00202c47 */
      uVar19 = auVar24._0_8_;
      cVar2 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11contains_id17h8ab577f2647f3b72E
                        (param_2,uVar19,uVar23);
      if ((cVar2 != '\0') &&
         (cVar2 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches12value_source17h1b5412f9501eb404E
                            (param_2,uVar19,uVar23), cVar2 == '\x02')) {
                    /* try { // try from 00201bb2 to 00201bc4 has its CatchHandler @ 00202bf6 */
        _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h837a0740cc026c95E
                  (local_228,uVar19,uVar23);
        param_1[4] = local_218;
        param_1[2] = local_228._0_8_;
        param_1[3] = local_228._8_8_;
        param_1[1] = 10;
        *param_1 = 0x8000000000000000;
        _ZN4core3ptr67drop_in_place_LT_alloc__vec__into_iter__IntoIter_LT__RF_str_GT__GT_17ha3ee35139b7f90b6E
                  (&local_2a8);
        return param_1;
      }
      auVar24 = _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h7172e60caa969428E
                          (&local_2a8);
    } while (auVar24._0_8_ != 0);
  }
  _ZN4core3ptr67drop_in_place_LT_alloc__vec__into_iter__IntoIter_LT__RF_str_GT__GT_17ha3ee35139b7f90b6E
            (&local_2a8);
  cVar2 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE
                    (param_2,"recursive",9);
  cVar3 = '\x01';
  if (cVar2 == '\0') {
    cVar3 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE
                      (param_2,"archive",7);
  }
  _ZN6uucore8features14backup_control21determine_backup_mode17h17e48f842769eb29E(&local_188,param_2)
  ;
  if (local_188 != 0) {
    pcStack_240 = (code *)CONCAT71(uStack_17f,local_180);
    local_248 = (undefined8 *)local_188;
    local_228._0_8_ = &local_248;
    local_228._8_8_ =
         _ZN69__LT_alloc__boxed__Box_LT_T_C_A_GT__u20_as_u20_core__fmt__Display_GT_3fmt17hecbc8f9382c41ff5E
    ;
    local_2a8 = (undefined **)&DAT_0011e7f0;
    puStack_2a0 = (undefined8 *)0x1;
    uStack_288 = 0;
    uStack_284 = 0;
    local_298 = (undefined8 *)local_228;
    uStack_290 = 1;
    uStack_28c = 0;
                    /* try { // try from 00201cd1 to 00201ce2 has its CatchHandler @ 00202bfa */
    _ZN4core6option15Option_LT_T_GT_11map_or_else17h805a87bba4bea7c2E(&local_b8,&local_2a8);
    param_1[4] = local_a8;
    param_1[2] = local_b8;
    param_1[3] = uStack_b0;
    param_1[1] = 0xb;
    *param_1 = 0x8000000000000000;
    _ZN4core3ptr81drop_in_place_LT_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_17hd3f979be012334baE
              (local_248,pcStack_240);
    return param_1;
  }
  uVar4 = _ZN6uucore8features14update_control21determine_update_mode17h741491f5f957cb56E(param_2);
  _ZN6uucore8features14backup_control23determine_backup_suffix17h1f59e1b98a321786E
            (&local_160,param_2);
                    /* try { // try from 00201d56 to 00201dcc has its CatchHandler @ 00202c19 */
  uVar5 = _ZN5uu_cp13OverwriteMode12from_matches17h863eb92f3f1d1213E(param_2);
  uVar6 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE
                    (param_2,"no-target-directory",0x13);
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17hce56f285f425a273E
            (&local_2a8,param_2,"target-directory",0x10);
  lVar18 = _ZN12clap_builder6parser5error12MatchesError6unwrap17hf7e44ba6776d41f9E
                     ("target-directory",0x10,&local_2a8);
  if (lVar18 == 0) {
    local_1f8 = (undefined **)0x8000000000000000;
LAB_00201e57:
    local_1c0 = 0;
    local_1b8 = 8;
    local_1b0 = 0;
    local_2a8 = (undefined **)0x11e340;
    puStack_2a0 = (undefined8 *)&DAT_00000008;
    local_298._0_4_ = 0x12cc48;
    local_298._4_4_ = 0;
    uStack_290 = 0xb;
    uStack_28c = 0;
    uStack_288 = 0x12cd52;
    uStack_284 = 0;
    uStack_280 = 7;
    local_278 = "preserve-default-attributes";
    uStack_270 = 0x1b;
    local_268 = "no-dereference-preserve-links";
    local_260 = 0x1d;
    local_258 = 0;
    local_250 = 5;
    while( true ) {
                    /* try { // try from 00201f30 to 002020bd has its CatchHandler @ 00202c56 */
      auVar24 = _ZN99__LT_core__array__iter__IntoIter_LT_T_C___GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h5c3d5e224da239e1E
                          (&local_2a8);
      uVar19 = auVar24._8_8_;
      lVar18 = auVar24._0_8_;
      if (lVar18 == 0) break;
      _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h7ba13a8aa97b19f5E
                (local_70,param_2,lVar18,uVar19);
      auVar25 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches8index_of17hc3c8b487726d2353E
                          (param_2,lVar18,uVar19);
      if (((local_70[0] == 2) && (auVar25._0_8_ == 1)) && (local_68 != (char *)0x0)) {
        if (*local_68 != '\0') {
          local_210 = (undefined8 *)0x0;
          uStack_208 = 8;
          local_200 = 0;
          local_218 = (undefined  [8])auVar25._8_8_;
          local_228 = auVar24;
          _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17ha32ebc6ccbbd4382E(&local_1c0,local_228);
        }
      }
      else {
        _ZN12clap_builder6parser7matches11arg_matches10ArgMatches19try_get_occurrences17hd8f66d2a26528487E
                  (local_228,param_2,lVar18,uVar19);
        _ZN12clap_builder6parser5error12MatchesError6unwrap17h93037b0cc895e9aeE
                  (&local_108,lVar18,uVar19,local_228);
        _ZN12clap_builder6parser7matches11arg_matches10ArgMatches10indices_of17h365fe016942495a0E
                  (&local_f0,param_2,lVar18,uVar19);
        if ((local_108 != 0) && (local_f0 != (undefined8 *)0x0)) {
          local_c8 = local_f8;
          local_d8 = local_108;
          uStack_d0 = uStack_100;
          local_238 = local_e0;
          local_248 = local_f0;
          pcStack_240 = pcStack_e8;
          local_228._0_8_ = &local_248;
          local_228._8_8_ = &local_1c0;
          _local_218 = auVar24;
          _ZN4core4iter6traits8iterator8Iterator4fold17h4888c75204db4229E(&local_d8,local_228);
        }
      }
    }
                    /* try { // try from 002020c3 to 002020e1 has its CatchHandler @ 00202c14 */
    _ZN4core3ptr73drop_in_place_LT_core__array__iter__IntoIter_LT__RF_str_C_5_usize_GT__GT_17hb6788348e46460c7E
              (&local_2a8);
    _ZN5alloc5slice29__LT_impl_u20__u5b_T_u5d__GT_7sort_by17h58f290e3cc6c7d4eE(local_1b8,local_1b0);
    local_2e8 = 0;
    local_2ec = 0;
    _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17h169331af2a354e6eE
              (&local_188,&local_1c0);
    _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hec56b39cfe9d99a6E
              (local_228,&local_188);
    uVar22 = 0;
    uVar20 = 0;
    local_2e4 = 0;
    if (local_210 != (undefined8 *)0x8000000000000000) {
      local_2e4 = 0;
      uVar20 = 0;
      uVar22 = 0;
      do {
        uVar23 = local_228._8_8_;
        uVar19 = local_228._0_8_;
        local_198 = local_200;
        local_1a8 = local_210;
        uStack_1a0 = uStack_208;
                    /* try { // try from 002023dc to 00202496 has its CatchHandler @ 00202c28 */
        cVar2 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17ha9fb26a3ee82846dE
                          (local_228._0_8_,local_228._8_8_,"archive",7);
        if (cVar2 == '\0') {
          cVar2 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17ha9fb26a3ee82846dE
                            (uVar19,uVar23,"preserve-default-attributes",0x1b);
          uVar8 = (undefined)uVar22;
          uVar7 = (undefined)uVar20;
          if (cVar2 != '\0') {
            local_2a8._0_7_ = CONCAT16(uVar8,CONCAT24(local_2e8,local_2ec));
            local_2a8 = (undefined **)CONCAT17(uVar7,(undefined7)local_2a8);
            puStack_2a0 = (undefined8 *)CONCAT44(puStack_2a0._4_4_,local_2e4);
            _ZN5uu_cp10Attributes5union17h2578ff077a39174bE_specialized_2(&local_248,&local_2a8);
LAB_002024d5:
            local_2ec = (undefined4)local_248;
            local_2e8 = local_248._4_2_;
            uVar22 = (ulong)local_248 >> 0x30 & 0xff;
            uVar20 = (ulong)local_248 >> 0x38;
            local_2e4 = pcStack_240._0_4_;
            goto LAB_00202509;
          }
          cVar2 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17ha9fb26a3ee82846dE
                            (uVar19,uVar23,"no-dereference-preserve-links",0x1d);
          if (cVar2 != '\0') {
            local_2a8._0_7_ = CONCAT16(uVar8,CONCAT24(local_2e8,local_2ec));
            local_2a8 = (undefined **)CONCAT17(uVar7,(undefined7)local_2a8);
            puStack_2a0 = (undefined8 *)CONCAT44(puStack_2a0._4_4_,local_2e4);
            _ZN5uu_cp10Attributes5union17h2578ff077a39174bE_specialized_1(&local_248,&local_2a8);
            goto LAB_002024d5;
          }
                    /* try { // try from 00202548 to 0020255e has its CatchHandler @ 00202c28 */
          cVar2 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17ha9fb26a3ee82846dE
                            (uVar19,uVar23,"preserveENETDOWN",8);
          if (cVar2 == '\0') {
                    /* try { // try from 002025f5 to 0020260b has its CatchHandler @ 00202c28 */
            bVar15 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17ha9fb26a3ee82846dE
                               (uVar19,uVar23,"no-preserve",0xb);
            if ((bVar15 & local_198 != 0) != 1) goto LAB_00202509;
            local_2bc = local_2e8;
            local_2c0 = local_2ec;
            local_2b8 = local_2e4;
            local_2ba = uVar8;
            local_2b9 = uVar7;
            _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17h19d6f95b267c0578E
                      (&local_248,&local_1a8);
                    /* try { // try from 0020265e to 0020266a has its CatchHandler @ 00202bf8 */
            _ZN5uu_cp10Attributes10parse_iter17h4e9dbe07d5fad3aeE(&local_2a8,&local_248);
            local_1d0 = puStack_2a0;
            local_1c8 = (undefined4)local_298;
            if (local_2a8 != (undefined **)0xd) {
              *(undefined4 *)(param_1 + 7) = (undefined4)local_278;
              *(undefined4 *)((long)param_1 + 0x3c) = local_278._4_4_;
              *(undefined4 *)(param_1 + 8) = (undefined4)uStack_270;
              *(undefined4 *)((long)param_1 + 0x44) = uStack_270._4_4_;
              *(undefined4 *)((long)param_1 + 0x2c) = uStack_284;
              *(undefined4 *)(param_1 + 6) = (undefined4)uStack_280;
              *(undefined4 *)((long)param_1 + 0x34) = uStack_280._4_4_;
              *(undefined4 *)(param_1 + 7) = (undefined4)local_278;
              *(ulong *)((long)param_1 + 0x1c) = CONCAT44(uStack_290,local_298._4_4_);
              *(ulong *)((long)param_1 + 0x24) = CONCAT44(uStack_288,uStack_28c);
              *(undefined4 *)(param_1 + 3) = (undefined4)local_298;
              goto LAB_00202b86;
            }
            _ZN5uu_cp10Attributes4diff17h066483fdfdea4a0cE(&local_2b4,&local_2c0,&local_1d0);
          }
          else {
            local_2bc = local_2e8;
            local_2c0 = local_2ec;
            local_2b8 = local_2e4;
            local_2ba = uVar8;
            local_2b9 = uVar7;
            _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17h19d6f95b267c0578E
                      (&local_248,&local_1a8);
                    /* try { // try from 002025a3 to 002025af has its CatchHandler @ 00202bf8 */
            _ZN5uu_cp10Attributes10parse_iter17h4e9dbe07d5fad3aeE(&local_2a8,&local_248);
            local_1e0 = puStack_2a0;
            local_1d8 = (undefined4)local_298;
            if (local_2a8 != (undefined **)0xd) {
              *(undefined4 *)(param_1 + 7) = (undefined4)local_278;
              *(undefined4 *)((long)param_1 + 0x3c) = local_278._4_4_;
              *(undefined4 *)(param_1 + 8) = (undefined4)uStack_270;
              *(undefined4 *)((long)param_1 + 0x44) = uStack_270._4_4_;
              *(undefined4 *)((long)param_1 + 0x2c) = uStack_284;
              *(undefined4 *)(param_1 + 6) = (undefined4)uStack_280;
              *(undefined4 *)((long)param_1 + 0x34) = uStack_280._4_4_;
              *(undefined4 *)(param_1 + 7) = (undefined4)local_278;
              *(ulong *)((long)param_1 + 0x1c) = CONCAT44(uStack_290,local_298._4_4_);
              *(ulong *)((long)param_1 + 0x24) = CONCAT44(uStack_288,uStack_28c);
              *(undefined4 *)(param_1 + 3) = (undefined4)local_298;
LAB_00202b86:
              param_1[2] = puStack_2a0;
              param_1[1] = local_2a8;
              *param_1 = 0x8000000000000000;
                    /* try { // try from 00202b9b to 00202ba7 has its CatchHandler @ 00202c23 */
              _ZN4core3ptr134drop_in_place_LT_alloc__vec__into_iter__IntoIter_LT__LP_usize_C__RF_str_C_alloc__vec__Vec_LT__RF_alloc__string__String_GT__RP__GT__GT_17h12ee6ef17018cb57E
                        (&local_188);
              goto LAB_00202ae6;
            }
            _ZN5uu_cp10Attributes5union17h2578ff077a39174bE(&local_2b4,&local_2c0,&local_1e0);
          }
          local_2ec = local_2b4;
          local_2e8 = local_2b0;
          uVar22 = (ulong)local_2ae;
          uVar20 = (ulong)local_2ad;
          local_2e4 = local_2ac;
        }
        else {
          local_2e8 = 0x101;
          local_2ec = 0x1010101;
          local_2e4 = 0x10101;
          uVar22 = 0;
          uVar20 = 0;
LAB_00202509:
                    /* try { // try from 00202509 to 00202515 has its CatchHandler @ 00202c1e */
          _ZN4core3ptr69drop_in_place_LT_alloc__vec__Vec_LT__RF_alloc__string__String_GT__GT_17h664d4980780af36cE
                    (&local_1a8);
        }
        _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hec56b39cfe9d99a6E
                  (local_228,&local_188);
      } while (local_210 != (undefined8 *)0x8000000000000000);
    }
                    /* try { // try from 00202141 to 0020216c has its CatchHandler @ 00202c23 */
    _ZN4core3ptr134drop_in_place_LT_alloc__vec__into_iter__IntoIter_LT__LP_usize_C__RF_str_C_alloc__vec__Vec_LT__RF_alloc__string__String_GT__RP__GT__GT_17h12ee6ef17018cb57E
              (&local_188);
    if ((uVar22 & 1) != 0) {
      _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h837a0740cc026c95E
                (local_228,"SELinux was not enabled during the compile time!",0x30);
      uStack_290 = SUB164(_local_218,0);
      uStack_28c = SUB164(_local_218,4);
      puStack_2a0 = (undefined8 *)local_228._0_8_;
      local_2a8 = (undefined **)0x4;
      local_298 = (undefined8 *)local_228._8_8_;
      if ((uVar20 & 1) != 0) {
        param_1[7] = local_278;
        param_1[8] = uStack_270;
        param_1[5] = CONCAT44(uStack_284,uStack_288);
        param_1[6] = uStack_280;
        param_1[3] = local_228._8_8_;
        param_1[4] = local_218;
        param_1[1] = 4;
        param_1[2] = local_228._0_8_;
        *param_1 = 0x8000000000000000;
        goto LAB_00202ae6;
      }
                    /* try { // try from 0020219c to 002021a5 has its CatchHandler @ 00202bbd */
      _ZN5uu_cp20show_error_if_needed17h934143ac50374c6eE(&local_2a8);
                    /* try { // try from 002021a6 to 0020237a has its CatchHandler @ 00202c23 */
      _ZN4core3ptr33drop_in_place_LT_uu_cp__Error_GT_17h771e7f9a0f8a7901E(&local_2a8);
    }
    uVar7 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE
                      (param_2,"attributes-only",0xf);
    uVar8 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE
                      (param_2,"copy-contents",0xd);
    uVar9 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE
                      (param_2,"cli-symbolic-links",0x12);
    uVar10 = _ZN5uu_cp8CopyMode12from_matches17h05c5459bbc8a33dcE(param_2);
    cVar2 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE
                      (param_2,"no-dereference",0xe);
    if (cVar2 == '\0') {
      cVar2 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE
                        (param_2,"no-dereference-preserve-links",0x1d);
      if (cVar2 != '\0') goto LAB_0020226a;
      cVar2 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE
                        (param_2,"archive",7);
      if (cVar2 != '\0') goto LAB_0020226a;
      local_2e0 = 1;
      if (cVar3 != '\0') {
        cVar2 = _ZN5uu_cp8CopyMode12from_matches17h05c5459bbc8a33dcE(param_2);
        if (cVar2 != '\0') goto LAB_0020226a;
      }
    }
    else {
LAB_0020226a:
      local_2e0 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE
                            (param_2,"dereference",0xb);
    }
    uVar11 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE
                       (param_2,"one-file-system",0xf);
    uVar12 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE
                       (param_2,"parents",7);
    uVar13 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE
                       (param_2,"debug",5);
    cVar2 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE
                      (param_2,"verbose",7);
    local_2df = 1;
    if (cVar2 == '\0') {
      local_2df = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE
                            (param_2,"debug",5);
    }
    uVar14 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE
                       (param_2,"strip-trailing-slashes",0x16);
    _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h83269f7c9d3ca029E
              (&local_2a8,param_2,"reflink",7);
    lVar18 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h30948932dbd3ab55E
                       ("reflink",7,&local_2a8);
    local_2c4 = 1;
    if (lVar18 == 0) {
LAB_00202767:
      _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h83269f7c9d3ca029E
                (&local_2a8,param_2,"sparse",6);
      lVar18 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h30948932dbd3ab55E
                         ("sparse",6,&local_2a8);
      uVar21 = 1;
      if (lVar18 == 0) {
LAB_0020280b:
        local_218 = (undefined  [8])local_150;
        local_228._0_8_ = local_160;
        local_228._8_8_ = uStack_158;
        local_298._0_4_ = (undefined4)local_1e8;
        local_298._4_4_ = (undefined4)((ulong)local_1e8 >> 0x20);
        local_2a8 = local_1f8;
        puStack_2a0 = puStack_1f0;
                    /* try { // try from 00202847 to 0020285b has its CatchHandler @ 00202bd7 */
        uVar16 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE
                           (param_2,"progress",8);
        local_120 = (undefined6)CONCAT44(local_298._4_4_,(undefined4)local_298);
        uStack_11a = (undefined2)((uint)local_298._4_4_ >> 0x10);
        *(ulong *)((long)param_1 + 0x2e) = CONCAT26(local_2e8,CONCAT42(local_2ec,uStack_11a));
        param_1[4] = puStack_2a0;
        param_1[5] = CONCAT26(uStack_11a,local_120);
        param_1[2] = local_218;
        param_1[3] = local_2a8;
        *param_1 = local_228._0_8_;
        param_1[1] = local_228._8_8_;
        *(char *)((long)param_1 + 0x36) = (char)uVar22;
        *(char *)((long)param_1 + 0x37) = (char)uVar20;
        *(undefined4 *)(param_1 + 7) = local_2e4;
        *(undefined *)((long)param_1 + 0x3c) = uVar5;
        *(undefined *)((long)param_1 + 0x3d) = extraout_DL;
        *(ulong *)((long)param_1 + 0x3e) =
             CONCAT26(CONCAT11(uVar14,uVar12),
                      CONCAT24(CONCAT11(uVar11,uVar6),
                               CONCAT13(local_2e0,CONCAT12(uVar9,CONCAT11(uVar8,uVar7)))));
        *(char *)((long)param_1 + 0x46) = cVar3;
        *(undefined *)((long)param_1 + 0x47) = uVar13;
        *(undefined *)(param_1 + 9) = local_2df;
        *(undefined *)((long)param_1 + 0x49) = uVar16;
        *(undefined *)((long)param_1 + 0x4a) = uVar21;
        *(undefined *)((long)param_1 + 0x4b) = local_2c4;
        *(undefined *)((long)param_1 + 0x4c) = local_180;
        *(undefined *)((long)param_1 + 0x4d) = uVar4;
        *(undefined *)((long)param_1 + 0x4e) = uVar10;
        return param_1;
      }
      uVar19 = *(undefined8 *)(lVar18 + 8);
      uVar23 = *(undefined8 *)(lVar18 + 0x10);
      local_168 = lVar18;
      cVar2 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17ha9fb26a3ee82846dE
                        (uVar19,uVar23,"always",6);
      if (cVar2 != '\0') {
        uVar21 = 0;
        goto LAB_0020280b;
      }
      cVar2 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17ha9fb26a3ee82846dE
                        (uVar19,uVar23,&DAT_0011e1d8,4);
      if (cVar2 != '\0') goto LAB_0020280b;
      cVar2 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17ha9fb26a3ee82846dE
                        (uVar19,uVar23,"never",5);
      uVar21 = 2;
      if (cVar2 != '\0') goto LAB_0020280b;
      local_228._0_8_ = &local_168;
      local_228._8_8_ = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hdbce5539cdbd3a0bE;
      local_2a8 = &PTR_s_invalid_argument_for__reflink__f_002b5c70;
      puStack_2a0 = (undefined8 *)0x2;
      uStack_288 = 0;
      uStack_284 = 0;
      local_298 = (undefined8 *)local_228;
      uStack_290 = 1;
      uStack_28c = 0;
      _ZN4core6option15Option_LT_T_GT_11map_or_else17h805a87bba4bea7c2E(&local_88,&local_2a8);
      param_1[4] = local_78;
    }
    else {
      pcVar1 = *(code **)(lVar18 + 8);
      uVar19 = *(undefined8 *)(lVar18 + 0x10);
      cVar2 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17ha9fb26a3ee82846dE
                        (pcVar1,uVar19,"always",6);
      if (cVar2 != '\0') {
        local_2c4 = 0;
        goto LAB_00202767;
      }
                    /* try { // try from 00202727 to 002027ff has its CatchHandler @ 00202c23 */
      cVar2 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17ha9fb26a3ee82846dE
                        (pcVar1,uVar19,&DAT_0011e1d8,4);
      if (cVar2 != '\0') goto LAB_00202767;
      cVar2 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17ha9fb26a3ee82846dE
                        (pcVar1,uVar19,"never",5);
      local_2c4 = 2;
      if (cVar2 != '\0') goto LAB_00202767;
      local_228._0_8_ = (long *)0x0;
      local_210 = (undefined8 *)CONCAT71(local_210._1_7_,1);
      local_248 = (undefined8 *)local_228;
      pcStack_240 = 
      _ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17h75932a24bee941d9E;
      local_2a8 = &PTR_s_invalid_argument_for__reflink__f_002b5c50;
      puStack_2a0 = (undefined8 *)0x2;
      uStack_288 = 0;
      uStack_284 = 0;
      local_298 = &local_248;
      uStack_290 = 1;
      uStack_28c = 0;
                    /* try { // try from 00202a1f to 00202ab1 has its CatchHandler @ 00202c23 */
      local_228._8_8_ = pcVar1;
      local_218 = (undefined  [8])uVar19;
      _ZN4core6option15Option_LT_T_GT_11map_or_else17h805a87bba4bea7c2E(&local_a0,&local_2a8);
      param_1[4] = local_90;
      local_88 = local_a0;
      uStack_80 = uStack_98;
    }
    param_1[2] = local_88;
    param_1[3] = uStack_80;
    param_1[1] = 9;
  }
  else {
    _ZN67__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__clone__Clone_GT_5clone17h250bb613d8eaf262E
              (&local_2a8,lVar18);
    local_1e8 = CONCAT44(local_298._4_4_,(undefined4)local_298);
    local_1f8 = local_2a8;
    puStack_1f0 = puStack_2a0;
                    /* try { // try from 00201e0d to 00201e28 has its CatchHandler @ 00202bcf */
    if ((local_2a8 == (undefined **)0x8000000000000000) ||
       (cVar2 = _ZN3std4path4Path6is_dir17h9ac0db933706da51E(puStack_2a0,local_1e8), cVar2 != '\0'))
    goto LAB_00201e57;
    _ZN67__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__clone__Clone_GT_5clone17h250bb613d8eaf262E
              (&local_2a8,&local_1f8);
    param_1[4] = local_298;
    param_1[2] = local_2a8;
    param_1[3] = puStack_2a0;
    param_1[1] = 0xc;
  }
  *param_1 = 0x8000000000000000;
LAB_00202ae6:
                    /* try { // try from 00202ae6 to 00202af2 has its CatchHandler @ 00202c19 */
  _ZN4core3ptr67drop_in_place_LT_core__option__Option_LT_std__path__PathBuf_GT__GT_17he488659846a394d7E
            (&local_1f8);
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h5bdd96f6f34778b9E(&local_160);
  return param_1;
}