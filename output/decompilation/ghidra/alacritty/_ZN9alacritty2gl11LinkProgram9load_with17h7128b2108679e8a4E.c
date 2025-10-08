void _ZN9alacritty2gl11LinkProgram9load_with17h7128b2108679e8a4E(undefined8 param_1)

{
  code *pcVar1;
  undefined8 local_10;
  undefined *local_8;
  
  local_8 = &DAT_00986f38;
  local_10 = param_1;
  pcVar1 = (code *)_ZN9alacritty2gl10metaloadfn17h7eed37a2c35596e4E
                             (&local_10,"glLinkProgram",0xd,&PTR_s_glLinkProgramARB_00986440,1);
  _ZN9alacritty2gl7storage11LinkProgram17hbaa61d8d0ce34338E_0 =
       _ZN9alacritty2gl16missing_fn_panic17h74aefa71347b4c5eE;
  if (pcVar1 != (code *)0x0) {
    _ZN9alacritty2gl7storage11LinkProgram17hbaa61d8d0ce34338E_0 = pcVar1;
  }
  return;
}