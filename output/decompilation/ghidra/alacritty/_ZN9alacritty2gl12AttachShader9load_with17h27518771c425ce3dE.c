void _ZN9alacritty2gl12AttachShader9load_with17h27518771c425ce3dE(undefined8 param_1)

{
  code *pcVar1;
  undefined8 local_10;
  undefined *local_8;
  
  local_8 = &DAT_00986f38;
  local_10 = param_1;
  pcVar1 = (code *)_ZN9alacritty2gl10metaloadfn17h7eed37a2c35596e4E
                             (&local_10,"glAttachShader",0xe,&PTR_s_glAttachObjectARB_009858d0,1);
  _ZN9alacritty2gl7storage12AttachShader17h785b6ccfbbb3b8d2E_0 =
       _ZN9alacritty2gl16missing_fn_panic17h74aefa71347b4c5eE;
  if (pcVar1 != (code *)0x0) {
    _ZN9alacritty2gl7storage12AttachShader17h785b6ccfbbb3b8d2E_0 = pcVar1;
  }
  return;
}