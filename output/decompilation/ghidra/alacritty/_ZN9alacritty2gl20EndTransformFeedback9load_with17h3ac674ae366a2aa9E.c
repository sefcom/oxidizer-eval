void _ZN9alacritty2gl20EndTransformFeedback9load_with17h3ac674ae366a2aa9E(undefined8 param_1)

{
  code *pcVar1;
  undefined8 local_10;
  undefined *local_8;
  
  local_8 = &DAT_00986f38;
  local_10 = param_1;
  pcVar1 = (code *)_ZN9alacritty2gl10metaloadfn17h7eed37a2c35596e4E
                             (&local_10,"glEndTransformFeedback",0x16,
                              &PTR_s_glEndTransformFeedbackEXTglEndTr_00985e80,2);
  _ZN9alacritty2gl7storage20EndTransformFeedback17hb9336a18505677e2E._0_8_ =
       _ZN9alacritty2gl16missing_fn_panic17h74aefa71347b4c5eE;
  if (pcVar1 != (code *)0x0) {
    _ZN9alacritty2gl7storage20EndTransformFeedback17hb9336a18505677e2E._0_8_ = pcVar1;
  }
  _ZN9alacritty2gl7storage20EndTransformFeedback17hb9336a18505677e2E[8] = pcVar1 != (code *)0x0;
  return;
}