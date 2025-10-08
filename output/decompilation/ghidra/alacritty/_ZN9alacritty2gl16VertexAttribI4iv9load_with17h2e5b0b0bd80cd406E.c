void _ZN9alacritty2gl16VertexAttribI4iv9load_with17h2e5b0b0bd80cd406E(undefined8 param_1)

{
  code *pcVar1;
  undefined8 local_10;
  undefined *local_8;
  
  local_8 = &DAT_00986f38;
  local_10 = param_1;
  pcVar1 = (code *)_ZN9alacritty2gl10metaloadfn17h7eed37a2c35596e4E
                             (&local_10,"glVertexAttribI4iv",0x12,
                              &PTR_s_glVertexAttribI4ivEXT_00986e80,1);
  _ZN9alacritty2gl7storage16VertexAttribI4iv17h18a5c6ed8a1ab1dcE._0_8_ =
       _ZN9alacritty2gl16missing_fn_panic17h74aefa71347b4c5eE;
  if (pcVar1 != (code *)0x0) {
    _ZN9alacritty2gl7storage16VertexAttribI4iv17h18a5c6ed8a1ab1dcE._0_8_ = pcVar1;
  }
  _ZN9alacritty2gl7storage16VertexAttribI4iv17h18a5c6ed8a1ab1dcE[8] = pcVar1 != (code *)0x0;
  return;
}