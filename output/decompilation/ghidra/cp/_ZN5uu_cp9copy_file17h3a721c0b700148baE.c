undefined8 *
_ZN5uu_cp9copy_file17h3a721c0b700148baE
          (undefined8 *param_1,long *param_2,undefined ********param_3,undefined ********param_4,
          undefined ********param_5,undefined ********param_6,long param_7,undefined8 param_8,
          undefined8 param_9,undefined8 param_10,byte param_11)

{
  undefined *puVar1;
  int iVar2;
  undefined *******pppppppuVar3;
  undefined *******pppppppuVar4;
  undefined ********ppppppppuVar5;
  byte bVar6;
  byte bVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  long lVar12;
  bool bVar13;
  byte bVar14;
  undefined *******local_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined local_3a0;
  uint local_394;
  undefined *******local_390;
  undefined8 local_388;
  undefined8 uStack_380;
  undefined4 local_378;
  undefined4 uStack_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  undefined4 local_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined4 local_358;
  undefined4 uStack_354;
  undefined8 uStack_350;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined4 local_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  long *local_2e0;
  undefined *******local_2d8;
  undefined *******pppppppuStack_2d0;
  undefined *******local_2c8;
  undefined *******local_2c0;
  undefined *******local_2b8;
  undefined *******pppppppuStack_2b0;
  undefined *******local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined *******local_218;
  undefined *******pppppppuStack_210;
  undefined *******local_208;
  code *pcStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined *******local_160;
  undefined *******pppppppuStack_158;
  undefined *******local_150;
  undefined *******local_148;
  code *local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined *******local_c0;
  undefined local_b8 [136];
  
  local_2e0 = param_2;
  bVar6 = _ZN3std4path4Path10is_symlink17h6ab8b58756c51c6bE(param_3,param_4);
  bVar7 = _ZN3std4path4Path10is_symlink17h6ab8b58756c51c6bE(param_5,param_6);
  if (bVar7 != 0) {
    _ZN6uucore8features2fs15FileInformation9from_path17he917b6b2466acd0fE
              (&local_390,param_5,param_6,0);
    if ((undefined ********)local_390 == (undefined ********)0x0) {
      (*(code *)PTR_memcpy_002bbe30)(&local_218,&local_388,0x90);
      lVar12 = _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_9get_inner17hd8db7bc2a0d0ef09E
                         (param_8,&local_218);
      if (lVar12 == 0) goto LAB_002072cf;
    }
    else {
      pppppppuStack_2b0 = (undefined *******)local_388;
      local_2b8 = (undefined *******)CONCAT71(local_2b8._1_7_,1);
      _ZN4core3ptr77drop_in_place_LT_core__result__Result_LT_bool_C_std__io__error__Error_GT__GT_17h9c31107a5315a077E
                (&local_2b8);
LAB_002072cf:
      lVar12 = _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_9get_inner17hf39b9bbbffc687fcE
                         (param_9,param_5,param_6);
      if (lVar12 == 0) {
        if (((*(char *)(param_7 + 0x41) == '\0') &&
            ((param_11 & *(char *)(param_7 + 0x40) != '\0') == 0)) && (bVar6 == 1)) {
LAB_00207539:
          cVar8 = _ZN6uucore8features2fs24paths_refer_to_same_file17hbd4c553d00ffcef7E
                            (param_3,param_4,param_5,param_6,1);
          if (((cVar8 != '\0') && (*(char *)(param_7 + 0x3c) == '\0')) &&
             ((*(char *)(param_7 + 0x3d) == '\x01' &&
              ((*(char *)(param_7 + 0x4c) == '\0' &&
               (lVar12 = _ZN3std2fs11remove_file17h38159f05e7b4dc34E(param_5,param_6), lVar12 != 0))
              )))) {
            *param_1 = 2;
            param_1[1] = lVar12;
            return param_1;
          }
          goto LAB_0020758c;
        }
        _ZN3std2fs8metadata17h003d8cdbffde7c56E(&local_390,param_5,param_6);
        iVar2 = (int)local_390;
        _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17h6e54671ee6a51b2aE
                  (&local_390);
        if (((iVar2 != 2) ||
            ((*(char *)(param_7 + 0x3c) == '\0' && (*(char *)(param_7 + 0x3d) == '\x01')))) ||
           (cVar8 = _ZN6uucore8features2fs15is_symlink_loop17h6176a52fb38b92f8E(param_5,param_6),
           cVar8 != '\0')) goto LAB_00207539;
        _ZN3std3env6var_os17h1986be097247ce4aE(&local_390,"POSIXLY_CORRECT",0xf);
        pppppppuVar3 = local_390;
        _ZN4core3ptr75drop_in_place_LT_core__option__Option_LT_std__ffi__os_str__OsString_GT__GT_17h221d2028a300d640E
                  (&local_390);
        if ((undefined ********)pppppppuVar3 != (undefined ********)0x8000000000000000)
        goto LAB_00207539;
        pppppppuStack_2b0 =
             (undefined *******)
             _ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17h5a3c32fa16876e76E;
        local_390 = (undefined *******)&PTR_s_not_writing_through_dangling_sym_002b6018;
        local_218 = (undefined *******)param_5;
        pppppppuStack_210 = (undefined *******)param_6;
        goto LAB_002078fe;
      }
    }
    local_208 = (undefined *******)&local_2b8;
    local_218 = (undefined *******)&local_3b8;
    uStack_380 = &local_218;
    pcStack_200 = 
    _ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17h5a3c32fa16876e76E;
    pppppppuStack_210 =
         (undefined *******)
         _ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17h5a3c32fa16876e76E;
    local_388 = (undefined ********)0x3;
    local_390 = (undefined *******)&PTR_s_will_not_copy___002b5fe8;
    local_378 = 2;
    local_3b8 = (undefined *******)param_3;
    uStack_3b0 = param_4;
    local_2b8 = (undefined *******)param_5;
    pppppppuStack_2b0 = (undefined *******)param_6;
LAB_0020792b:
    uStack_36c = 0;
    uStack_370 = 0;
    uStack_374 = 0;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17h805a87bba4bea7c2E(param_1 + 1,&local_390);
    *param_1 = 4;
    return param_1;
  }
LAB_0020758c:
  cVar8 = _ZN6uucore8features2fs26are_hardlinks_to_same_file17h58f3d52af664165aE
                    (param_3,param_4,param_5,param_6);
  if (cVar8 != '\0') {
    _ZN3std4path4Path10components17h4f3217acf0fc8653E(&local_218,param_3,param_4);
    _ZN3std4path4Path10components17h4f3217acf0fc8653E(&local_390,param_5,param_6);
    cVar8 = _ZN62__LT_std__path__Components_u20_as_u20_core__cmp__PartialEq_GT_2eq17h5cac1ec2999e76daE
                      (&local_218,&local_390);
    if ((((cVar8 == '\0') && (*(char *)(param_7 + 0x3c) == '\0')) &&
        (*(char *)(param_7 + 0x3d) == '\x01')) &&
       (lVar12 = _ZN3std2fs11remove_file17h38159f05e7b4dc34E(param_5,param_6), lVar12 != 0))
    goto LAB_00207ac4;
  }
  cVar9 = _ZN5uu_cp19file_or_link_exists17h0326283b1ad33442E(param_5,param_6);
  cVar8 = *(char *)(param_7 + 0x3e);
  cVar10 = cVar8;
  if ((cVar9 != '\0') &&
     ((cVar8 == '\0' ||
      ((cVar10 = '\x01', *(char *)(param_7 + 0x3c) == '\0' && (*(char *)(param_7 + 0x3d) == '\x01'))
      )))) {
    cVar10 = _ZN6uucore8features2fs24paths_refer_to_same_file17hbd4c553d00ffcef7E
                       (param_3,param_4,param_5,param_6,1);
    cVar9 = *(char *)(param_7 + 0x4e);
    if ((cVar10 != '\0') && (cVar9 == '\0')) {
      if (bVar6 == 0) {
        if (*(char *)(param_7 + 0x4c) != '\0' && bVar7 == 0) {
          _ZN3std4path4Path10components17h4f3217acf0fc8653E(&local_218,param_3,param_4);
          _ZN3std4path4Path10components17h4f3217acf0fc8653E(&local_390,param_5,param_6);
          cVar10 = _ZN62__LT_std__path__Components_u20_as_u20_core__cmp__PartialEq_GT_2eq17h5cac1ec2999e76daE
                             (&local_218,&local_390);
          if (cVar10 == '\0') goto LAB_00207e4b;
          if (*(char *)(param_7 + 0x3c) != '\0' || *(char *)(param_7 + 0x3d) != '\0')
          goto LAB_00207e3e;
        }
      }
      else if ((bVar7 == 0) || (*(char *)(param_7 + 0x41) == '\0')) goto LAB_00207e3e;
    }
    _ZN5uu_cp20handle_existing_dest17h1a418223b4b32809E
              (&local_390,param_3,param_4,param_5,param_6,param_7,param_11,param_10);
    if ((undefined ********)local_390 != (undefined ********)0xd) {
      param_1[7] = CONCAT44(uStack_354,local_358);
      param_1[5] = CONCAT44(uStack_364,local_368);
      param_1[6] = CONCAT44(uStack_35c,uStack_360);
      param_1[3] = CONCAT44(uStack_374,local_378);
      param_1[4] = CONCAT44(uStack_36c,uStack_370);
      param_1[1] = local_388;
      param_1[2] = uStack_380;
      *param_1 = local_390;
      return param_1;
    }
    cVar11 = _ZN6uucore8features2fs26are_hardlinks_to_same_file17h58f3d52af664165aE
                       (param_3,param_4,param_5,param_6);
    cVar10 = cVar8;
    if ((cVar11 != '\0') &&
       (((cVar9 == '\x02' && (*(char *)(param_7 + 0x4c) != '\0')) ||
        (((bVar7 & bVar6) == 0 && (cVar9 == '\0')))))) {
LAB_00207e3e:
      *param_1 = 0xd;
      return param_1;
    }
  }
  if (((bVar6 & cVar10 != '\0') != 0) &&
     ((*(char *)(param_7 + 0x3c) != '\0' || (*(char *)(param_7 + 0x3d) != '\x01')))) {
    local_218 = (undefined *******)&DAT_00000001;
    pcStack_200 = (code *)CONCAT71(pcStack_200._1_7_,1);
    pppppppuStack_2b0 =
         (undefined *******)
         _ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17h75932a24bee941d9E;
    local_390 = (undefined *******)&PTR_s_cannot_change_attribute___Source_002b6038;
    pppppppuStack_210 = (undefined *******)param_5;
    local_208 = (undefined *******)param_6;
LAB_002078fe:
    local_2b8 = (undefined *******)&local_218;
    local_388 = (undefined ********)0x2;
    uStack_380 = &local_2b8;
    local_378 = 1;
    goto LAB_0020792b;
  }
  if (*(char *)(param_7 + 0x48) != '\0') {
    _ZN5uu_cp20print_verbose_output17h1215961a97776bc3E
              (*(undefined *)(param_7 + 0x44),local_2e0,param_3,param_4,param_5,param_6);
  }
  if (*(char *)(param_7 + 0x38) == '\0') {
    bVar6 = *(byte *)(param_7 + 0x40);
    bVar14 = *(byte *)(param_7 + 0x41);
  }
  else {
    bVar6 = *(byte *)(param_7 + 0x40);
    bVar14 = *(byte *)(param_7 + 0x41);
    bVar13 = bVar6 != 0;
    if (param_11 == 0) {
      bVar13 = bVar14 != 0;
    }
    if (bVar14 != 0) {
      bVar13 = bVar14 != 0;
    }
    _ZN6uucore8features2fs15FileInformation9from_path17he917b6b2466acd0fE
              (&local_390,param_3,param_4,bVar13);
    local_3b8 = (undefined *******)&DAT_00000001;
    local_3a0 = 1;
    local_148 = (undefined *******)&local_3b8;
    local_140 = 
    _ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17h75932a24bee941d9E;
    local_2b8 = (undefined *******)&PTR_s_cannot_stat_002b5f08;
    pppppppuStack_2b0 = (undefined *******)0x1;
    local_298 = 0;
    local_2a8 = (undefined *******)&local_148;
    local_2a0 = 1;
                    /* try { // try from 002077bb to 002077cf has its CatchHandler @ 002080bf */
    uStack_3b0 = param_3;
    uStack_3a8 = param_4;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17h805a87bba4bea7c2E(&local_160,&local_2b8);
    local_2a8 = local_150;
    local_2b8 = local_160;
    pppppppuStack_2b0 = pppppppuStack_158;
    if ((undefined ********)local_390 != (undefined ********)0x0) {
      param_1[3] = local_150;
      param_1[1] = local_160;
      param_1[2] = pppppppuStack_158;
      *param_1 = 3;
      param_1[4] = local_388;
      return param_1;
    }
    local_2c8 = (undefined *******)CONCAT44(uStack_374,local_378);
    local_2d8 = (undefined *******)local_388;
    pppppppuStack_2d0 = (undefined *******)uStack_380;
    local_138 = CONCAT44(uStack_364,local_368);
    uStack_130 = CONCAT44(uStack_35c,uStack_360);
    local_128 = local_358;
    uStack_124 = uStack_354;
    uStack_120 = uStack_350;
    local_118 = local_348;
    uStack_110 = uStack_340;
    local_108 = local_338;
    uStack_100 = uStack_330;
    local_f8 = local_328;
    uStack_f0 = uStack_320;
    local_e8 = local_318;
    uStack_e0 = uStack_310;
    local_d8 = local_308;
    uStack_d4 = uStack_304;
    uStack_d0 = uStack_300;
    uStack_cc = uStack_2fc;
    _ZN4core3ptr288drop_in_place_LT__LT_core__result__Result_LT_uucore__features__fs__FileInformation_C_std__io__error__Error_GT__u20_as_u20_quick_error__ResultExt_LT_uucore__features__fs__FileInformation_C_std__io__error__Error_GT__GT___context_LT_alloc__string__String_GT____u7b__u7b_closure_u7d__u7d__GT_17h1ef8f78603d21391E
              (&local_2b8);
    local_218 = local_2d8;
    pppppppuStack_210 = pppppppuStack_2d0;
    local_208 = local_2c8;
    local_1f8 = local_138;
    uStack_1f0 = uStack_130;
    local_1e8 = local_128;
    uStack_1e4 = uStack_124;
    uStack_1e0 = (undefined4)uStack_120;
    uStack_1dc = uStack_120._4_4_;
    local_1d8 = (undefined4)local_118;
    uStack_1d4 = local_118._4_4_;
    uStack_1d0 = (undefined4)uStack_110;
    uStack_1cc = uStack_110._4_4_;
    local_1c8 = (undefined4)local_108;
    uStack_1c4 = local_108._4_4_;
    uStack_1c0 = (undefined4)uStack_100;
    uStack_1bc = uStack_100._4_4_;
    local_1b8 = local_f8;
    uStack_1b0 = uStack_f0;
    local_1a8 = local_e8;
    uStack_1a0 = uStack_e0;
    local_198 = local_d8;
    uStack_194 = uStack_d4;
    uStack_190 = uStack_d0;
    uStack_18c = uStack_cc;
    lVar12 = _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_9get_inner17hef26ad6068154428E
                       (param_10,&local_218);
    if (lVar12 != 0) {
      lVar12 = _ZN3std2fs9hard_link17h6f8316d677157df8E(lVar12 + 0x90,param_5,param_6);
      if (lVar12 != 0) {
LAB_00207ac4:
        *param_1 = 2;
        param_1[1] = lVar12;
        return param_1;
      }
LAB_00207e4b:
      *param_1 = 0xd;
      return param_1;
    }
  }
  _ZN5uu_cp11context_for17h98549e35fded8509E(&local_2d8,param_3,param_4,param_5,param_6);
  pppppppuVar3 = pppppppuStack_2d0;
  local_2c0 = local_2c8;
  local_394 = (uint)bVar6;
  if (param_11 == 0) {
    local_394 = (uint)bVar14;
  }
  if (bVar14 != 0) {
    local_394 = (uint)bVar14;
  }
  if ((char)local_394 == '\0') {
                    /* try { // try from 00207ad6 to 00207b08 has its CatchHandler @ 002080ce */
    _ZN3std2fs16symlink_metadata17h8589e79b0a107deeE(&local_390,param_3,param_4);
  }
  else {
                    /* try { // try from 0020789f to 002078ae has its CatchHandler @ 002080ce */
    _ZN3std2fs8metadata17h003d8cdbffde7c56E(&local_390,param_3,param_4);
  }
  ppppppppuVar5 = local_388;
  pppppppuVar4 = local_390;
  puVar1 = PTR_memcpy_002bbe30;
  if ((undefined ********)local_390 == (undefined ********)0x2) {
    _ZN5uu_cp9copy_file28__u7b__u7b_closure_u7d__u7d_17h1d4007727df2d8d4E
              (&local_3b8,param_3,param_4,local_388);
    *(undefined4 *)(param_1 + 2) = (undefined4)uStack_3b0;
    *(undefined4 *)((long)param_1 + 0x14) = uStack_3b0._4_4_;
    *(undefined4 *)(param_1 + 3) = (undefined4)uStack_3a8;
    *(undefined4 *)((long)param_1 + 0x1c) = uStack_3a8._4_4_;
    *param_1 = 4;
    local_388 = (undefined ********)local_3b8;
LAB_00207b21:
    param_1[1] = local_388;
  }
  else {
    (*(code *)PTR_memcpy_002bbe30)(&local_2b8,&uStack_380,0xa0);
    (*(code *)puVar1)(&local_1f8,&local_2a8,0x90);
    local_208 = (undefined *******)uStack_380;
    local_218 = pppppppuVar4;
    pppppppuStack_210 = (undefined *******)ppppppppuVar5;
                    /* try { // try from 00207b95 to 00207c97 has its CatchHandler @ 002080ce */
    _ZN5uu_cp26calculate_dest_permissions17he28553ee8e44ce96E
              (&local_390,param_5,param_6,uStack_1e0,*(undefined *)(param_7 + 0x32),
               *(undefined *)(param_7 + 0x33),pppppppuVar3,local_2c0);
    ppppppppuVar5 = local_388;
    if ((undefined ********)local_390 != (undefined ********)0xd) {
      *(undefined4 *)((long)param_1 + 0x3c) = uStack_354;
      *(ulong *)((long)param_1 + 0x2c) = CONCAT44(uStack_360,uStack_364);
      *(ulong *)((long)param_1 + 0x34) = CONCAT44(local_358,uStack_35c);
      *(ulong *)((long)param_1 + 0x1c) = CONCAT44(uStack_370,uStack_374);
      *(ulong *)((long)param_1 + 0x24) = CONCAT44(local_368,uStack_36c);
      *(undefined4 *)((long)param_1 + 0xc) = local_388._4_4_;
      *(undefined4 *)(param_1 + 2) = (undefined4)uStack_380;
      *(undefined4 *)((long)param_1 + 0x14) = uStack_380._4_4_;
      *(undefined4 *)(param_1 + 3) = local_378;
      *param_1 = local_390;
      *(undefined4 *)(param_1 + 1) = (undefined4)local_388;
      goto LAB_00207f57;
    }
    _ZN5uu_cp16handle_copy_mode17h448f778e1ab38150E
              (&local_390,param_3,param_4,param_5,param_6,param_7,pppppppuVar3,local_2c0,&local_218,
               param_8,param_11);
    if ((undefined ********)local_390 != (undefined ********)0xd) {
LAB_00207e89:
      param_1[7] = CONCAT44(uStack_354,local_358);
      param_1[5] = CONCAT44(uStack_364,local_368);
      param_1[6] = CONCAT44(uStack_35c,uStack_360);
      param_1[3] = CONCAT44(uStack_374,local_378);
      param_1[4] = CONCAT44(uStack_36c,uStack_370);
      *(undefined4 *)(param_1 + 1) = (undefined4)local_388;
      *(undefined4 *)((long)param_1 + 0xc) = local_388._4_4_;
      *(undefined4 *)(param_1 + 2) = (undefined4)uStack_380;
      *(undefined4 *)((long)param_1 + 0x14) = uStack_380._4_4_;
      *param_1 = local_390;
      goto LAB_00207f57;
    }
    if ((bVar7 == 0) &&
       (local_390 = (undefined *******)
                    _ZN3std2fs15set_permissions17hb44ce266ed57ae7bE
                              (param_5,param_6,(ulong)ppppppppuVar5 & 0xffffffff),
       (undefined ********)local_390 != (undefined ********)0x0)) {
      _ZN4core3ptr81drop_in_place_LT_core__result__Result_LT__LP__RP__C_std__io__error__Error_GT__GT_17hb146834ab15375ccE
                (&local_390);
    }
    if ((char)local_394 == '\0') {
                    /* try { // try from 00207e5d to 00207e79 has its CatchHandler @ 002080ce */
      _ZN5uu_cp15copy_attributes17h0ca124c6c7245f78E
                (&local_390,param_3,param_4,param_5,param_6,param_7 + 0x30);
      if ((undefined ********)local_390 != (undefined ********)0xd) goto LAB_00207e89;
    }
    else {
      _ZN6uucore8features2fs12canonicalize17hb17a5541a57984e7E(&local_3b8,param_3,param_4,0,1);
      if ((undefined ********)local_3b8 != (undefined ********)0x8000000000000000) {
        local_2a8 = (undefined *******)uStack_3a8;
        local_2b8 = local_3b8;
        pppppppuStack_2b0 = (undefined *******)uStack_3b0;
                    /* try { // try from 00207ee5 to 00207efb has its CatchHandler @ 0020809c */
        _ZN5uu_cp15copy_attributes17h0ca124c6c7245f78E
                  (&local_390,uStack_3b0,uStack_3a8,param_5,param_6,param_7 + 0x30);
        if ((undefined ********)local_390 != (undefined ********)0xd) {
          param_1[7] = CONCAT44(uStack_354,local_358);
          *(undefined4 *)(param_1 + 5) = local_368;
          *(undefined4 *)((long)param_1 + 0x2c) = uStack_364;
          *(undefined4 *)(param_1 + 6) = uStack_360;
          *(undefined4 *)((long)param_1 + 0x34) = uStack_35c;
          *(undefined4 *)(param_1 + 3) = local_378;
          *(undefined4 *)((long)param_1 + 0x1c) = uStack_374;
          *(undefined4 *)(param_1 + 4) = uStack_370;
          *(undefined4 *)((long)param_1 + 0x24) = uStack_36c;
          *(undefined4 *)(param_1 + 1) = (undefined4)local_388;
          *(undefined4 *)((long)param_1 + 0xc) = local_388._4_4_;
          *(undefined4 *)(param_1 + 2) = (undefined4)uStack_380;
          *(undefined4 *)((long)param_1 + 0x14) = uStack_380._4_4_;
          *param_1 = local_390;
                    /* try { // try from 0020804d to 00208059 has its CatchHandler @ 00208097 */
          _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17ha8df8090ff0f5f1eE(&local_2b8);
          if ((undefined ********)local_3b8 == (undefined ********)0x8000000000000000) {
                    /* try { // try from 00208065 to 00208089 has its CatchHandler @ 002080ce */
            _ZN4core3ptr91drop_in_place_LT_core__result__Result_LT_std__path__PathBuf_C_std__io__error__Error_GT__GT_17hc3882598e48cbc71E
                      (&local_3b8);
          }
          goto LAB_00207f57;
        }
                    /* try { // try from 00207f0b to 00207f17 has its CatchHandler @ 00208097 */
        _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17ha8df8090ff0f5f1eE(&local_2b8);
        if ((undefined ********)local_3b8 != (undefined ********)0x8000000000000000)
        goto LAB_00207f23;
      }
      _ZN4core3ptr91drop_in_place_LT_core__result__Result_LT_std__path__PathBuf_C_std__io__error__Error_GT__GT_17hc3882598e48cbc71E
                (&local_3b8);
    }
LAB_00207f23:
                    /* try { // try from 00207f2d to 00207f3c has its CatchHandler @ 002080ce */
    _ZN6uucore8features2fs15FileInformation9from_path17he917b6b2466acd0fE
              (&local_390,param_3,param_4,(char)local_394 != '\0');
    ppppppppuVar5 = local_388;
    if ((undefined ********)local_390 != (undefined ********)0x0) {
      *param_1 = 2;
      param_1[1] = local_388;
      goto LAB_00207f57;
    }
    (*(code *)PTR_memcpy_002bbe30)(local_b8,&uStack_380,0x88);
    local_c0 = (undefined *******)ppppppppuVar5;
                    /* try { // try from 00207f99 to 00207ffe has its CatchHandler @ 002080ce */
    _ZN3std3sys3pal4unix2os11split_paths13bytes_to_path17h0549813f23b52483E
              (&local_390,param_5,param_6);
    _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_6insert17h6dd09ea9bc601e27E
              (&local_2b8,param_10,&local_c0,&local_390);
    _ZN4core3ptr67drop_in_place_LT_core__option__Option_LT_std__path__PathBuf_GT__GT_17he488659846a394d7E
              (&local_2b8);
    if (*local_2e0 != 0) {
      _ZN3std2fs8metadata17h003d8cdbffde7c56E(&local_390,param_3,param_4);
      if ((int)local_390 == 2) {
        *param_1 = 2;
        goto LAB_00207b21;
      }
      _ZN9indicatif12progress_bar11ProgressBar3inc17he12f7743cfc9ae04E(local_2e0,uStack_340);
    }
    *param_1 = 0xd;
  }
LAB_00207f57:
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h5bdd96f6f34778b9E(&local_2d8);
  return param_1;
}