void _ZN9alacritty2gl19GetQueryObjectui64v9load_with17h26e9e40f5a8e99e1E(undefined8 param_1)

{
  code *pcVar1;
  undefined8 local_10;
  undefined *local_8;
  
  local_8 = &DAT_00986f38;
  local_10 = param_1;
  pcVar1 = (code *)_ZN9alacritty2gl10metaloadfn17h7eed37a2c35596e4E
                             (&local_10,"glGetQueryObjectui64v",0x15,
                              &PTR_s_glGetQueryObjectui64vEXT_00986170,1);
  _ZN9alacritty2gl7storage19GetQueryObjectui64v17h9e9ba89aaec0d7fcE._0_8_ =
       _ZN9alacritty2gl16missing_fn_panic17h74aefa71347b4c5eE;
  if (pcVar1 != (code *)0x0) {
    _ZN9alacritty2gl7storage19GetQueryObjectui64v17h9e9ba89aaec0d7fcE._0_8_ = pcVar1;
  }
  _ZN9alacritty2gl7storage19GetQueryObjectui64v17h9e9ba89aaec0d7fcE[8] = pcVar1 != (code *)0x0;
  return;
}