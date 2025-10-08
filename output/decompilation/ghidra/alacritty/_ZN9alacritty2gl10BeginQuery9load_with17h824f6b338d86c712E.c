void _ZN9alacritty2gl10BeginQuery9load_with17h824f6b338d86c712E(undefined8 param_1)

{
  code *pcVar1;
  undefined8 local_10;
  undefined *local_8;
  
  local_8 = &DAT_00986f38;
  local_10 = param_1;
  pcVar1 = (code *)_ZN9alacritty2gl10metaloadfn17h7eed37a2c35596e4E
                             (&local_10,"glBeginQuery",0xc,&PTR_s_glBeginQueryARB_009858f0,1);
  _ZN9alacritty2gl7storage10BeginQuery17h7a632c4bf7db1570E._0_8_ =
       _ZN9alacritty2gl16missing_fn_panic17h74aefa71347b4c5eE;
  if (pcVar1 != (code *)0x0) {
    _ZN9alacritty2gl7storage10BeginQuery17h7a632c4bf7db1570E._0_8_ = pcVar1;
  }
  _ZN9alacritty2gl7storage10BeginQuery17h7a632c4bf7db1570E[8] = pcVar1 != (code *)0x0;
  return;
}