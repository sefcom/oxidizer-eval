void _ZN9alacritty2gl9Uniform1f9load_with17h6a2af1e569c981c9E(undefined8 param_1)

{
  code *pcVar1;
  undefined8 local_10;
  undefined *local_8;
  
  local_8 = &DAT_00986f38;
  local_10 = param_1;
  pcVar1 = (code *)_ZN9alacritty2gl10metaloadfn17h7eed37a2c35596e4E
                             (&local_10,"glUniform1f",0xb,&PTR_s_glUniform1fARB_00986730,1);
  _ZN9alacritty2gl7storage9Uniform1f17he912ff9a2d8e282fE_0 =
       _ZN9alacritty2gl16missing_fn_panic17h74aefa71347b4c5eE;
  if (pcVar1 != (code *)0x0) {
    _ZN9alacritty2gl7storage9Uniform1f17he912ff9a2d8e282fE_0 = pcVar1;
  }
  return;
}