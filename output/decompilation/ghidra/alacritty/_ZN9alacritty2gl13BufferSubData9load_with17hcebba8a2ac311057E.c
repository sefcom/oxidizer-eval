void _ZN9alacritty2gl13BufferSubData9load_with17hcebba8a2ac311057E(undefined8 param_1)

{
  code *pcVar1;
  undefined8 local_10;
  undefined *local_8;
  
  local_8 = &DAT_00986f38;
  local_10 = param_1;
  pcVar1 = (code *)_ZN9alacritty2gl10metaloadfn17h7eed37a2c35596e4E
                             (&local_10,"glBufferSubData",0xf,&PTR_s_glBufferSubDataARB_00985a40,1);
  _ZN9alacritty2gl7storage13BufferSubData17hd84c8d7b7c1dbfc2E_0 =
       _ZN9alacritty2gl16missing_fn_panic17h74aefa71347b4c5eE;
  if (pcVar1 != (code *)0x0) {
    _ZN9alacritty2gl7storage13BufferSubData17hd84c8d7b7c1dbfc2E_0 = pcVar1;
  }
  return;
}