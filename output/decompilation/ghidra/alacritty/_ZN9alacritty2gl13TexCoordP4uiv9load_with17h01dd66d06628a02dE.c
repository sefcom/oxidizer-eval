void _ZN9alacritty2gl13TexCoordP4uiv9load_with17h01dd66d06628a02dE(undefined8 param_1)

{
  code *pcVar1;
  undefined8 local_10;
  undefined *local_8;
  
  local_8 = &DAT_00986f38;
  local_10 = param_1;
  pcVar1 = (code *)_ZN9alacritty2gl10metaloadfn17h7eed37a2c35596e4E
                             (&local_10,"glTexCoordP4uiv",0xf,8,0);
  _ZN9alacritty2gl7storage13TexCoordP4uiv17h18e628c937a5e1fbE._0_8_ =
       _ZN9alacritty2gl16missing_fn_panic17h74aefa71347b4c5eE;
  if (pcVar1 != (code *)0x0) {
    _ZN9alacritty2gl7storage13TexCoordP4uiv17h18e628c937a5e1fbE._0_8_ = pcVar1;
  }
  _ZN9alacritty2gl7storage13TexCoordP4uiv17h18e628c937a5e1fbE[8] = pcVar1 != (code *)0x0;
  return;
}