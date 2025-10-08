void _ZN21ruff_python_formatter6string9docstring20DocstringLinePrinter6format17h14b7da932fffcf32E
               (ulong *param_1,long param_2,long *param_3)

{
  undefined uVar1;
  char cVar2;
  ushort uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 **ppuVar6;
  undefined8 uVar7;
  ushort uVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined4 *puVar14;
  long lVar15;
  long lVar16;
  short sVar17;
  ushort uVar18;
  long lVar19;
  undefined auVar20 [16];
  undefined4 local_1c0;
  undefined2 local_1bc;
  undefined4 local_1ba;
  undefined local_1b6;
  undefined local_1b5;
  undefined local_1b4;
  undefined2 local_1b3;
  undefined local_1b1;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  ulong local_1a0;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 *local_178;
  code *local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 **local_e8;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined local_68 [48];
  undefined2 local_38;
  
  puVar4 = *(undefined8 **)(param_2 + 0x88);
  lVar10 = _ZN14ruff_formatter9formatter24Formatter_LT_Context_GT_7options17he55f9fce45a2dc4aE
                     (*puVar4,puVar4[1]);
  uVar9 = (uint)*(ushort *)(lVar10 + 2);
  if (*(ushort *)(lVar10 + 2) == 0) {
    lVar10 = _ZN14ruff_formatter9formatter24Formatter_LT_Context_GT_7options17he55f9fce45a2dc4aE
                       (*puVar4,puVar4[1]);
    uVar3 = *(ushort *)(lVar10 + 4);
    lVar10 = _ZN14ruff_formatter9formatter24Formatter_LT_Context_GT_7options17he55f9fce45a2dc4aE
                       (*puVar4,puVar4[1]);
    uVar1 = *(undefined *)(lVar10 + 6);
    lVar10 = (**(code **)(puVar4[1] + 0x30))(*puVar4);
    uVar8 = _ZN21ruff_python_formatter7context11IndentLevel15to_ascii_spaces17h17245e80483057f0E
                      (*(undefined4 *)(lVar10 + 0x28),uVar1);
    uVar18 = uVar8;
    if (*param_3 == -0x8000000000000000) {
      uVar18 = 0xffff;
      if (uVar8 < 0xfffc) {
        uVar18 = uVar8 + 4;
      }
    }
    _ZN21ruff_python_formatter6string9docstring15CodeExampleKind6indent17hefc35518797d9953E
              (&local_168,param_3);
    uVar11 = _ZN21ruff_python_formatter6string9docstring11Indentation7columns17h9e266497152669caE
                       (&local_168);
    uVar12 = _ZN21ruff_python_formatter6string9docstring11Indentation7columns17h9e266497152669caE
                       (param_2 + 0x70);
    uVar13 = 0;
    if (uVar12 <= uVar11) {
      uVar13 = uVar11 - uVar12;
    }
    uVar11 = 0xffff;
    if (uVar13 < 0xffff) {
      uVar11 = uVar13;
    }
    uVar8 = 0xffff;
    if (!CARRY2((ushort)uVar11,uVar18)) {
      uVar8 = (ushort)uVar11 + uVar18;
    }
    sVar17 = uVar3 - uVar8;
    if (uVar3 < uVar8) {
      sVar17 = 0;
    }
    uVar9 = _ZN4core3cmp3Ord3max17h3b2f6553bef24c8cE(sVar17);
    _ZN4core6result19Result_LT_T_C_E_GT_6expect17h237c85128dfd4736E(uVar9);
  }
  auVar20 = _ZN21ruff_python_formatter6string9docstring15CodeExampleKind4code17h9330386394a94940E
                      (param_3);
  lVar16 = auVar20._8_8_;
  lVar15 = auVar20._0_8_;
  lVar10 = lVar15;
  if (lVar16 == 0) {
    lVar10 = 0;
  }
  lVar19 = lVar15 + -0x38 + lVar16 * 0x38;
  if (lVar16 == 0) {
    lVar19 = 0;
  }
  if (lVar19 == 0 || lVar10 == 0) {
    param_1[1] = 0x8000000000000000;
    *param_1 = 0;
  }
  else {
    _ZN4core4iter6traits8iterator8Iterator7collect17h2ab73ba370af25e5E
              (&local_d8,lVar15,lVar16 * 0x38 + lVar15);
    uVar5 = CONCAT44(uStack_cc,uStack_d0);
                    /* try { // try from 00424130 to 0042413c has its CatchHandler @ 004244fb */
    _ZN5alloc3str17join_generic_copy17h4f8d2b32aad8ce9fE
              (&local_168,uVar5,CONCAT44(uStack_c4,local_c8));
    local_e8 = local_158;
    local_f8 = (undefined4)local_168;
    uStack_f4 = local_168._4_4_;
    uStack_f0 = (undefined4)uStack_160;
    uStack_ec = uStack_160._4_4_;
    _ZN4core3ptr51drop_in_place_LT_alloc__vec__Vec_LT__RF_str_GT__GT_17hd7dae555c39c42abE
              (CONCAT44(uStack_d4,local_d8),uVar5);
                    /* try { // try from 0042416e to 004241d4 has its CatchHandler @ 00424545 */
    puVar14 = (undefined4 *)
              _ZN14ruff_formatter9formatter24Formatter_LT_Context_GT_7options17he55f9fce45a2dc4aE
                        (*puVar4,puVar4[1]);
    local_1c0 = *puVar14;
    local_1ba = *(undefined4 *)((long)puVar14 + 6);
    local_1b5 = *(undefined *)((long)puVar14 + 0xb);
    local_1b1 = *(undefined *)((long)puVar14 + 0xf);
    local_1b3 = *(undefined2 *)((long)puVar14 + 0xd);
    local_1bc = (undefined2)uVar9;
    local_1b6 = 1;
    local_1b4 = 0;
    cVar2 = *(char *)(param_2 + 0x95);
    _ZN21ruff_python_formatter6string9docstring23docstring_format_source17h1715dbe38d8ea1a7E
              (&local_168,&local_1c0,cVar2,CONCAT44(uStack_ec,uStack_f0),local_e8);
    ppuVar6 = local_158;
    uVar5 = uStack_160;
    if (local_168 == (undefined **)0x8000000000000000) {
      if ((char)uStack_160 != ')') {
        param_1[1] = 0x8000000000000000;
      }
      else {
        param_1[3] = local_148;
        *(undefined4 *)(param_1 + 1) = (undefined4)local_158;
        *(undefined4 *)((long)param_1 + 0xc) = local_158._4_4_;
        *(undefined4 *)(param_1 + 2) = (undefined4)uStack_150;
        *(undefined4 *)((long)param_1 + 0x14) = uStack_150._4_4_;
      }
      *param_1 = (ulong)((char)uStack_160 == ')');
      _ZN4core3ptr115drop_in_place_LT_core__result__Result_LT_ruff_formatter__Printed_C_ruff_python_formatter__FormatModuleError_GT__GT_17h1cf06ffe18cb5342E
                (&local_168);
    }
    else {
      local_88 = local_118;
      local_98 = local_128;
      uStack_90 = uStack_120;
      local_a8 = local_138;
      uStack_a4 = uStack_134;
      uStack_a0 = uStack_130;
      uStack_9c = uStack_12c;
      local_b8 = (undefined4)local_148;
      uStack_b4 = local_148._4_4_;
      uStack_b0 = uStack_140;
      uStack_ac = uStack_13c;
      local_c8 = (undefined4)local_158;
      uStack_c4 = local_158._4_4_;
      uStack_c0 = (undefined4)uStack_150;
      uStack_bc = uStack_150._4_4_;
      local_d8 = (undefined4)local_168;
      uStack_d4 = local_168._4_4_;
      uStack_d0 = (undefined4)uStack_160;
      uStack_cc = uStack_160._4_4_;
      if (cVar2 == '\0') {
        local_1b0 = uStack_160;
        uStack_1a8 = local_158;
        local_178 = &local_1b0;
        local_170 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hdb2fd416f06f629cE;
        local_168 = &PTR_s_____0067f148;
        uStack_160 = 2;
        local_148 = 0;
        local_158 = &local_178;
        uStack_150 = 1;
        _ZN4core6option15Option_LT_T_GT_11map_or_else17h9c3ecc8c56a3befdE(&local_80,&local_168);
      }
      else {
        local_1b0 = uStack_160;
        uStack_1a8 = local_158;
        local_178 = &local_1b0;
        local_170 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hdb2fd416f06f629cE;
        local_168 = &PTR_s_____0067f168;
        uStack_160 = 2;
        local_148 = 0;
        local_158 = &local_178;
        uStack_150 = 1;
                    /* try { // try from 004242de to 00424381 has its CatchHandler @ 004244f6 */
        _ZN4core6option15Option_LT_T_GT_11map_or_else17h9c3ecc8c56a3befdE(&local_80,&local_168);
      }
      uVar7 = uStack_78;
      local_198 = (undefined4)local_80;
      uStack_194 = local_80._4_4_;
      uStack_190 = (undefined4)uStack_78;
      uStack_18c = uStack_78._4_4_;
      local_188 = local_70;
      local_180 = uVar5;
                    /* try { // try from 004243b2 to 00424403 has its CatchHandler @ 00424516 */
      lVar15 = _ZN14ruff_formatter9formatter24Formatter_LT_Context_GT_7options17he55f9fce45a2dc4aE
                         (*puVar4,puVar4[1]);
      (*(code *)PTR__ZN18ruff_python_parser5parse17h7a366e13514d0cfaE_006bdb68)
                (&local_168,uVar7,local_70,(uint)(1 < *(byte *)(lVar15 + 7)) * 3 + 0x90300);
      if (local_168 == (undefined **)0x8000000000000000) {
        param_1[1] = 0x8000000000000000;
        *param_1 = 0;
        _ZN4core3ptr154drop_in_place_LT_core__result__Result_LT_ruff_python_parser__Parsed_LT_ruff_python_ast__generated__Mod_GT__C_ruff_python_parser__error__ParseError_GT__GT_17h80e3e5096fa422bbE
                  (&local_168);
      }
      else {
        _ZN52__LT_char_u20_as_u20_core__str__pattern__Pattern_GT_13into_searcher17h19abee4db16fb58dE
                  (local_68,10,local_180,ppuVar6);
        uStack_78 = 0;
        local_38 = 0;
                    /* try { // try from 00424449 to 0042445a has its CatchHandler @ 004244e1 */
        local_80 = lVar10;
        _ZN4core4iter6traits8iterator8Iterator7collect17hac61881637a69526E(&local_1b0,&local_80);
        if (uStack_1a8 + local_1a0 * 4 != (undefined8 **)&DAT_00000020 && local_1a0 != 0) {
          *(bool *)((long)(uStack_1a8 + local_1a0 * 4) + -4) = *(long *)(lVar19 + 0x10) == 0;
        }
        param_1[3] = local_1a0;
        *(undefined4 *)(param_1 + 1) = (undefined4)local_1b0;
        *(undefined4 *)((long)param_1 + 0xc) = local_1b0._4_4_;
        *(undefined4 *)(param_1 + 2) = (undefined4)uStack_1a8;
        *(undefined4 *)((long)param_1 + 0x14) = uStack_1a8._4_4_;
        *param_1 = 0;
                    /* try { // try from 004244a1 to 004244aa has its CatchHandler @ 00424516 */
        _ZN4core3ptr154drop_in_place_LT_core__result__Result_LT_ruff_python_parser__Parsed_LT_ruff_python_ast__generated__Mod_GT__C_ruff_python_parser__error__ParseError_GT__GT_17h80e3e5096fa422bbE
                  (&local_168);
      }
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hdec1f9eb81adb7adE(&local_198);
      _ZN4core3ptr44drop_in_place_LT_ruff_formatter__Printed_GT_17h2ca1bd91910370f1E(&local_d8);
    }
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hdec1f9eb81adb7adE(&local_f8);
  }
  return;
}