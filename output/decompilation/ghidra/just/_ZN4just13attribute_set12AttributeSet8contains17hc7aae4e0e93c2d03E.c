void _ZN4just13attribute_set12AttributeSet8contains17hc7aae4e0e93c2d03E
               (long *param_1,undefined param_2)

{
  undefined uVar1;
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
  uVar1 = _ZN4core4iter6traits8iterator8Iterator8try_fold17hc2a4aa4df753d0a8E(local_48,&local_49);
  _ZN90__LT_core__ops__control_flow__ControlFlow_LT_B_C_C_GT__u20_as_u20_core__cmp__PartialEq_GT_2eq17h31816f8f857b3b2cE
            (uVar1,1);
  return;
}