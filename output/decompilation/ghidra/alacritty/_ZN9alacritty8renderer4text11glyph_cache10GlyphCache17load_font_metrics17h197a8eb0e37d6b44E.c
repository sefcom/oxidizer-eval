void _ZN9alacritty8renderer4text11glyph_cache10GlyphCache17load_font_metrics17h197a8eb0e37d6b44E
               (long *param_1,undefined8 param_2,undefined4 param_3,char param_4,undefined4 param_5)

{
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  int local_b0;
  undefined4 uStack_ac;
  long local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  float fStack_8c;
  long local_88;
  long lStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  long local_68 [4];
  long local_48;
  long lStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  _local_d8 = CONCAT44(param_5,0x6d);
  uStack_d0 = param_3;
  (*(code *)
    PTR__ZN74__LT_crossfont__ft__FreeTypeRasterizer_u20_as_u20_crossfont__Rasterize_GT_9get_glyph17h2f302aee46461b54E_009e0038
  )(&local_b0,param_2,&local_d8);
  local_68[0] = local_a8;
  local_48 = local_88;
  lStack_40 = lStack_80;
  local_38 = local_78;
  uStack_34 = uStack_74;
  uStack_30 = uStack_70;
  uStack_2c = uStack_6c;
  if (local_b0 == 1) {
    param_1[6] = CONCAT44(uStack_74,local_78);
    param_1[7] = CONCAT44(uStack_6c,uStack_70);
    param_1[4] = local_88;
    param_1[5] = lStack_80;
    param_1[2] = CONCAT44(uStack_94,local_98);
    param_1[3] = CONCAT44(fStack_8c,uStack_90);
    *param_1 = local_a8;
    param_1[1] = CONCAT44(uStack_9c,uStack_a0);
  }
  else {
    _ZN4core3ptr47drop_in_place_LT_crossfont__RasterizedGlyph_GT_17h3ae70e12a7ce09caE(local_68);
    (*(code *)
      PTR__ZN74__LT_crossfont__ft__FreeTypeRasterizer_u20_as_u20_crossfont__Rasterize_GT_7metrics17h73af167475e5ec59E_009e0040
    )(&local_b0,param_2,param_5,param_3);
    if (CONCAT44(uStack_ac,local_b0) == 7) {
      *(ulong *)((long)param_1 + 0x14) = CONCAT44(local_98,uStack_9c);
      *(ulong *)((long)param_1 + 0x1c) = CONCAT44(uStack_90,uStack_94);
      param_1[1] = local_a8;
      param_1[2] = CONCAT44(uStack_9c,uStack_a0);
      *(float *)((long)param_1 + 0x24) = fStack_8c + (float)(int)param_4;
      param_1[5] = local_88;
      *param_1 = 7;
    }
    else {
      param_1[6] = lStack_80;
      param_1[7] = CONCAT44(uStack_74,local_78);
      *(ulong *)((long)param_1 + 0x14) = CONCAT44(local_98,uStack_9c);
      *(ulong *)((long)param_1 + 0x1c) = CONCAT44(uStack_90,uStack_94);
      param_1[1] = local_a8;
      param_1[2] = CONCAT44(uStack_9c,uStack_a0);
      *param_1 = CONCAT44(uStack_ac,local_b0);
      *(float *)((long)param_1 + 0x24) = fStack_8c;
      param_1[5] = local_88;
    }
  }
  return;
}