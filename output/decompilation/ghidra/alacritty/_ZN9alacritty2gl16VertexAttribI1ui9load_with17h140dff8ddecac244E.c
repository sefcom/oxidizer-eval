void _ZN9alacritty2gl16VertexAttribI1ui9load_with17h140dff8ddecac244E(undefined8 param_1)

{
  code *pcVar1;
  undefined8 local_10;
  undefined *local_8;
  
  local_8 = &DAT_00986f38;
  local_10 = param_1;
  pcVar1 = (code *)_ZN9alacritty2gl10metaloadfn17h7eed37a2c35596e4E
                             (&local_10,"glVertexAttribI1ui",0x12,
                              &PTR_s_glVertexAttribI1uiEXT_00986dc0,1);
  _ZN9alacritty2gl7storage16VertexAttribI1ui17h96884b6cb4ce7cbcE._0_8_ =
       _ZN9alacritty2gl16missing_fn_panic17h74aefa71347b4c5eE;
  if (pcVar1 != (code *)0x0) {
    _ZN9alacritty2gl7storage16VertexAttribI1ui17h96884b6cb4ce7cbcE._0_8_ = pcVar1;
  }
  _ZN9alacritty2gl7storage16VertexAttribI1ui17h96884b6cb4ce7cbcE[8] = pcVar1 != (code *)0x0;
  return;
}