ulong _ZN7uu_sort15numeric_str_cmp15numeric_str_cmp17h793f6b597e9f6768E(long *param_1,long *param_2)

{
  byte bVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  byte bVar5;
  undefined uVar6;
  char cVar7;
  byte bVar8;
  uint uVar9;
  uint uVar10;
  long local_40;
  long local_38;
  long local_30;
  long local_28;
  
  plVar2 = (long *)param_1[2];
  bVar1 = *(byte *)(plVar2 + 1);
  bVar5 = *(byte *)((long *)param_2[2] + 1);
  if (bVar1 != bVar5) {
    return CONCAT71((int7)((ulong)plVar2 >> 8),(bVar5 < bVar1) - (bVar1 < bVar5));
  }
  local_40 = *param_1;
  local_30 = *param_2;
  if ((param_2[1] != 0) && (param_1[1] != 0)) {
    lVar3 = *(long *)param_2[2];
    lVar4 = *plVar2;
    if (lVar4 != lVar3) {
      bVar5 = (lVar3 < lVar4) - (lVar4 < lVar3);
      goto LAB_001cf901;
    }
  }
  local_38 = param_1[1] + local_40;
  local_28 = param_2[1] + local_30;
  do {
    uVar9 = _ZN4core4iter6traits8iterator8Iterator8try_fold17hc8d8c18dde86c3eeE(&local_40);
    uVar10 = _ZN4core4iter6traits8iterator8Iterator8try_fold17hc8d8c18dde86c3eeE(&local_30);
    if (uVar9 == 0x110000) {
      if (uVar10 == 0x30) {
        uVar6 = _ZN4core4iter6traits8iterator8Iterator8try_fold17h075f228b849c1b87E(&local_30);
        cVar7 = _ZN90__LT_core__ops__control_flow__ControlFlow_LT_B_C_C_GT__u20_as_u20_core__cmp__PartialEq_GT_2eq17hbebb28a7d7095561E
                          (uVar6);
        if (cVar7 == '\0') goto LAB_001cf8ff;
      }
      else if (uVar10 != 0x110000) {
LAB_001cf8ff:
        bVar5 = 0xff;
        goto LAB_001cf901;
      }
      bVar5 = 0;
      goto LAB_001cf901;
    }
    if (uVar10 == 0x110000) {
      bVar5 = 1;
      if (uVar9 == 0x30) {
        uVar6 = _ZN4core4iter6traits8iterator8Iterator8try_fold17h075f228b849c1b87E(&local_40);
        bVar5 = _ZN90__LT_core__ops__control_flow__ControlFlow_LT_B_C_C_GT__u20_as_u20_core__cmp__PartialEq_GT_2eq17hbebb28a7d7095561E
                          (uVar6);
        bVar5 = bVar5 ^ 1;
      }
      goto LAB_001cf901;
    }
  } while (uVar9 == uVar10);
  bVar5 = (uVar9 >= uVar10 && uVar9 != uVar10) - (uVar9 < uVar10);
LAB_001cf901:
  bVar8 = -bVar5;
  if (bVar1 != 0) {
    bVar8 = bVar5;
  }
  return (ulong)bVar8;
}