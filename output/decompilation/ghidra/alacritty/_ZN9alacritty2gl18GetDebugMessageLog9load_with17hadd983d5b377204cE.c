void _ZN9alacritty2gl18GetDebugMessageLog9load_with17hadd983d5b377204cE(undefined8 param_1)

{
  code *pcVar1;
  undefined8 local_10;
  undefined *local_8;
  
  local_8 = &DAT_00986f38;
  local_10 = param_1;
  pcVar1 = (code *)_ZN9alacritty2gl10metaloadfn17h7eed37a2c35596e4E
                             (&local_10,"glGetDebugMessageLog",0x14,
                              &PTR_s_glGetDebugMessageLogARB_00986060,2);
  _ZN9alacritty2gl7storage18GetDebugMessageLog17hc25f95fcd67eba07E._0_8_ =
       _ZN9alacritty2gl16missing_fn_panic17h74aefa71347b4c5eE;
  if (pcVar1 != (code *)0x0) {
    _ZN9alacritty2gl7storage18GetDebugMessageLog17hc25f95fcd67eba07E._0_8_ = pcVar1;
  }
  _ZN9alacritty2gl7storage18GetDebugMessageLog17hc25f95fcd67eba07E[8] = pcVar1 != (code *)0x0;
  return;
}