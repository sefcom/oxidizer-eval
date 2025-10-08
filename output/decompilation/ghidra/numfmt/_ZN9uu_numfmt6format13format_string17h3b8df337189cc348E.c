void _ZN9uu_numfmt6format13format_string17h3b8df337189cc348E
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,byte *param_4,
               ulong param_5,ulong param_6)

{
  long lVar1;
  code *pcVar2;
  undefined auVar3 [16];
  byte *pbVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  ulong uVar7;
  byte bVar8;
  ulong uVar9;
  undefined auVar10 [16];
  undefined **local_158;
  code *local_150;
  byte ***pppbStack_148;
  code *local_140;
  byte *pbStack_138;
  code *local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  byte **local_108;
  code *local_100;
  byte **local_f8;
  code *local_f0;
  undefined8 local_e8;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  byte *local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  ulong local_80;
  ulong local_78;
  long local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  auVar3._8_8_ = param_3;
  auVar3._0_8_ = param_2;
  lVar1 = *(long *)(param_4 + 0x88);
  local_80 = param_5;
  local_78 = param_6;
  auVar10 = _ZN55__LT__RF_str_u20_as_u20_core__str__pattern__Pattern_GT_15strip_suffix_of17ha48df28aef4c1d38E
                      (*(undefined8 *)(param_4 + 0x90),*(undefined8 *)(param_4 + 0x98),param_2,
                       param_3);
  if (auVar10._0_8_ != 0) {
    auVar3 = auVar10;
  }
  local_70 = lVar1;
  if (*(int *)(param_4 + 0x10) == 1) {
    uVar5 = *(undefined8 *)(param_4 + 0x18);
    bVar8 = param_4[0xb0];
  }
  else {
    bVar8 = param_4[0xb0];
    if ((bVar8 == 5) && (bVar8 = 5, param_4[0xb1] == 5)) {
      uVar5 = _ZN9uu_numfmt6format24parse_implicit_precision17hb5d21ae12bf7afedE
                        (auVar3._0_8_,auVar3._8_8_);
    }
    else {
      uVar5 = 0;
    }
  }
  _ZN9uu_numfmt6format14transform_from17hcd3fb358ec05b121E
            (&local_108,auVar3._0_8_,auVar3._8_8_,*(undefined8 *)(param_4 + 0xa0),bVar8);
  if (local_108 != (byte **)&DAT_8000000000000000) {
    param_1[1] = local_108;
    param_1[2] = local_100;
    param_1[3] = local_f8;
LAB_0016a6b7:
    *param_1 = 1;
    return;
  }
  _ZN9uu_numfmt6format12transform_to17he005deddceb3df89E
            (&local_158,*(undefined8 *)(param_4 + 0xa8),param_4[0xb1],param_4[0xca],uVar5);
  lVar1 = local_70;
  local_128 = (byte *)local_150;
  pbVar4 = local_128;
  uStack_120 = pppbStack_148;
  uVar5 = uStack_120;
  local_118 = local_140;
  if ((int)local_158 == 1) {
    param_1[3] = local_140;
    param_1[1] = local_150;
    param_1[2] = pppbStack_148;
    goto LAB_0016a6b7;
  }
  local_58 = local_140;
  local_128._0_4_ = SUB84(local_150,0);
  local_128._4_4_ = (undefined4)((ulong)local_150 >> 0x20);
  uStack_120._0_4_ = SUB84(pppbStack_148,0);
  uStack_120._4_4_ = (undefined4)((ulong)pppbStack_148 >> 0x20);
  local_68 = (undefined4)local_128;
  uStack_64 = local_128._4_4_;
  uStack_60 = (undefined4)uStack_120;
  uStack_5c = uStack_120._4_4_;
  local_128 = pbVar4;
  uStack_120 = uVar5;
  if (local_70 == -0x8000000000000000) {
    local_a8 = local_140;
    local_b8 = (undefined4)local_128;
    uStack_b4 = local_128._4_4_;
    uStack_b0 = (undefined4)uStack_120;
    uStack_ac = uStack_120._4_4_;
    if ((*param_4 & 1) != 0) goto LAB_0016a729;
LAB_0016a7dc:
    uVar7 = local_78;
    if ((local_80 & 1) == 0) {
      uVar7 = *(ulong *)(param_4 + 0xb8);
    }
  }
  else {
    local_98 = param_4 + 0x88;
    local_108 = (byte **)&local_68;
    local_100 = 
    _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
    local_f8 = &local_98;
    local_f0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hed06e343d9a3976cE;
    local_158 = (undefined **)&DAT_001195a0;
    local_150 = (code *)0x2;
    pbStack_138 = (byte *)0x0;
    pppbStack_148 = &local_108;
    local_140 = (code *)0x2;
                    /* try { // try from 0016a7a3 to 0016a7af has its CatchHandler @ 0016acd5 */
    _ZN4core6option15Option_LT_T_GT_11map_or_else17h6181b64f68c0f373E(&local_128,&local_158);
    local_b8 = (undefined4)local_128;
    uStack_b4 = local_128._4_4_;
    uStack_b0 = (undefined4)uStack_120;
    uStack_ac = uStack_120._4_4_;
    local_a8 = local_118;
    if ((*param_4 & 1) == 0) goto LAB_0016a7dc;
LAB_0016a729:
    uVar7 = *(ulong *)(param_4 + 8);
  }
  uVar9 = local_78;
  local_118 = local_a8;
  if (uVar7 == 0) {
    local_c8 = local_a8;
    local_d8 = local_b8;
    uStack_d4 = uStack_b4;
    uStack_d0 = uStack_b0;
    uStack_cc = uStack_ac;
    goto LAB_0016ab7c;
  }
  if ((long)uVar7 < 1) {
    if (-uVar7 < 0xffff || uVar7 == 0xffffffffffff0001) {
      local_108 = (byte **)&local_b8;
      local_100 = 
      _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
      local_f8 = (byte **)0x0;
      local_f0 = (code *)CONCAT62(local_f0._2_6_,(short)-uVar7);
      local_158 = (undefined **)&DAT_001198c0;
      local_150 = (code *)0x1;
      pbStack_138 = &DAT_0011acd8;
      local_130 = (code *)0x1;
      pppbStack_148 = &local_108;
      local_140 = (code *)0x2;
                    /* try { // try from 0016a9e5 to 0016aa71 has its CatchHandler @ 0016ad16 */
      _ZN4core6option15Option_LT_T_GT_11map_or_else17h6181b64f68c0f373E(&local_128,&local_158);
LAB_0016aa72:
      local_d8 = (undefined4)local_128;
      uStack_d4 = local_128._4_4_;
      uStack_d0 = (undefined4)uStack_120;
      uStack_cc = uStack_120._4_4_;
      local_c8 = local_118;
      goto LAB_0016ab7c;
    }
    ppuVar6 = &PTR_s_src_uu_numfmt_src_format_rs_002024a0;
  }
  else if (param_4[0x51] == 1) {
    if (uVar7 < 0x10000) {
      local_108 = (byte **)&local_b8;
      local_100 = 
      _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
      local_f8 = (byte **)0x0;
      local_f0 = (code *)CONCAT62(local_f0._2_6_,(short)uVar7);
      local_158 = (undefined **)&DAT_001198c0;
      local_150 = (code *)0x1;
      pbStack_138 = &DAT_0011ad38;
      local_130 = (code *)0x1;
      pppbStack_148 = &local_108;
      local_140 = (code *)0x2;
                    /* try { // try from 0016a87e to 0016a88d has its CatchHandler @ 0016ad16 */
      _ZN4core6option15Option_LT_T_GT_11map_or_else17h6181b64f68c0f373E(&local_128,&local_158);
      local_d8 = SUB84(local_128,0);
      local_98 = local_128;
      uStack_90 = (undefined4)uStack_120;
      uStack_8c = uStack_120._4_4_;
      local_88 = local_118;
      if ((local_80 & 1) == 0) {
        uVar9 = *(ulong *)(param_4 + 0xb8);
      }
      if (uVar9 == 0) {
        local_c8 = local_118;
        uStack_d4 = local_128._4_4_;
        uStack_d0 = (undefined4)uStack_120;
        uStack_cc = uStack_120._4_4_;
        goto LAB_0016ab7c;
      }
      if ((long)uVar9 < 1) {
        if (0xfffe < -uVar9 && uVar9 != 0xffffffffffff0001) {
          ppuVar6 = &PTR_s_src_uu_numfmt_src_format_rs_002024d0;
          goto LAB_0016aca0;
        }
        local_108 = &local_98;
        local_100 = 
        _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
        local_f8 = (byte **)0x0;
        local_f0 = (code *)CONCAT62(local_f0._2_6_,(short)-uVar9);
        local_158 = (undefined **)&DAT_001198c0;
        local_150 = (code *)0x1;
        pbStack_138 = &DAT_0011acd8;
        local_130 = (code *)0x1;
        pppbStack_148 = &local_108;
        local_140 = (code *)0x2;
                    /* try { // try from 0016ab3e to 0016ab4a has its CatchHandler @ 0016ad04 */
        _ZN4core6option15Option_LT_T_GT_11map_or_else17h6181b64f68c0f373E(&local_128,&local_158);
      }
      else {
        if (0xffff < uVar9) {
          ppuVar6 = &PTR_s_src_uu_numfmt_src_format_rs_002024e8;
LAB_0016aca0:
          local_158 = &PTR_s_Formatting_argument_out_of_range_00202460;
          local_150 = (code *)0x1;
          pppbStack_148 = (byte ***)0x8;
          local_140 = (code *)0x0;
          pbStack_138 = (byte *)0x0;
                    /* try { // try from 0016acc2 to 0016acd2 has its CatchHandler @ 0016ad04 */
          (*(code *)PTR__ZN4core9panicking9panic_fmt17h96f341d36638c225E_00209688)
                    (&local_158,ppuVar6);
          goto LAB_0016acd3;
        }
        local_108 = &local_98;
        local_100 = 
        _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
        local_f8 = (byte **)0x0;
        local_f0 = (code *)CONCAT62(local_f0._2_6_,(short)uVar9);
        local_158 = (undefined **)&DAT_001198c0;
        local_150 = (code *)0x1;
        pbStack_138 = &DAT_0011ad08;
        local_130 = (code *)0x1;
        pppbStack_148 = &local_108;
        local_140 = (code *)0x2;
                    /* try { // try from 0016a939 to 0016a945 has its CatchHandler @ 0016ad04 */
        _ZN4core6option15Option_LT_T_GT_11map_or_else17h6181b64f68c0f373E(&local_128,&local_158);
      }
      local_d8 = (undefined4)local_128;
      uStack_d4 = local_128._4_4_;
      uStack_d0 = (undefined4)uStack_120;
      uStack_cc = uStack_120._4_4_;
      local_c8 = local_118;
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h34fbae09aa78bed8E(&local_98);
LAB_0016ab7c:
      local_158 = (undefined **)(param_4 + 0x20);
      pbStack_138 = param_4 + 0x38;
      local_150 = 
      _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
      pppbStack_148 = (byte ***)&local_d8;
      local_140 = 
      _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
      local_130 = 
      _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
      local_108 = (byte **)&DAT_0011aca8;
      local_100 = (code *)0x3;
      local_e8 = 0;
      local_f0 = (code *)0x3;
                    /* try { // try from 0016abdf to 0016abf0 has its CatchHandler @ 0016aced */
      local_f8 = (byte **)&local_158;
      _ZN4core6option15Option_LT_T_GT_11map_or_else17h6181b64f68c0f373E(&local_48,&local_108);
      param_1[3] = local_38;
      *(undefined4 *)(param_1 + 1) = local_48;
      *(undefined4 *)((long)param_1 + 0xc) = uStack_44;
      *(undefined4 *)(param_1 + 2) = uStack_40;
      *(undefined4 *)((long)param_1 + 0x14) = uStack_3c;
      *param_1 = 0;
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h34fbae09aa78bed8E(&local_d8);
      if (uVar7 != 0) {
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h34fbae09aa78bed8E(&local_b8);
      }
      if (lVar1 == -0x8000000000000000) {
        return;
      }
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h34fbae09aa78bed8E(&local_68);
      return;
    }
    ppuVar6 = &PTR_s_src_uu_numfmt_src_format_rs_00202500;
  }
  else {
    if (uVar7 < 0x10000) {
      local_108 = (byte **)&local_b8;
      local_100 = 
      _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
      local_f8 = (byte **)0x0;
      local_f0 = (code *)CONCAT62(local_f0._2_6_,(short)uVar7);
      local_158 = (undefined **)&DAT_001198c0;
      local_150 = (code *)0x1;
      pbStack_138 = &DAT_0011ad08;
      local_130 = (code *)0x1;
      pppbStack_148 = &local_108;
      local_140 = (code *)0x2;
      _ZN4core6option15Option_LT_T_GT_11map_or_else17h6181b64f68c0f373E(&local_128,&local_158);
      goto LAB_0016aa72;
    }
    ppuVar6 = &PTR_s_src_uu_numfmt_src_format_rs_002024b8;
  }
  local_158 = &PTR_s_Formatting_argument_out_of_range_00202460;
  local_150 = (code *)0x1;
  pppbStack_148 = (byte ***)0x8;
  local_140 = (code *)0x0;
  pbStack_138 = (byte *)0x0;
                    /* try { // try from 0016ac85 to 0016ac8d has its CatchHandler @ 0016ad16 */
  (*(code *)PTR__ZN4core9panicking9panic_fmt17h96f341d36638c225E_00209688)(&local_158,ppuVar6);
LAB_0016acd3:
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}