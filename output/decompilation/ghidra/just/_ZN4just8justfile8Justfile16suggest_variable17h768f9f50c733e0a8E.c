void _ZN4just8justfile8Justfile16suggest_variable17h768f9f50c733e0a8E
               (undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  ulong local_48 [3];
  undefined8 local_30;
  ulong local_28;
  undefined8 local_20;
  long local_18;
  undefined8 local_10;
  long local_8;
  
  local_48[2] = *(long *)(param_2 + 0x280);
  local_30 = *(undefined8 *)(param_2 + 0x288);
  local_48[0] = (ulong)(local_48[2] != 0);
  local_8 = local_48[2];
  if (local_48[2] != 0) {
    local_8 = *(long *)(param_2 + 0x290);
  }
  local_48[1] = 0;
  local_20 = 0;
  local_28 = local_48[0];
  local_18 = local_48[2];
  local_10 = local_30;
  _ZN4just8justfile8Justfile15find_suggestion17h616685109ae1a9e2E(param_1,param_3,param_4,local_48);
  return;
}