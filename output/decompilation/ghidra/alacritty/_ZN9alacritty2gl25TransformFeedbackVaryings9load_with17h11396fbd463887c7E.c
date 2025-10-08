void _ZN9alacritty2gl25TransformFeedbackVaryings9load_with17h11396fbd463887c7E(undefined8 param_1)

{
  code *pcVar1;
  undefined8 local_10;
  undefined *local_8;
  
  local_8 = &DAT_00986f38;
  local_10 = param_1;
  pcVar1 = (code *)_ZN9alacritty2gl10metaloadfn17h7eed37a2c35596e4E
                             (&local_10,"glTransformFeedbackVaryings",0x1b,
                              &PTR_s_glTransformFeedbackVaryingsEXT_00986720,1);
  _ZN9alacritty2gl7storage25TransformFeedbackVaryings17h9d8d51e8d2d61abeE._0_8_ =
       _ZN9alacritty2gl16missing_fn_panic17h74aefa71347b4c5eE;
  if (pcVar1 != (code *)0x0) {
    _ZN9alacritty2gl7storage25TransformFeedbackVaryings17h9d8d51e8d2d61abeE._0_8_ = pcVar1;
  }
  _ZN9alacritty2gl7storage25TransformFeedbackVaryings17h9d8d51e8d2d61abeE[8] = pcVar1 != (code *)0x0
  ;
  return;
}