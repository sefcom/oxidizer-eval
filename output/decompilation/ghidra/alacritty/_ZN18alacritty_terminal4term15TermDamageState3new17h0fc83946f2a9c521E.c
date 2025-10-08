undefined8 *
_ZN18alacritty_terminal4term15TermDamageState3new17h0fc83946f2a9c521E
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_40;
  undefined8 *local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  
  local_30 = 0;
  local_38 = &local_40;
  local_40 = param_2;
  local_28 = param_3;
  _ZN4core4iter6traits8iterator8Iterator7collect17h28cc7b857207be39E(&local_20,&local_38);
  *(undefined *)(param_1 + 5) = 1;
  *param_1 = local_20;
  param_1[1] = uStack_18;
  param_1[2] = local_10;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  return param_1;
}