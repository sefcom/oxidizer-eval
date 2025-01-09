ulong __rustcall uu_sort::numeric_str_cmp::human_numeric_str_cmp(long *param_1,long *param_2)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  byte bVar6;
  byte bVar7;
  int iVar8;
  ulong uVar9;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  byte bVar10;
  long local_70;
  long local_68;
  long local_60;
  long local_58;
  long local_50;
  long local_48;
  long local_40;
  long local_38;
  
  lVar2 = param_1[2];
  lVar3 = param_2[2];
  bVar1 = *(byte *)(lVar2 + 8);
  bVar10 = *(byte *)(lVar3 + 8);
  if (bVar1 == bVar10) {
    lVar4 = *param_1;
    local_50 = param_1[1];
    lVar5 = *param_2;
    local_58 = param_2[1];
    local_68 = lVar4 + local_50;
    local_70 = lVar4;
    iVar8 = core::str::validations::next_code_point_reverse(&local_70);
    bVar10 = 0;
    if (iVar8 != 0) {
      bVar10 = 0;
      switch(extraout_EDX) {
      case 0x45:
        bVar10 = 6;
        break;
      case 0x47:
        bVar10 = 3;
        break;
      case 0x4b:
      case 0x6b:
        bVar10 = 1;
        break;
      case 0x4d:
        bVar10 = 2;
        break;
      case 0x50:
        bVar10 = 5;
        break;
      case 0x54:
        bVar10 = 4;
        break;
      case 0x59:
        bVar10 = 8;
        break;
      case 0x5a:
        bVar10 = 7;
      }
    }
    local_68 = local_58 + lVar5;
    local_70 = lVar5;
    iVar8 = core::str::validations::next_code_point_reverse(&local_70);
    if (iVar8 == 0) {
      bVar6 = 0;
    }
    else {
      bVar6 = 0;
      switch(extraout_EDX_00) {
      case 0x45:
        bVar6 = 6;
        break;
      case 0x47:
        bVar6 = 3;
        break;
      case 0x4b:
      case 0x6b:
        bVar6 = 1;
        break;
      case 0x4d:
        bVar6 = 2;
        break;
      case 0x50:
        bVar6 = 5;
        break;
      case 0x54:
        bVar6 = 4;
        break;
      case 0x59:
        bVar6 = 8;
        break;
      case 0x5a:
        bVar6 = 7;
      }
    }
    bVar7 = 0xff;
    if (bVar6 <= bVar10) {
      bVar7 = bVar10 != bVar6;
    }
    if (bVar7 == 0) {
      local_40 = local_50;
      local_68 = local_58;
      local_70 = lVar5;
      local_60 = lVar3;
      local_48 = lVar4;
      local_38 = lVar2;
      uVar9 = numeric_str_cmp(&local_48,&local_70);
    }
    else {
      bVar10 = -bVar7;
      if (bVar1 != 0) {
        bVar10 = bVar7;
      }
      uVar9 = (ulong)bVar10;
    }
  }
  else {
    uVar9 = (ulong)-(uint)(bVar1 < bVar10) | 1;
  }
  return uVar9;
}