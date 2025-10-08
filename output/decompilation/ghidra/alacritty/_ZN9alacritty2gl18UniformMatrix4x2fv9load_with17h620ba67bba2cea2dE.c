void _ZN9alacritty2gl18UniformMatrix4x2fv9load_with17h620ba67bba2cea2dE(undefined8 param_1)

{
  code *pcVar1;
  undefined8 local_10;
  undefined *local_8;
  
  local_8 = &DAT_00986f38;
  local_10 = param_1;
  pcVar1 = (code *)_ZN9alacritty2gl10metaloadfn17h7eed37a2c35596e4E
                             (&local_10,"glUniformMatrix4x2fv",0x14,
                              &PTR_s_glUniformMatrix4x2fvNV_00986920,1);
  _ZN9alacritty2gl7storage18UniformMatrix4x2fv17hefe84c8ef9679cdfE._0_8_ =
       _ZN9alacritty2gl16missing_fn_panic17h74aefa71347b4c5eE;
  if (pcVar1 != (code *)0x0) {
    _ZN9alacritty2gl7storage18UniformMatrix4x2fv17hefe84c8ef9679cdfE._0_8_ = pcVar1;
  }
  _ZN9alacritty2gl7storage18UniformMatrix4x2fv17hefe84c8ef9679cdfE[8] = pcVar1 != (code *)0x0;
  return;
}