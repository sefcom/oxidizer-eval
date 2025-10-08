void _ZN9alacritty8renderer4text11glyph_cache10GlyphCache3new17h2aa9558433f4be42E
               (long *param_1,undefined8 param_2,long param_3)

{
  undefined uVar1;
  undefined uVar2;
  undefined uVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined *local_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
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
  undefined local_e0 [176];
  
                    /* try { // try from 005698fa to 005699d3 has its CatchHandler @ 00569ba1 */
  _ZN9alacritty8renderer4text11glyph_cache10GlyphCache17compute_font_keys17h70cff708fb8cdc91E
            (&local_148,param_3,param_2);
  uVar12 = (undefined4)uStack_140;
  uVar13 = uStack_140._4_4_;
  uVar14 = (undefined4)uStack_138;
  uVar15 = uStack_138._4_4_;
  if (local_148 == (undefined *)0x7) {
    uVar5 = *(undefined4 *)(param_3 + 0xc0);
    uVar1 = *(undefined *)(param_3 + 199);
    _ZN9alacritty8renderer4text11glyph_cache10GlyphCache17load_font_metrics17h197a8eb0e37d6b44E
              (&local_148,param_2,uVar5,uVar1,uStack_140 & 0xffffffff);
    uVar17 = uStack_124;
    uVar16 = uStack_128;
    local_1e8 = (undefined4)uStack_140;
    uStack_1e4 = (undefined4)(uStack_140 >> 0x20);
    uStack_1e0 = (undefined4)uStack_138;
    uStack_1dc = (undefined4)((ulong)uStack_138 >> 0x20);
    local_1d8 = (undefined4)uStack_130;
    uStack_1d4 = (undefined4)((ulong)uStack_130 >> 0x20);
    if (local_148 == (undefined *)0x7) {
      _ZN5ahash12random_state11RandomState3new17hccae9c0b71bdd92eE(&local_148);
      uVar11 = _UNK_00975374;
      uVar10 = _UNK_00975370;
      uVar9 = _UNK_0097536c;
      uVar8 = _DAT_00975368;
      uVar7 = _UNK_00975360;
      puVar6 = PTR_DAT_00975358;
      (*(code *)PTR_memcpy_009de0b0)(local_e0,param_2,0xa8);
      uVar4 = *(undefined2 *)(param_3 + 0xc4);
      uVar2 = *(undefined *)(param_3 + 0xc6);
      uVar3 = *(undefined *)(param_3 + 0xc9);
      local_168 = SUB84(local_148,0);
      uStack_164 = (undefined4)((ulong)local_148 >> 0x20);
      uStack_160 = (undefined4)uStack_140;
      uStack_15c = (undefined4)(uStack_140 >> 0x20);
      local_148 = puVar6;
      uStack_140 = uVar7;
      uStack_128 = local_168;
      uStack_124 = uStack_164;
      local_120 = uStack_160;
      uStack_11c = uStack_15c;
      uStack_118 = (undefined4)uStack_138;
      uStack_114 = uStack_138._4_4_;
      uStack_110 = (undefined4)uStack_130;
      uStack_10c = uStack_130._4_4_;
      local_108 = local_1e8;
      uStack_104 = uStack_1e4;
      uStack_100 = uStack_1e0;
      uStack_fc = uStack_1dc;
      local_f8 = local_1d8;
      uStack_f4 = uStack_1d4;
      uStack_f0 = uVar16;
      uStack_ec = uVar17;
      uStack_138 = CONCAT44(uVar9,uVar8);
      uStack_130 = CONCAT44(uVar11,uVar10);
      (*(code *)PTR_memcpy_009de0b0)(param_1,&local_148,0x110);
      *(undefined4 *)(param_1 + 0x22) = uVar12;
      *(undefined4 *)((long)param_1 + 0x114) = uVar13;
      *(undefined4 *)(param_1 + 0x23) = uVar14;
      *(undefined4 *)((long)param_1 + 0x11c) = uVar15;
      *(undefined4 *)(param_1 + 0x24) = uVar5;
      *(undefined2 *)((long)param_1 + 0x124) = uVar4;
      *(undefined *)((long)param_1 + 0x126) = uVar2;
      *(undefined *)((long)param_1 + 0x127) = uVar1;
      *(undefined *)(param_1 + 0x25) = uVar3;
      return;
    }
    param_1[6] = CONCAT44(uStack_114,uStack_118);
    param_1[7] = CONCAT44(uStack_10c,uStack_110);
    param_1[5] = CONCAT44(uStack_11c,local_120);
    *(undefined4 *)(param_1 + 3) = local_1d8;
    *(undefined4 *)((long)param_1 + 0x1c) = uStack_1d4;
    *(undefined4 *)(param_1 + 4) = uStack_128;
    *(undefined4 *)((long)param_1 + 0x24) = uStack_124;
    *(undefined4 *)(param_1 + 1) = local_1e8;
    *(undefined4 *)((long)param_1 + 0xc) = uStack_1e4;
    *(undefined4 *)(param_1 + 2) = uStack_1e0;
    *(undefined4 *)((long)param_1 + 0x14) = uStack_1dc;
    *param_1 = (long)local_148;
  }
  else {
    param_1[7] = CONCAT44(uStack_10c,uStack_110);
    *(undefined4 *)(param_1 + 5) = local_120;
    *(undefined4 *)((long)param_1 + 0x2c) = uStack_11c;
    *(undefined4 *)(param_1 + 6) = uStack_118;
    *(undefined4 *)((long)param_1 + 0x34) = uStack_114;
    *(undefined4 *)(param_1 + 3) = (undefined4)uStack_130;
    *(undefined4 *)((long)param_1 + 0x1c) = uStack_130._4_4_;
    *(undefined4 *)(param_1 + 4) = uStack_128;
    *(undefined4 *)((long)param_1 + 0x24) = uStack_124;
    *param_1 = (long)local_148;
    *(undefined4 *)(param_1 + 1) = (undefined4)uStack_140;
    *(undefined4 *)((long)param_1 + 0xc) = uStack_140._4_4_;
    *(undefined4 *)(param_1 + 2) = (undefined4)uStack_138;
    *(undefined4 *)((long)param_1 + 0x14) = uStack_138._4_4_;
  }
  *(undefined4 *)(param_1 + 0x21) = 0x3b9aca01;
  _ZN4core3ptr54drop_in_place_LT_crossfont__ft__FreeTypeRasterizer_GT_17hfbe953f3d7eed890E(param_2);
  return;
}