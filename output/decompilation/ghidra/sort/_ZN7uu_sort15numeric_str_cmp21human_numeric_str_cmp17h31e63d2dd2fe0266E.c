ulong _ZN7uu_sort15numeric_str_cmp21human_numeric_str_cmp17h31e63d2dd2fe0266E
                (long *param_1,long *param_2)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  uint *puVar6;
  ulong uVar7;
  byte bVar8;
  byte bVar9;
  bool bVar10;
  bool bVar11;
  undefined auVar12 [12];
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
  bVar9 = *(byte *)(lVar3 + 8);
  if (bVar1 != bVar9) {
    return (ulong)(byte)((bVar9 < bVar1) - (bVar1 < bVar9));
  }
  lVar4 = *param_1;
  local_50 = param_1[1];
  lVar5 = *param_2;
  local_58 = param_2[1];
  local_68 = lVar4 + local_50;
  local_70 = lVar4;
  auVar12 = _ZN4core3str11validations23next_code_point_reverse17hc36367225bc4deebE(&local_70);
  bVar9 = 0;
  if ((auVar12 & (undefined  [12])0x1) != (undefined  [12])0x0) {
    bVar9 = 0;
    switch(auVar12._8_4_) {
    case 0x45:
      bVar9 = 6;
      break;
    case 0x47:
      bVar9 = 3;
      break;
    case 0x4b:
    case 0x6b:
      bVar9 = 1;
      break;
    case 0x4d:
      bVar9 = 2;
      break;
    case 0x50:
      bVar9 = 5;
      break;
    case 0x51:
      bVar9 = 10;
      break;
    case 0x52:
      bVar9 = 9;
      break;
    case 0x54:
      bVar9 = 4;
      break;
    case 0x59:
      bVar9 = 8;
      break;
    case 0x5a:
      bVar9 = 7;
    }
  }
  local_68 = local_58 + lVar5;
  local_70 = lVar5;
  auVar12 = _ZN4core3str11validations23next_code_point_reverse17hc36367225bc4deebE(&local_70);
  puVar6 = auVar12._0_8_;
  bVar8 = 0;
  if ((auVar12 & (undefined  [12])0x1) == (undefined  [12])0x0) goto switchD_001cf73c_caseD_46;
  puVar6 = &switchD_001cf73c::switchdataD_001289ec;
  switch(auVar12._8_4_) {
  case 0x45:
    bVar8 = 6;
    bVar10 = bVar9 < 6;
    bVar11 = bVar9 == 6;
    if (!bVar11) break;
    goto LAB_001cf790;
  case 0x47:
    bVar8 = 3;
    bVar10 = bVar9 < 3;
    bVar11 = bVar9 == 3;
    if (bVar11) goto LAB_001cf790;
    break;
  case 0x4b:
  case 0x6b:
    bVar8 = 1;
    bVar10 = bVar9 == 0;
    bVar11 = bVar9 == 1;
    goto joined_r0x001cf77c;
  case 0x4d:
    bVar8 = 2;
    bVar10 = bVar9 < 2;
    bVar11 = bVar9 == 2;
joined_r0x001cf77c:
    if (bVar11) goto LAB_001cf790;
    break;
  case 0x50:
    bVar8 = 5;
    bVar10 = bVar9 < 5;
    bVar11 = bVar9 == 5;
    goto joined_r0x001cf758;
  case 0x51:
    bVar8 = 10;
    bVar10 = bVar9 < 10;
    bVar11 = bVar9 == 10;
joined_r0x001cf758:
    if (bVar11) goto LAB_001cf790;
    break;
  case 0x52:
    bVar8 = 9;
  default:
switchD_001cf73c_caseD_46:
    bVar10 = bVar9 < bVar8;
    bVar11 = bVar9 == bVar8;
joined_r0x001cf761:
    if (bVar11) {
LAB_001cf790:
      local_40 = local_50;
      local_68 = local_58;
      local_70 = lVar5;
      local_60 = lVar3;
      local_48 = lVar4;
      local_38 = lVar2;
      uVar7 = _ZN7uu_sort15numeric_str_cmp15numeric_str_cmp17h793f6b597e9f6768E(&local_48,&local_70)
      ;
      return uVar7;
    }
    break;
  case 0x54:
    bVar8 = 4;
    bVar10 = bVar9 < 4;
    bVar11 = bVar9 == 4;
    goto joined_r0x001cf7ce;
  case 0x59:
    bVar8 = 8;
    bVar10 = bVar9 < 8;
    bVar11 = bVar9 == 8;
joined_r0x001cf7ce:
    if (bVar11) goto LAB_001cf790;
    break;
  case 0x5a:
    bVar8 = 7;
    bVar10 = bVar9 < 7;
    bVar11 = bVar9 == 7;
    goto joined_r0x001cf761;
  }
  uVar7 = CONCAT71((int7)((ulong)puVar6 >> 8),(!bVar10 && !bVar11) - bVar10);
  if (bVar1 == 0) {
    uVar7 = (ulong)(byte)((bVar9 < bVar8) - 1) | 1;
  }
  return uVar7;
}