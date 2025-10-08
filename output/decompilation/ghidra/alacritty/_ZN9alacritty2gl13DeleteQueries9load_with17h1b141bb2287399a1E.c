void _ZN9alacritty2gl13DeleteQueries9load_with17h1b141bb2287399a1E(undefined8 param_1)

{
  code *pcVar1;
  undefined8 local_10;
  undefined *local_8;
  
  local_8 = &DAT_00986f38;
  local_10 = param_1;
  pcVar1 = (code *)_ZN9alacritty2gl10metaloadfn17h7eed37a2c35596e4E
                             (&local_10,"glDeleteQueries",0xf,&PTR_s_glDeleteQueriesARB_00985c20,1);
  _ZN9alacritty2gl7storage13DeleteQueries17h44c1a47835377648E._0_8_ =
       _ZN9alacritty2gl16missing_fn_panic17h74aefa71347b4c5eE;
  if (pcVar1 != (code *)0x0) {
    _ZN9alacritty2gl7storage13DeleteQueries17h44c1a47835377648E._0_8_ = pcVar1;
  }
  _ZN9alacritty2gl7storage13DeleteQueries17h44c1a47835377648E[8] = pcVar1 != (code *)0x0;
  return;
}