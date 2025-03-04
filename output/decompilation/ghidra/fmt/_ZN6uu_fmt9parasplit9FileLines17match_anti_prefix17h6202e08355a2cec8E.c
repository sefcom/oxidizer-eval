ulong _ZN6uu_fmt9parasplit9FileLines17match_anti_prefix17h6202e08355a2cec8E
                (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6)

{
  undefined8 in_RAX;
  ulong uVar1;
  
  uVar1 = CONCAT71((int7)((ulong)in_RAX >> 8),1);
  if (*(long *)(param_1 + 0x18) != -0x8000000000000000) {
    uVar1 = _ZN6uu_fmt9parasplit9FileLines20match_prefix_generic17h76346122f467dd36E
                      (*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),param_2,
                       param_3,*(undefined *)(param_1 + 0x4d),param_6,uVar1);
    uVar1 = uVar1 ^ 1;
  }
  return uVar1 & 0xffffffffffffff01;
}