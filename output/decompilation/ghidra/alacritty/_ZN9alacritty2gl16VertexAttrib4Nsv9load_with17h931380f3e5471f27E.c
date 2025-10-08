void _ZN9alacritty2gl16VertexAttrib4Nsv9load_with17h931380f3e5471f27E(undefined8 param_1)

{
  code *pcVar1;
  undefined8 local_10;
  undefined *local_8;
  
  local_8 = &DAT_00986f38;
  local_10 = param_1;
  pcVar1 = (code *)_ZN9alacritty2gl10metaloadfn17h7eed37a2c35596e4E
                             (&local_10,"glVertexAttrib4Nsv",0x12,
                              &PTR_s_glVertexAttrib4NsvARB_00986be0,1);
  _ZN9alacritty2gl7storage16VertexAttrib4Nsv17hc0e09c1cbebc87c7E._0_8_ =
       _ZN9alacritty2gl16missing_fn_panic17h74aefa71347b4c5eE;
  if (pcVar1 != (code *)0x0) {
    _ZN9alacritty2gl7storage16VertexAttrib4Nsv17hc0e09c1cbebc87c7E._0_8_ = pcVar1;
  }
  _ZN9alacritty2gl7storage16VertexAttrib4Nsv17hc0e09c1cbebc87c7E[8] = pcVar1 != (code *)0x0;
  return;
}