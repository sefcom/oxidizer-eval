void _ZN7uu_shuf20NonrepeatingIterator3new17hc2770fdf8c909180E
               (long param_1,ulong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  if (uVar2 < uVar1) {
    param_4 = 0;
  }
  else if (((uVar1 != 0) || (uVar2 != 0xffffffffffffffff)) || ((*(byte *)(param_2 + 2) & 1) != 0)) {
    param_4 = _ZN4core3cmp3Ord3min17h3622a8f04b6ad4c5E(param_4,(uVar2 - uVar1) + 1);
  }
  _ZN87__LT_hashbrown__map__HashMap_LT_K_C_V_C_S_C_A_GT__u20_as_u20_core__default__Default_GT_7default17h2c61f77ef3103939E
            (param_1);
  *(ulong *)(param_1 + 0x50) = param_2[2];
  uVar1 = param_2[1];
  *(ulong *)(param_1 + 0x40) = *param_2;
  *(ulong *)(param_1 + 0x48) = uVar1;
  *(undefined8 *)(param_1 + 0x38) = param_3;
  *(undefined8 *)(param_1 + 0x30) = param_4;
  return;
}