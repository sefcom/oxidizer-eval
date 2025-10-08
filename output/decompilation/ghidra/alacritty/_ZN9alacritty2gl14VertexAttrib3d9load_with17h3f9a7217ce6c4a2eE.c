void _ZN9alacritty2gl14VertexAttrib3d9load_with17h3f9a7217ce6c4a2eE(undefined8 param_1)

{
  code *pcVar1;
  undefined8 local_10;
  undefined *local_8;
  
  local_8 = &DAT_00986f38;
  local_10 = param_1;
  pcVar1 = (code *)_ZN9alacritty2gl10metaloadfn17h7eed37a2c35596e4E
                             (&local_10,"glVertexAttrib3d",0x10,
                              &PTR_s_glVertexAttrib3dARBglVertexAttri_00986b00,2);
  _ZN9alacritty2gl7storage14VertexAttrib3d17h69a9456a534e3034E._0_8_ =
       _ZN9alacritty2gl16missing_fn_panic17h74aefa71347b4c5eE;
  if (pcVar1 != (code *)0x0) {
    _ZN9alacritty2gl7storage14VertexAttrib3d17h69a9456a534e3034E._0_8_ = pcVar1;
  }
  _ZN9alacritty2gl7storage14VertexAttrib3d17h69a9456a534e3034E[8] = pcVar1 != (code *)0x0;
  return;
}