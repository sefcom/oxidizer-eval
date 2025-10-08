void _ZN9alacritty2gl16GetnUniformfvKHR9load_with17h54959251d5cdddfeE(undefined8 param_1)

{
  code *pcVar1;
  undefined8 local_10;
  undefined *local_8;
  
  local_8 = &DAT_00986f38;
  local_10 = param_1;
  pcVar1 = (code *)_ZN9alacritty2gl10metaloadfn17h7eed37a2c35596e4E
                             (&local_10,"glGetnUniformfvKHR",0x12,8,0);
  _ZN9alacritty2gl7storage16GetnUniformfvKHR17h3b86db92f5453e40E._0_8_ =
       _ZN9alacritty2gl16missing_fn_panic17h74aefa71347b4c5eE;
  if (pcVar1 != (code *)0x0) {
    _ZN9alacritty2gl7storage16GetnUniformfvKHR17h3b86db92f5453e40E._0_8_ = pcVar1;
  }
  _ZN9alacritty2gl7storage16GetnUniformfvKHR17h3b86db92f5453e40E[8] = pcVar1 != (code *)0x0;
  return;
}