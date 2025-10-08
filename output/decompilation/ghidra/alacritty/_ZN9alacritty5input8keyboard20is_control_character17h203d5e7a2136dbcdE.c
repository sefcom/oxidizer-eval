undefined8
_ZN9alacritty5input8keyboard20is_control_character17h203d5e7a2136dbcdE(byte param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 != 1) {
    return 0;
  }
  if (param_1 < 0x20) {
    return 1;
  }
  uVar1 = _ZN4core3ops5range11RangeBounds8contains17hd1bbb23183ae382dE(param_1);
  return uVar1;
}