void _ZN9alacritty2gl15VertexAttrib2dv9load_with17haa3c83b2745fb0a3E(undefined8 param_1)

{
  code *pcVar1;
  undefined8 local_10;
  undefined *local_8;
  
  local_8 = &DAT_00986f38;
  local_10 = param_1;
  pcVar1 = (code *)_ZN9alacritty2gl10metaloadfn17h7eed37a2c35596e4E
                             (&local_10,"glVertexAttrib2dv",0x11,
                              &PTR_s_glVertexAttrib2dvARBglVertexAttr_00986a60,2);
  _ZN9alacritty2gl7storage15VertexAttrib2dv17h3f00256a85237705E._0_8_ =
       _ZN9alacritty2gl16missing_fn_panic17h74aefa71347b4c5eE;
  if (pcVar1 != (code *)0x0) {
    _ZN9alacritty2gl7storage15VertexAttrib2dv17h3f00256a85237705E._0_8_ = pcVar1;
  }
  _ZN9alacritty2gl7storage15VertexAttrib2dv17h3f00256a85237705E[8] = pcVar1 != (code *)0x0;
  return;
}