void _ZN9alacritty2gl23CompressedTexSubImage1D9load_with17h41702f55c38c81feE(undefined8 param_1)

{
  code *pcVar1;
  undefined8 local_10;
  undefined *local_8;
  
  local_8 = &DAT_00986f38;
  local_10 = param_1;
  pcVar1 = (code *)_ZN9alacritty2gl10metaloadfn17h7eed37a2c35596e4E
                             (&local_10,"glCompressedTexSubImage1D",0x19,
                              &PTR_s_glCompressedTexSubImage1DARB_00985af0,1);
  _ZN9alacritty2gl7storage23CompressedTexSubImage1D17h0db3d5eec8ad8755E._0_8_ =
       _ZN9alacritty2gl16missing_fn_panic17h74aefa71347b4c5eE;
  if (pcVar1 != (code *)0x0) {
    _ZN9alacritty2gl7storage23CompressedTexSubImage1D17h0db3d5eec8ad8755E._0_8_ = pcVar1;
  }
  _ZN9alacritty2gl7storage23CompressedTexSubImage1D17h0db3d5eec8ad8755E[8] = pcVar1 != (code *)0x0;
  return;
}