void _ZN9alacritty2gl10DeleteSync9load_with17hc710c8ba3ae89a4cE(undefined8 param_1)

{
  code *pcVar1;
  undefined8 local_10;
  undefined *local_8;
  
  local_8 = &DAT_00986f38;
  local_10 = param_1;
  pcVar1 = (code *)_ZN9alacritty2gl10metaloadfn17h7eed37a2c35596e4E
                             (&local_10,"glDeleteSync",0xc,&PTR_s_glDeleteSyncAPPLE_00985c40,1);
  _ZN9alacritty2gl7storage10DeleteSync17h91fb6203a5040649E._0_8_ =
       _ZN9alacritty2gl16missing_fn_panic17h74aefa71347b4c5eE;
  if (pcVar1 != (code *)0x0) {
    _ZN9alacritty2gl7storage10DeleteSync17h91fb6203a5040649E._0_8_ = pcVar1;
  }
  _ZN9alacritty2gl7storage10DeleteSync17h91fb6203a5040649E[8] = pcVar1 != (code *)0x0;
  return;
}