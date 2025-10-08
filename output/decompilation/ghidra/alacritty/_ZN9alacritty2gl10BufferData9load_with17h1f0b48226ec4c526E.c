void _ZN9alacritty2gl10BufferData9load_with17h1f0b48226ec4c526E(undefined8 param_1)

{
  code *pcVar1;
  undefined8 local_10;
  undefined *local_8;
  
  local_8 = &DAT_00986f38;
  local_10 = param_1;
  pcVar1 = (code *)_ZN9alacritty2gl10metaloadfn17h7eed37a2c35596e4E
                             (&local_10,"glBufferData",0xc,&PTR_s_glBufferDataARB_00985a30,1);
  _ZN9alacritty2gl7storage10BufferData17hb67d49aaaf64b9deE_0 =
       _ZN9alacritty2gl16missing_fn_panic17h74aefa71347b4c5eE;
  if (pcVar1 != (code *)0x0) {
    _ZN9alacritty2gl7storage10BufferData17hb67d49aaaf64b9deE_0 = pcVar1;
  }
  return;
}