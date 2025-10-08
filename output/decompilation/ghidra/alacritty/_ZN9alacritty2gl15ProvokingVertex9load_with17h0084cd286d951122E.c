void _ZN9alacritty2gl15ProvokingVertex9load_with17h0084cd286d951122E(undefined8 param_1)

{
  code *pcVar1;
  undefined8 local_10;
  undefined *local_8;
  
  local_8 = &DAT_00986f38;
  local_10 = param_1;
  pcVar1 = (code *)_ZN9alacritty2gl10metaloadfn17h7eed37a2c35596e4E
                             (&local_10,"glProvokingVertex",0x11,
                              &PTR_s_glProvokingVertexEXT_00986570,1);
  _ZN9alacritty2gl7storage15ProvokingVertex17h7655e8304ad3ff7bE._0_8_ =
       _ZN9alacritty2gl16missing_fn_panic17h74aefa71347b4c5eE;
  if (pcVar1 != (code *)0x0) {
    _ZN9alacritty2gl7storage15ProvokingVertex17h7655e8304ad3ff7bE._0_8_ = pcVar1;
  }
  _ZN9alacritty2gl7storage15ProvokingVertex17h7655e8304ad3ff7bE[8] = pcVar1 != (code *)0x0;
  return;
}