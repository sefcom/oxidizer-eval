void _ZN9alacritty7display4hint30visible_unique_hyperlinks_iter17h56872e0ca65821a6E
               (undefined8 *param_1,long param_2)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_2 + 0xb8) + -1;
  uVar1 = *(uint *)(param_2 + 200);
  uVar2 = _ZN4core3cmp3Ord3min17h08e004ced85b11ebE
                    (*(int *)(param_2 + 0xc0) + ~uVar1,*(int *)(param_2 + 0xc0) + -1);
  _ZN87__LT_hashbrown__map__HashMap_LT_K_C_V_C_S_C_A_GT__u20_as_u20_core__default__Default_GT_7default17h1264fc145c2ba3a1E
            (param_1 + 9);
  *param_1 = 0;
  param_1[4] = param_2 + 0x28;
  param_1[5] = lVar3;
  *(uint *)(param_1 + 6) = ~uVar1;
  param_1[7] = lVar3;
  *(undefined4 *)(param_1 + 8) = uVar2;
  return;
}