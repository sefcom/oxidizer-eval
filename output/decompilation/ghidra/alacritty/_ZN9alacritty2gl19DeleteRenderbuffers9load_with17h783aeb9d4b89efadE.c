void _ZN9alacritty2gl19DeleteRenderbuffers9load_with17h783aeb9d4b89efadE(undefined8 param_1)

{
  code *pcVar1;
  undefined8 local_10;
  undefined *local_8;
  
  local_8 = &DAT_00986f38;
  local_10 = param_1;
  pcVar1 = (code *)_ZN9alacritty2gl10metaloadfn17h7eed37a2c35596e4E
                             (&local_10,"glDeleteRenderbuffers",0x15,
                              &PTR_s_glDeleteRenderbuffersEXT_00985c30,1);
  _ZN9alacritty2gl7storage19DeleteRenderbuffers17h97f397782406b0f9E._0_8_ =
       _ZN9alacritty2gl16missing_fn_panic17h74aefa71347b4c5eE;
  if (pcVar1 != (code *)0x0) {
    _ZN9alacritty2gl7storage19DeleteRenderbuffers17h97f397782406b0f9E._0_8_ = pcVar1;
  }
  _ZN9alacritty2gl7storage19DeleteRenderbuffers17h97f397782406b0f9E[8] = pcVar1 != (code *)0x0;
  return;
}