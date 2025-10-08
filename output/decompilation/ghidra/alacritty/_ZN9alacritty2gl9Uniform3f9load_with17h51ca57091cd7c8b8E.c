void _ZN9alacritty2gl9Uniform3f9load_with17h51ca57091cd7c8b8E(undefined8 param_1)

{
  code *pcVar1;
  undefined8 local_10;
  undefined *local_8;
  
  local_8 = &DAT_00986f38;
  local_10 = param_1;
  pcVar1 = (code *)_ZN9alacritty2gl10metaloadfn17h7eed37a2c35596e4E
                             (&local_10,"glUniform3f",0xb,&PTR_s_glUniform3fARB_009867f0,1);
  _ZN9alacritty2gl7storage9Uniform3f17hc3318fdfdc13a83cE._0_8_ =
       _ZN9alacritty2gl16missing_fn_panic17h74aefa71347b4c5eE;
  if (pcVar1 != (code *)0x0) {
    _ZN9alacritty2gl7storage9Uniform3f17hc3318fdfdc13a83cE._0_8_ = pcVar1;
  }
  _ZN9alacritty2gl7storage9Uniform3f17hc3318fdfdc13a83cE[8] = pcVar1 != (code *)0x0;
  return;
}