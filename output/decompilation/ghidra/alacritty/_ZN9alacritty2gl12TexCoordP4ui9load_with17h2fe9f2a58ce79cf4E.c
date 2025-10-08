void _ZN9alacritty2gl12TexCoordP4ui9load_with17h2fe9f2a58ce79cf4E(undefined8 param_1)

{
  code *pcVar1;
  undefined8 local_10;
  undefined *local_8;
  
  local_8 = &DAT_00986f38;
  local_10 = param_1;
  pcVar1 = (code *)_ZN9alacritty2gl10metaloadfn17h7eed37a2c35596e4E
                             (&local_10,"glTexCoordP4ui",0xe,8,0);
  _ZN9alacritty2gl7storage12TexCoordP4ui17h8583b377b770b0b6E._0_8_ =
       _ZN9alacritty2gl16missing_fn_panic17h74aefa71347b4c5eE;
  if (pcVar1 != (code *)0x0) {
    _ZN9alacritty2gl7storage12TexCoordP4ui17h8583b377b770b0b6E._0_8_ = pcVar1;
  }
  _ZN9alacritty2gl7storage12TexCoordP4ui17h8583b377b770b0b6E[8] = pcVar1 != (code *)0x0;
  return;
}