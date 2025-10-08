void _ZN9alacritty2gl12DetachShader9load_with17h87dd14d71f4cabefE(undefined8 param_1)

{
  code *pcVar1;
  undefined8 local_10;
  undefined *local_8;
  
  local_8 = &DAT_00986f38;
  local_10 = param_1;
  pcVar1 = (code *)_ZN9alacritty2gl10metaloadfn17h7eed37a2c35596e4E
                             (&local_10,"glDetachShader",0xe,&PTR_s_glDetachObjectARB_00985c70,1);
  _ZN9alacritty2gl7storage12DetachShader17h6c8b56069796f9dfE._0_8_ =
       _ZN9alacritty2gl16missing_fn_panic17h74aefa71347b4c5eE;
  if (pcVar1 != (code *)0x0) {
    _ZN9alacritty2gl7storage12DetachShader17h6c8b56069796f9dfE._0_8_ = pcVar1;
  }
  _ZN9alacritty2gl7storage12DetachShader17h6c8b56069796f9dfE[8] = pcVar1 != (code *)0x0;
  return;
}