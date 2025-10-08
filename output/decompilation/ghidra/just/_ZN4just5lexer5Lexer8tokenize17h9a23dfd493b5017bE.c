void _ZN4just5lexer5Lexer8tokenize17h9a23dfd493b5017bE(undefined4 *param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  long *plVar9;
  long *plVar10;
  undefined **ppuVar11;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  char cStack_d0;
  undefined7 uStack_cf;
  long local_c8;
  long local_c0;
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
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  
  while( true ) {
    if (param_2[0x15] == 0) {
      _ZN4just5lexer5Lexer14lex_line_start17hecba8e7aed370233E(&local_118,param_2);
      if (cStack_d0 != '%') goto LAB_00371022;
    }
    if (*(int *)(param_2 + 0x18) == 0x110000) break;
    lVar3 = param_2[5];
    if (lVar3 == 0) {
      if (*(char *)((long)param_2 + 0xc4) == '\0') {
        _ZN4just5lexer5Lexer10lex_normal17he65c979350d5db4aE
                  (&local_118,param_2,*(int *)(param_2 + 0x18));
      }
      else {
        _ZN4just5lexer5Lexer8lex_body17h748dd23849ec297dE(&local_118,param_2);
      }
    }
    else {
      lVar2 = param_2[4];
      local_78 = *(undefined8 *)(lVar2 + -8 + lVar3 * 0x48);
      puVar1 = (undefined4 *)(lVar2 + -0x48 + lVar3 * 0x48);
      local_b8 = *puVar1;
      uStack_b4 = puVar1[1];
      uStack_b0 = puVar1[2];
      uStack_ac = puVar1[3];
      puVar1 = (undefined4 *)(lVar2 + -0x38 + lVar3 * 0x48);
      local_a8 = *puVar1;
      uStack_a4 = puVar1[1];
      uStack_a0 = puVar1[2];
      uStack_9c = puVar1[3];
      puVar1 = (undefined4 *)(lVar2 + -0x28 + lVar3 * 0x48);
      local_98 = *puVar1;
      uStack_94 = puVar1[1];
      uStack_90 = puVar1[2];
      uStack_8c = puVar1[3];
      puVar1 = (undefined4 *)(lVar2 + -0x18 + lVar3 * 0x48);
      local_88 = *puVar1;
      uStack_84 = puVar1[1];
      uStack_80 = puVar1[2];
      uStack_7c = puVar1[3];
                    /* try { // try from 00370f43 to 00370fb9 has its CatchHandler @ 0037115d */
      _ZN4just5lexer5Lexer17lex_interpolation17h29248a24ec5712d3E(&local_118,param_2,&local_b8);
    }
    if (cStack_d0 != '%') {
LAB_00371022:
      *(undefined8 *)(param_1 + 0x10) = local_d8;
      *(ulong *)(param_1 + 0x12) = CONCAT71(uStack_cf,cStack_d0);
      param_1[0xc] = local_e8;
      param_1[0xd] = uStack_e4;
      param_1[0xe] = uStack_e0;
      param_1[0xf] = uStack_dc;
      param_1[8] = local_f8;
      param_1[9] = uStack_f4;
      param_1[10] = uStack_f0;
      param_1[0xb] = uStack_ec;
      param_1[4] = local_108;
      param_1[5] = uStack_104;
      param_1[6] = uStack_100;
      param_1[7] = uStack_fc;
      *param_1 = (undefined4)local_118;
      param_1[1] = local_118._4_4_;
      param_1[2] = uStack_110;
      param_1[3] = uStack_10c;
      _ZN4core3ptr39drop_in_place_LT_just__lexer__Lexer_GT_17hbcbb29f641172e5cE(param_2);
      return;
    }
  }
  lVar3 = param_2[5];
  if (lVar3 == 0) {
    while( true ) {
      cVar8 = _ZN4just5lexer5Lexer8indented17haaa2823febf7562cE(param_2[1],param_2[2]);
      if (cVar8 == '\0') break;
                    /* try { // try from 00371070 to 00371084 has its CatchHandler @ 0037115b */
      _ZN4just5lexer5Lexer10lex_dedent17hd3d59812e389acd6E(param_2);
    }
                    /* try { // try from 00371089 to 00371158 has its CatchHandler @ 0037115f */
    _ZN4just5lexer5Lexer5token17h8b86862a20389d16E(param_2,0x13);
    plVar10 = param_2 + 0x17;
    if (param_2[0x17] == param_2[0x14]) {
      local_c8 = param_2[0x11];
      if (param_2[0x17] == local_c8) {
        local_c0 = param_2[2];
        if (local_c0 == 1) {
          *(undefined8 *)(param_1 + 4) = param_2[0xb];
          uVar5 = *(undefined4 *)((long)param_2 + 0x4c);
          uVar6 = *(undefined4 *)(param_2 + 10);
          uVar7 = *(undefined4 *)((long)param_2 + 0x54);
          *param_1 = *(undefined4 *)(param_2 + 9);
          param_1[1] = uVar5;
          param_1[2] = uVar6;
          param_1[3] = uVar7;
          *(undefined *)(param_1 + 0x12) = 0x25;
          _ZN4core3ptr141drop_in_place_LT_alloc__vec__Vec_LT_similar__algorithms__utils__UniqueItem_LT_similar__algorithms__utils__OffsetLookup_LT_u32_GT__GT__GT__GT_17h4d36ad61a40c2c34E
                    (*param_2,param_2[1]);
          _ZN4core3ptr60drop_in_place_LT_alloc__vec__Vec_LT_just__name__Name_GT__GT_17h3abfcfc45501c2a2E
                    (param_2[3],param_2[4]);
          _ZN4core3ptr141drop_in_place_LT_alloc__vec__Vec_LT_similar__algorithms__utils__UniqueItem_LT_similar__algorithms__utils__OffsetLookup_LT_u32_GT__GT__GT__GT_17h4d36ad61a40c2c34E
                    (param_2[6],param_2[7]);
          return;
        }
        ppuVar11 = &PTR_DAT_00530440;
        plVar9 = (long *)&DAT_00169270;
        plVar10 = &local_c0;
      }
      else {
        ppuVar11 = &PTR_DAT_00530428;
        plVar9 = &local_c8;
      }
    }
    else {
      plVar9 = param_2 + 0x14;
      ppuVar11 = &PTR_DAT_00530410;
    }
    local_118 = 0;
    (*(code *)PTR__ZN4core9panicking13assert_failed17h449f2a7fe5426575E_00566218)
              (0,plVar10,plVar9,&local_118,ppuVar11);
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  lVar2 = param_2[4];
  local_28 = *(undefined8 *)(lVar2 + -8 + lVar3 * 0x48);
  puVar1 = (undefined4 *)(lVar2 + -0x48 + lVar3 * 0x48);
  local_68 = *puVar1;
  uStack_64 = puVar1[1];
  uStack_60 = puVar1[2];
  uStack_5c = puVar1[3];
  puVar1 = (undefined4 *)(lVar2 + -0x38 + lVar3 * 0x48);
  local_58 = *puVar1;
  uStack_54 = puVar1[1];
  uStack_50 = puVar1[2];
  uStack_4c = puVar1[3];
  puVar1 = (undefined4 *)(lVar2 + -0x28 + lVar3 * 0x48);
  local_48 = *puVar1;
  uStack_44 = puVar1[1];
  uStack_40 = puVar1[2];
  uStack_3c = puVar1[3];
  puVar1 = (undefined4 *)(lVar2 + -0x18 + lVar3 * 0x48);
  local_38 = *puVar1;
  uStack_34 = puVar1[1];
  uStack_30 = puVar1[2];
  uStack_2c = puVar1[3];
                    /* try { // try from 00371012 to 00371021 has its CatchHandler @ 0037115f */
  _ZN4just5lexer5Lexer32unterminated_interpolation_error17h2170ba94c271abf2E(&local_118,&local_68);
  goto LAB_00371022;
}