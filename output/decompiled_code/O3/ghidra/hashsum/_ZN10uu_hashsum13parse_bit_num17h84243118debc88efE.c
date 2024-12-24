undefined * __rustcall uu_hashsum::parse_bit_num(undefined *param_1,char *param_2,ulong param_3)

{
  undefined auVar1 [16];
  ulong uVar2;
  ulong uVar3;
  undefined uVar4;
  ulong uVar5;
  uint uVar6;
  bool bVar7;
  
  if (param_3 == 0) {
    uVar4 = 0;
    goto LAB_002d6d61;
  }
  if (param_3 == 1) {
    uVar4 = 1;
    if ((*param_2 == '+') || (param_3 = 1, *param_2 == '-')) goto LAB_002d6d61;
  }
  else if (*param_2 == '+') {
    param_2 = param_2 + 1;
    uVar3 = param_3 - 1;
    bVar7 = 0x11 < param_3;
    param_3 = uVar3;
    if (bVar7) {
LAB_002d6cdc:
      uVar5 = 0;
      uVar3 = 0;
      do {
        if (param_3 == uVar5) goto LAB_002d6d52;
        auVar1._8_8_ = 0;
        auVar1._0_8_ = uVar3;
        uVar2 = SUB168(auVar1 * ZEXT816(10),0);
        uVar6 = (byte)param_2[uVar5] - 0x30;
        if (9 < uVar6) goto LAB_002d6d5f;
        uVar4 = 2;
        if (SUB168(auVar1 * ZEXT816(10),8) != 0) break;
        uVar5 = uVar5 + 1;
        uVar3 = uVar2 + uVar6;
      } while (!CARRY8(uVar2,(ulong)uVar6));
      goto LAB_002d6d61;
    }
  }
  else if (0x10 < param_3) goto LAB_002d6cdc;
  uVar5 = 0;
  uVar3 = 0;
  while ((byte)param_2[uVar5] - 0x30 < 10) {
    uVar3 = (ulong)((byte)param_2[uVar5] - 0x30) + uVar3 * 10;
    uVar5 = uVar5 + 1;
    if (param_3 == uVar5) {
LAB_002d6d52:
      *(ulong *)(param_1 + 8) = uVar3;
      *param_1 = 0;
      return param_1;
    }
  }
LAB_002d6d5f:
  uVar4 = 1;
LAB_002d6d61:
  param_1[1] = uVar4;
  *param_1 = 1;
  return param_1;
}