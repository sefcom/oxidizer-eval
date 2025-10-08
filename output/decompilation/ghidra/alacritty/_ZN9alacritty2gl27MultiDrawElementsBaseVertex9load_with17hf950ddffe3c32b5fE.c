void _ZN9alacritty2gl27MultiDrawElementsBaseVertex9load_with17hf950ddffe3c32b5fE(undefined8 param_1)

{
  code *pcVar1;
  undefined8 local_10;
  undefined *local_8;
  
  local_8 = &DAT_00986f38;
  local_10 = param_1;
  pcVar1 = (code *)_ZN9alacritty2gl10metaloadfn17h7eed37a2c35596e4E
                             (&local_10,"glMultiDrawElementsBaseVertex",0x1d,&PTR_DAT_009864a0,1);
  _ZN9alacritty2gl7storage27MultiDrawElementsBaseVertex17h96767445a7bc8bceE._0_8_ =
       _ZN9alacritty2gl16missing_fn_panic17h74aefa71347b4c5eE;
  if (pcVar1 != (code *)0x0) {
    _ZN9alacritty2gl7storage27MultiDrawElementsBaseVertex17h96767445a7bc8bceE._0_8_ = pcVar1;
  }
  _ZN9alacritty2gl7storage27MultiDrawElementsBaseVertex17h96767445a7bc8bceE[8] =
       pcVar1 != (code *)0x0;
  return;
}