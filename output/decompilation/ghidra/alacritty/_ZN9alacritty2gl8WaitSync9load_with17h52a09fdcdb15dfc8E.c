void _ZN9alacritty2gl8WaitSync9load_with17h52a09fdcdb15dfc8E(undefined8 param_1)

{
  code *pcVar1;
  undefined8 local_10;
  undefined *local_8;
  
  local_8 = &DAT_00986f38;
  local_10 = param_1;
  pcVar1 = (code *)_ZN9alacritty2gl10metaloadfn17h7eed37a2c35596e4E
                             (&local_10,
                              "glWaitSyncgl function was not loaded/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/alacritty/target/release/build/alacritty-dd5734f8dc699607/out/gl_bindings.rs"
                              ,10,&PTR_s_glWaitSyncAPPLE_00986f00,1);
  _ZN9alacritty2gl7storage8WaitSync17hdb64d7a02c99ddccE._0_8_ =
       _ZN9alacritty2gl16missing_fn_panic17h74aefa71347b4c5eE;
  if (pcVar1 != (code *)0x0) {
    _ZN9alacritty2gl7storage8WaitSync17hdb64d7a02c99ddccE._0_8_ = pcVar1;
  }
  _ZN9alacritty2gl7storage8WaitSync17hdb64d7a02c99ddccE[8] = pcVar1 != (code *)0x0;
  return;
}