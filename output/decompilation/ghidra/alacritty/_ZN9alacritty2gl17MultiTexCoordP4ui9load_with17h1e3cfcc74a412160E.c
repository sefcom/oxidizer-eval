void _ZN9alacritty2gl17MultiTexCoordP4ui9load_with17h1e3cfcc74a412160E(undefined8 param_1)

{
  code *pcVar1;
  undefined8 local_10;
  undefined *local_8;
  
  local_8 = &DAT_00986f38;
  local_10 = param_1;
  pcVar1 = (code *)_ZN9alacritty2gl10metaloadfn17h7eed37a2c35596e4E
                             (&local_10,"glMultiTexCoordP4ui",0x13,8,0);
  _ZN9alacritty2gl7storage17MultiTexCoordP4ui17h220eed2f143388ddE._0_8_ =
       _ZN9alacritty2gl16missing_fn_panic17h74aefa71347b4c5eE;
  if (pcVar1 != (code *)0x0) {
    _ZN9alacritty2gl7storage17MultiTexCoordP4ui17h220eed2f143388ddE._0_8_ = pcVar1;
  }
  _ZN9alacritty2gl7storage17MultiTexCoordP4ui17h220eed2f143388ddE[8] = pcVar1 != (code *)0x0;
  return;
}