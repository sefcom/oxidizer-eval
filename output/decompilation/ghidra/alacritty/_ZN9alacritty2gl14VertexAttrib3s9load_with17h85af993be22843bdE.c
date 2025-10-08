void _ZN9alacritty2gl14VertexAttrib3s9load_with17h85af993be22843bdE(undefined8 param_1)

{
  code *pcVar1;
  undefined8 local_10;
  undefined *local_8;
  
  local_8 = &DAT_00986f38;
  local_10 = param_1;
  pcVar1 = (code *)_ZN9alacritty2gl10metaloadfn17h7eed37a2c35596e4E
                             (&local_10,&DAT_001e8180,0x10,
                              &PTR_s_glVertexAttrib3sARBglVertexAttri_00986b80,2);
  _ZN9alacritty2gl7storage14VertexAttrib3s17h264fb2ec7bb23ea2E._0_8_ =
       _ZN9alacritty2gl16missing_fn_panic17h74aefa71347b4c5eE;
  if (pcVar1 != (code *)0x0) {
    _ZN9alacritty2gl7storage14VertexAttrib3s17h264fb2ec7bb23ea2E._0_8_ = pcVar1;
  }
  _ZN9alacritty2gl7storage14VertexAttrib3s17h264fb2ec7bb23ea2E[8] = pcVar1 != (code *)0x0;
  return;
}