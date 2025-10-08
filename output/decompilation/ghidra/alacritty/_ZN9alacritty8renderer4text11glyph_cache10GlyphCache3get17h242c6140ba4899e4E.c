void _ZN9alacritty8renderer4text11glyph_cache10GlyphCache3get17h242c6140ba4899e4E
               (undefined8 *param_1,long param_2,long *param_3,undefined8 param_4,char param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  long lVar12;
  undefined4 *puVar13;
  undefined4 local_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  long local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined4 local_140;
  undefined8 uStack_13c;
  undefined4 uStack_134;
  undefined4 local_130;
  undefined4 uStack_12c;
  long local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  long local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
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
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
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
  
  lVar12 = _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_9get_inner17h8d6ddca54b70a2bbE
                     (param_2,param_3);
  if (lVar12 == 0) {
    local_168 = 2;
    if (*(char *)(param_2 + 0x128) == '\x01') {
      _ZN9alacritty8renderer4text12builtin_font13builtin_glyph17he2b1f944da5191d7E
                (&local_100,*(undefined4 *)param_3,param_2 + 0x40,*(undefined4 *)(param_2 + 0x124),
                 *(undefined *)(param_2 + 0x125),*(undefined *)(param_2 + 0x126),
                 *(undefined *)(param_2 + 0x127));
      uStack_160 = CONCAT44(uStack_f4,local_f8);
      uStack_158 = CONCAT44(uStack_ec,uStack_f0);
      uStack_150 = CONCAT44(uStack_e4,local_e8);
      uStack_148 = CONCAT44(uStack_dc,uStack_e0);
      local_140 = local_d8;
      uStack_13c = CONCAT44(uStack_d0,uStack_d4);
      uStack_134 = uStack_cc;
      local_130 = local_c8;
      uStack_12c = uStack_c4;
      local_168 = local_100;
    }
    _ZN4core6option15Option_LT_T_GT_11map_or_else17h1461415ae136d526E
              (&local_100,&local_168,param_2 + 0x68,param_3);
    local_170 = local_100;
    if (local_100 == 1) {
      if ((param_5 == '\0') || (CONCAT44(uStack_f4,local_f8) - 2U < 5)) {
        local_140 = 0x20;
        local_168 = 0;
        uStack_160 = 0;
        uStack_13c = 0;
        uStack_134 = 0;
        local_130 = 0;
        uStack_158 = 1;
        uStack_150 = 0;
        uStack_148 = 0;
        _ZN9alacritty8renderer4text11glyph_cache10GlyphCache10load_glyph17hd49e73bd348c95cfE
                  (&local_b8,param_2,param_4,&local_168);
        bVar11 = true;
      }
      else {
        local_17c = 0;
        uStack_178 = (undefined4)*(undefined8 *)((long)param_3 + 4);
        uStack_174 = (undefined4)((ulong)*(undefined8 *)((long)param_3 + 4) >> 0x20);
                    /* try { // try from 0056a46e to 0056a47a has its CatchHandler @ 0056a691 */
        lVar12 = _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_9get_inner17h8d6ddca54b70a2bbE
                           (param_2,&local_17c);
        if (lVar12 == 0) {
          uStack_134 = uStack_c4;
          local_130 = uStack_c0;
          uStack_12c = uStack_bc;
          uStack_148 = CONCAT44(uStack_d4,local_d8);
          local_140 = uStack_d0;
          uStack_13c = CONCAT44(local_c8,uStack_cc);
          uStack_158 = CONCAT44(uStack_e4,local_e8);
          uStack_150 = CONCAT44(uStack_dc,uStack_e0);
          local_168 = CONCAT44(uStack_f4,local_f8);
          uStack_160 = CONCAT44(uStack_ec,uStack_f0);
                    /* try { // try from 0056a56e to 0056a5b1 has its CatchHandler @ 0056a68c */
          _ZN9alacritty8renderer4text11glyph_cache10GlyphCache10load_glyph17hd49e73bd348c95cfE
                    (&local_98,param_2,param_4,&local_168);
          uStack_120 = uStack_174;
          local_128 = CONCAT44(uStack_178,local_17c);
          _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_6insert17h9222c14c891ea1b6E
                    (&local_168,param_2,&local_128,&local_98);
          local_b8 = local_98;
          uStack_b4 = uStack_94;
          uStack_b0 = uStack_90;
          uStack_ac = uStack_8c;
          local_a8 = local_88;
          uStack_a0 = uStack_80;
        }
        else {
          local_b8 = *(undefined4 *)(lVar12 + 0xc);
          uStack_b4 = *(undefined4 *)(lVar12 + 0x10);
          uStack_b0 = *(undefined4 *)(lVar12 + 0x14);
          uStack_ac = *(undefined4 *)(lVar12 + 0x18);
          local_a8 = *(undefined8 *)(lVar12 + 0x1c);
          uStack_a0 = *(undefined8 *)(lVar12 + 0x24);
          _ZN4core3ptr47drop_in_place_LT_crossfont__RasterizedGlyph_GT_17h3ae70e12a7ce09caE
                    (&local_f8);
        }
        bVar11 = false;
      }
    }
    else {
      local_48 = local_c8;
      uStack_44 = uStack_c4;
      uStack_40 = uStack_c0;
      uStack_3c = uStack_bc;
      local_58 = local_d8;
      uStack_54 = uStack_d4;
      uStack_50 = uStack_d0;
      uStack_4c = uStack_cc;
      local_68 = local_e8;
      uStack_64 = uStack_e4;
      uStack_60 = uStack_e0;
      uStack_5c = uStack_dc;
      local_78 = local_f8;
      uStack_74 = uStack_f4;
      uStack_70 = uStack_f0;
      uStack_6c = uStack_ec;
      bVar11 = true;
                    /* try { // try from 0056a4e0 to 0056a53d has its CatchHandler @ 0056a6a5 */
      _ZN9alacritty8renderer4text11glyph_cache10GlyphCache10load_glyph17hd49e73bd348c95cfE
                (&local_b8,param_2,param_4,&local_78);
    }
    uStack_120 = *(undefined4 *)(param_3 + 1);
    local_128 = *param_3;
                    /* try { // try from 0056a5e4 to 0056a5f5 has its CatchHandler @ 0056a6a5 */
    _ZN9hashbrown11rustc_entry62__LT_impl_u20_hashbrown__map__HashMap_LT_K_C_V_C_S_C_A_GT__GT_11rustc_entry17h5a08109d5f25fa97E
              (&local_168,param_2,&local_128);
    if ((int)uStack_158 == 0x110000) {
      local_118 = CONCAT44(local_118._4_4_,0x110000);
    }
    else {
      local_118 = uStack_158;
      uStack_110 = uStack_150;
    }
    uStack_11c = uStack_160._4_4_;
    uStack_120 = (undefined4)uStack_160;
    local_128 = local_168;
    puVar13 = (undefined4 *)
              _ZN3std11collections4hash3map18Entry_LT_K_C_V_GT_9or_insert17habe8e28b5aada050E
                        (&local_128,&local_b8);
    uVar1 = *puVar13;
    uVar2 = puVar13[1];
    uVar3 = puVar13[2];
    uVar4 = puVar13[3];
    uVar5 = puVar13[5];
    uVar6 = puVar13[6];
    uVar7 = puVar13[7];
    *(undefined4 *)(param_1 + 2) = puVar13[4];
    *(undefined4 *)((long)param_1 + 0x14) = uVar5;
    *(undefined4 *)(param_1 + 3) = uVar6;
    *(undefined4 *)((long)param_1 + 0x1c) = uVar7;
    *(undefined4 *)param_1 = uVar1;
    *(undefined4 *)((long)param_1 + 4) = uVar2;
    *(undefined4 *)(param_1 + 1) = uVar3;
    *(undefined4 *)((long)param_1 + 0xc) = uVar4;
    if ((char)local_170 != '\0') {
      if (CONCAT44(uStack_f4,local_f8) - 2U < 5) {
        _ZN4core3ptr37drop_in_place_LT_crossfont__Error_GT_17h531104d480ecb501E(&local_f8);
      }
      else if (bVar11) {
        _ZN4core3ptr47drop_in_place_LT_crossfont__RasterizedGlyph_GT_17h3ae70e12a7ce09caE();
      }
    }
  }
  else {
    uVar8 = *(undefined8 *)(lVar12 + 0xc);
    uVar9 = *(undefined8 *)(lVar12 + 0x14);
    uVar10 = *(undefined8 *)(lVar12 + 0x24);
    param_1[2] = *(undefined8 *)(lVar12 + 0x1c);
    param_1[3] = uVar10;
    *param_1 = uVar8;
    param_1[1] = uVar9;
  }
  return;
}