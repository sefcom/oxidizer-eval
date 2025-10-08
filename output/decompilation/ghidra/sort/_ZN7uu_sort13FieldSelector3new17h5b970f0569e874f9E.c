undefined8 *
_ZN7uu_sort13FieldSelector3new17h5b970f0569e874f9E
          (undefined8 *param_1,long *param_2,undefined8 *param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte bVar7;
  uint uVar8;
  bool bVar9;
  bool bVar10;
  
  if (param_2[1] == 0) {
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h1bb0423170e7fa7cE
              (param_1,"invalid character index 0 for the start position of a field",0x3b);
    *(undefined *)((long)param_1 + 0x37) = 2;
    return param_1;
  }
  bVar7 = (byte)((ulong)param_4 >> 0x28);
  uVar3 = (uint)((ulong)param_4 >> 0x20) & 0xff00;
  uVar8 = uVar3 >> 8;
  if (param_2[1] == 1 && *param_2 == 1) {
    if (*(char *)(param_3 + 2) == '\x02') {
      if (1 < bVar7) {
        bVar9 = false;
        bVar10 = false;
        if (*(char *)(param_2 + 2) != '\x01') goto LAB_001d399b;
      }
      bVar9 = uVar3 != 0x200;
      bVar10 = false;
    }
    else {
      bVar9 = uVar8 != 2;
      bVar10 = true;
    }
  }
  else {
    bVar9 = uVar8 != 2;
    bVar10 = true;
    if (*param_2 == 1) {
      bVar10 = *(char *)(param_3 + 2) != '\x02';
    }
  }
LAB_001d399b:
  lVar1 = param_2[2];
  lVar4 = *param_2;
  uVar2 = param_3[2];
  uVar5 = *param_3;
  uVar6 = param_3[1];
  param_1[4] = param_2[1];
  param_1[5] = lVar1;
  *param_1 = uVar5;
  param_1[1] = uVar6;
  param_1[2] = uVar2;
  param_1[3] = lVar4;
  *(char *)((long)param_1 + 0x34) = (char)((ulong)param_4 >> 0x20);
  *(int *)(param_1 + 6) = (int)param_4;
  *(byte *)((long)param_1 + 0x35) = bVar7;
  *(bool *)((long)param_1 + 0x36) = bVar10;
  *(bool *)((long)param_1 + 0x37) = bVar9;
  return param_1;
}