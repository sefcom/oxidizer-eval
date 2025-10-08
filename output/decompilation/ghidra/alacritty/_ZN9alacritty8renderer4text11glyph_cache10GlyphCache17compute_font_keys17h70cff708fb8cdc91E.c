void _ZN9alacritty8renderer4text11glyph_cache10GlyphCache17compute_font_keys17h70cff708fb8cdc91E
               (long *param_1,long param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 local_160;
  undefined4 local_15c;
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
  undefined4 uStack_128;
  undefined8 uStack_124;
  undefined4 local_11c;
  undefined *local_110;
  undefined4 *local_108;
  undefined8 local_100;
  undefined4 *local_f8;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined local_60 [48];
  
  uVar1 = *(undefined4 *)(param_2 + 0xc0);
  local_160 = uVar1;
  _ZN9alacritty8renderer4text11glyph_cache10GlyphCache9make_desc17hbb7630277b5f032eE
            (local_60,param_2,0,0);
                    /* try { // try from 00569de8 to 00569e3d has its CatchHandler @ 00569ff0 */
  _ZN9alacritty8renderer4text11glyph_cache10GlyphCache17load_regular_font17h31699e5046c8445aE
            (&local_158,param_3,local_60,uVar1);
  uVar1 = uStack_150;
  if (CONCAT44(uStack_154,local_158) == 7) {
    local_15c = uStack_150;
    local_108 = &local_15c;
    local_f8 = &local_160;
    local_110 = local_60;
    local_100 = param_3;
    _ZN9alacritty6config4font4Font4bold17hfdc88a4fe0c17cd9E(&local_158,param_2);
                    /* try { // try from 00569e3e to 00569e53 has its CatchHandler @ 00569fca */
    _ZN9alacritty8renderer4text11glyph_cache10GlyphCache9make_desc17hbb7630277b5f032eE
              (&local_f0,&local_158,0,1);
    _ZN4core3ptr61drop_in_place_LT_alacritty__config__font__FontDescription_GT_17h6e03b4734dd1a15aE
              (&local_158);
    local_138 = local_d0;
    uStack_134 = uStack_cc;
    uStack_130 = uStack_c8;
    uStack_12c = uStack_c4;
    local_148 = local_e0;
    uStack_144 = uStack_dc;
    uStack_140 = uStack_d8;
    uStack_13c = uStack_d4;
    local_158 = local_f0;
    uStack_154 = uStack_ec;
    uStack_150 = uStack_e8;
    uStack_14c = uStack_e4;
                    /* try { // try from 00569e82 to 00569e9f has its CatchHandler @ 00569fee */
    uVar2 = _ZN9alacritty8renderer4text11glyph_cache10GlyphCache17compute_font_keys28__u7b__u7b_closure_u7d__u7d_17hffd5b62a9bc28b2eE
                      (&local_110,&local_158);
    _ZN9alacritty6config4font4Font6italic17hbd7533f9186a5550E(&local_158,param_2);
                    /* try { // try from 00569ea0 to 00569eb8 has its CatchHandler @ 00569fc8 */
    _ZN9alacritty8renderer4text11glyph_cache10GlyphCache9make_desc17hbb7630277b5f032eE
              (&local_c0,&local_158,1,0);
    _ZN4core3ptr61drop_in_place_LT_alacritty__config__font__FontDescription_GT_17h6e03b4734dd1a15aE
              (&local_158);
    local_138 = local_a0;
    uStack_134 = uStack_9c;
    uStack_130 = uStack_98;
    uStack_12c = uStack_94;
    local_148 = local_b0;
    uStack_144 = uStack_ac;
    uStack_140 = uStack_a8;
    uStack_13c = uStack_a4;
    local_158 = local_c0;
    uStack_154 = uStack_bc;
    uStack_150 = uStack_b8;
    uStack_14c = uStack_b4;
                    /* try { // try from 00569eea to 00569f08 has its CatchHandler @ 00569fec */
    uVar3 = _ZN9alacritty8renderer4text11glyph_cache10GlyphCache17compute_font_keys28__u7b__u7b_closure_u7d__u7d_17hffd5b62a9bc28b2eE
                      (&local_110,&local_158);
    _ZN9alacritty6config4font4Font11bold_italic17hc06c8f3854a106bcE(&local_158,param_2);
                    /* try { // try from 00569f09 to 00569f24 has its CatchHandler @ 00569fc6 */
    _ZN9alacritty8renderer4text11glyph_cache10GlyphCache9make_desc17hbb7630277b5f032eE
              (&local_90,&local_158,1,1);
    _ZN4core3ptr61drop_in_place_LT_alacritty__config__font__FontDescription_GT_17h6e03b4734dd1a15aE
              (&local_158);
    local_138 = local_70;
    uStack_134 = uStack_6c;
    uStack_130 = uStack_68;
    uStack_12c = uStack_64;
    local_148 = local_80;
    uStack_144 = uStack_7c;
    uStack_140 = uStack_78;
    uStack_13c = uStack_74;
    local_158 = local_90;
    uStack_154 = uStack_8c;
    uStack_150 = uStack_88;
    uStack_14c = uStack_84;
                    /* try { // try from 00569f56 to 00569f64 has its CatchHandler @ 00569fc4 */
    uVar4 = _ZN9alacritty8renderer4text11glyph_cache10GlyphCache17compute_font_keys28__u7b__u7b_closure_u7d__u7d_17hffd5b62a9bc28b2eE
                      (&local_110,&local_158);
    *(undefined4 *)(param_1 + 1) = uVar1;
    *(undefined4 *)((long)param_1 + 0xc) = uVar2;
    *(undefined4 *)(param_1 + 2) = uVar3;
    *(undefined4 *)((long)param_1 + 0x14) = uVar4;
    *param_1 = 7;
  }
  else {
    *(undefined4 *)((long)param_1 + 0x3c) = local_11c;
    *(ulong *)((long)param_1 + 0x2c) = CONCAT44(uStack_128,uStack_12c);
    *(undefined8 *)((long)param_1 + 0x34) = uStack_124;
    *(ulong *)((long)param_1 + 0x1c) = CONCAT44(local_138,uStack_13c);
    *(ulong *)((long)param_1 + 0x24) = CONCAT44(uStack_130,uStack_134);
    *(undefined4 *)((long)param_1 + 0xc) = uStack_14c;
    *(undefined4 *)(param_1 + 2) = local_148;
    *(undefined4 *)((long)param_1 + 0x14) = uStack_144;
    *(undefined4 *)(param_1 + 3) = uStack_140;
    *param_1 = CONCAT44(uStack_154,local_158);
    *(undefined4 *)(param_1 + 1) = uStack_150;
  }
  _ZN4core3ptr40drop_in_place_LT_crossfont__FontDesc_GT_17h71e32b267b7b4ae1E(local_60);
  return;
}