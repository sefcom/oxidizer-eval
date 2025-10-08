void _ZN9alacritty2gl12CreateShader9load_with17h02e3e528805ad282E(undefined8 param_1)

{
  code *pcVar1;
  undefined8 local_10;
  undefined *local_8;
  
  local_8 = &DAT_00986f38;
  local_10 = param_1;
  pcVar1 = (code *)_ZN9alacritty2gl10metaloadfn17h7eed37a2c35596e4E
                             (&local_10,"glCreateShader",0xe,&PTR_s_glCreateShaderObjectARB_00985b90
                              ,1);
  _ZN9alacritty2gl7storage12CreateShader17hcd73aa42dce6e632E_0 =
       _ZN9alacritty2gl16missing_fn_panic17h74aefa71347b4c5eE;
  if (pcVar1 != (code *)0x0) {
    _ZN9alacritty2gl7storage12CreateShader17hcd73aa42dce6e632E_0 = pcVar1;
  }
  return;
}