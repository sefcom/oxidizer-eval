void _ZN4just13attribute_set12AttributeSet3get17h29ad4fd4e40977f3E(long *param_1,undefined param_2)

{
  undefined local_49;
  ulong local_48 [3];
  long local_30;
  ulong local_28;
  undefined8 local_20;
  long local_18;
  long local_10;
  long local_8;
  
  local_48[2] = *param_1;
  local_30 = param_1[1];
  local_48[0] = (ulong)(local_48[2] != 0);
  local_8 = local_48[2];
  if (local_48[2] != 0) {
    local_8 = param_1[2];
  }
  local_48[1] = 0;
  local_20 = 0;
  local_49 = param_2;
  local_28 = local_48[0];
  local_18 = local_48[2];
  local_10 = local_30;
  _ZN4core4iter6traits8iterator8Iterator8try_fold17h16e498bcf7328724E(local_48,&local_49);
  return;
}