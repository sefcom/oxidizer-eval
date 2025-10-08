void _ZN9alacritty6config16prune_yaml_nulls17h5299bbbffe0ec2b5E(undefined8 *param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  
  cVar1 = _ZN9alacritty6config16prune_yaml_nulls4walk17hc2d85b513bfb25bcE();
  if (cVar1 != '\0') {
    uVar2 = _ZN3std6thread5local17LocalKey_LT_T_GT_4with17h1712436c6fb8faccE();
    _ZN8indexmap3map25IndexMap_LT_K_C_V_C_S_GT_24with_capacity_and_hasher17had451597c2bab510E
              (&local_50,uVar2);
                    /* try { // try from 00544323 to 0054432a has its CatchHandler @ 0054435d */
    _ZN4core3ptr45drop_in_place_LT_serde_yaml__value__Value_GT_17h9fe2f02f8bf51b64E(param_1);
    param_1[8] = local_10;
    param_1[6] = local_20;
    param_1[7] = uStack_18;
    param_1[4] = local_30;
    param_1[5] = uStack_28;
    param_1[2] = local_40;
    param_1[3] = uStack_38;
    *param_1 = local_50;
    param_1[1] = uStack_48;
  }
  return;
}