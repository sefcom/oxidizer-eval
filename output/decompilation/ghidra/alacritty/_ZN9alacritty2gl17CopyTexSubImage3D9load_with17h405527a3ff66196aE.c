void _ZN9alacritty2gl17CopyTexSubImage3D9load_with17h405527a3ff66196aE(undefined8 param_1)

{
  code *pcVar1;
  undefined8 local_10;
  undefined *local_8;
  
  local_8 = &DAT_00986f38;
  local_10 = param_1;
  pcVar1 = (code *)_ZN9alacritty2gl10metaloadfn17h7eed37a2c35596e4E
                             (&local_10,"glCopyTexSubImage3D",0x13,
                              &PTR_s_glCopyTexSubImage3DEXT_00985b70,1);
  _ZN9alacritty2gl7storage17CopyTexSubImage3D17h1f2748f5d998b810E._0_8_ =
       _ZN9alacritty2gl16missing_fn_panic17h74aefa71347b4c5eE;
  if (pcVar1 != (code *)0x0) {
    _ZN9alacritty2gl7storage17CopyTexSubImage3D17h1f2748f5d998b810E._0_8_ = pcVar1;
  }
  _ZN9alacritty2gl7storage17CopyTexSubImage3D17h1f2748f5d998b810E[8] = pcVar1 != (code *)0x0;
  return;
}