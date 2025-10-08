void _ZN9alacritty2gl20CompressedTexImage3D9load_with17ha16ba4186deeec15E(undefined8 param_1)

{
  code *pcVar1;
  undefined8 local_10;
  undefined *local_8;
  
  local_8 = &DAT_00986f38;
  local_10 = param_1;
  pcVar1 = (code *)_ZN9alacritty2gl10metaloadfn17h7eed37a2c35596e4E
                             (&local_10,"glCompressedTexImage3D",0x16,
                              &PTR_s_glCompressedTexImage3DARB_00985ae0,1);
  _ZN9alacritty2gl7storage20CompressedTexImage3D17h67b0c59de9ec6a2fE._0_8_ =
       _ZN9alacritty2gl16missing_fn_panic17h74aefa71347b4c5eE;
  if (pcVar1 != (code *)0x0) {
    _ZN9alacritty2gl7storage20CompressedTexImage3D17h67b0c59de9ec6a2fE._0_8_ = pcVar1;
  }
  _ZN9alacritty2gl7storage20CompressedTexImage3D17h67b0c59de9ec6a2fE[8] = pcVar1 != (code *)0x0;
  return;
}