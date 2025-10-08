long _ZN4just6recipe15Recipe_LT_D_GT_3doc17he63458a2ff4e69a8E(long param_1)

{
  long *plVar1;
  long lVar2;
  ulong local_60 [3];
  undefined8 local_48;
  ulong local_40;
  undefined8 local_38;
  long local_30;
  undefined8 local_28;
  long local_20;
  
  local_60[2] = *(long *)(param_1 + 0xd8);
  local_48 = *(undefined8 *)(param_1 + 0xe0);
  local_60[0] = (ulong)(local_60[2] != 0);
  local_20 = local_60[2];
  if (local_60[2] != 0) {
    local_20 = *(long *)(param_1 + 0xe8);
  }
  local_60[1] = 0;
  local_38 = 0;
  local_40 = local_60[0];
  local_30 = local_60[2];
  local_28 = local_48;
  do {
    plVar1 = (long *)_ZN108__LT_alloc__collections__btree__map__Iter_LT_K_C_V_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h0a90991eb32c0f01E
                               (local_60);
    if (plVar1 == (long *)0x0) {
      if (*(long *)(param_1 + 0x60) != -0x8000000000000000) {
        return *(long *)(param_1 + 0x68);
      }
      return 0;
    }
  } while (*plVar1 != -0x7ffffffffffffffd);
  if (plVar1[1] == -0x8000000000000000) {
    lVar2 = 0;
  }
  else {
    lVar2 = plVar1[2];
  }
  return lVar2;
}