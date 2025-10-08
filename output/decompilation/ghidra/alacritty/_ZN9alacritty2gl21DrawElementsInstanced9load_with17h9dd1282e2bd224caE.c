void _ZN9alacritty2gl21DrawElementsInstanced9load_with17h9dd1282e2bd224caE(undefined8 param_1)

{
  code *pcVar1;
  undefined8 local_10;
  undefined *local_8;
  
  local_8 = &DAT_00986f38;
  local_10 = param_1;
  pcVar1 = (code *)_ZN9alacritty2gl10metaloadfn17h7eed37a2c35596e4E
                             (&local_10,"glDrawElementsInstanced",0x17,
                              &PTR_s_glDrawElementsInstancedANGLEglDr_00985d70,4);
  _ZN9alacritty2gl7storage21DrawElementsInstanced17hea1d83919bf93ee2E_0 =
       _ZN9alacritty2gl16missing_fn_panic17h74aefa71347b4c5eE;
  if (pcVar1 != (code *)0x0) {
    _ZN9alacritty2gl7storage21DrawElementsInstanced17hea1d83919bf93ee2E_0 = pcVar1;
  }
  return;
}