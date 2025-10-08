void _ZN4just5error5Error7context17hf9a8390aaa277de3E(undefined4 *param_1,undefined *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  
  switch(*param_2) {
  case 0:
  case 3:
  case 0x19:
  case 0x21:
  case 0x22:
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x48);
    uVar1 = *(undefined4 *)(param_2 + 8);
    uVar2 = *(undefined4 *)(param_2 + 0xc);
    uVar3 = *(undefined4 *)(param_2 + 0x10);
    uVar4 = *(undefined4 *)(param_2 + 0x14);
    uVar5 = *(undefined4 *)(param_2 + 0x18);
    uVar6 = *(undefined4 *)(param_2 + 0x1c);
    uVar7 = *(undefined4 *)(param_2 + 0x20);
    uVar8 = *(undefined4 *)(param_2 + 0x24);
    uVar9 = *(undefined4 *)(param_2 + 0x28);
    uVar10 = *(undefined4 *)(param_2 + 0x2c);
    uVar11 = *(undefined4 *)(param_2 + 0x30);
    uVar12 = *(undefined4 *)(param_2 + 0x34);
    uVar13 = *(undefined4 *)(param_2 + 0x38);
    uVar14 = *(undefined4 *)(param_2 + 0x3c);
    uVar15 = *(undefined4 *)(param_2 + 0x40);
    uVar16 = *(undefined4 *)(param_2 + 0x44);
    break;
  default:
    *(undefined *)(param_1 + 0x10) = 0x25;
    return;
  case 0xc:
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x50);
    uVar1 = *(undefined4 *)(param_2 + 0x10);
    uVar2 = *(undefined4 *)(param_2 + 0x14);
    uVar3 = *(undefined4 *)(param_2 + 0x18);
    uVar4 = *(undefined4 *)(param_2 + 0x1c);
    uVar5 = *(undefined4 *)(param_2 + 0x20);
    uVar6 = *(undefined4 *)(param_2 + 0x24);
    uVar7 = *(undefined4 *)(param_2 + 0x28);
    uVar8 = *(undefined4 *)(param_2 + 0x2c);
    uVar9 = *(undefined4 *)(param_2 + 0x30);
    uVar10 = *(undefined4 *)(param_2 + 0x34);
    uVar11 = *(undefined4 *)(param_2 + 0x38);
    uVar12 = *(undefined4 *)(param_2 + 0x3c);
    uVar13 = *(undefined4 *)(param_2 + 0x40);
    uVar14 = *(undefined4 *)(param_2 + 0x44);
    uVar15 = *(undefined4 *)(param_2 + 0x48);
    uVar16 = *(undefined4 *)(param_2 + 0x4c);
  }
  param_1[0xc] = uVar13;
  param_1[0xd] = uVar14;
  param_1[0xe] = uVar15;
  param_1[0xf] = uVar16;
  param_1[8] = uVar9;
  param_1[9] = uVar10;
  param_1[10] = uVar11;
  param_1[0xb] = uVar12;
  param_1[4] = uVar5;
  param_1[5] = uVar6;
  param_1[6] = uVar7;
  param_1[7] = uVar8;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  return;
}