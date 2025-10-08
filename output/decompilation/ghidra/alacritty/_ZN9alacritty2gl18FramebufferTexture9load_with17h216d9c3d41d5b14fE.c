void _ZN9alacritty2gl18FramebufferTexture9load_with17h216d9c3d41d5b14fE(undefined8 param_1)

{
  code *pcVar1;
  undefined8 local_10;
  undefined *local_8;
  
  local_8 = &DAT_00986f38;
  local_10 = param_1;
  pcVar1 = (code *)_ZN9alacritty2gl10metaloadfn17h7eed37a2c35596e4E
                             (&local_10,"glFramebufferTexture",0x14,
                              &PTR_s_glFramebufferTextureARBglFramebu_00985ee0,3);
  _ZN9alacritty2gl7storage18FramebufferTexture17hec7e4c4ee0e60fe2E._0_8_ =
       _ZN9alacritty2gl16missing_fn_panic17h74aefa71347b4c5eE;
  if (pcVar1 != (code *)0x0) {
    _ZN9alacritty2gl7storage18FramebufferTexture17hec7e4c4ee0e60fe2E._0_8_ = pcVar1;
  }
  _ZN9alacritty2gl7storage18FramebufferTexture17hec7e4c4ee0e60fe2E[8] = pcVar1 != (code *)0x0;
  return;
}