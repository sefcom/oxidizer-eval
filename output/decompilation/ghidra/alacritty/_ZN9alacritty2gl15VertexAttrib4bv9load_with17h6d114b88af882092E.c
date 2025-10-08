void _ZN9alacritty2gl15VertexAttrib4bv9load_with17h6d114b88af882092E(undefined8 param_1)

{
  code *pcVar1;
  undefined8 local_10;
  undefined *local_8;
  
  local_8 = &DAT_00986f38;
  local_10 = param_1;
  pcVar1 = (code *)_ZN9alacritty2gl10metaloadfn17h7eed37a2c35596e4E
                             (&local_10,"glVertexAttrib4bv",0x11,
                              &PTR_s_glVertexAttrib4bvARB_00986c50,1);
  _ZN9alacritty2gl7storage15VertexAttrib4bv17h639fd634ae92f376E._0_8_ =
       _ZN9alacritty2gl16missing_fn_panic17h74aefa71347b4c5eE;
  if (pcVar1 != (code *)0x0) {
    _ZN9alacritty2gl7storage15VertexAttrib4bv17h639fd634ae92f376E._0_8_ = pcVar1;
  }
  _ZN9alacritty2gl7storage15VertexAttrib4bv17h639fd634ae92f376E[8] = pcVar1 != (code *)0x0;
  return;
}