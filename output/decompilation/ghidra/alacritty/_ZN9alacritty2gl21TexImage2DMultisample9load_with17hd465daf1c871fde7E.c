void _ZN9alacritty2gl21TexImage2DMultisample9load_with17hd465daf1c871fde7E(undefined8 param_1)

{
  code *pcVar1;
  undefined8 local_10;
  undefined *local_8;
  
  local_8 = &DAT_00986f38;
  local_10 = param_1;
  pcVar1 = (code *)_ZN9alacritty2gl10metaloadfn17h7eed37a2c35596e4E
                             (&local_10,"glTexImage2DMultisample",0x17,8,0);
  _ZN9alacritty2gl7storage21TexImage2DMultisample17h73b1a5fb05592a4cE._0_8_ =
       _ZN9alacritty2gl16missing_fn_panic17h74aefa71347b4c5eE;
  if (pcVar1 != (code *)0x0) {
    _ZN9alacritty2gl7storage21TexImage2DMultisample17h73b1a5fb05592a4cE._0_8_ = pcVar1;
  }
  _ZN9alacritty2gl7storage21TexImage2DMultisample17h73b1a5fb05592a4cE[8] = pcVar1 != (code *)0x0;
  return;
}