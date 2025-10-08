void _ZN9alacritty2gl14SampleCoverage9load_with17h13fd26f3059e5eabE(undefined8 param_1)

{
  code *pcVar1;
  undefined8 local_10;
  undefined *local_8;
  
  local_8 = &DAT_00986f38;
  local_10 = param_1;
  pcVar1 = (code *)_ZN9alacritty2gl10metaloadfn17h7eed37a2c35596e4E
                             (&local_10,"glSampleCoverage",0x10,&PTR_s_glSampleCoverageARB_00986600,
                              1);
  _ZN9alacritty2gl7storage14SampleCoverage17hae2acd163537c14bE._0_8_ =
       _ZN9alacritty2gl16missing_fn_panic17h74aefa71347b4c5eE;
  if (pcVar1 != (code *)0x0) {
    _ZN9alacritty2gl7storage14SampleCoverage17hae2acd163537c14bE._0_8_ = pcVar1;
  }
  _ZN9alacritty2gl7storage14SampleCoverage17hae2acd163537c14bE[8] = pcVar1 != (code *)0x0;
  return;
}