void _ZN9alacritty2gl16UniformMatrix2fv9load_with17h33795df9c648ec01E(undefined8 param_1)

{
  code *pcVar1;
  undefined8 local_10;
  undefined *local_8;
  
  local_8 = &DAT_00986f38;
  local_10 = param_1;
  pcVar1 = (code *)_ZN9alacritty2gl10metaloadfn17h7eed37a2c35596e4E
                             (&local_10,"glUniformMatrix2fv",0x12,
                              &PTR_s_glUniformMatrix2fvARB_009868b0,1);
  _ZN9alacritty2gl7storage16UniformMatrix2fv17h129e7b9e6799daa9E._0_8_ =
       _ZN9alacritty2gl16missing_fn_panic17h74aefa71347b4c5eE;
  if (pcVar1 != (code *)0x0) {
    _ZN9alacritty2gl7storage16UniformMatrix2fv17h129e7b9e6799daa9E._0_8_ = pcVar1;
  }
  _ZN9alacritty2gl7storage16UniformMatrix2fv17h129e7b9e6799daa9E[8] = pcVar1 != (code *)0x0;
  return;
}