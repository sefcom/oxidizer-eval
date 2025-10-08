long _ZN9alacritty4main17h1cfb109198f960b6E(void)

{
  long lVar1;
  undefined auStack_4b8 [176];
  undefined local_408 [176];
  long local_358;
  undefined local_338 [24];
  undefined local_320 [24];
  undefined local_308 [24];
  undefined local_2f0 [40];
  undefined local_2c8 [208];
  undefined local_1f8 [496];
  
  _ZN9alacritty3cli7Options3new17h88f1eeef51587883E(auStack_4b8);
  if (local_358 == -0x7fffffffffffffff) {
                    /* try { // try from 0057086e to 00570875 has its CatchHandler @ 0057093a */
    _ZN9alacritty7migrate7migrate17hd130364cc6c1f643E(local_408);
  }
  else {
    if (local_358 == -0x7ffffffffffffffe) {
      (*(code *)PTR_memcpy_009de0b0)(local_1f8,auStack_4b8,0x1f0);
      lVar1 = _ZN9alacritty9alacritty17h7b6e2cff16345a38E(local_1f8);
      return lVar1;
    }
    (*(code *)PTR_memcpy_009de0b0)(local_2c8,local_408,0xd0);
                    /* try { // try from 0057088e to 00570895 has its CatchHandler @ 0057093a */
    lVar1 = _ZN9alacritty3msg17h6c8ae6430e00480eE(local_2c8);
    if (lVar1 != 0) {
      _ZN4core3ptr70drop_in_place_LT_core__option__Option_LT_alloc__string__String_GT__GT_17h6a0f98c288fb7106E
                (local_320);
      _ZN4core3ptr67drop_in_place_LT_core__option__Option_LT_std__path__PathBuf_GT__GT_17hce944beccab591c0E
                (local_308);
      _ZN4core3ptr67drop_in_place_LT_core__option__Option_LT_std__path__PathBuf_GT__GT_17hce944beccab591c0E
                (local_2f0);
                    /* try { // try from 005708cd to 005708d1 has its CatchHandler @ 00570925 */
      _ZN4core3ptr50drop_in_place_LT_alacritty__cli__ParsedOptions_GT_17h0ec9507b6108d3fcE
                (local_338);
      goto LAB_0057090a;
    }
  }
  _ZN4core3ptr70drop_in_place_LT_core__option__Option_LT_alloc__string__String_GT__GT_17h6a0f98c288fb7106E
            (local_320);
  _ZN4core3ptr67drop_in_place_LT_core__option__Option_LT_std__path__PathBuf_GT__GT_17hce944beccab591c0E
            (local_308);
  _ZN4core3ptr67drop_in_place_LT_core__option__Option_LT_std__path__PathBuf_GT__GT_17hce944beccab591c0E
            (local_2f0);
                    /* try { // try from 00570903 to 00570907 has its CatchHandler @ 00570927 */
  _ZN4core3ptr50drop_in_place_LT_alacritty__cli__ParsedOptions_GT_17h0ec9507b6108d3fcE(local_338);
  lVar1 = 0;
LAB_0057090a:
  _ZN4core3ptr50drop_in_place_LT_alacritty__cli__WindowOptions_GT_17hd1c78ed5333b3944E(auStack_4b8);
  return lVar1;
}