void _ZN9alacritty2gl12ShaderSource9load_with17hc8c45c011191b0caE(undefined8 param_1)

{
  code *pcVar1;
  undefined8 local_10;
  undefined *local_8;
  
  local_8 = &DAT_00986f38;
  local_10 = param_1;
  pcVar1 = (code *)_ZN9alacritty2gl10metaloadfn17h7eed37a2c35596e4E
                             (&local_10,"glShaderSource",0xe,&PTR_s_glShaderSourceARB_00986650,1);
  _ZN9alacritty2gl7storage12ShaderSource17h36e3f9f07e0e8e33E_0 =
       _ZN9alacritty2gl16missing_fn_panic17h74aefa71347b4c5eE;
  if (pcVar1 != (code *)0x0) {
    _ZN9alacritty2gl7storage12ShaderSource17h36e3f9f07e0e8e33E_0 = pcVar1;
  }
  return;
}