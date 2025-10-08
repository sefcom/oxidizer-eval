void _ZN9alacritty2gl7IsQuery9load_with17h583614bee6b47b45E(undefined8 param_1)

{
  code *pcVar1;
  undefined8 local_10;
  undefined *local_8;
  
  local_8 = &DAT_00986f38;
  local_10 = param_1;
  pcVar1 = (code *)_ZN9alacritty2gl10metaloadfn17h7eed37a2c35596e4E
                             (&local_10,"glIsQuery",9,&PTR_s_glIsQueryARB_009863f0,1);
  _ZN9alacritty2gl7storage7IsQuery17hb69a5fb88e93b091E._0_8_ =
       _ZN9alacritty2gl16missing_fn_panic17h74aefa71347b4c5eE;
  if (pcVar1 != (code *)0x0) {
    _ZN9alacritty2gl7storage7IsQuery17hb69a5fb88e93b091E._0_8_ = pcVar1;
  }
  _ZN9alacritty2gl7storage7IsQuery17hb69a5fb88e93b091E[8] = pcVar1 != (code *)0x0;
  return;
}