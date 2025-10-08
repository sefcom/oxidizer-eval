void _ZN9alacritty2gl20FramebufferTexture1D9load_with17h428b051d86f8d6a0E(undefined8 param_1)

{
  code *pcVar1;
  undefined8 local_10;
  undefined *local_8;
  
  local_8 = &DAT_00986f38;
  local_10 = param_1;
  pcVar1 = (code *)_ZN9alacritty2gl10metaloadfn17h7eed37a2c35596e4E
                             (&local_10,"glFramebufferTexture1D",0x16,
                              &PTR_s_glFramebufferTexture1DEXT_00985f10,1);
  _ZN9alacritty2gl7storage20FramebufferTexture1D17h622f4a5d85d3426dE._0_8_ =
       _ZN9alacritty2gl16missing_fn_panic17h74aefa71347b4c5eE;
  if (pcVar1 != (code *)0x0) {
    _ZN9alacritty2gl7storage20FramebufferTexture1D17h622f4a5d85d3426dE._0_8_ = pcVar1;
  }
  _ZN9alacritty2gl7storage20FramebufferTexture1D17h622f4a5d85d3426dE[8] = pcVar1 != (code *)0x0;
  return;
}