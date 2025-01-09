undefined8 * __rustcall
uu_sort::FieldSelector::new
          (undefined8 *param_1,long *param_2,undefined8 *param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte bVar7;
  bool bVar8;
  uint uVar9;
  char cVar10;
  bool bVar11;
  
  if (param_2[1] == 0) {
    _<T_as_alloc::slice::hack::ConvertVec>::to_vec
              (param_1,"invalid character index 0 for the start position of a field",0x3b);
    *(undefined *)((long)param_1 + 0x37) = 2;
  }
  else {
    bVar7 = (byte)((ulong)param_4 >> 0x28);
    uVar3 = (uint)((ulong)param_4 >> 0x20) & 0xff00;
    uVar9 = uVar3 >> 8;
    if (*param_2 == 1) {
      if (param_2[1] == 1) {
        cVar10 = *(char *)(param_3 + 2);
        bVar8 = uVar3 != 0x200 &&
                ((cVar10 != '\x02' || *(char *)(param_2 + 2) != '\0') || bVar7 < 2);
      }
      else {
        bVar8 = uVar9 != 2;
        cVar10 = *(char *)(param_3 + 2);
      }
      bVar11 = cVar10 != '\x02';
    }
    else {
      bVar8 = uVar9 != 2;
      bVar11 = true;
    }
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
    *(bool *)((long)param_1 + 0x36) = bVar11;
    *(bool *)((long)param_1 + 0x37) = bVar8;
  }
  return param_1;
}