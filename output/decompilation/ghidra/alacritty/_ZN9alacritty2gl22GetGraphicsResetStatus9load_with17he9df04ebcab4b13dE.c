void _ZN9alacritty2gl22GetGraphicsResetStatus9load_with17he9df04ebcab4b13dE(undefined8 param_1)

{
  code *pcVar1;
  undefined8 local_10;
  undefined *local_8;
  
  local_8 = &DAT_00986f38;
  local_10 = param_1;
  pcVar1 = (code *)_ZN9alacritty2gl10metaloadfn17h7eed37a2c35596e4E
                             (&local_10,"glGetGraphicsResetStatus",0x18,
                              &PTR_s_glGetGraphicsResetStatusEXT_009860b0,2);
  _ZN9alacritty2gl7storage22GetGraphicsResetStatus17he603977498c441aeE_0 =
       _ZN9alacritty2gl16missing_fn_panic17h74aefa71347b4c5eE;
  if (pcVar1 != (code *)0x0) {
    _ZN9alacritty2gl7storage22GetGraphicsResetStatus17he603977498c441aeE_0 = pcVar1;
  }
  return;
}