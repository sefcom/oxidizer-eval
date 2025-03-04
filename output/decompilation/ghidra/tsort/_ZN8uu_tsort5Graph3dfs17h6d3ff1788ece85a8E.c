ulong _ZN8uu_tsort5Graph3dfs17h6d3ff1788ece85a8E
                (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                long param_5)

{
  char cVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 unaff_RBP;
  ulong uVar4;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  long local_30;
  
  local_48 = param_2;
  local_40 = param_3;
  cVar1 = _ZN53__LT_T_u20_as_u20_core__slice__cmp__SliceContains_GT_14slice_contains17h42d257bc62dd9328E
                    (&local_48,*(undefined8 *)(param_5 + 8),*(undefined8 *)(param_5 + 0x10));
  uVar4 = CONCAT71((int7)((ulong)unaff_RBP >> 8),1);
  if (cVar1 == '\0') {
    lVar2 = _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_9get_inner17h9808ee5d91771ad7E
                      (param_4,&local_48);
    if (lVar2 == 0) {
      _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_6insert17h2be3e5d0a6b37c2dE
                (param_4,local_48,local_40);
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17hbbd106ac298c97ceE(param_5,local_48,local_40);
      lVar2 = _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_9get_inner17hfa0a63b39f7acc9fE
                        (param_1,local_48,local_40);
      if (lVar2 != 0) {
        local_38 = *(long *)(lVar2 + 0x18);
        local_30 = *(long *)(lVar2 + 0x20) * 0x10 + local_38;
        do {
          puVar3 = (undefined8 *)
                   _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h0c0c46eaf379cb40E
                             (&local_38);
          if (puVar3 == (undefined8 *)0x0) goto LAB_001b6c08;
          cVar1 = _ZN8uu_tsort5Graph3dfs17h6d3ff1788ece85a8E
                            (param_1,*puVar3,puVar3[1],param_4,param_5);
        } while (cVar1 == '\0');
        goto LAB_001b6c1a;
      }
LAB_001b6c08:
      if (*(long *)(param_5 + 0x10) != 0) {
        *(long *)(param_5 + 0x10) = *(long *)(param_5 + 0x10) + -1;
      }
    }
    uVar4 = 0;
  }
LAB_001b6c1a:
  return uVar4 & 0xffffffff;
}