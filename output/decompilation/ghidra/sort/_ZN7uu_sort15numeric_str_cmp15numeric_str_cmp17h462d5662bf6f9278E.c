uint __rustcall uu_sort::numeric_str_cmp::numeric_str_cmp(long *param_1,long *param_2)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  byte bVar4;
  byte bVar5;
  undefined uVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  long local_40;
  long local_38;
  long local_30;
  long local_28;
  
  bVar1 = *(byte *)((long *)param_1[2] + 1);
  bVar4 = *(byte *)((long *)param_2[2] + 1);
  if (bVar1 != bVar4) {
    return -(uint)(bVar1 < bVar4) | 1;
  }
  local_40 = *param_1;
  local_30 = *param_2;
  if ((param_2[1] != 0) && (param_1[1] != 0)) {
    lVar2 = *(long *)param_2[2];
    lVar3 = *(long *)param_1[2];
    if (lVar3 != lVar2) {
      bVar10 = lVar3 < lVar2;
      goto LAB_00270e5d;
    }
  }
  local_38 = param_1[1] + local_40;
  local_28 = param_2[1] + local_30;
  do {
    uVar8 = core::iter::traits::iterator::Iterator::try_fold(&local_40);
    uVar9 = core::iter::traits::iterator::Iterator::try_fold(&local_30);
    if (uVar8 == 0x110000) {
      if (uVar9 == 0x30) {
        uVar6 = core::iter::traits::iterator::Iterator::try_fold(&local_30);
        cVar7 = _<core::ops::control_flow::ControlFlow<B,C>as_core::cmp::PartialEq>::eq(uVar6);
        if (cVar7 == '\0') goto LAB_00270ebb;
      }
      else if (uVar9 != 0x110000) {
LAB_00270ebb:
        bVar4 = 0xff;
        goto LAB_00270e5f;
      }
      bVar4 = 0;
      goto LAB_00270e5f;
    }
    if (uVar9 == 0x110000) {
      bVar4 = 1;
      if (uVar8 == 0x30) {
        uVar6 = core::iter::traits::iterator::Iterator::try_fold(&local_40);
        bVar4 = _<core::ops::control_flow::ControlFlow<B,C>as_core::cmp::PartialEq>::eq(uVar6);
        bVar4 = bVar4 ^ 1;
      }
      goto LAB_00270e5f;
    }
  } while (uVar8 == uVar9);
  bVar10 = uVar8 < uVar9;
LAB_00270e5d:
  bVar4 = -bVar10 | 1;
LAB_00270e5f:
  bVar5 = -bVar4;
  if (bVar1 != 0) {
    bVar5 = bVar4;
  }
  return (uint)bVar5;
}