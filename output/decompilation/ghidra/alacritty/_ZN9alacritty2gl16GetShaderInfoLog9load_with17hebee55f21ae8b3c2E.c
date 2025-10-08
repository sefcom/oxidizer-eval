void _ZN9alacritty2gl16GetShaderInfoLog9load_with17hebee55f21ae8b3c2E(undefined8 param_1)

{
  code *pcVar1;
  undefined8 local_10;
  undefined *local_8;
  
  local_8 = &DAT_00986f38;
  local_10 = param_1;
  pcVar1 = (code *)_ZN9alacritty2gl10metaloadfn17h7eed37a2c35596e4E
                             (&local_10,"glGetShaderInfoLog",0x12,8,0);
  _ZN9alacritty2gl7storage16GetShaderInfoLog17h2a8fa29910573669E_0 =
       _ZN9alacritty2gl16missing_fn_panic17h74aefa71347b4c5eE;
  if (pcVar1 != (code *)0x0) {
    _ZN9alacritty2gl7storage16GetShaderInfoLog17h2a8fa29910573669E_0 = pcVar1;
  }
  return;
}