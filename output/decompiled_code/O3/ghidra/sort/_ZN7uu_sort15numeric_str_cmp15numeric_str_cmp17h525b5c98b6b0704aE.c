byte __rustcall uu_sort::numeric_str_cmp::numeric_str_cmp(long *param_1,long *param_2)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  byte bVar4;
  undefined uVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  long local_40;
  long local_38;
  long local_30;
  long local_28;
  
  bVar1 = *(byte *)((long *)param_1[2] + 1);
  bVar4 = *(byte *)((long *)param_2[2] + 1);
  if (bVar1 != bVar4) {
    return -(bVar1 < bVar4) | 1;
  }
  local_40 = *param_1;
  local_30 = *param_2;
  if ((param_2[1] != 0) && (param_1[1] != 0)) {
    lVar2 = *(long *)param_2[2];
    lVar3 = *(long *)param_1[2];
    if (lVar3 != lVar2) {
      bVar9 = lVar3 < lVar2;
      goto LAB_0026082d;
    }
  }
  local_38 = param_1[1] + local_40;
  local_28 = param_2[1] + local_30;
  do {
    uVar7 = core::iter::traits::iterator::Iterator::try_fold(&local_40);
    uVar8 = core::iter::traits::iterator::Iterator::try_fold(&local_30);
    if (uVar7 == 0x110000) {
      if (uVar8 == 0x30) {
        uVar5 = core::iter::traits::iterator::Iterator::try_fold(&local_30);
        cVar6 = _<core::ops::control_flow::ControlFlow<B,C>as_core::cmp::PartialEq>::eq(uVar5);
        if (cVar6 != '\0') {
          return 0;
        }
      }
      else if (uVar8 == 0x110000) {
        return 0;
      }
      if (bVar1 != 0) {
        return 0xff;
      }
      goto LAB_0026088f;
    }
    if (uVar8 == 0x110000) {
      if (uVar7 == 0x30) {
        uVar5 = core::iter::traits::iterator::Iterator::try_fold(&local_40);
        cVar6 = _<core::ops::control_flow::ControlFlow<B,C>as_core::cmp::PartialEq>::eq(uVar5);
        if (cVar6 != '\0') {
          return 0;
        }
      }
      if (bVar1 != 0) {
        return 1;
      }
      goto LAB_0026086a;
    }
  } while (uVar7 == uVar8);
  bVar9 = uVar7 < uVar8;
LAB_0026082d:
  bVar4 = -bVar9 | 1;
  if (bVar1 == 0) {
    if (bVar4 == 0xff) {
LAB_0026088f:
      bVar4 = 1;
    }
    else {
LAB_0026086a:
      bVar4 = 0xff;
    }
  }
  return bVar4;
}