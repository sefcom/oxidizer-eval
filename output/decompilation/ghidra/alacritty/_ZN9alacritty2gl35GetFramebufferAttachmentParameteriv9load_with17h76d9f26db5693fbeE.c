void _ZN9alacritty2gl35GetFramebufferAttachmentParameteriv9load_with17h76d9f26db5693fbeE
               (undefined8 param_1)

{
  code *pcVar1;
  undefined8 local_10;
  undefined *local_8;
  
  local_8 = &DAT_00986f38;
  local_10 = param_1;
  pcVar1 = (code *)_ZN9alacritty2gl10metaloadfn17h7eed37a2c35596e4E
                             (&local_10,"glGetFramebufferAttachmentParameteriv",0x25,
                              &PTR_s_glGetFramebufferAttachmentParame_009860a0,1);
  _ZN9alacritty2gl7storage35GetFramebufferAttachmentParameteriv17h2298759f0b513c98E._0_8_ =
       _ZN9alacritty2gl16missing_fn_panic17h74aefa71347b4c5eE;
  if (pcVar1 != (code *)0x0) {
    _ZN9alacritty2gl7storage35GetFramebufferAttachmentParameteriv17h2298759f0b513c98E._0_8_ = pcVar1
    ;
  }
  _ZN9alacritty2gl7storage35GetFramebufferAttachmentParameteriv17h2298759f0b513c98E[8] =
       pcVar1 != (code *)0x0;
  return;
}