void _ZN9alacritty2gl16VertexAttribI3iv9load_with17hb507b4245c3118c6E(undefined8 param_1)

{
  code *pcVar1;
  undefined8 local_10;
  undefined *local_8;
  
  local_8 = &DAT_00986f38;
  local_10 = param_1;
  pcVar1 = (code *)_ZN9alacritty2gl10metaloadfn17h7eed37a2c35596e4E
                             (&local_10,"glVertexAttribI3iv",0x12,
                              &PTR_s_glVertexAttribI3ivEXT_00986e30,1);
  _ZN9alacritty2gl7storage16VertexAttribI3iv17h7c22a5ec8c8f83acE._0_8_ =
       _ZN9alacritty2gl16missing_fn_panic17h74aefa71347b4c5eE;
  if (pcVar1 != (code *)0x0) {
    _ZN9alacritty2gl7storage16VertexAttribI3iv17h7c22a5ec8c8f83acE._0_8_ = pcVar1;
  }
  _ZN9alacritty2gl7storage16VertexAttribI3iv17h7c22a5ec8c8f83acE[8] = pcVar1 != (code *)0x0;
  return;
}