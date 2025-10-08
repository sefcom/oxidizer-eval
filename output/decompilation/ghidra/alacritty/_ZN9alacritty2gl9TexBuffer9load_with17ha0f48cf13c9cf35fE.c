void _ZN9alacritty2gl9TexBuffer9load_with17ha0f48cf13c9cf35fE(undefined8 param_1)

{
  code *pcVar1;
  undefined8 local_10;
  undefined *local_8;
  
  local_8 = &DAT_00986f38;
  local_10 = param_1;
  pcVar1 = (code *)_ZN9alacritty2gl10metaloadfn17h7eed37a2c35596e4E
                             (&local_10,"glTexBuffer",0xb,
                              &PTR_s_glTexBufferARBglTexBufferEXTglTe_00986670,3);
  _ZN9alacritty2gl7storage9TexBuffer17hf1210eeec5e18eb0E._0_8_ =
       _ZN9alacritty2gl16missing_fn_panic17h74aefa71347b4c5eE;
  if (pcVar1 != (code *)0x0) {
    _ZN9alacritty2gl7storage9TexBuffer17hf1210eeec5e18eb0E._0_8_ = pcVar1;
  }
  _ZN9alacritty2gl7storage9TexBuffer17hf1210eeec5e18eb0E[8] = pcVar1 != (code *)0x0;
  return;
}