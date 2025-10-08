void _ZN9alacritty2gl9IsSampler9load_with17h6516035f4a29bc26E(undefined8 param_1)

{
  code *pcVar1;
  undefined8 local_10;
  undefined *local_8;
  
  local_8 = &DAT_00986f38;
  local_10 = param_1;
  pcVar1 = (code *)_ZN9alacritty2gl10metaloadfn17h7eed37a2c35596e4E(&local_10,"glIsSampler",0xb,8,0)
  ;
  _ZN9alacritty2gl7storage9IsSampler17h58fc99206a81bb7fE._0_8_ =
       _ZN9alacritty2gl16missing_fn_panic17h74aefa71347b4c5eE;
  if (pcVar1 != (code *)0x0) {
    _ZN9alacritty2gl7storage9IsSampler17h58fc99206a81bb7fE._0_8_ = pcVar1;
  }
  _ZN9alacritty2gl7storage9IsSampler17h58fc99206a81bb7fE[8] = pcVar1 != (code *)0x0;
  return;
}