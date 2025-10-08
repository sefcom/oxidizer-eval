void _ZN9alacritty2gl18UniformMatrix2x4fv9load_with17hf0430bb648ff406bE(undefined8 param_1)

{
  code *pcVar1;
  undefined8 local_10;
  undefined *local_8;
  
  local_8 = &DAT_00986f38;
  local_10 = param_1;
  pcVar1 = (code *)_ZN9alacritty2gl10metaloadfn17h7eed37a2c35596e4E
                             (&local_10,"glUniformMatrix2x4fv",0x14,
                              &PTR_s_glUniformMatrix2x4fvNV_009868d0,1);
  _ZN9alacritty2gl7storage18UniformMatrix2x4fv17haadd51aaa1e3718dE._0_8_ =
       _ZN9alacritty2gl16missing_fn_panic17h74aefa71347b4c5eE;
  if (pcVar1 != (code *)0x0) {
    _ZN9alacritty2gl7storage18UniformMatrix2x4fv17haadd51aaa1e3718dE._0_8_ = pcVar1;
  }
  _ZN9alacritty2gl7storage18UniformMatrix2x4fv17haadd51aaa1e3718dE[8] = pcVar1 != (code *)0x0;
  return;
}