void _ZN9alacritty5input8keyboard15SequenceBuilder29try_build_control_char_or_mod17h9bae1bc9cdcc4939E
               (undefined8 *param_1,ulong param_2,ulong param_3,short *param_4,undefined8 param_5)

{
  char cVar1;
  ushort uVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  if ((((param_3 & 1) == 0) && ((param_2 & 1) == 0)) || (*param_4 != 0)) {
    *param_1 = 0x8000000000000001;
    return;
  }
  uVar2 = param_4[1];
  uVar4 = 2;
  switch(uVar2) {
  case 0xe:
    puVar6 = &DAT_0020346f;
    break;
  case 0xf:
    uVar4 = 1;
    puVar6 = &DAT_00201aa2;
    break;
  case 0x10:
    puVar6 = &DAT_002034fe;
    break;
  default:
    if (((param_3 & 1) == 0) || (0xd < uVar2)) {
switchD_005581dc_caseD_1:
      *param_1 = 0x8000000000000001;
      return;
    }
    cVar1 = *(char *)(param_4 + 0x3d);
    uVar4 = 5;
    switch(uVar2) {
    case 0:
      puVar6 = &DAT_0020350e;
      if (cVar1 == '\x01') {
        puVar6 = &DAT_00203509;
      }
      bVar3 = ~*(byte *)(param_4 + 0x3c) & 1;
      uVar5 = 2;
      break;
    default:
      goto switchD_005581dc_caseD_1;
    case 2:
      puVar6 = &DAT_00203513;
      goto LAB_0055823b;
    case 3:
      puVar6 = &DAT_0020351d;
      if (cVar1 == '\x01') {
        puVar6 = &DAT_00203518;
      }
      bVar3 = ~*(byte *)(param_4 + 0x3c) & 1;
      uVar5 = 4;
      break;
    case 6:
      puVar6 = &DAT_00203522;
      goto LAB_0055823b;
    case 8:
      puVar6 = &DAT_0020352c;
      if (cVar1 == '\x01') {
        puVar6 = &DAT_00203527;
      }
      bVar3 = ~*(byte *)(param_4 + 0x3c) & 1;
      uVar5 = 1;
      break;
    case 0xb:
      puVar6 = &DAT_00203536;
      if (cVar1 == '\x01') {
        puVar6 = &DAT_00203531;
      }
      goto LAB_0055823b;
    case 0xc:
      puVar6 = &DAT_00203540;
      if (cVar1 == '\x01') {
        puVar6 = &DAT_0020353b;
      }
      goto LAB_0055823b;
    case 0xd:
      puVar6 = &DAT_0020354a;
      if (cVar1 == '\x01') {
        puVar6 = &DAT_00203545;
      }
      bVar3 = ~*(byte *)(param_4 + 0x3c) & 1;
      uVar5 = 8;
    }
    _ZN9alacritty5input8keyboard1_16InternalBitFlags3set17h73b3a8b59dbf5641E(param_5,uVar5,bVar3);
    break;
  case 0x19:
    uVar4 = 3;
    puVar6 = &DAT_00203504;
    break;
  case 0x2a:
    puVar6 = &DAT_00203507;
  }
LAB_0055823b:
  *param_1 = 0x8000000000000000;
  param_1[1] = puVar6;
  param_1[2] = uVar4;
  *(undefined4 *)(param_1 + 3) = 0x110000;
  return;
}