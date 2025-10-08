void _ZN9alacritty2gl15VertexAttribI3i9load_with17he8aeff4be479b2f3E(undefined8 param_1)

{
  code *pcVar1;
  undefined8 local_10;
  undefined *local_8;
  
  local_8 = &DAT_00986f38;
  local_10 = param_1;
  pcVar1 = (code *)_ZN9alacritty2gl10metaloadfn17h7eed37a2c35596e4E
                             (&local_10,"glVertexAttribI3i",0x11,
                              &PTR_s_glVertexAttribI3iEXT_00986e20,1);
  _ZN9alacritty2gl7storage15VertexAttribI3i17he45e55bb9193c95dE._0_8_ =
       _ZN9alacritty2gl16missing_fn_panic17h74aefa71347b4c5eE;
  if (pcVar1 != (code *)0x0) {
    _ZN9alacritty2gl7storage15VertexAttribI3i17he45e55bb9193c95dE._0_8_ = pcVar1;
  }
  _ZN9alacritty2gl7storage15VertexAttribI3i17he45e55bb9193c95dE[8] = pcVar1 != (code *)0x0;
  return;
}