undefined8 *
_ZN3bat7printer18InteractivePrinter3new17h3075e4c9ed50f526E
          (undefined8 *param_1,long param_2,undefined8 param_3,long param_4,long *param_5)

{
  undefined uVar1;
  char cVar2;
  undefined uVar3;
  undefined4 uVar4;
  ulong uVar5;
  code *pcVar6;
  undefined *puVar7;
  long lVar8;
  char cVar9;
  byte bVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  byte bVar14;
  long lVar15;
  undefined8 local_480;
  undefined8 uStack_478;
  long local_470;
  long local_468;
  long *local_460;
  long local_458;
  long local_450;
  undefined8 local_448;
  undefined8 local_440;
  undefined uStack_438;
  undefined4 uStack_437;
  undefined4 uStack_433;
  undefined3 uStack_42f;
  undefined4 uStack_42c;
  undefined uStack_428;
  undefined uStack_427;
  undefined2 uStack_426;
  undefined2 uStack_424;
  undefined2 uStack_422;
  undefined2 local_420;
  undefined2 uStack_41e;
  undefined4 uStack_41c;
  undefined2 uStack_418;
  undefined uStack_416;
  undefined4 uStack_415;
  undefined4 uStack_411;
  undefined uStack_40d;
  undefined4 uStack_40c;
  undefined4 uStack_408;
  undefined4 uStack_404;
  undefined4 local_400;
  undefined4 uStack_3fc;
  undefined4 uStack_3f8;
  undefined4 uStack_3f4;
  undefined5 uStack_3f0;
  undefined3 uStack_3eb;
  undefined5 uStack_3e8;
  undefined uStack_3e3;
  undefined2 uStack_3e2;
  undefined6 local_3e0;
  undefined2 uStack_3da;
  undefined6 uStack_3d8;
  undefined uStack_3d2;
  undefined uStack_3d1;
  undefined7 uStack_3d0;
  uint local_3c8;
  undefined4 uStack_3c4;
  undefined4 uStack_3c0;
  undefined4 uStack_3bc;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined8 local_388;
  undefined8 uStack_380;
  undefined4 local_378;
  undefined4 uStack_374;
  undefined4 local_370;
  undefined4 uStack_36c;
  undefined4 uStack_368;
  undefined4 uStack_364;
  undefined8 local_360;
  undefined8 uStack_358;
  undefined4 local_350;
  undefined4 uStack_34c;
  undefined4 uStack_348;
  undefined4 uStack_344;
  undefined4 local_340;
  undefined4 uStack_33c;
  undefined4 uStack_338;
  undefined4 uStack_334;
  undefined8 local_330;
  undefined local_2a0 [208];
  undefined local_1d0 [208];
  undefined local_100 [208];
  
  local_460 = param_5;
  local_458 = param_4;
  local_448 = param_3;
  local_450 = (*(code *)
                PTR__ZN3bat6assets18HighlightingAssets9get_theme17h5c1f06a82dc91560E_008087d8)
                        (param_3,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x20));
  uVar4 = *(undefined4 *)(local_450 + 0x87);
  uVar1 = *(undefined *)(local_450 + 0x8b);
  cVar2 = *(char *)(param_2 + 0x124);
  if (cVar2 == '\0') {
    uStack_438 = 0;
    local_440 = 0;
    uStack_437 = 0x15;
    uStack_433 = 0x15;
    uStack_42f = 0;
    uStack_42c = 0;
    uStack_428 = 0;
    uStack_427 = 0;
    uStack_426 = 0x15;
    uStack_424 = 0;
    uStack_422 = 0x15;
    local_420 = 0;
    uStack_41e = 0;
    uStack_41c = 0;
    uStack_418 = 0;
    uStack_416 = 0;
    uStack_415 = 0x15;
    uStack_411 = 0x15;
    uStack_40d = 0;
    uStack_40c = 0;
    uStack_408 = 0;
    uStack_404 = 0x15;
    local_400 = 0x15;
    uStack_3fc = 0;
    uStack_3f8 = 0;
    uStack_3f4 = 0x1500;
    uStack_3f0 = 0x1500;
    uStack_3e3 = 0;
    uStack_3eb = 0;
    uStack_3e8 = 0;
    uStack_3e2 = 0x15;
    local_3e0 = 0x150000;
    uStack_3d2 = 0;
    uStack_3da = 0;
    uStack_3d8 = 0;
    uStack_3d1 = 0x15;
    uStack_3d0 = 0x15000000;
  }
  else {
    _ZN3bat7printer6Colors7colored17hac989d8705686777E
              (&local_440,*(undefined *)(local_450 + 0xc3),*(undefined4 *)(local_450 + 0xc4),
               *(undefined *)(param_2 + 0x125));
  }
  local_480 = 0;
  uStack_478 = 8;
  local_470 = 0;
  lVar15 = param_2 + 0xc0;
                    /* try { // try from 0053e917 to 0053eafe has its CatchHandler @ 0053ee90 */
  cVar9 = (*(code *)PTR__ZN3bat5style15StyleComponents7numbers17hd95db025221482f6E_008088d8)(lVar15)
  ;
  if (cVar9 != '\0') {
    _ZN3bat11decorations20LineNumberDecoration3new17h91e05e55b8444121E(&local_378,&local_440);
    uVar11 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h404e1e55b959629dE(&local_378);
    _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h3ec16cff95f86bb3E
              (&local_480,uVar11,
               &
               PTR__ZN4core3ptr59drop_in_place_LT_bat__decorations__LineNumberDecoration_GT_17hccd72d20652400b0E_007ce9a8
               ,&PTR_DAT_007ce9d0);
  }
  cVar9 = (*(code *)PTR__ZN3bat5style15StyleComponents7changes17h3017c14c66493a5aE_00808810)(lVar15)
  ;
  if (((cVar9 != '\0') && (*local_460 != 0)) && (local_460[3] != 0)) {
    _ZN3bat11decorations21LineChangesDecoration3new17h2e041c340bcaeec9E(&local_378,&local_440);
    uVar11 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h809e75c5c2ec5fc4E(&local_378);
    _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h3ec16cff95f86bb3E
              (&local_480,uVar11,
               &
               PTR__ZN4core3ptr60drop_in_place_LT_bat__decorations__LineChangesDecoration_GT_17h1dd13e21e4d38dc0E_007ce9e8
               ,&PTR_DAT_007cea10);
  }
  lVar8 = local_470;
  lVar13 = uStack_478;
  local_468 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4fold17hc045af51393dd037E
                        (uStack_478,local_470 * 0x10 + uStack_478);
  bVar10 = (*(code *)PTR__ZN3bat5style15StyleComponents4grid17h47e585e5c9942068E_00807a40)(lVar15);
  lVar15 = lVar8;
  if ((lVar8 != 0 & bVar10) != 0) {
    _ZN3bat11decorations20GridBorderDecoration3new17he0ecf464758163b8E(&local_378,&local_440);
    uVar11 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h909a6225a6060f20E(&local_378);
    _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h3ec16cff95f86bb3E
              (&local_480,uVar11,
               &
               PTR__ZN4core3ptr59drop_in_place_LT_bat__decorations__GridBorderDecoration_GT_17h8c939fc2db6c805bE_007cea28
              );
    lVar13 = uStack_478;
    lVar15 = local_470;
  }
  uVar5 = *(ulong *)(param_2 + 0x100);
  lVar12 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4fold17hc045af51393dd037E
                     (lVar13,lVar15 * 0x10 + lVar13);
  if (uVar5 < lVar12 + lVar15 + 5U) {
    local_470 = 0;
    _ZN4core3ptr164drop_in_place_LT__u5b_alloc__boxed__Box_LT_dyn_u20_core__ops__function__FnOnce_LT__LP__RP__GT__u2b_Output_u20__u3d__u20__LP__RP__u2b_core__marker__Send_GT__u5d__GT_17he936ba3f695f725eE
              (lVar13,lVar15);
    cVar9 = *(char *)(local_458 + 0x50);
    local_468 = 0;
  }
  else {
    local_468 = local_468 + lVar8;
    cVar9 = *(char *)(local_458 + 0x50);
  }
  if (((cVar9 == '\0') && (*(char *)(param_2 + 0x120) == '\0')) &&
     (*(char *)(param_2 + 0x122) == '\0')) {
    bVar10 = 1;
    lVar15 = -0x8000000000000000;
LAB_0053ed0c:
    puVar7 = PTR_memcpy_008074c0;
    (*(code *)PTR_memcpy_008074c0)(local_1d0,local_2a0,0xd0);
    if (*(byte *)(param_2 + 299) < 2) {
      bVar10 = *(byte *)(param_2 + 299);
    }
    bVar14 = 0;
    if (*(char *)(param_2 + 0x120) == '\0') {
      bVar14 = bVar10;
    }
    *(ulong *)((long)param_1 + 0x28f) = CONCAT71(uStack_3d0,uStack_3d1);
    param_1[0x50] = CONCAT26(uStack_3da,local_3e0);
    param_1[0x51] = CONCAT17(uStack_3d1,CONCAT16(uStack_3d2,uStack_3d8));
    param_1[0x4e] = CONCAT35(uStack_3eb,uStack_3f0);
    param_1[0x4f] = CONCAT26(uStack_3e2,CONCAT15(uStack_3e3,uStack_3e8));
    param_1[0x4c] = CONCAT44(uStack_3fc,local_400);
    param_1[0x4d] = CONCAT44(uStack_3f4,uStack_3f8);
    *(uint *)(param_1 + 0x4a) = CONCAT13(uStack_40d,uStack_411._1_3_);
    *(undefined4 *)((long)param_1 + 0x254) = uStack_40c;
    *(undefined4 *)(param_1 + 0x4b) = uStack_408;
    *(undefined4 *)((long)param_1 + 0x25c) = uStack_404;
    *(uint *)(param_1 + 0x48) = CONCAT22(uStack_41e,local_420);
    *(undefined4 *)((long)param_1 + 0x244) = uStack_41c;
    *(uint *)(param_1 + 0x49) = CONCAT13((undefined)uStack_415,CONCAT12(uStack_416,uStack_418));
    *(uint *)((long)param_1 + 0x24c) = CONCAT13((undefined)uStack_411,uStack_415._1_3_);
    *(uint *)(param_1 + 0x46) = CONCAT31(uStack_42f,uStack_433._3_1_);
    *(undefined4 *)((long)param_1 + 0x234) = uStack_42c;
    *(uint *)(param_1 + 0x47) = CONCAT22(uStack_426,CONCAT11(uStack_427,uStack_428));
    *(uint *)((long)param_1 + 0x23c) = CONCAT22(uStack_422,uStack_424);
    param_1[0x44] = local_440;
    param_1[0x45] = CONCAT35((undefined3)uStack_433,CONCAT41(uStack_437,uStack_438));
    *(undefined4 *)param_1 = (undefined4)local_480;
    *(undefined4 *)((long)param_1 + 4) = local_480._4_4_;
    *(undefined4 *)(param_1 + 1) = (undefined4)uStack_478;
    *(undefined4 *)((long)param_1 + 0xc) = uStack_478._4_4_;
    param_1[2] = local_470;
    uVar3 = *(undefined *)(local_458 + 0x50);
    (*(code *)puVar7)(param_1 + 0x26,local_1d0,0xd0);
    *(undefined4 *)((long)param_1 + 0x297) = uVar4;
    *(undefined *)((long)param_1 + 0x29b) = uVar1;
    param_1[3] = 0x8000000000000000;
    param_1[0x25] = lVar15;
    param_1[0x40] = param_2;
    param_1[0x41] = local_460;
    param_1[0x42] = local_468;
    param_1[0x43] = 0;
    *(byte *)((long)param_1 + 0x29c) = bVar14;
    *(undefined *)((long)param_1 + 0x29d) = uVar3;
    return param_1;
  }
  if (cVar2 == '\0') {
    bVar10 = 1;
    lVar15 = -0x8000000000000000;
    if (*(char *)(param_2 + 299) != '\x02') goto LAB_0053ed0c;
  }
  _ZN3bat6assets18HighlightingAssets10get_syntax17hae1062e96f01c264E
            (&local_3c8,local_448,*(undefined8 *)(param_2 + 0xf0),*(undefined8 *)(param_2 + 0xf8),
             local_458,param_2 + 0x28);
  if ((local_3c8 & 0xff) == 7) {
                    /* try { // try from 0053eb85 to 0053ebd1 has its CatchHandler @ 0053ee7e */
    _ZN3bat6assets18HighlightingAssets19find_syntax_by_name17h9f91e66c04b2ba0bE
              (&local_378,local_448);
    if ((char)local_378 == '\r') {
      if (CONCAT44(uStack_36c,local_370) != 0) {
        _ZN3bat7printer18HighlighterFromSet3new17h24cc5523206a1ef3E
                  (&local_378,CONCAT44(uStack_36c,local_370),CONCAT44(uStack_364,uStack_368),
                   local_450);
        lVar15 = CONCAT44(uStack_374,local_378);
        (*(code *)PTR_memcpy_008074c0)(local_100,&local_370,0xd0);
        if (lVar15 != -0x8000000000000000) {
          (*(code *)PTR_memcpy_008074c0)(local_2a0,local_100,0xd0);
                    /* try { // try from 0053ec23 to 0053ecef has its CatchHandler @ 0053ee90 */
          _ZN4core3ptr38drop_in_place_LT_bat__error__Error_GT_17head773e43869367fE(&local_3c8);
          bVar10 = 0;
          goto LAB_0053ed0c;
        }
      }
                    /* try { // try from 0053ee61 to 0053ee79 has its CatchHandler @ 0053ee7e */
      (*(code *)PTR__ZN4core6option13expect_failed17h3f620cfb8545dc61E_00807550)
                (&DAT_00185c00,0x20,&PTR_DAT_007cea68);
                    /* WARNING: Does not return */
      pcVar6 = (code *)invalidInstructionException();
      (*pcVar6)();
    }
    *(undefined4 *)((long)param_1 + 0xc) = uStack_374;
    *(uint *)((long)param_1 + 9) = CONCAT13((undefined)uStack_374,local_378._1_3_);
    param_1[4] = local_360;
    param_1[5] = uStack_358;
    *(undefined4 *)(param_1 + 6) = local_350;
    *(undefined4 *)((long)param_1 + 0x34) = uStack_34c;
    *(undefined4 *)(param_1 + 7) = uStack_348;
    *(undefined4 *)((long)param_1 + 0x3c) = uStack_344;
    *(undefined4 *)(param_1 + 8) = local_340;
    *(undefined4 *)((long)param_1 + 0x44) = uStack_33c;
    *(undefined4 *)(param_1 + 9) = uStack_338;
    *(undefined4 *)((long)param_1 + 0x4c) = uStack_334;
    param_1[10] = local_330;
    *(char *)(param_1 + 1) = (char)local_378;
    *(undefined4 *)(param_1 + 2) = local_370;
    *(undefined4 *)((long)param_1 + 0x14) = uStack_36c;
    *(undefined4 *)(param_1 + 3) = uStack_368;
    *(undefined4 *)((long)param_1 + 0x1c) = uStack_364;
    *param_1 = 0x8000000000000000;
    _ZN4core3ptr38drop_in_place_LT_bat__error__Error_GT_17head773e43869367fE(&local_3c8);
  }
  else {
    if ((local_3c8 & 0xff) == 0xd) {
      lVar15 = CONCAT44(uStack_3bc,uStack_3c0);
      bVar10 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17he1ce7ac76dd9ec5eE
                         (*(undefined8 *)(lVar15 + 8),*(undefined8 *)(lVar15 + 0x10),&DAT_002a2cc6,
                          10);
                    /* try { // try from 0053eb41 to 0053eb58 has its CatchHandler @ 0053ee7c */
      _ZN3bat7printer18HighlighterFromSet3new17h24cc5523206a1ef3E
                (&local_378,lVar15,local_3b8,local_450);
      lVar15 = CONCAT44(uStack_374,local_378);
      (*(code *)PTR_memcpy_008074c0)(local_2a0,&local_370,0xd0);
      bVar10 = bVar10 ^ 1;
      goto LAB_0053ed0c;
    }
    param_1[9] = local_388;
    param_1[10] = uStack_380;
    param_1[7] = local_398;
    param_1[8] = uStack_390;
    param_1[5] = local_3a8;
    param_1[6] = uStack_3a0;
    param_1[3] = local_3b8;
    param_1[4] = uStack_3b0;
    *(uint *)(param_1 + 1) = local_3c8;
    *(undefined4 *)((long)param_1 + 0xc) = uStack_3c4;
    *(undefined4 *)(param_1 + 2) = uStack_3c0;
    *(undefined4 *)((long)param_1 + 0x14) = uStack_3bc;
    *param_1 = 0x8000000000000000;
  }
  _ZN4core3ptr105drop_in_place_LT_alloc__vec__Vec_LT_alloc__boxed__Box_LT_dyn_u20_bat__decorations__Decoration_GT__GT__GT_17h5821c9215c5ad6e2E
            (&local_480);
  return param_1;
}