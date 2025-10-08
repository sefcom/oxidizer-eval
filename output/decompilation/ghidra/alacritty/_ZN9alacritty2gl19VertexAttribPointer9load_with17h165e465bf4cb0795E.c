void _ZN9alacritty2gl19VertexAttribPointer9load_with17h165e465bf4cb0795E(undefined8 param_1)

{
  code *pcVar1;
  undefined8 local_10;
  undefined *local_8;
  
  local_8 = &DAT_00986f38;
  local_10 = param_1;
  pcVar1 = (code *)_ZN9alacritty2gl10metaloadfn17h7eed37a2c35596e4E
                             (&local_10,"glVertexAttribPointer",0x15,
                              &PTR_s_glVertexAttribPointerARB_00986ef0,1);
  _ZN9alacritty2gl7storage19VertexAttribPointer17hdd17f62548c1ce0aE_0 =
       _ZN9alacritty2gl16missing_fn_panic17h74aefa71347b4c5eE;
  if (pcVar1 != (code *)0x0) {
    _ZN9alacritty2gl7storage19VertexAttribPointer17hdd17f62548c1ce0aE_0 = pcVar1;
  }
  return;
}