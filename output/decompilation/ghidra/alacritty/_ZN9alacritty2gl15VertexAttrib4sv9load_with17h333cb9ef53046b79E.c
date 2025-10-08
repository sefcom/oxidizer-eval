void _ZN9alacritty2gl15VertexAttrib4sv9load_with17h333cb9ef53046b79E(undefined8 param_1)

{
  code *pcVar1;
  undefined8 local_10;
  undefined *local_8;
  
  local_8 = &DAT_00986f38;
  local_10 = param_1;
  pcVar1 = (code *)_ZN9alacritty2gl10metaloadfn17h7eed37a2c35596e4E
                             (&local_10,"glVertexAttrib4sv",0x11,
                              &PTR_s_glVertexAttrib4svARBglVertexAttr_00986d10,2);
  _ZN9alacritty2gl7storage15VertexAttrib4sv17hf97a6f04e136f94fE._0_8_ =
       _ZN9alacritty2gl16missing_fn_panic17h74aefa71347b4c5eE;
  if (pcVar1 != (code *)0x0) {
    _ZN9alacritty2gl7storage15VertexAttrib4sv17hf97a6f04e136f94fE._0_8_ = pcVar1;
  }
  _ZN9alacritty2gl7storage15VertexAttrib4sv17hf97a6f04e136f94fE[8] = pcVar1 != (code *)0x0;
  return;
}