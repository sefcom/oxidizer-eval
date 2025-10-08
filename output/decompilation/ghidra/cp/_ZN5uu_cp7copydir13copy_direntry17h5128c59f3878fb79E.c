void _ZN5uu_cp7copydir13copy_direntry17h5128c59f3878fb79E
               (undefined8 *param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
               char param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  char cVar5;
  char cVar6;
  undefined uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined8 *puVar10;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined8 local_1f8;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 local_1c8;
  undefined **local_1c0;
  undefined8 local_1b8;
  undefined local_1b0 [8];
  undefined4 *local_1a8;
  code *local_1a0;
  undefined8 **local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined local_178 [16];
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 *local_118;
  code *local_110;
  undefined8 *puStack_108;
  code *local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined local_48 [24];
  
  local_1d8 = *(undefined8 *)(param_3 + 0x28);
  local_1e8 = *(undefined8 *)(param_3 + 0x18);
  uStack_1e0 = *(undefined8 *)(param_3 + 0x20);
  local_1f8 = *(undefined8 *)(param_3 + 0x40);
  local_208 = *(undefined4 *)(param_3 + 0x30);
  uStack_204 = *(undefined4 *)(param_3 + 0x34);
  uStack_200 = *(undefined4 *)(param_3 + 0x38);
  uStack_1fc = *(undefined4 *)(param_3 + 0x3c);
  cVar6 = *(char *)(param_3 + 0x48);
  uVar1 = *(undefined8 *)(param_3 + 8);
  uVar2 = *(undefined8 *)(param_3 + 0x10);
  local_1b8 = param_5;
  local_120 = param_2;
                    /* try { // try from 001993dd to 00199546 has its CatchHandler @ 001999a9 */
  cVar5 = (*(code *)PTR__ZN3std4path4Path10is_symlink17h004cfac91d04dbc0E_00267ae0)(uVar1,uVar2);
  if ((cVar5 == '\0') || (*(char *)(param_4 + 0x59) != '\0')) {
    cVar5 = (*(code *)PTR__ZN3std4path4Path6is_dir17h02edbc48c38d7d9eE_00267ad0)(uVar1,uVar2);
    if (cVar5 == '\0') {
LAB_0019949e:
      cVar6 = (*(code *)PTR__ZN3std4path4Path6is_dir17h02edbc48c38d7d9eE_00267ad0)(uVar1,uVar2);
      if (cVar6 == '\0') {
        _ZN5uu_cp9copy_file17h2d5f479453081e34E
                  (&local_168,local_120,uVar1,uVar2,CONCAT44(uStack_1fc,uStack_200),local_1f8,
                   param_4,local_1b8,param_7,param_8,0);
        if (CONCAT44(uStack_164,local_168) != -0x7ffffffffffffff4) {
          local_c8 = local_138;
          local_d8 = CONCAT44(uStack_144,local_148);
          uVar4 = local_d8;
          uStack_d0 = uStack_140;
          uStack_cc = uStack_13c;
          local_e8 = (undefined4 **)CONCAT44(uStack_154,local_158);
          uStack_e0 = CONCAT44(uStack_14c,uStack_150);
          local_f8 = (undefined *)CONCAT44(uStack_164,local_168);
          uStack_f0 = CONCAT44(uStack_15c,uStack_160);
          if (param_6 == '\0') {
            if (local_f8 == (undefined *)0x8000000000000002) {
              cVar6 = _ZN3std2io5error5Error4kind17h135fe00c4e7365f3E(local_d8);
              if (cVar6 == '\x01') {
                uVar7 = _ZN3std2io5error5Error4kind17h135fe00c4e7365f3E(uVar4);
                local_118 = (undefined8 *)0x1;
                local_110 = (code *)uStack_1e0;
                puStack_108 = (undefined8 *)local_1d8;
                local_100 = (code *)CONCAT71(local_100._1_7_,1);
                local_178._8_8_ =
                     PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_00267af0
                ;
                local_1a8 = (undefined4 *)&DAT_0025e640;
                local_1a0 = (code *)0x2;
                local_188 = 0;
                local_190 = 1;
                    /* try { // try from 00199783 to 001997a5 has its CatchHandler @ 00199951 */
                local_198 = (undefined8 **)local_178;
                local_178._0_8_ = &local_118;
                _ZN4core6option15Option_LT_T_GT_11map_or_else17ha891a5b84284deb4E
                          (local_48,&local_1a8);
                local_1c8 = _ZN6uucore4mods5error8UIoError3new17h7234677a8d8132fcE(uVar7,local_48);
                local_1c0 = &
                            PTR__ZN4core3ptr50drop_in_place_LT_uucore__mods__error__UIoError_GT_17h4483a6ebb3fa8e6eE_0025e348
                ;
                uVar8 = _ZN6uucore4mods5error6UError4code17h00176739935be277E();
                    /* try { // try from 001997bc to 0019984c has its CatchHandler @ 0019993d */
                (*(code *)PTR__ZN6uucore4mods5error13set_exit_code17hbbe6ffc423a314f1E_00267690)
                          (uVar8);
                local_178 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_00267628)();
                local_110 = 
                _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17haac06c1252b30d1dE;
                puStack_108 = &local_1c8;
                local_100 = 
                _ZN69__LT_alloc__boxed__Box_LT_T_C_A_GT__u20_as_u20_core__fmt__Display_GT_3fmt17hf8a637a73ed45d5bE
                ;
                local_1a8 = (undefined4 *)&DAT_0025e660;
                local_1a0 = (code *)0x3;
                local_188 = 0;
                local_190 = 2;
                local_198 = &local_118;
                local_118 = (undefined8 *)local_178;
                (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_00267630)(&local_1a8);
                    /* try { // try from 00199857 to 0019985b has its CatchHandler @ 00199951 */
                _ZN4core3ptr105drop_in_place_LT_alloc__boxed__Box_LT_dyn_u20_clap_builder__builder__value_parser__AnyValueParser_GT__GT_17h3fae8bb6fba1fa61E
                          (local_1c8,local_1c0);
                    /* try { // try from 0019985c to 00199868 has its CatchHandler @ 00199960 */
                _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17hb23d8f5d6ef8daacE
                          (local_1b0);
                goto LAB_00199869;
              }
            }
          }
          else {
                    /* try { // try from 00199597 to 001995a2 has its CatchHandler @ 00199960 */
            cVar6 = (*(code *)PTR__ZN3std4path4Path10is_symlink17h004cfac91d04dbc0E_00267ae0)
                              (uVar1,uVar2);
            if (cVar6 != '\0') {
              if (local_f8 == (undefined *)0x8000000000000002) {
                    /* try { // try from 001995c8 to 001995cc has its CatchHandler @ 00199926 */
                _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17hb23d8f5d6ef8daacE
                          (&local_d8);
LAB_00199869:
                _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h1c03d16396ad1b8dE
                          (&uStack_f0);
              }
              else {
                    /* try { // try from 00199914 to 00199920 has its CatchHandler @ 001999a9 */
                _ZN4core3ptr33drop_in_place_LT_uu_cp__Error_GT_17h9ee7df58e7d9e41eE(&local_168);
              }
              goto LAB_00199515;
            }
          }
          param_1[6] = local_138;
          goto LAB_001998a3;
        }
        _ZN4core3ptr72drop_in_place_LT_core__result__Result_LT__LP__RP__C_uu_cp__Error_GT__GT_17h38297071204f1ddeE
                  (&local_168);
      }
LAB_00199515:
      puVar10 = (undefined8 *)(param_3 + 0x18);
      puVar9 = (undefined4 *)(param_3 + 0x30);
      *param_1 = 0x800000000000000c;
      goto LAB_001998b8;
    }
    local_128 = CONCAT44(uStack_1fc,uStack_200);
    local_130 = local_1f8;
    _ZN3std2fs8metadata17h87a95e5fd9b91fc7E(&local_f8);
    puVar3 = local_f8;
    _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17he37bb0d8b54bbf24E
              (&local_f8);
    if ((int)puVar3 != 2) goto LAB_0019949e;
    if (cVar6 == '\0') {
                    /* try { // try from 001995db to 0019964e has its CatchHandler @ 001999a9 */
      puVar9 = &local_208;
      _ZN5uu_cp7copydir9build_dir17hcf48ec2566a6908dE
                (&local_f8,puVar9,0,*(undefined4 *)(param_4 + 0x48),*(undefined *)(param_4 + 0x4a),
                 uVar1,uVar2);
      if (local_f8 == (undefined *)0x800000000000000c) {
        if (*(char *)(param_4 + 0x60) != '\0') {
          _ZN5uu_cp11context_for17h4d8c781d36af7105E
                    (&local_168,uStack_1e0,local_1d8,local_128,local_130);
          local_1a0 = 
          _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
          local_f8 = &DAT_0025e620;
          uStack_f0 = 2;
          local_d8 = 0;
          local_e8 = &local_1a8;
          uStack_e0 = 1;
                    /* try { // try from 001996a0 to 001996ad has its CatchHandler @ 0019992b */
          local_1a8 = &local_168;
          (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_00267658)(&local_f8);
          _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h1c03d16396ad1b8dE(&local_168);
        }
        *param_1 = 0x800000000000000c;
      }
      else {
        param_1[5] = CONCAT44(uStack_cc,uStack_d0);
        param_1[6] = local_c8;
        param_1[3] = uStack_e0;
        param_1[4] = local_d8;
        *(undefined4 *)(param_1 + 1) = (undefined4)uStack_f0;
        *(undefined4 *)((long)param_1 + 0xc) = uStack_f0._4_4_;
        *(undefined4 *)(param_1 + 2) = (undefined4)local_e8;
        *(undefined4 *)((long)param_1 + 0x14) = local_e8._4_4_;
        *param_1 = local_f8;
      }
      puVar10 = &local_1e8;
      goto LAB_001998b8;
    }
    (*(code *)
      PTR__ZN67__LT_uu_cp__Error_u20_as_u20_core__convert__From_LT__RF_str_GT__GT_4from17h0e3b1f2b5d04343dE_00267ae8
    )(&local_f8,
      "cannot overwrite non-directory with directorycannot open  for reading-r not specified; omitting directory cannot copy a directory, , into itself, "
      ,0x2d);
    param_1[6] = local_c8;
    local_168 = (undefined4)local_f8;
    uStack_164 = local_f8._4_4_;
    uStack_160 = (undefined4)uStack_f0;
    uStack_15c = uStack_f0._4_4_;
    local_158 = (undefined4)local_e8;
    uStack_154 = local_e8._4_4_;
    uStack_150 = (undefined4)uStack_e0;
    uStack_14c = uStack_e0._4_4_;
    local_148 = (undefined4)local_d8;
    uStack_144 = local_d8._4_4_;
    uStack_140 = uStack_d0;
    uStack_13c = uStack_cc;
LAB_001998a3:
    *(undefined4 *)(param_1 + 4) = local_148;
    *(undefined4 *)((long)param_1 + 0x24) = uStack_144;
    *(undefined4 *)(param_1 + 5) = uStack_140;
    *(undefined4 *)((long)param_1 + 0x2c) = uStack_13c;
    *(undefined4 *)(param_1 + 2) = local_158;
    *(undefined4 *)((long)param_1 + 0x14) = uStack_154;
    *(undefined4 *)(param_1 + 3) = uStack_150;
    *(undefined4 *)((long)param_1 + 0x1c) = uStack_14c;
    *(undefined4 *)param_1 = local_168;
    *(undefined4 *)((long)param_1 + 4) = uStack_164;
    *(undefined4 *)(param_1 + 1) = uStack_160;
    *(undefined4 *)((long)param_1 + 0xc) = uStack_15c;
  }
  else {
    _ZN5uu_cp9copy_link17h25042d5280b1628eE
              (param_1,uVar1,uVar2,CONCAT44(uStack_1fc,uStack_200),local_1f8,local_1b8);
  }
  puVar10 = &local_1e8;
  puVar9 = &local_208;
LAB_001998b8:
  _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h80f4faf291cc80afE(puVar9);
  _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h80f4faf291cc80afE(puVar10);
  _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h80f4faf291cc80afE(param_3);
  return;
}