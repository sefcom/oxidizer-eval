void _ZN9alacritty8renderer4text11glyph_cache10GlyphCache17reset_glyph_cache17h2ac9bf445252e45fE
               (undefined8 *param_1,long param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  _ZN106__LT_alacritty__renderer__text__LoaderApi_u20_as_u20_alacritty__renderer__text__glyph_cache__LoadGlyph_GT_5clear17h339576acbcce310dE
            (*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10));
  _ZN5ahash12random_state11RandomState3new17hccae9c0b71bdd92eE(&local_38);
  uVar6 = _UNK_00975370;
  uVar5 = _DAT_00975368;
  uVar4 = _UNK_00975364;
  uVar3 = _UNK_00975360;
  uVar2 = PTR_DAT_00975358._4_4_;
  uVar1 = PTR_DAT_00975358._0_4_;
  _ZN4core3ptr167drop_in_place_LT_std__collections__hash__map__HashMap_LT_crossfont__GlyphKey_C_alacritty__renderer__text__glyph_cache__Glyph_C_ahash__random_state__RandomState_GT__GT_17h00b47e32081c3b1bE
            (*param_1,param_1[1]);
  local_48 = (undefined4)uVar5;
  uStack_44 = (undefined4)((ulong)uVar5 >> 0x20);
  uStack_40 = (undefined4)uVar6;
  uStack_3c = (undefined4)((ulong)uVar6 >> 0x20);
  *(undefined4 *)(param_1 + 6) = local_28;
  *(undefined4 *)((long)param_1 + 0x34) = uStack_24;
  *(undefined4 *)(param_1 + 7) = uStack_20;
  *(undefined4 *)((long)param_1 + 0x3c) = uStack_1c;
  *(undefined4 *)(param_1 + 4) = local_38;
  *(undefined4 *)((long)param_1 + 0x24) = uStack_34;
  *(undefined4 *)(param_1 + 5) = uStack_30;
  *(undefined4 *)((long)param_1 + 0x2c) = uStack_2c;
  *(undefined4 *)(param_1 + 2) = local_48;
  *(undefined4 *)((long)param_1 + 0x14) = uStack_44;
  *(undefined4 *)(param_1 + 3) = uStack_40;
  *(undefined4 *)((long)param_1 + 0x1c) = uStack_3c;
  *(undefined4 *)param_1 = uVar1;
  *(undefined4 *)((long)param_1 + 4) = uVar2;
  *(undefined4 *)(param_1 + 1) = uVar3;
  *(undefined4 *)((long)param_1 + 0xc) = uVar4;
  _ZN9alacritty8renderer4text11glyph_cache10GlyphCache18load_common_glyphs17h997e04d309d0bf82E
            (param_1,param_2);
  return;
}