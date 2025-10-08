void _ZN9alacritty2gl20CompressedTexImage1D9load_with17hd343507e1898c6deE(undefined8 param_1)

{
  code *pcVar1;
  undefined8 local_10;
  undefined *local_8;
  
  local_8 = &DAT_00986f38;
  local_10 = param_1;
  pcVar1 = (code *)_ZN9alacritty2gl10metaloadfn17h7eed37a2c35596e4E
                             (&local_10,"glCompressedTexImage1D",0x16,
                              &PTR_s_glCompressedTexImage1DARB_00985ac0,1);
  _ZN9alacritty2gl7storage20CompressedTexImage1D17hc0918fab447a748cE._0_8_ =
       _ZN9alacritty2gl16missing_fn_panic17h74aefa71347b4c5eE;
  if (pcVar1 != (code *)0x0) {
    _ZN9alacritty2gl7storage20CompressedTexImage1D17hc0918fab447a748cE._0_8_ = pcVar1;
  }
  _ZN9alacritty2gl7storage20CompressedTexImage1D17hc0918fab447a748cE[8] = pcVar1 != (code *)0x0;
  return;
}