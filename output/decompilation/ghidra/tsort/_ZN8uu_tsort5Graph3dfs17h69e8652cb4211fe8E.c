ulong _ZN8uu_tsort5Graph3dfs17h69e8652cb4211fe8E
                (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  char cVar1;
  long lVar2;
  undefined8 unaff_RBP;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 local_40;
  undefined8 local_38;
  
  local_40 = param_2;
  local_38 = param_3;
  cVar1 = _ZN53__LT_T_u20_as_u20_core__slice__cmp__SliceContains_GT_14slice_contains17h3d22f1d0f2c6fda7E
                    (&local_40,*(undefined8 *)(param_5 + 8),*(undefined8 *)(param_5 + 0x10));
  uVar3 = CONCAT71((int7)((ulong)unaff_RBP >> 8),1);
  if (cVar1 == '\0') {
    lVar2 = _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_9get_inner17h0d0bb528157eeff4E
                      (param_4,&local_40);
    if (lVar2 == 0) {
      _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_6insert17h9e44a592f6310d68E
                (param_4,local_40,local_38);
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17hc06cf8efd6ffa662E
                (param_5,local_40,local_38,&PTR_s_src_uu_tsort_src_tsort_001eb450);
      lVar2 = _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_9get_inner17hbf23ef7421c68646E
                        (param_1 + 0x18,local_40,local_38);
      if ((lVar2 != 0) && (*(long *)(lVar2 + 0x20) != 0)) {
        puVar5 = *(undefined8 **)(lVar2 + 0x18);
        puVar4 = puVar5 + *(long *)(lVar2 + 0x20) * 2;
        do {
          cVar1 = _ZN8uu_tsort5Graph3dfs17h69e8652cb4211fe8E
                            (param_1,*puVar5,puVar5[1],param_4,param_5);
          if (cVar1 != '\0') goto LAB_00160b15;
          puVar5 = puVar5 + 2;
        } while (puVar5 != puVar4);
      }
      if (*(long *)(param_5 + 0x10) != 0) {
        *(long *)(param_5 + 0x10) = *(long *)(param_5 + 0x10) + -1;
      }
    }
    uVar3 = 0;
  }
LAB_00160b15:
  return uVar3 & 0xffffffff;
}