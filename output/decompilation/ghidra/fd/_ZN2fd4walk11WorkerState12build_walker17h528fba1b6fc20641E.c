void _ZN2fd4walk11WorkerState12build_walker17h528fba1b6fc20641E
               (undefined4 *param_1,undefined4 *param_2,long param_3,long param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  char cVar7;
  undefined4 *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  long lVar11;
  long lVar12;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined8 local_348;
  undefined4 *local_338;
  int local_330;
  undefined4 uStack_32c;
  undefined4 uStack_328;
  undefined4 uStack_324;
  undefined4 local_320;
  undefined4 uStack_31c;
  undefined4 uStack_318;
  undefined4 uStack_314;
  undefined4 local_310;
  undefined4 uStack_30c;
  undefined4 uStack_308;
  undefined4 uStack_304;
  undefined8 local_300;
  int local_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined4 local_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined4 local_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined8 local_2c8;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined4 *local_290;
  long local_288;
  undefined8 local_280;
  undefined8 local_278;
  undefined8 local_270;
  undefined **local_268;
  undefined8 local_260;
  int **local_258;
  undefined8 local_250;
  undefined8 local_248;
  int *local_238;
  undefined *local_230;
  undefined4 local_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined4 local_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 local_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 local_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined local_110;
  char local_10f;
  undefined local_10e;
  undefined local_10d;
  undefined local_10c;
  undefined local_10b;
  undefined local_109;
  undefined8 local_f8;
  undefined local_d0 [24];
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
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined local_48 [24];
  
  local_288 = param_4;
  if (param_4 != 0) {
    _ZN2fd4walk11WorkerState15build_overrides17h07e07fdbe9066c9aE
              (&local_1a8,*(undefined8 *)(param_2 + 0x16),*(undefined8 *)(param_2 + 0x18),param_3);
    local_1b0 = local_148;
    local_1c0 = local_158;
    uStack_1b8 = uStack_150;
    local_1d0 = local_168;
    uStack_1cc = uStack_164;
    uStack_1c8 = uStack_160;
    uStack_1c4 = uStack_15c;
    local_1e0 = local_178;
    uStack_1dc = uStack_174;
    uStack_1d8 = uStack_170;
    uStack_1d4 = uStack_16c;
    local_1f0 = local_188;
    uStack_1ec = uStack_184;
    uStack_1e8 = uStack_180;
    uStack_1e4 = uStack_17c;
    local_200 = local_198;
    uStack_1fc = uStack_194;
    uStack_1f8 = uStack_190;
    uStack_1f4 = uStack_18c;
    local_210 = local_1a8;
    uStack_208 = local_1a0;
                    /* try { // try from 002f8923 to 002f8932 has its CatchHandler @ 002f8ef7 */
    local_290 = param_1;
    _ZN6ignore4walk11WalkBuilder3new17h2757c17276ab6607E(&local_1a8,param_3);
    local_110 = *(undefined *)((long)param_2 + 0x1da);
    cVar7 = *(char *)((long)param_2 + 0x1db);
    if (*(char *)(param_2 + 0x77) == '\x01') {
      local_10e = 1;
      if (cVar7 == '\0') {
        local_10e = *(undefined *)((long)param_2 + 0x1dd);
      }
    }
    else {
      local_10e = 0;
    }
    local_10d = *(undefined *)((long)param_2 + 0x1dd);
    local_109 = *(undefined *)((long)param_2 + 0x1de);
    local_298 = local_1b0;
    local_2a8 = local_1c0;
    uStack_2a0 = uStack_1b8;
    local_2b8 = CONCAT44(uStack_1cc,local_1d0);
    uStack_2b0 = CONCAT44(uStack_1c4,uStack_1c8);
    local_2c8 = CONCAT44(uStack_1dc,local_1e0);
    uStack_2c0 = uStack_1d8;
    uStack_2bc = uStack_1d4;
    local_2d8 = local_1f0;
    uStack_2d4 = uStack_1ec;
    uStack_2d0 = uStack_1e8;
    uStack_2cc = uStack_1e4;
    local_2e8 = local_200;
    uStack_2e4 = uStack_1fc;
    uStack_2e0 = uStack_1f8;
    uStack_2dc = uStack_1f4;
    local_2f8 = (int)local_210;
    uStack_2f4 = local_210._4_4_;
    uStack_2f0 = (undefined4)uStack_208;
    uStack_2ec = uStack_208._4_4_;
                    /* try { // try from 002f8a0a to 002f8a6c has its CatchHandler @ 002f8f09 */
    local_10f = cVar7;
    local_10c = local_10d;
    local_10b = local_10d;
    puVar8 = (undefined4 *)
             (*(code *)PTR__ZN6ignore4walk11WalkBuilder9overrides17hf6b417a23fef1b56E_005409b0)
                       (&local_1a8,&local_2f8);
    *(undefined *)(puVar8 + 0x34) = *(undefined *)(param_2 + 0x78);
    *(undefined *)((long)puVar8 + 0xd1) = *(undefined *)((long)param_2 + 0x1e1);
    uVar1 = param_2[1];
    uVar2 = param_2[2];
    uVar3 = param_2[3];
    *puVar8 = *param_2;
    puVar8[1] = uVar1;
    puVar8[2] = uVar2;
    puVar8[3] = uVar3;
    if (cVar7 != '\0') {
      _ZN6ignore3dir13IgnoreBuilder26add_custom_ignore_filename17h9e6eb0f85cf3b87eE(&local_158);
    }
    if ((*(char *)((long)param_2 + 0x1df) != '\0') &&
       ((*(code *)
          PTR__ZN8etcetera13base_strategy22choose_native_strategy17h6f2ded70445b1b1fE_005409b8)
                  (&local_228), CONCAT44(uStack_224,local_228) != -0x8000000000000000)) {
      local_348 = local_218;
      local_358 = (int *)CONCAT44(uStack_224,local_228);
      uStack_350 = (undefined *)CONCAT44(uStack_21c,uStack_220);
                    /* try { // try from 002f8a9e to 002f8aae has its CatchHandler @ 002f8ee4 */
      (*(code *)
        PTR__ZN91__LT_etcetera__base_strategy__xdg__Xdg_u20_as_u20_etcetera__base_strategy__BaseStrategy_GT_10config_dir17hc680a7b4b761bd51E_005409c0
      )(&local_2f8,&local_358);
      uVar5 = CONCAT44(uStack_2ec,uStack_2f0);
                    /* try { // try from 002f8ab9 to 002f8ad2 has its CatchHandler @ 002f8ed2 */
      _ZN3std4path4Path4join17h2e36849a222ee21cE
                (&local_330,uVar5,CONCAT44(uStack_2e4,local_2e8),"fd",2);
      uVar10 = CONCAT44(uStack_324,uStack_328);
                    /* try { // try from 002f8add to 002f8af9 has its CatchHandler @ 002f8ec0 */
      _ZN3std4path4Path4join17h2e36849a222ee21cE
                (&local_280,uVar10,CONCAT44(uStack_31c,local_320),"ignore",6);
      _ZN4core3mem4drop17h3eb21fab0c0d11e6E(CONCAT44(uStack_32c,local_330),uVar10);
      _ZN4core3mem4drop17h3eb21fab0c0d11e6E(CONCAT44(uStack_2f4,local_2f8),uVar5);
                    /* try { // try from 002f8b24 to 002f8b2c has its CatchHandler @ 002f8eb3 */
      cVar7 = (*(code *)PTR__ZN3std4path4Path7is_file17h6e28d87ff76ffc41E_005409c8)
                        (local_278,local_270);
      if (cVar7 == '\0') {
        _ZN4core3mem4drop17h3eb21fab0c0d11e6E(local_280,local_278);
      }
      else {
                    /* try { // try from 002f8b35 to 002f8b4e has its CatchHandler @ 002f8eb1 */
        _ZN6ignore4walk11WalkBuilder10add_ignore17h72842306988f4d4bE
                  (&local_330,&local_1a8,&local_280);
        iVar6 = local_330;
        lVar11 = CONCAT44(uStack_32c,local_330);
        lVar12 = lVar11;
        if ((lVar11 != 9) && (lVar11 != 0)) {
          local_2c8 = local_300;
          local_2d8 = local_310;
          uStack_2d4 = uStack_30c;
          uStack_2d0 = uStack_308;
          uStack_2cc = uStack_304;
          local_2e8 = local_320;
          uStack_2e4 = uStack_31c;
          uStack_2e0 = uStack_318;
          uStack_2dc = uStack_314;
          local_2f8 = local_330;
          uStack_2f4 = uStack_32c;
          uStack_2f0 = uStack_328;
          uStack_2ec = uStack_324;
          local_230 = 
          PTR__ZN52__LT_ignore__Error_u20_as_u20_core__fmt__Display_GT_3fmt17he8ab982f851e8e54E_005401d8
          ;
          local_268 = &PTR_s_Malformed_pattern_in_global_igno_00502648;
          local_260 = 2;
          local_248 = 0;
          local_258 = &local_238;
          local_250 = 1;
                    /* try { // try from 002f8bf5 to 002f8c18 has its CatchHandler @ 002f8ea2 */
          local_238 = &local_2f8;
          _ZN4core6option15Option_LT_T_GT_11map_or_else17h1f7ab50fdd345844E
                    (local_d0,0,extraout_RDX,&local_268);
          _ZN2fd5error11print_error17h653511955bf98e50E(local_d0);
                    /* try { // try from 002f8c19 to 002f8c41 has its CatchHandler @ 002f8eb1 */
          _ZN4core3ptr34drop_in_place_LT_ignore__Error_GT_17hba255aab589c455fE(&local_2f8);
          lVar12 = CONCAT44(uStack_32c,local_330);
        }
        if ((lVar12 != 9) && ((lVar11 == 0 || (iVar6 == 9)))) {
          _ZN4core3ptr34drop_in_place_LT_ignore__Error_GT_17hba255aab589c455fE(&local_330);
        }
      }
      _ZN4core3ptr43drop_in_place_LT_fd__hyperlink__PathUrl_GT_17h2d976cf0ed371e6cE
                (local_358,uStack_350);
    }
    local_338 = param_2;
    if (*(long *)(param_2 + 0x1e) != 0) {
      lVar11 = *(long *)(param_2 + 0x1c);
      lVar12 = *(long *)(param_2 + 0x1e) * 0x18;
      do {
        _ZN6ignore4walk11WalkBuilder10add_ignore17h661fe35ca4bb8eb0E(&local_330,&local_1a8,lVar11);
        iVar6 = local_330;
        lVar4 = CONCAT44(uStack_32c,local_330);
        lVar9 = lVar4;
        if ((lVar4 != 9) && (lVar4 != 0)) {
          local_2c8 = local_300;
          local_2d8 = local_310;
          uStack_2d4 = uStack_30c;
          uStack_2d0 = uStack_308;
          uStack_2cc = uStack_304;
          local_2e8 = local_320;
          uStack_2e4 = uStack_31c;
          uStack_2e0 = uStack_318;
          uStack_2dc = uStack_314;
          local_2f8 = local_330;
          uStack_2f4 = uStack_32c;
          uStack_2f0 = uStack_328;
          uStack_2ec = uStack_324;
          local_358 = &local_2f8;
          uStack_350 = 
          PTR__ZN52__LT_ignore__Error_u20_as_u20_core__fmt__Display_GT_3fmt17he8ab982f851e8e54E_005401d8
          ;
          local_268 = &PTR_s_Malformed_pattern_in_custom_igno_00502668;
          local_260 = 2;
          local_248 = 0;
          local_250 = 1;
                    /* try { // try from 002f8d58 to 002f8d79 has its CatchHandler @ 002f8f0b */
          local_258 = (int **)&local_358;
          _ZN4core6option15Option_LT_T_GT_11map_or_else17h1f7ab50fdd345844E
                    (local_48,0,extraout_RDX_00,&local_268);
          _ZN2fd5error11print_error17h653511955bf98e50E(local_48);
                    /* try { // try from 002f8d7a to 002f8d83 has its CatchHandler @ 002f8f1c */
          _ZN4core3ptr34drop_in_place_LT_ignore__Error_GT_17hba255aab589c455fE(&local_2f8);
          lVar9 = CONCAT44(uStack_32c,local_330);
        }
        if ((lVar9 != 9) && ((lVar4 == 0 || (iVar6 == 9)))) {
                    /* try { // try from 002f8c90 to 002f8cb8 has its CatchHandler @ 002f8f1c */
          _ZN4core3ptr34drop_in_place_LT_ignore__Error_GT_17hba255aab589c455fE(&local_330);
        }
        lVar11 = lVar11 + 0x18;
        lVar12 = lVar12 + -0x18;
      } while (lVar12 != 0);
    }
    lVar11 = local_288 * 0x18;
    lVar12 = param_3 + 0x18;
    while (lVar11 = lVar11 + -0x18, lVar11 != 0) {
                    /* try { // try from 002f8ddd to 002f8de7 has its CatchHandler @ 002f8f1a */
      _ZN6ignore4walk11WalkBuilder3add17ha4515dcd5f254dbaE(&local_1a8,lVar12);
      lVar12 = lVar12 + 0x18;
    }
    local_f8 = *(undefined8 *)(local_338 + 0x68);
                    /* try { // try from 002f8e01 to 002f8e16 has its CatchHandler @ 002f8f09 */
    (*(code *)PTR__ZN6ignore4walk11WalkBuilder14build_parallel17hfc1000ec665f112aE_005409d0)
              (&local_b8,&local_1a8);
    *(undefined8 *)(local_290 + 0x18) = local_58;
    *(undefined8 *)(local_290 + 0x1a) = uStack_50;
    *(undefined8 *)(local_290 + 0x14) = local_68;
    *(undefined8 *)(local_290 + 0x16) = uStack_60;
    *(undefined8 *)(local_290 + 0x10) = local_78;
    *(undefined8 *)(local_290 + 0x12) = uStack_70;
    local_290[0xc] = local_88;
    local_290[0xd] = uStack_84;
    local_290[0xe] = uStack_80;
    local_290[0xf] = uStack_7c;
    local_290[8] = local_98;
    local_290[9] = uStack_94;
    local_290[10] = uStack_90;
    local_290[0xb] = uStack_8c;
    local_290[4] = local_a8;
    local_290[5] = uStack_a4;
    local_290[6] = uStack_a0;
    local_290[7] = uStack_9c;
    *local_290 = local_b8;
    local_290[1] = uStack_b4;
    local_290[2] = uStack_b0;
    local_290[3] = uStack_ac;
    _ZN4core3ptr46drop_in_place_LT_ignore__walk__WalkBuilder_GT_17he1d9bb4ee46bd15eE(&local_1a8);
    return;
  }
  uVar10 = (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_0053fd98)
                     (0,0,&PTR_s_src_walk_rs_00502688);
                    /* catch() { ... } // from try @ 002f8bf5 with catch @ 002f8ea2 */
                    /* try { // try from 002f8ea5 to 002f8f2b has its CatchHandler @ 002f8f34 */
  _ZN4core3ptr34drop_in_place_LT_ignore__Error_GT_17hba255aab589c455fE(&local_2f8);
  _ZN4core3ptr43drop_in_place_LT_fd__hyperlink__PathUrl_GT_17h2d976cf0ed371e6cE
            (local_358,uStack_350);
  _ZN4core3ptr46drop_in_place_LT_ignore__walk__WalkBuilder_GT_17he1d9bb4ee46bd15eE(&local_1a8);
                    /* WARNING: Subroutine does not return */
  _Unwind_Resume(uVar10);
}