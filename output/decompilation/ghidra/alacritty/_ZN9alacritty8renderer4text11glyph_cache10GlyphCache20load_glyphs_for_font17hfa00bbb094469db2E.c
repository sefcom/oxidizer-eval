void _ZN9alacritty8renderer4text11glyph_cache10GlyphCache20load_glyphs_for_font17hfa00bbb094469db2E
               (long param_1,undefined4 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined auVar3 [16];
  undefined2 local_5f;
  undefined local_5d;
  uint local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined local_50 [32];
  
  uVar1 = *(undefined4 *)(param_1 + 0x120);
  local_5f = 0x2000;
  local_5d = 0x7e;
  auVar3 = _ZN107__LT_core__ops__range__RangeInclusive_LT_T_GT__u20_as_u20_core__iter__range__RangeInclusiveIteratorImpl_GT_9spec_next17h3f8e80b55a84aa09E
                     (&local_5f);
  uVar2 = auVar3._8_8_;
  if ((auVar3 & (undefined  [16])0x1) != (undefined  [16])0x0) {
    do {
      local_5c = (uint)uVar2 & 0xff;
      local_58 = param_2;
      local_54 = uVar1;
      _ZN9alacritty8renderer4text11glyph_cache10GlyphCache3get17hfbc7956d71b1efd9E
                (local_50,param_1,&local_5c,param_3);
      auVar3 = _ZN107__LT_core__ops__range__RangeInclusive_LT_T_GT__u20_as_u20_core__iter__range__RangeInclusiveIteratorImpl_GT_9spec_next17h3f8e80b55a84aa09E
                         (&local_5f);
      uVar2 = auVar3._8_8_;
    } while ((auVar3 & (undefined  [16])0x1) != (undefined  [16])0x0);
  }
  return;
}