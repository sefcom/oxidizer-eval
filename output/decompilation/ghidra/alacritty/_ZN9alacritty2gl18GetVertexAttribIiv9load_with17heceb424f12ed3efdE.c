void _ZN9alacritty2gl18GetVertexAttribIiv9load_with17heceb424f12ed3efdE(undefined8 param_1)

{
  code *pcVar1;
  undefined8 local_10;
  undefined *local_8;
  
  local_8 = &DAT_00986f38;
  local_10 = param_1;
  pcVar1 = (code *)_ZN9alacritty2gl10metaloadfn17h7eed37a2c35596e4E
                             (&local_10,"glGetVertexAttribIiv",0x14,
                              &PTR_s_glGetVertexAttribIivEXT_009862a0,1);
  _ZN9alacritty2gl7storage18GetVertexAttribIiv17h0ad71d0fa18061f1E._0_8_ =
       _ZN9alacritty2gl16missing_fn_panic17h74aefa71347b4c5eE;
  if (pcVar1 != (code *)0x0) {
    _ZN9alacritty2gl7storage18GetVertexAttribIiv17h0ad71d0fa18061f1E._0_8_ = pcVar1;
  }
  _ZN9alacritty2gl7storage18GetVertexAttribIiv17h0ad71d0fa18061f1E[8] = pcVar1 != (code *)0x0;
  return;
}