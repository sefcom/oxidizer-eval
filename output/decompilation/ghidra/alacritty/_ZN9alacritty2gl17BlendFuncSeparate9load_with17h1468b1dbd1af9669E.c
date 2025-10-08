void _ZN9alacritty2gl17BlendFuncSeparate9load_with17h1468b1dbd1af9669E(undefined8 param_1)

{
  code *pcVar1;
  undefined8 local_10;
  undefined *local_8;
  
  local_8 = &DAT_00986f38;
  local_10 = param_1;
  pcVar1 = (code *)_ZN9alacritty2gl10metaloadfn17h7eed37a2c35596e4E
                             (&local_10,"glBlendFuncSeparate",0x13,
                              &PTR_s_glBlendFuncSeparateEXTglBlendFun_009859f0,2);
  _ZN9alacritty2gl7storage17BlendFuncSeparate17h7d481c558c32e51cE_0 =
       _ZN9alacritty2gl16missing_fn_panic17h74aefa71347b4c5eE;
  if (pcVar1 != (code *)0x0) {
    _ZN9alacritty2gl7storage17BlendFuncSeparate17h7d481c558c32e51cE_0 = pcVar1;
  }
  return;
}