void _ZN9alacritty2gl13GetBooleani_v9load_with17h312c18bca153806aE(undefined8 param_1)

{
  code *pcVar1;
  undefined8 local_10;
  undefined *local_8;
  
  local_8 = &DAT_00986f38;
  local_10 = param_1;
  pcVar1 = (code *)_ZN9alacritty2gl10metaloadfn17h7eed37a2c35596e4E
                             (&local_10,"glGetBooleani_v",0xf,
                              &PTR_s_glGetBooleanIndexedvEXT_00986000,1);
  _ZN9alacritty2gl7storage13GetBooleani_v17hd3c07dc036b8d31cE._0_8_ =
       _ZN9alacritty2gl16missing_fn_panic17h74aefa71347b4c5eE;
  if (pcVar1 != (code *)0x0) {
    _ZN9alacritty2gl7storage13GetBooleani_v17hd3c07dc036b8d31cE._0_8_ = pcVar1;
  }
  _ZN9alacritty2gl7storage13GetBooleani_v17hd3c07dc036b8d31cE[8] = pcVar1 != (code *)0x0;
  return;
}