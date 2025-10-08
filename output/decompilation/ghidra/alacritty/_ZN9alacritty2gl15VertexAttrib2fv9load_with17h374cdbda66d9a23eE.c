void _ZN9alacritty2gl15VertexAttrib2fv9load_with17h374cdbda66d9a23eE(undefined8 param_1)

{
  code *pcVar1;
  undefined8 local_10;
  undefined *local_8;
  
  local_8 = &DAT_00986f38;
  local_10 = param_1;
  pcVar1 = (code *)_ZN9alacritty2gl10metaloadfn17h7eed37a2c35596e4E
                             (&local_10,"glVertexAttrib2fv",0x11,
                              &PTR_s_glVertexAttrib2fvARBglVertexAttr_00986aa0,2);
  _ZN9alacritty2gl7storage15VertexAttrib2fv17h16a7512411439f5fE._0_8_ =
       _ZN9alacritty2gl16missing_fn_panic17h74aefa71347b4c5eE;
  if (pcVar1 != (code *)0x0) {
    _ZN9alacritty2gl7storage15VertexAttrib2fv17h16a7512411439f5fE._0_8_ = pcVar1;
  }
  _ZN9alacritty2gl7storage15VertexAttrib2fv17h16a7512411439f5fE[8] = pcVar1 != (code *)0x0;
  return;
}