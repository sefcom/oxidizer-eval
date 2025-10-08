void _ZN9alacritty2gl14VertexAttrib1f9load_with17h8acf32b994ea2a53E(undefined8 param_1)

{
  code *pcVar1;
  undefined8 local_10;
  undefined *local_8;
  
  local_8 = &DAT_00986f38;
  local_10 = param_1;
  pcVar1 = (code *)_ZN9alacritty2gl10metaloadfn17h7eed37a2c35596e4E
                             (&local_10,"glVertexAttrib1f",0x10,
                              &PTR_s_glVertexAttrib1fARBglVertexAttri_009869c0,2);
  _ZN9alacritty2gl7storage14VertexAttrib1f17h7d74ddfab19e989fE._0_8_ =
       _ZN9alacritty2gl16missing_fn_panic17h74aefa71347b4c5eE;
  if (pcVar1 != (code *)0x0) {
    _ZN9alacritty2gl7storage14VertexAttrib1f17h7d74ddfab19e989fE._0_8_ = pcVar1;
  }
  _ZN9alacritty2gl7storage14VertexAttrib1f17h7d74ddfab19e989fE[8] = pcVar1 != (code *)0x0;
  return;
}