void _ZN9alacritty2gl17VertexAttribI2uiv9load_with17hb5801001c314b75aE(undefined8 param_1)

{
  code *pcVar1;
  undefined8 local_10;
  undefined *local_8;
  
  local_8 = &DAT_00986f38;
  local_10 = param_1;
  pcVar1 = (code *)_ZN9alacritty2gl10metaloadfn17h7eed37a2c35596e4E
                             (&local_10,"glVertexAttribI2uiv",0x13,
                              &PTR_s_glVertexAttribI2uivEXT_00986e10,1);
  _ZN9alacritty2gl7storage17VertexAttribI2uiv17h9de85ba3ec1cdb30E._0_8_ =
       _ZN9alacritty2gl16missing_fn_panic17h74aefa71347b4c5eE;
  if (pcVar1 != (code *)0x0) {
    _ZN9alacritty2gl7storage17VertexAttribI2uiv17h9de85ba3ec1cdb30E._0_8_ = pcVar1;
  }
  _ZN9alacritty2gl7storage17VertexAttribI2uiv17h9de85ba3ec1cdb30E[8] = pcVar1 != (code *)0x0;
  return;
}