void _ZN9alacritty2gl15GenVertexArrays9load_with17h106238405aa445aeE(undefined8 param_1)

{
  code *pcVar1;
  undefined8 local_10;
  undefined *local_8;
  
  local_8 = &DAT_00986f38;
  local_10 = param_1;
  pcVar1 = (code *)_ZN9alacritty2gl10metaloadfn17h7eed37a2c35596e4E
                             (&local_10,"glGenVertexArrays",0x11,
                              &PTR_s_glGenVertexArraysAPPLEglGenVerte_00985fa0,2);
  _ZN9alacritty2gl7storage15GenVertexArrays17h4e7aa93504329e19E_0 =
       _ZN9alacritty2gl16missing_fn_panic17h74aefa71347b4c5eE;
  if (pcVar1 != (code *)0x0) {
    _ZN9alacritty2gl7storage15GenVertexArrays17h4e7aa93504329e19E_0 = pcVar1;
  }
  return;
}