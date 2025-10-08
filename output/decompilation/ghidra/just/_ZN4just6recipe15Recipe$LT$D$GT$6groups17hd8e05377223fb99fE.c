void _ZN4just6recipe15Recipe_LT_D_GT_6groups17hd8e05377223fb99fE(undefined8 param_1,long param_2)

{
  ulong local_48 [3];
  undefined8 local_30;
  ulong local_28;
  undefined8 local_20;
  long local_18;
  undefined8 local_10;
  long local_8;
  
  local_48[2] = *(long *)(param_2 + 0xd8);
  local_30 = *(undefined8 *)(param_2 + 0xe0);
  local_48[0] = (ulong)(local_48[2] != 0);
  local_8 = local_48[2];
  if (local_48[2] != 0) {
    local_8 = *(long *)(param_2 + 0xe8);
  }
  local_48[1] = 0;
  local_20 = 0;
  local_28 = local_48[0];
  local_18 = local_48[2];
  local_10 = local_30;
  _ZN4core4iter6traits8iterator8Iterator7collect17hacd0d0c4bf6f330cE(param_1,local_48);
  return;
}