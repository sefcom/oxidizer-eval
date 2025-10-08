void _ZN9alacritty2gl16VertexAttribI2ui9load_with17h4d3dff343a8126d8E(undefined8 param_1)

{
  code *pcVar1;
  undefined8 local_10;
  undefined *local_8;
  
  local_8 = &DAT_00986f38;
  local_10 = param_1;
  pcVar1 = (code *)_ZN9alacritty2gl10metaloadfn17h7eed37a2c35596e4E
                             (&local_10,"glVertexAttribI2ui",0x12,
                              &PTR_s_glVertexAttribI2uiEXT_00986e00,1);
  _ZN9alacritty2gl7storage16VertexAttribI2ui17he06f4f0b56cb85e7E._0_8_ =
       _ZN9alacritty2gl16missing_fn_panic17h74aefa71347b4c5eE;
  if (pcVar1 != (code *)0x0) {
    _ZN9alacritty2gl7storage16VertexAttribI2ui17he06f4f0b56cb85e7E._0_8_ = pcVar1;
  }
  _ZN9alacritty2gl7storage16VertexAttribI2ui17he06f4f0b56cb85e7E[8] = pcVar1 != (code *)0x0;
  return;
}