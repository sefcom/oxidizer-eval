void _ZN9alacritty2gl16PopDebugGroupKHR9load_with17hbe75b5677d9ae8f3E(undefined8 param_1)

{
  code *pcVar1;
  undefined8 local_10;
  undefined *local_8;
  
  local_8 = &DAT_00986f38;
  local_10 = param_1;
  pcVar1 = (code *)_ZN9alacritty2gl10metaloadfn17h7eed37a2c35596e4E
                             (&local_10,"glPopDebugGroupKHR",0x12,8,0);
  _ZN9alacritty2gl7storage16PopDebugGroupKHR17hb68a5112280ca12bE._0_8_ =
       _ZN9alacritty2gl16missing_fn_panic17h74aefa71347b4c5eE;
  if (pcVar1 != (code *)0x0) {
    _ZN9alacritty2gl7storage16PopDebugGroupKHR17hb68a5112280ca12bE._0_8_ = pcVar1;
  }
  _ZN9alacritty2gl7storage16PopDebugGroupKHR17hb68a5112280ca12bE[8] = pcVar1 != (code *)0x0;
  return;
}