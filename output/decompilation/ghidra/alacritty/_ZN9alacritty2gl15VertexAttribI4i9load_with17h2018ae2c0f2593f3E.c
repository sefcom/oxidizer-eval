void _ZN9alacritty2gl15VertexAttribI4i9load_with17h2018ae2c0f2593f3E(undefined8 param_1)

{
  code *pcVar1;
  undefined8 local_10;
  undefined *local_8;
  
  local_8 = &DAT_00986f38;
  local_10 = param_1;
  pcVar1 = (code *)_ZN9alacritty2gl10metaloadfn17h7eed37a2c35596e4E
                             (&local_10,"glVertexAttribI4i",0x11,
                              &PTR_s_glVertexAttribI4iEXT_00986e70,1);
  _ZN9alacritty2gl7storage15VertexAttribI4i17h472af4a3957c2db0E._0_8_ =
       _ZN9alacritty2gl16missing_fn_panic17h74aefa71347b4c5eE;
  if (pcVar1 != (code *)0x0) {
    _ZN9alacritty2gl7storage15VertexAttribI4i17h472af4a3957c2db0E._0_8_ = pcVar1;
  }
  _ZN9alacritty2gl7storage15VertexAttribI4i17h472af4a3957c2db0E[8] = pcVar1 != (code *)0x0;
  return;
}