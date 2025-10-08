void _ZN9alacritty2gl21GetCompressedTexImage9load_with17h1a5d41815a0b025fE(undefined8 param_1)

{
  code *pcVar1;
  undefined8 local_10;
  undefined *local_8;
  
  local_8 = &DAT_00986f38;
  local_10 = param_1;
  pcVar1 = (code *)_ZN9alacritty2gl10metaloadfn17h7eed37a2c35596e4E
                             (&local_10,"glGetCompressedTexImage",0x17,
                              &PTR_s_glGetCompressedTexImageARB_00986050,1);
  _ZN9alacritty2gl7storage21GetCompressedTexImage17hf5667a511e730112E._0_8_ =
       _ZN9alacritty2gl16missing_fn_panic17h74aefa71347b4c5eE;
  if (pcVar1 != (code *)0x0) {
    _ZN9alacritty2gl7storage21GetCompressedTexImage17hf5667a511e730112E._0_8_ = pcVar1;
  }
  _ZN9alacritty2gl7storage21GetCompressedTexImage17hf5667a511e730112E[8] = pcVar1 != (code *)0x0;
  return;
}