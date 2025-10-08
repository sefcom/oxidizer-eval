void _ZN9alacritty2gl15PointParameteri9load_with17h509f55ace9929845E(undefined8 param_1)

{
  code *pcVar1;
  undefined8 local_10;
  undefined *local_8;
  
  local_8 = &DAT_00986f38;
  local_10 = param_1;
  pcVar1 = (code *)_ZN9alacritty2gl10metaloadfn17h7eed37a2c35596e4E
                             (&local_10,"glPointParameteri",0x11,&PTR_s_glPointParameteriNV_00986530
                              ,1);
  _ZN9alacritty2gl7storage15PointParameteri17h0c69691cd7477b40E._0_8_ =
       _ZN9alacritty2gl16missing_fn_panic17h74aefa71347b4c5eE;
  if (pcVar1 != (code *)0x0) {
    _ZN9alacritty2gl7storage15PointParameteri17h0c69691cd7477b40E._0_8_ = pcVar1;
  }
  _ZN9alacritty2gl7storage15PointParameteri17h0c69691cd7477b40E[8] = pcVar1 != (code *)0x0;
  return;
}