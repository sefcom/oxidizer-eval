void _ZN9alacritty2gl8GetError9load_with17hfb9a08933f8f3d93E(undefined8 param_1)

{
  code *pcVar1;
  undefined8 local_10;
  undefined *local_8;
  
  local_8 = &DAT_00986f38;
  local_10 = param_1;
  pcVar1 = (code *)_ZN9alacritty2gl10metaloadfn17h7eed37a2c35596e4E(&local_10,"glGetError",10,8,0);
  _ZN9alacritty2gl7storage8GetError17h44a6fc6462751df8E_0 =
       _ZN9alacritty2gl16missing_fn_panic17h74aefa71347b4c5eE;
  if (pcVar1 != (code *)0x0) {
    _ZN9alacritty2gl7storage8GetError17h44a6fc6462751df8E_0 = pcVar1;
  }
  return;
}