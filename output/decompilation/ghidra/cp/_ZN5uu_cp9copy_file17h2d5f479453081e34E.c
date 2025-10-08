void _ZN5uu_cp9copy_file17h2d5f479453081e34E
               (ulong *param_1,long param_2,undefined8 ******param_3,undefined8 ******param_4,
               undefined8 *******param_5,undefined *param_6,long param_7,undefined8 param_8,
               undefined8 param_9,undefined8 param_10,byte param_11)

{
  undefined *puVar1;
  undefined8 ******ppppppuVar2;
  int iVar3;
  undefined8 *****pppppuVar4;
  undefined8 *****pppppuVar5;
  byte bVar6;
  byte bVar7;
  char cVar8;
  byte bVar9;
  char cVar10;
  byte bVar11;
  long lVar12;
  ulong uVar13;
  undefined8 ******ppppppuVar14;
  char local_364;
  undefined8 ******local_358;
  undefined8 local_350;
  undefined8 uStack_348;
  undefined8 local_340;
  undefined8 local_338;
  long local_328;
  undefined8 *****local_320;
  uint local_318;
  undefined4 uStack_314;
  undefined8 uStack_310;
  undefined4 local_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  uint local_2e8;
  uint uStack_2e0;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 uStack_2c4;
  undefined4 uStack_2bc;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined4 local_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined8 local_284;
  undefined8 uStack_27c;
  undefined4 local_274;
  undefined8 *****local_270;
  undefined8 *****local_268;
  undefined8 *****local_260;
  undefined local_258;
  uint local_24c;
  undefined8 ******local_248;
  undefined8 ******ppppppuStack_240;
  undefined8 local_238;
  undefined *puStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  uint uStack_210;
  undefined4 uStack_1ec;
  undefined4 local_1c8;
  undefined8 uStack_1c4;
  undefined8 uStack_1bc;
  undefined8 local_1ac;
  undefined8 uStack_1a4;
  undefined4 local_19c;
  undefined8 *****local_198;
  undefined *local_190;
  undefined8 *****local_188;
  undefined8 *****pppppuStack_180;
  undefined8 ******local_178;
  ulong local_170;
  ulong uStack_168;
  ulong local_160;
  undefined8 *****local_158;
  undefined8 *****pppppuStack_150;
  undefined8 ******local_148;
  undefined8 local_138;
  undefined8 uStack_130;
  uint uStack_120;
  undefined4 uStack_fc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined local_c0 [8];
  undefined local_b8 [136];
  
  puVar1 = PTR__ZN3std4path4Path10is_symlink17h004cfac91d04dbc0E_00267ae0;
  local_328 = param_2;
  bVar6 = (*(code *)PTR__ZN3std4path4Path10is_symlink17h004cfac91d04dbc0E_00267ae0)(param_3,param_4)
  ;
  bVar7 = (*(code *)puVar1)(param_5,param_6);
  if (bVar7 != 0) {
    _ZN6uucore8features2fs15FileInformation9from_path17hfd069e4f76a9cc58E
              (&local_320,param_5,param_6,0);
    if (((ulong)local_320 & 1) == 0) {
      (*(code *)PTR_memcpy_00267610)(&local_248,&local_318,0x90);
      lVar12 = _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_9get_inner17h09bdbbaed60d7c0eE
                         (param_8,&local_248);
      if (lVar12 == 0) goto LAB_001a3fd6;
    }
    else {
      local_350 = (undefined8 ******)CONCAT44(uStack_314,local_318);
      local_358 = (undefined8 ******)CONCAT71(local_358._1_7_,1);
      _ZN4core3ptr134drop_in_place_LT_core__result__Result_LT__LP_uu_cp__CopyDebug_C_uu_cp__platform__linux__CopyMethod_RP__C_std__io__error__Error_GT__GT_17h045b393fe041be74E
                (&local_358);
LAB_001a3fd6:
      lVar12 = _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_9get_inner17h7b4041879891822cE
                         (param_9,param_5,param_6);
      if (lVar12 == 0) {
        if (*(char *)(param_7 + 0x59) == '\0') {
          if (param_11 == 0) {
            if (bVar6 == 0) goto LAB_001a40c8;
          }
          else if ((bVar6 == 0) || (*(char *)(param_7 + 0x58) != '\0')) goto LAB_001a40c8;
        }
        else {
LAB_001a40c8:
          _ZN3std2fs8metadata17h87a95e5fd9b91fc7E(&local_320,param_5,param_6);
          iVar3 = (int)local_320;
          _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17he37bb0d8b54bbf24E
                    (&local_320);
          if ((iVar3 == 2) &&
             (((*(char *)(param_7 + 0x54) != '\0' || (*(char *)(param_7 + 0x55) != '\x01')) &&
              (cVar8 = (*(code *)
                         PTR__ZN6uucore8features2fs15is_symlink_loop17h04d1ad90472ac98aE_00267c68)
                                 (param_5,param_6), cVar8 == '\0')))) {
            _ZN3std3env6var_os17h9c19d2ca6c58ed5cE(&local_320);
            if ((undefined8 ******)local_320 == (undefined8 ******)0x8000000000000000) {
              _ZN4core3ptr75drop_in_place_LT_core__option__Option_LT_std__ffi__os_str__OsString_GT__GT_17h4d2013ddd054f4dbE
                        (0x8000000000000000,CONCAT44(uStack_314,local_318));
              local_358 = &local_248;
              local_350 = (undefined8 ******)
                          PTR__ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hdc1404ac42f64ec9E_00267af8
              ;
              local_320 = (undefined8 *****)&PTR_s_not_writing_through_dangling_sym_0025ed30;
              local_318 = 2;
              uStack_310 = &local_358;
              local_308 = 1;
              local_248 = param_5;
              ppppppuStack_240 = (undefined8 ******)param_6;
              goto LAB_001a408b;
            }
            _ZN4core3ptr75drop_in_place_LT_core__option__Option_LT_std__ffi__os_str__OsString_GT__GT_17h4d2013ddd054f4dbE
                      (local_320,CONCAT44(uStack_314,local_318));
          }
        }
        cVar8 = _ZN6uucore8features2fs24paths_refer_to_same_file17h63765c86a5a0b9e6E
                          (param_3,param_4,param_5,param_6,1);
        if (((cVar8 != '\0') && (*(char *)(param_7 + 0x54) == '\0')) &&
           ((*(char *)(param_7 + 0x55) == '\x01' &&
            ((*(char *)(param_7 + 0x65) == '\0' &&
             (uVar13 = _ZN3std2fs11remove_file17h19277b2d7a4f8643E(param_5,param_6), uVar13 != 0))))
           )) goto LAB_001a4821;
        goto LAB_001a4248;
      }
    }
    local_238 = &local_358;
    local_248 = &local_270;
    uStack_310 = &local_248;
    local_318 = 3;
    local_320 = (undefined8 *****)&PTR_s_will_not_copy___0025ed00;
    local_308 = 2;
    local_358 = param_5;
    local_350 = (undefined8 ******)param_6;
    local_270 = param_3;
    local_268 = param_4;
    ppppppuStack_240 =
         (undefined8 ******)
         PTR__ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hdc1404ac42f64ec9E_00267af8
    ;
    puStack_230 = 
    PTR__ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hdc1404ac42f64ec9E_00267af8
    ;
LAB_001a408b:
    uStack_2fc = 0;
    uStack_300 = 0;
    uStack_304 = 0;
    uStack_314 = 0;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17ha891a5b84284deb4E(param_1 + 1,&local_320);
    *param_1 = 0x8000000000000003;
    return;
  }
LAB_001a4248:
  cVar8 = (*(code *)
            PTR__ZN6uucore8features2fs26are_hardlinks_to_same_file17hed60833ae00362c2E_00267c78)
                    (param_3,param_4,param_5,param_6);
  puVar1 = PTR__ZN3std4path4Path10components17hd0346d362206f2e9E_002678f8;
  if (cVar8 != '\0') {
    (*(code *)PTR__ZN3std4path4Path10components17hd0346d362206f2e9E_002678f8)
              (&local_248,param_3,param_4);
    (*(code *)puVar1)(&local_320,param_5,param_6);
    cVar8 = _ZN62__LT_std__path__Components_u20_as_u20_core__cmp__PartialEq_GT_2eq17hd9623c64792f17b1E
                      (&local_248,&local_320);
    if ((((cVar8 == '\0') && (*(char *)(param_7 + 0x54) == '\0')) &&
        (*(char *)(param_7 + 0x55) == '\x01')) &&
       (uVar13 = _ZN3std2fs11remove_file17h19277b2d7a4f8643E(param_5,param_6), uVar13 != 0))
    goto LAB_001a4821;
  }
  cVar8 = _ZN5uu_cp19file_or_link_exists17h2275c94decc1c7b4E(param_5,param_6);
  bVar11 = *(byte *)(param_7 + 0x56);
  if ((cVar8 != '\0') &&
     (((bVar11 & 1) == 0 ||
      ((*(char *)(param_7 + 0x54) == '\0' && (*(char *)(param_7 + 0x55) == '\x01')))))) {
    bVar9 = _ZN6uucore8features2fs24paths_refer_to_same_file17h63765c86a5a0b9e6E
                      (param_3,param_4,param_5,param_6,1);
    puVar1 = PTR__ZN3std4path4Path10components17hd0346d362206f2e9E_002678f8;
    cVar8 = *(char *)(param_7 + 0x67);
    if ((bVar9 & cVar8 == '\0') != 0) {
      if (bVar6 == 0) {
        if (*(char *)(param_7 + 0x65) != '\0' && bVar7 == 0) {
          (*(code *)PTR__ZN3std4path4Path10components17hd0346d362206f2e9E_002678f8)
                    (&local_248,param_3,param_4);
          (*(code *)puVar1)(&local_320,param_5,param_6);
          cVar10 = _ZN62__LT_std__path__Components_u20_as_u20_core__cmp__PartialEq_GT_2eq17hd9623c64792f17b1E
                             (&local_248,&local_320);
          if (cVar10 == '\0') {
            *param_1 = 0x800000000000000c;
            return;
          }
          if (*(char *)(param_7 + 0x55) != '\0' || *(char *)(param_7 + 0x54) != '\0')
          goto LAB_001a4be2;
        }
      }
      else if ((bVar7 == 0) || (*(char *)(param_7 + 0x59) == '\0')) goto LAB_001a4be2;
    }
    _ZN5uu_cp20handle_existing_dest17h73cbfdf242938a56E
              (&local_320,param_3,param_4,param_5,param_6,param_7,param_11,param_10);
    if ((undefined8 ******)local_320 != (undefined8 ******)0x800000000000000c) {
      param_1[5] = CONCAT44(uStack_2f4,uStack_2f8);
      param_1[6] = CONCAT44(uStack_2ec,uStack_2f0);
      param_1[3] = CONCAT44(uStack_304,local_308);
      param_1[4] = CONCAT44(uStack_2fc,uStack_300);
      param_1[1] = CONCAT44(uStack_314,local_318);
      param_1[2] = CONCAT44(uStack_310._4_4_,(undefined4)uStack_310);
      *param_1 = (ulong)local_320;
      return;
    }
    cVar10 = (*(code *)
               PTR__ZN6uucore8features2fs26are_hardlinks_to_same_file17hed60833ae00362c2E_00267c78)
                       (param_3,param_4,param_5,param_6);
    if (cVar10 != '\0') {
      if (cVar8 == '\0') {
        if ((bVar7 & bVar6) == 0) goto LAB_001a4be2;
      }
      else if (cVar8 == '\x02') goto LAB_001a4be2;
    }
  }
  if (((bVar6 & bVar11) != 0) &&
     ((*(char *)(param_7 + 0x54) != '\0' || (*(char *)(param_7 + 0x55) != '\x01')))) {
    local_248 = (undefined8 ******)0x1;
    puStack_230 = (undefined *)CONCAT71(puStack_230._1_7_,1);
    local_358 = &local_248;
    local_350 = (undefined8 ******)
                PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_00267af0
    ;
    local_320 = (undefined8 *****)&PTR_s_cannot_change_attribute___Source_0025ed50;
    local_318 = 2;
    uStack_314 = 0;
    uStack_300 = 0;
    uStack_2fc = 0;
    uStack_310 = &local_358;
    local_308 = 1;
    uStack_304 = 0;
    ppppppuStack_240 = param_5;
    local_238 = (undefined8 *******)param_6;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17ha891a5b84284deb4E(param_1 + 1,&local_320);
    *param_1 = 0x8000000000000003;
    return;
  }
  if (*(char *)(param_7 + 0x50) == '\0') {
    bVar6 = *(byte *)(param_7 + 0x59);
  }
  else {
    bVar6 = *(byte *)(param_7 + 0x59);
    bVar11 = bVar6;
    if (param_11 == 1 && bVar6 == 0) {
      bVar11 = *(byte *)(param_7 + 0x58);
    }
    _ZN6uucore8features2fs15FileInformation9from_path17hfd069e4f76a9cc58E
              (&local_320,param_3,param_4,bVar11);
    local_270 = (undefined8 ******)0x1;
    local_258 = 1;
    local_198 = &local_270;
    local_190 = 
    PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_00267af0
    ;
    local_358 = (undefined8 ******)&PTR_s_cannot_stat_0025ec38;
    local_350 = (undefined8 ******)0x1;
    local_338 = 0;
    uStack_348 = &local_198;
    local_340 = 1;
                    /* try { // try from 001a4593 to 001a45a4 has its CatchHandler @ 001a4ec6 */
    local_268 = param_3;
    local_260 = param_4;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17ha891a5b84284deb4E(&local_170,&local_358);
    if (((ulong)local_320 & 1) != 0) {
      param_1[3] = local_160;
      param_1[1] = local_170;
      param_1[2] = uStack_168;
      *param_1 = 0x8000000000000002;
      param_1[4] = CONCAT44(uStack_314,local_318);
      return;
    }
    local_178 = (undefined8 ******)CONCAT44(uStack_304,local_308);
    local_188 = (undefined8 *****)CONCAT44(uStack_314,local_318);
    pppppuStack_180 = (undefined8 *****)CONCAT44(uStack_310._4_4_,(undefined4)uStack_310);
    local_138 = CONCAT44(uStack_2f4,uStack_2f8);
    uStack_130 = CONCAT44(uStack_2ec,uStack_2f0);
    uStack_120 = uStack_2e0;
    uStack_fc = uStack_2bc;
    local_d8 = local_298;
    uStack_d4 = uStack_294;
    uStack_d0 = uStack_290;
    uStack_cc = uStack_28c;
    _ZN4core3ptr230drop_in_place_LT__LT_core__result__Result_LT__LP__RP__C_std__io__error__Error_GT__u20_as_u20_quick_error__ResultExt_LT__LP__RP__C_std__io__error__Error_GT__GT___context_LT_alloc__string__String_GT____u7b__u7b_closure_u7d__u7d__GT_17h92d6353b521410cdE
              (&local_170);
    local_148 = local_178;
    local_158 = local_188;
    pppppuStack_150 = pppppuStack_180;
    local_248 = (undefined8 ******)local_188;
    ppppppuStack_240 = (undefined8 ******)pppppuStack_180;
    local_238 = (undefined8 *******)local_178;
    local_228 = local_138;
    uStack_220 = uStack_130;
    uStack_210 = uStack_120;
    uStack_1ec = uStack_fc;
    local_1c8 = local_d8;
    uStack_1c4 = CONCAT44(uStack_d0,uStack_d4);
    uStack_1bc = CONCAT44(uStack_1bc._4_4_,uStack_cc);
    lVar12 = _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_9get_inner17h13e176d417cda5caE
                       (param_10,&local_248);
    if (lVar12 != 0) {
      uVar13 = _ZN3std2fs9hard_link17hc46b68337ed0a177E(lVar12 + 0x90,param_5,param_6);
      if (uVar13 != 0) {
LAB_001a4821:
        *param_1 = 0x8000000000000001;
        param_1[1] = uVar13;
        return;
      }
      if (*(char *)(param_7 + 0x60) != '\0') {
        _ZN5uu_cp20print_verbose_output17h224f7f61cc9bdc36E
                  (*(undefined *)(param_7 + 0x5c),local_328,param_3,param_4,param_5,param_6);
      }
LAB_001a4be2:
      *param_1 = 0x800000000000000c;
      return;
    }
  }
  _ZN5uu_cp11context_for17h4d8c781d36af7105E(&local_270,param_3,param_4,param_5,param_6);
  pppppuVar5 = local_260;
  pppppuVar4 = local_268;
  if (((bVar6 & 1) == 0) && ((param_11 == 0 || (*(char *)(param_7 + 0x58) == '\0')))) {
    _ZN3std2fs16symlink_metadata17h814bc3976f7d40c5E(&local_320,param_3,param_4);
  }
  else {
                    /* try { // try from 001a4880 to 001a4b85 has its CatchHandler @ 001a4edb */
    _ZN3std2fs8metadata17h87a95e5fd9b91fc7E(&local_320,param_3,param_4);
  }
  if ((undefined8 ******)local_320 == (undefined8 ******)0x2) {
    _ZN5uu_cp9copy_file28__u7b__u7b_closure_u7d__u7d_17h75931459cf981f47E
              (&local_358,param_3,param_4);
    local_158 = local_350;
    pppppuStack_150 = uStack_348;
    *(undefined4 *)(param_1 + 2) = (undefined4)local_350;
    *(undefined4 *)((long)param_1 + 0x14) = local_350._4_4_;
    *(undefined4 *)(param_1 + 3) = (undefined4)uStack_348;
    *(undefined4 *)((long)param_1 + 0x1c) = uStack_348._4_4_;
    uVar13 = 0x8000000000000003;
    ppppppuVar14 = local_358;
LAB_001a4906:
    *param_1 = uVar13;
    param_1[1] = (ulong)ppppppuVar14;
  }
  else {
    local_19c = local_274;
    local_1ac = local_284;
    uStack_1a4 = uStack_27c;
    uStack_1bc = CONCAT44(uStack_290,uStack_294);
    uStack_1c4 = CONCAT44(local_298,uStack_29c);
    local_1c8 = uStack_2a0;
    uStack_1ec = uStack_2c4;
    local_228 = CONCAT44(uStack_2fc,uStack_300);
    uStack_220 = CONCAT44(uStack_2f4,uStack_2f8);
    local_238 = (undefined8 *******)CONCAT44(uStack_310._4_4_,(undefined4)uStack_310);
    local_248 = (undefined8 ******)local_320;
    uStack_210 = local_2e8;
    ppppppuStack_240 = (undefined8 ******)CONCAT44(uStack_314,local_318);
    _ZN5uu_cp26calculate_dest_permissions17h5f84cb330fdd911eE
              (&local_320,param_5,param_6,local_2e8,*(undefined *)(param_7 + 0x4a),
               *(undefined *)(param_7 + 0x4b),pppppuVar4,pppppuVar5);
    if ((undefined8 ******)local_320 != (undefined8 ******)0x800000000000000c) {
      param_1[5] = CONCAT44(uStack_2f4,uStack_2f8);
      param_1[6] = CONCAT44(uStack_2ec,uStack_2f0);
      *(ulong *)((long)param_1 + 0x1c) = CONCAT44(uStack_300,uStack_304);
      *(ulong *)((long)param_1 + 0x24) = CONCAT44(uStack_2f8,uStack_2fc);
      *(undefined4 *)((long)param_1 + 0xc) = uStack_314;
      *(undefined4 *)(param_1 + 2) = (undefined4)uStack_310;
      *(undefined4 *)((long)param_1 + 0x14) = uStack_310._4_4_;
      *(undefined4 *)(param_1 + 3) = local_308;
      *param_1 = (ulong)local_320;
      *(uint *)(param_1 + 1) = local_318;
      goto LAB_001a4e98;
    }
    local_2e8 = local_2e8 & 0xf000;
    local_364 = '\x01';
    local_24c = local_318;
    if (((local_2e8 != 0x1000) && (local_2e8 != 0x2000)) && (local_2e8 != 0x6000)) {
      local_364 = '\0';
    }
    _ZN5uu_cp16handle_copy_mode17h7a192efd6f504098E
              (&local_320,param_3,param_4,param_5,param_6,param_7,pppppuVar4,pppppuVar5,&local_248,
               param_8,param_11,local_2e8 == 0x1000,local_364);
    if ((undefined8 ******)local_320 != (undefined8 ******)0x800000000000000c) {
      param_1[5] = CONCAT44(uStack_2f4,uStack_2f8);
      param_1[6] = CONCAT44(uStack_2ec,uStack_2f0);
      *(ulong *)((long)param_1 + 0x19) =
           CONCAT17((undefined)uStack_300,CONCAT43(uStack_304,local_308._1_3_));
      *(ulong *)((long)param_1 + 0x21) =
           CONCAT17((undefined)uStack_2f8,CONCAT43(uStack_2fc,uStack_300._1_3_));
      *(uint *)((long)param_1 + 9) = CONCAT13((undefined)uStack_314,local_318._1_3_);
      *(uint *)((long)param_1 + 0xd) = CONCAT13((undefined)uStack_310,uStack_314._1_3_);
      *(uint *)((long)param_1 + 0x11) = CONCAT13(uStack_310._4_1_,uStack_310._1_3_);
      *(uint *)((long)param_1 + 0x15) = CONCAT13((undefined)local_308,uStack_310._5_3_);
      *param_1 = (ulong)local_320;
      *(undefined *)(param_1 + 1) = (undefined)local_318;
      goto LAB_001a4e98;
    }
    if ((*(char *)(param_7 + 0x60) != '\0') && ((local_318 & 1) == 0)) {
      _ZN5uu_cp20print_verbose_output17h224f7f61cc9bdc36E
                (*(undefined *)(param_7 + 0x5c),local_328,param_3,param_4,param_5,param_6);
    }
    if ((bVar7 == 0) &&
       (local_320 = (undefined8 *****)
                    _ZN3std2fs15set_permissions17h0aec1725d40e979bE(param_5,param_6,local_24c),
       (undefined8 ******)local_320 != (undefined8 ******)0x0)) {
      _ZN4core3ptr81drop_in_place_LT_core__result__Result_LT__LP__RP__C_std__io__error__Error_GT__GT_17h6803c44012521573E
                (&local_320);
    }
    if (((bVar6 & 1) == 0) && ((param_11 == 0 || (*(char *)(param_7 + 0x58) == '\0')))) {
      if (local_364 != '\0') {
                    /* try { // try from 001a4c42 to 001a4c93 has its CatchHandler @ 001a4edb */
        _ZN3std2fs8metadata17h87a95e5fd9b91fc7E(&local_320,param_3,param_4);
        pppppuVar4 = local_320;
        _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17he37bb0d8b54bbf24E
                  (&local_320);
        if ((int)pppppuVar4 != 2) goto LAB_001a4d50;
      }
      _ZN5uu_cp15copy_attributes17h279b81c598780b21E
                (&local_320,param_3,param_4,param_5,param_6,param_7 + 0x48);
      if ((undefined8 ******)local_320 != (undefined8 ******)0x800000000000000c) {
        param_1[5] = CONCAT44(uStack_2f4,uStack_2f8);
        param_1[6] = CONCAT44(uStack_2ec,uStack_2f0);
        param_1[3] = CONCAT44(uStack_304,local_308);
        param_1[4] = CONCAT44(uStack_2fc,uStack_300);
        *(uint *)(param_1 + 1) = local_318;
        *(undefined4 *)((long)param_1 + 0xc) = uStack_314;
        *(undefined4 *)(param_1 + 2) = (undefined4)uStack_310;
        *(undefined4 *)((long)param_1 + 0x14) = uStack_310._4_4_;
        *param_1 = (ulong)local_320;
        goto LAB_001a4e98;
      }
    }
    else {
      _ZN6uucore8features2fs12canonicalize17h2a46952db6a00ca6E(&local_358,param_3,param_4,0,1);
      ppppppuVar2 = uStack_348;
      ppppppuVar14 = local_350;
      if (local_358 == (undefined8 ******)0x8000000000000000) {
        _ZN4core3ptr91drop_in_place_LT_core__result__Result_LT_std__path__PathBuf_C_std__io__error__Error_GT__GT_17hd1372b83dff59979E
                  (&local_358);
      }
      else {
                    /* try { // try from 001a4ce5 to 001a4d2d has its CatchHandler @ 001a4eb7 */
        _ZN3std2fs8metadata17h87a95e5fd9b91fc7E(&local_320);
        pppppuVar4 = local_320;
        _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17he37bb0d8b54bbf24E
                  (&local_320);
        if (((int)pppppuVar4 != 2) &&
           (_ZN5uu_cp15copy_attributes17h279b81c598780b21E
                      (&local_320,ppppppuVar14,ppppppuVar2,param_5,param_6,param_7 + 0x48),
           (undefined8 ******)local_320 != (undefined8 ******)0x800000000000000c)) {
          *(undefined4 *)(param_1 + 5) = uStack_2f8;
          *(undefined4 *)((long)param_1 + 0x2c) = uStack_2f4;
          *(undefined4 *)(param_1 + 6) = uStack_2f0;
          *(undefined4 *)((long)param_1 + 0x34) = uStack_2ec;
          *(undefined4 *)(param_1 + 3) = local_308;
          *(undefined4 *)((long)param_1 + 0x1c) = uStack_304;
          *(undefined4 *)(param_1 + 4) = uStack_300;
          *(undefined4 *)((long)param_1 + 0x24) = uStack_2fc;
          *(uint *)(param_1 + 1) = local_318;
          *(undefined4 *)((long)param_1 + 0xc) = uStack_314;
          *(undefined4 *)(param_1 + 2) = (undefined4)uStack_310;
          *(undefined4 *)((long)param_1 + 0x14) = uStack_310._4_4_;
          *param_1 = (ulong)local_320;
          _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h80f4faf291cc80afE(&local_358);
          goto LAB_001a4e98;
        }
        _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h80f4faf291cc80afE(&local_358);
      }
    }
LAB_001a4d50:
    if (((~param_11 | bVar6) & 1) == 0) {
      bVar6 = *(byte *)(param_7 + 0x58);
    }
                    /* try { // try from 001a4d66 to 001a4d80 has its CatchHandler @ 001a4edb */
    _ZN6uucore8features2fs15FileInformation9from_path17hfd069e4f76a9cc58E
              (&local_320,param_3,param_4,bVar6 & 1);
    if ((int)local_320 == 1) {
      *param_1 = 0x8000000000000001;
      param_1[1] = CONCAT44(uStack_314,local_318);
      goto LAB_001a4e98;
    }
    (*(code *)PTR_memcpy_00267610)(local_b8,&uStack_310,0x88);
                    /* try { // try from 001a4dcd to 001a4e54 has its CatchHandler @ 001a4edb */
    (*(code *)PTR__ZN3std3sys3pal4unix2os11split_paths13bytes_to_path17h3f69b771c0ce4140E_00267978)
              (&local_320,param_5,param_6);
    _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_6insert17hd78ac1061f7c6c28E
              (&local_358,param_10,local_c0,&local_320);
    _ZN4core3ptr67drop_in_place_LT_core__option__Option_LT_std__path__PathBuf_GT__GT_17hf94fc9edf2322537E
              (&local_358);
    if (local_328 != 0) {
      _ZN3std2fs8metadata17h87a95e5fd9b91fc7E(&local_320,param_3,param_4);
      if ((int)local_320 == 2) {
        ppppppuVar14 = (undefined8 ******)CONCAT44(uStack_314,local_318);
        uVar13 = 0x8000000000000001;
        goto LAB_001a4906;
      }
      (*(code *)PTR__ZN9indicatif12progress_bar11ProgressBar3inc17h6821cd6efd4a2245E_00267c80)
                (local_328,CONCAT44(uStack_2cc,uStack_2d0));
    }
    *param_1 = 0x800000000000000c;
  }
LAB_001a4e98:
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h1c03d16396ad1b8dE(&local_270);
  return;
}