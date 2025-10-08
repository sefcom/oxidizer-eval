void _ZN9alacritty2gl18GetUniformLocation9load_with17h87761afd75c2b215E(undefined8 param_1)

{
  code *pcVar1;
  undefined8 local_10;
  undefined *local_8;
  
  local_8 = &DAT_00986f38;
  local_10 = param_1;
  pcVar1 = (code *)_ZN9alacritty2gl10metaloadfn17h7eed37a2c35596e4E
                             (&local_10,"glGetUniformLocation",0x14,
                              &PTR_s_glGetUniformLocationARB_00986260,1);
  _ZN9alacritty2gl7storage18GetUniformLocation17h3be57d0a0114f07aE_0 =
       _ZN9alacritty2gl16missing_fn_panic17h74aefa71347b4c5eE;
  if (pcVar1 != (code *)0x0) {
    _ZN9alacritty2gl7storage18GetUniformLocation17h3be57d0a0114f07aE_0 = pcVar1;
  }
  return;
}