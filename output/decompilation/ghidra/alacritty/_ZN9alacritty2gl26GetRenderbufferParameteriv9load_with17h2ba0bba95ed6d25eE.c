void _ZN9alacritty2gl26GetRenderbufferParameteriv9load_with17h2ba0bba95ed6d25eE(undefined8 param_1)

{
  code *pcVar1;
  undefined8 local_10;
  undefined *local_8;
  
  local_8 = &DAT_00986f38;
  local_10 = param_1;
  pcVar1 = (code *)_ZN9alacritty2gl10metaloadfn17h7eed37a2c35596e4E
                             (&local_10,"glGetRenderbufferParameteriv",0x1c,
                              &PTR_s_glGetRenderbufferParameterivEXT_009861a0,1);
  _ZN9alacritty2gl7storage26GetRenderbufferParameteriv17h0e5166d1b5a56440E._0_8_ =
       _ZN9alacritty2gl16missing_fn_panic17h74aefa71347b4c5eE;
  if (pcVar1 != (code *)0x0) {
    _ZN9alacritty2gl7storage26GetRenderbufferParameteriv17h0e5166d1b5a56440E._0_8_ = pcVar1;
  }
  _ZN9alacritty2gl7storage26GetRenderbufferParameteriv17h0e5166d1b5a56440E[8] =
       pcVar1 != (code *)0x0;
  return;
}