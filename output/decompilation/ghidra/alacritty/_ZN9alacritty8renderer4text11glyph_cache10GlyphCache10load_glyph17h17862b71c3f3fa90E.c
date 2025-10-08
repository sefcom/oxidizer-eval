void _ZN9alacritty8renderer4text11glyph_cache10GlyphCache10load_glyph17h17862b71c3f3fa90E
               (undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  float fVar1;
  double dVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  double dVar7;
  
  iVar6 = (int)*(char *)(param_2 + 0x126) + *(int *)(param_4 + 0x38);
  *(int *)(param_4 + 0x38) = iVar6;
  fVar1 = *(float *)(param_2 + 0x50);
  iVar4 = 0x7fffffff;
  if (fVar1 <= DAT_001edecc) {
    iVar4 = (int)fVar1;
  }
  iVar5 = 0;
  if (!NAN(fVar1)) {
    iVar5 = iVar4;
  }
  *(int *)(param_4 + 0x34) = ((int)*(char *)(param_2 + 0x127) + *(int *)(param_4 + 0x34)) - iVar5;
  if (0x9f < *(uint *)(param_4 + 0x28)) {
                    /* try { // try from 0056aec8 to 0056af0a has its CatchHandler @ 0056af1b */
    cVar3 = _ZN13unicode_width6tables12lookup_width17hf99baf8c7b02f1d5E();
    if (cVar3 == '\0') {
      dVar2 = *(double *)(param_2 + 0x40);
      dVar7 = dVar2;
      if (dVar2 <= DAT_001eae48) {
        dVar7 = DAT_001eae48;
      }
      if (DAT_001ea930 <= dVar7) {
        dVar7 = DAT_001ea930;
      }
      iVar4 = 0;
      if (!NAN(dVar2)) {
        iVar4 = (int)dVar7;
      }
      *(int *)(param_4 + 0x38) = iVar6 + iVar4;
    }
  }
  _ZN113__LT_alacritty__renderer__text__glsl3__RenderApi_u20_as_u20_alacritty__renderer__text__glyph_cache__LoadGlyph_GT_10load_glyph17h224650aa6b2e84f8E
            (param_1,param_3,param_4);
  _ZN4core3ptr47drop_in_place_LT_crossfont__RasterizedGlyph_GT_17h3ae70e12a7ce09caE(param_4);
  return;
}