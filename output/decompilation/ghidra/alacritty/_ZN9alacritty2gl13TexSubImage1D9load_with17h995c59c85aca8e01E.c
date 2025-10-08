void _ZN9alacritty2gl13TexSubImage1D9load_with17h995c59c85aca8e01E(undefined8 param_1)

{
  code *pcVar1;
  undefined8 local_10;
  undefined *local_8;
  
  local_8 = &DAT_00986f38;
  local_10 = param_1;
  pcVar1 = (code *)_ZN9alacritty2gl10metaloadfn17h7eed37a2c35596e4E
                             (&local_10,"glTexSubImage1D",0xf,&PTR_s_glTexSubImage1DEXT_009866f0,1);
  _ZN9alacritty2gl7storage13TexSubImage1D17h4f78ca3d4acf48ddE._0_8_ =
       _ZN9alacritty2gl16missing_fn_panic17h74aefa71347b4c5eE;
  if (pcVar1 != (code *)0x0) {
    _ZN9alacritty2gl7storage13TexSubImage1D17h4f78ca3d4acf48ddE._0_8_ = pcVar1;
  }
  _ZN9alacritty2gl7storage13TexSubImage1D17h4f78ca3d4acf48ddE[8] = pcVar1 != (code *)0x0;
  return;
}