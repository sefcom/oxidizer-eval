void _ZN9alacritty2gl27BindFragDataLocationIndexed9load_with17hfad8b77e468745c1E(undefined8 param_1)

{
  code *pcVar1;
  undefined8 local_10;
  undefined *local_8;
  
  local_8 = &DAT_00986f38;
  local_10 = param_1;
  pcVar1 = (code *)_ZN9alacritty2gl10metaloadfn17h7eed37a2c35596e4E
                             (&local_10,"glBindFragDataLocationIndexed",0x1d,&PTR_DAT_00985990,1);
  _ZN9alacritty2gl7storage27BindFragDataLocationIndexed17ha8f2eab1e945270fE._0_8_ =
       _ZN9alacritty2gl16missing_fn_panic17h74aefa71347b4c5eE;
  if (pcVar1 != (code *)0x0) {
    _ZN9alacritty2gl7storage27BindFragDataLocationIndexed17ha8f2eab1e945270fE._0_8_ = pcVar1;
  }
  _ZN9alacritty2gl7storage27BindFragDataLocationIndexed17ha8f2eab1e945270fE[8] =
       pcVar1 != (code *)0x0;
  return;
}