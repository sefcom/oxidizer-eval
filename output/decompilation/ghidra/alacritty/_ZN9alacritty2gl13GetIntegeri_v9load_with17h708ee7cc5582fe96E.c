void _ZN9alacritty2gl13GetIntegeri_v9load_with17h708ee7cc5582fe96E(undefined8 param_1)

{
  code *pcVar1;
  undefined8 local_10;
  undefined *local_8;
  
  local_8 = &DAT_00986f38;
  local_10 = param_1;
  pcVar1 = (code *)_ZN9alacritty2gl10metaloadfn17h7eed37a2c35596e4E
                             (&local_10,"glGetIntegeri_v",0xf,
                              &PTR_s_glGetIntegerIndexedvEXT_009860e0,1);
  _ZN9alacritty2gl7storage13GetIntegeri_v17hab3ae3f727fd68dfE._0_8_ =
       _ZN9alacritty2gl16missing_fn_panic17h74aefa71347b4c5eE;
  if (pcVar1 != (code *)0x0) {
    _ZN9alacritty2gl7storage13GetIntegeri_v17hab3ae3f727fd68dfE._0_8_ = pcVar1;
  }
  _ZN9alacritty2gl7storage13GetIntegeri_v17hab3ae3f727fd68dfE[8] = pcVar1 != (code *)0x0;
  return;
}