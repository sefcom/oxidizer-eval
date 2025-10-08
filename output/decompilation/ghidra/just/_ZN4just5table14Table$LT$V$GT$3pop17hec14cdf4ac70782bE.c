void _ZN4just5table14Table_LT_V_GT_3pop17hec14cdf4ac70782bE(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  ulong local_58 [3];
  long local_40;
  ulong local_38;
  undefined8 local_30;
  long local_28;
  long local_20;
  long local_18;
  
  local_58[2] = *param_2;
  local_40 = param_2[1];
  local_58[0] = (ulong)(local_58[2] != 0);
  local_18 = local_58[2];
  if (local_58[2] != 0) {
    local_18 = param_2[2];
  }
  local_58[1] = 0;
  local_30 = 0;
  local_38 = local_58[0];
  local_28 = local_58[2];
  local_20 = local_40;
  puVar1 = (undefined8 *)
           _ZN108__LT_alloc__collections__btree__map__Iter_LT_K_C_V_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h14e1fe8b40fe0f41E
                     (local_58);
  if (puVar1 != (undefined8 *)0x0) {
    _ZN5alloc11collections5btree3map25BTreeMap_LT_K_C_V_C_A_GT_6remove17hd5ced7b6bb659888E
              (param_1,param_2,*puVar1,puVar1[1]);
    return;
  }
  *param_1 = 0x8000000000000000;
  return;
}