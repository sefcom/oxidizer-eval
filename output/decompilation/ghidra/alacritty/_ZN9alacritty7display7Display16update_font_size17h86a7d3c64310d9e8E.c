float _ZN9alacritty7display7Display16update_font_size17h86a7d3c64310d9e8E
                (long param_1,char param_2,char param_3,undefined8 param_4)

{
  undefined *puVar1;
  double dVar2;
  undefined local_60 [64];
  
  _ZN9alacritty8renderer4text11glyph_cache10GlyphCache16update_font_size17hc45cf17b76341be8E
            (local_60,param_1,param_4);
  _ZN4core3ptr76drop_in_place_LT_core__result__Result_LT__LP__RP__C_crossfont__Error_GT__GT_17hf8c39d173a5e65ebE
            (local_60);
  puVar1 = PTR_floor_009dfe50;
  dVar2 = (double)(*(code *)PTR_floor_009dfe50)((double)(int)param_2 + *(double *)(param_1 + 0x40));
  if (dVar2 <= _s__001ea5d0) {
    dVar2 = _s__001ea5d0;
  }
  (*(code *)puVar1)((double)(int)param_3 + *(double *)(param_1 + 0x48));
  return (float)dVar2;
}