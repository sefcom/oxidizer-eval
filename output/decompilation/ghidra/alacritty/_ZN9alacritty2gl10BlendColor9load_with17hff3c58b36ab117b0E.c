void _ZN9alacritty2gl10BlendColor9load_with17hff3c58b36ab117b0E(undefined8 param_1)

{
  code *pcVar1;
  undefined8 local_10;
  undefined *local_8;
  
  local_8 = &DAT_00986f38;
  local_10 = param_1;
  pcVar1 = (code *)_ZN9alacritty2gl10metaloadfn17h7eed37a2c35596e4E
                             (&local_10,"glBlendColor",0xc,&PTR_s_glBlendColorEXT_009859c0,1);
  _ZN9alacritty2gl7storage10BlendColor17h3193f3dce4adb5feE._0_8_ =
       _ZN9alacritty2gl16missing_fn_panic17h74aefa71347b4c5eE;
  if (pcVar1 != (code *)0x0) {
    _ZN9alacritty2gl7storage10BlendColor17h3193f3dce4adb5feE._0_8_ = pcVar1;
  }
  _ZN9alacritty2gl7storage10BlendColor17h3193f3dce4adb5feE[8] = pcVar1 != (code *)0x0;
  return;
}