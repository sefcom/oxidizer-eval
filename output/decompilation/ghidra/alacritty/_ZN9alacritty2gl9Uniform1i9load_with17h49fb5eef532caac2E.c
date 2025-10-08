void _ZN9alacritty2gl9Uniform1i9load_with17h49fb5eef532caac2E(undefined8 param_1)

{
  code *pcVar1;
  undefined8 local_10;
  undefined *local_8;
  
  local_8 = &DAT_00986f38;
  local_10 = param_1;
  pcVar1 = (code *)_ZN9alacritty2gl10metaloadfn17h7eed37a2c35596e4E
                             (&local_10,"glUniform1i",0xb,&PTR_s_glUniform1iARB_00986750,1);
  _ZN9alacritty2gl7storage9Uniform1i17h58a54799f0d50833E_0 =
       _ZN9alacritty2gl16missing_fn_panic17h74aefa71347b4c5eE;
  if (pcVar1 != (code *)0x0) {
    _ZN9alacritty2gl7storage9Uniform1i17h58a54799f0d50833E_0 = pcVar1;
  }
  return;
}