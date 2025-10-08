void _ZN9alacritty2gl18UniformMatrix3x4fv9load_with17he5e45ce718ac7982E(undefined8 param_1)

{
  code *pcVar1;
  undefined8 local_10;
  undefined *local_8;
  
  local_8 = &DAT_00986f38;
  local_10 = param_1;
  pcVar1 = (code *)_ZN9alacritty2gl10metaloadfn17h7eed37a2c35596e4E
                             (&local_10,"glUniformMatrix3x4fv",0x14,
                              &PTR_s_glUniformMatrix3x4fvNV_00986900,1);
  _ZN9alacritty2gl7storage18UniformMatrix3x4fv17h2fa4447ceb0be5fcE._0_8_ =
       _ZN9alacritty2gl16missing_fn_panic17h74aefa71347b4c5eE;
  if (pcVar1 != (code *)0x0) {
    _ZN9alacritty2gl7storage18UniformMatrix3x4fv17h2fa4447ceb0be5fcE._0_8_ = pcVar1;
  }
  _ZN9alacritty2gl7storage18UniformMatrix3x4fv17h2fa4447ceb0be5fcE[8] = pcVar1 != (code *)0x0;
  return;
}