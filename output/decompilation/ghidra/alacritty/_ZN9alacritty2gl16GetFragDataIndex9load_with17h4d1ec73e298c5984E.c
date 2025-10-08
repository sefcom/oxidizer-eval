void _ZN9alacritty2gl16GetFragDataIndex9load_with17h4d1ec73e298c5984E(undefined8 param_1)

{
  code *pcVar1;
  undefined8 local_10;
  undefined *local_8;
  
  local_8 = &DAT_00986f38;
  local_10 = param_1;
  pcVar1 = (code *)_ZN9alacritty2gl10metaloadfn17h7eed37a2c35596e4E
                             (&local_10,"glGetFragDataIndex",0x12,
                              &PTR_s_glGetFragDataIndexEXT_00986080,1);
  _ZN9alacritty2gl7storage16GetFragDataIndex17hb8e65a357f7fec3bE._0_8_ =
       _ZN9alacritty2gl16missing_fn_panic17h74aefa71347b4c5eE;
  if (pcVar1 != (code *)0x0) {
    _ZN9alacritty2gl7storage16GetFragDataIndex17hb8e65a357f7fec3bE._0_8_ = pcVar1;
  }
  _ZN9alacritty2gl7storage16GetFragDataIndex17hb8e65a357f7fec3bE[8] = pcVar1 != (code *)0x0;
  return;
}