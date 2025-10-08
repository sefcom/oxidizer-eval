undefined  [16]
_ZN4just5error5Error4code17he02be28f49ae8d15E(undefined *param_1,undefined8 param_2,ulong param_3)

{
  undefined auVar1 [16];
  byte bVar2;
  undefined4 uVar3;
  ulong uVar4;
  uint *puVar5;
  int *piVar6;
  undefined auVar7 [16];
  undefined auVar8 [16];
  undefined auVar9 [16];
  undefined auVar10 [16];
  
  uVar4 = 0;
  puVar5 = &switchD_00361e9f::switchdataD_0016a518;
  switch(*param_1) {
  case 3:
    piVar6 = (int *)(param_1 + 0x50);
    bVar2 = 5;
    if ((byte)(param_1[0x58] - 2) < 5) {
      bVar2 = param_1[0x58] - 2;
    }
    if (bVar2 == 0) goto LAB_00361ef4;
    if (bVar2 == 1) goto LAB_00361f00;
    if (bVar2 != 3) {
      return ZEXT816(0x16a518) << 0x40;
    }
    break;
  case 6:
  case 0x14:
    uVar4 = (ulong)((*(uint *)(param_1 + 4) & 0x7f) == 0);
    puVar5 = (uint *)(ulong)(*(uint *)(param_1 + 4) >> 8 & 0xff);
  case 4:
  case 5:
  case 7:
  case 8:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1f:
  case 0x20:
  case 0x21:
  case 0x22:
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2b:
    auVar7._8_8_ = puVar5;
    auVar7._0_8_ = uVar4;
    return auVar7;
  case 9:
    piVar6 = (int *)(param_1 + 4);
LAB_00361ef4:
    auVar9._8_4_ = *piVar6;
    auVar9._0_8_ = 1;
    auVar9._12_4_ = 0;
    return auVar9;
  case 0x1e:
    piVar6 = (int *)(param_1 + 4);
LAB_00361f00:
    uVar3 = _ZN4just6signal6Signal4code17ha56ff543d8ac6eb8E(*piVar6);
    auVar10._8_4_ = uVar3;
    auVar10._0_8_ = 1;
    auVar10._12_4_ = 0;
    return auVar10;
  case 0x2c:
    piVar6 = (int *)(param_1 + 4);
    break;
  default:
    auVar1._8_8_ = 0;
    auVar1._0_8_ = param_3;
    return auVar1 << 0x40;
  }
  auVar8._8_4_ = *piVar6 + 0x80;
  auVar8._1_7_ = 0;
  auVar8[0] = !SBORROW4(*piVar6,-0x80);
  auVar8._12_4_ = 0;
  return auVar8;
}