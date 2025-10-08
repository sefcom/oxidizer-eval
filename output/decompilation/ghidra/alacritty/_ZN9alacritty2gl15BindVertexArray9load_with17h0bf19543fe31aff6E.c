void _ZN9alacritty2gl15BindVertexArray9load_with17h0bf19543fe31aff6E(undefined8 param_1)

{
  code *pcVar1;
  undefined8 local_10;
  undefined *local_8;
  
  local_8 = &DAT_00986f38;
  local_10 = param_1;
  pcVar1 = (code *)_ZN9alacritty2gl10metaloadfn17h7eed37a2c35596e4E
                             (&local_10,"glBindVertexArray",0x11,
                              &PTR_s_glBindVertexArrayOES_009859b0,1);
  _ZN9alacritty2gl7storage15BindVertexArray17h3d998acb574d7edfE_0 =
       _ZN9alacritty2gl16missing_fn_panic17h74aefa71347b4c5eE;
  if (pcVar1 != (code *)0x0) {
    _ZN9alacritty2gl7storage15BindVertexArray17h3d998acb574d7edfE_0 = pcVar1;
  }
  return;
}