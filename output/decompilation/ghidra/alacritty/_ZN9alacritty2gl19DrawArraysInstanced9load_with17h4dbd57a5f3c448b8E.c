void _ZN9alacritty2gl19DrawArraysInstanced9load_with17h4dbd57a5f3c448b8E(undefined8 param_1)

{
  code *pcVar1;
  undefined8 local_10;
  undefined *local_8;
  
  local_8 = &DAT_00986f38;
  local_10 = param_1;
  pcVar1 = (code *)_ZN9alacritty2gl10metaloadfn17h7eed37a2c35596e4E
                             (&local_10,"glDrawArraysInstanced",0x15,
                              &PTR_s_glDrawArraysInstancedANGLEglDraw_00985ce0,4);
  _ZN9alacritty2gl7storage19DrawArraysInstanced17he7897eb2f891fd8bE._0_8_ =
       _ZN9alacritty2gl16missing_fn_panic17h74aefa71347b4c5eE;
  if (pcVar1 != (code *)0x0) {
    _ZN9alacritty2gl7storage19DrawArraysInstanced17he7897eb2f891fd8bE._0_8_ = pcVar1;
  }
  _ZN9alacritty2gl7storage19DrawArraysInstanced17he7897eb2f891fd8bE[8] = pcVar1 != (code *)0x0;
  return;
}