void _ZN9alacritty2gl20DebugMessageCallback9load_with17h5cd207dbd1e75bcdE(undefined8 param_1)

{
  code *pcVar1;
  undefined8 local_10;
  undefined *local_8;
  
  local_8 = &DAT_00986f38;
  local_10 = param_1;
  pcVar1 = (code *)_ZN9alacritty2gl10metaloadfn17h7eed37a2c35596e4E
                             (&local_10,"glDebugMessageCallback",0x16,
                              &PTR_s_glDebugMessageCallbackARB_00985ba0,2);
  _ZN9alacritty2gl7storage20DebugMessageCallback17hf8622d353bcde498E_0 =
       _ZN9alacritty2gl16missing_fn_panic17h74aefa71347b4c5eE;
  if (pcVar1 != (code *)0x0) {
    _ZN9alacritty2gl7storage20DebugMessageCallback17hf8622d353bcde498E_0 = pcVar1;
  }
  return;
}