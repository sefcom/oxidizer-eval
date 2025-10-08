void _ZN9alacritty8renderer4text11glyph_cache10GlyphCache17load_regular_font17h31699e5046c8445aE
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  long lVar1;
  char *local_1a8;
  undefined8 local_1a0;
  char *local_198;
  undefined8 local_190;
  undefined8 local_188;
  int *local_178;
  undefined *local_170;
  int local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  int local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
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
  undefined8 *local_e8;
  undefined8 local_e0;
  undefined4 **local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  
  (*(code *)
    PTR__ZN74__LT_crossfont__ft__FreeTypeRasterizer_u20_as_u20_crossfont__Rasterize_GT_9load_font17h87419683d9fe4c18E_009e0048
  )(&local_168);
  if (local_168 == 7) {
    param_1[6] = CONCAT44(uStack_134,local_138);
    param_1[7] = CONCAT44(uStack_12c,uStack_130);
    param_1[4] = CONCAT44(uStack_144,local_148);
    param_1[5] = CONCAT44(uStack_13c,uStack_140);
    param_1[2] = CONCAT44(uStack_154,local_158);
    param_1[3] = CONCAT44(uStack_14c,uStack_150);
    *param_1 = CONCAT44(uStack_164,7);
    param_1[1] = CONCAT44(uStack_15c,uStack_160);
  }
  else {
    local_f8 = local_138;
    uStack_f4 = uStack_134;
    uStack_f0 = uStack_130;
    uStack_ec = uStack_12c;
    local_108 = local_148;
    uStack_104 = uStack_144;
    uStack_100 = uStack_140;
    uStack_fc = uStack_13c;
    local_118 = local_158;
    uStack_114 = uStack_154;
    uStack_110 = uStack_150;
    uStack_10c = uStack_14c;
    local_128 = local_168;
    uStack_124 = uStack_164;
    uStack_120 = uStack_160;
    uStack_11c = uStack_15c;
                    /* try { // try from 0056a141 to 0056a206 has its CatchHandler @ 0056a29f */
    lVar1 = _ZN4core4sync6atomic11atomic_load17h45f93311b58385bbE
                      (PTR__ZN3log20MAX_LOG_LEVEL_FILTER17hfa6ade34c357dc26E_009de3b0,0);
    if (lVar1 != 0) {
      local_178 = &local_128;
      local_170 = 
      PTR__ZN55__LT_crossfont__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h37a3422c742e4e2dE_009dfdf0
      ;
      local_e8 = &DAT_001e8b60;
      local_e0 = 1;
      local_c8 = 0;
      local_d8 = &local_178;
      local_d0 = 1;
      local_188 = (*(code *)PTR__ZN3log13__private_api3loc17h250021ea1f26630aE_009de3b8)
                            (&PTR_s_alacritty_src_renderer_text_glyp_00983fa8);
      local_1a8 = "alacritty::renderer::text::glyph_cache";
      local_1a0 = 0x26;
      local_198 = "alacritty::renderer::text::glyph_cache";
      local_190 = 0x26;
      _ZN3log13__private_api3log17h0b6680b994d742b1E(&local_e8,1,&local_1a8);
    }
    _ZN72__LT_alacritty__config__font__Font_u20_as_u20_core__default__Default_GT_7default17h1fbf3f7b26419d24E
              (&local_e8);
                    /* try { // try from 0056a207 to 0056a21a has its CatchHandler @ 0056a27a */
    _ZN9alacritty8renderer4text11glyph_cache10GlyphCache9make_desc17hbb7630277b5f032eE
              (&local_1a8,&local_e8,0,0);
    _ZN4core3ptr50drop_in_place_LT_alacritty__config__font__Font_GT_17h7026083151c73adfE(&local_e8);
                    /* try { // try from 0056a228 to 0056a238 has its CatchHandler @ 0056a25a */
    (*(code *)
      PTR__ZN74__LT_crossfont__ft__FreeTypeRasterizer_u20_as_u20_crossfont__Rasterize_GT_9load_font17h87419683d9fe4c18E_009e0048
    )(param_1,param_2,&local_1a8,param_4);
    _ZN4core3ptr40drop_in_place_LT_crossfont__FontDesc_GT_17h71e32b267b7b4ae1E(&local_1a8);
    _ZN4core3ptr37drop_in_place_LT_crossfont__Error_GT_17h531104d480ecb501E(&local_128);
  }
  return;
}