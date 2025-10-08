void _ZN9alacritty2gl18UniformMatrix2x3fv9load_with17h0304bf9f94e88392E(undefined8 param_1)

{
  code *pcVar1;
  undefined8 local_10;
  undefined *local_8;
  
  local_8 = &DAT_00986f38;
  local_10 = param_1;
  pcVar1 = (code *)_ZN9alacritty2gl10metaloadfn17h7eed37a2c35596e4E
                             (&local_10,"glUniformMatrix2x3fv",0x14,
                              &PTR_s_glUniformMatrix2x3fvNV_009868c0,1);
  _ZN9alacritty2gl7storage18UniformMatrix2x3fv17h48456c5aa7afc3bbE._0_8_ =
       _ZN9alacritty2gl16missing_fn_panic17h74aefa71347b4c5eE;
  if (pcVar1 != (code *)0x0) {
    _ZN9alacritty2gl7storage18UniformMatrix2x3fv17h48456c5aa7afc3bbE._0_8_ = pcVar1;
  }
  _ZN9alacritty2gl7storage18UniformMatrix2x3fv17h48456c5aa7afc3bbE[8] = pcVar1 != (code *)0x0;
  return;
}