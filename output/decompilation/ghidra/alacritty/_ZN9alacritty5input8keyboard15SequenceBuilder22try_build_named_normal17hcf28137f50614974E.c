void _ZN9alacritty5input8keyboard15SequenceBuilder22try_build_named_normal17hcf28137f50614974E
               (undefined8 *param_1,char param_2,byte param_3,short param_4,ushort param_5,
               byte param_6)

{
  ulong uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  
  if (param_4 == 0) {
    puVar3 = (undefined *)0x1;
    if (((param_3 | param_6) & 1) != 0 || param_2 != '\0') {
      puVar3 = &DAT_00201a9a;
    }
    if (param_5 - 0x11 < 0x112) {
      uVar1 = (ulong)((byte)(param_3 | param_6 | param_2 != '\0') & 1);
      switch((uint)param_5) {
      case 0x11:
        uVar2 = 0x42;
        break;
      case 0x12:
        uVar2 = 0x44;
        break;
      case 0x13:
        uVar2 = 0x43;
        break;
      case 0x14:
        uVar2 = 0x41;
        break;
      case 0x15:
        uVar2 = 0x46;
        break;
      case 0x16:
        uVar2 = 0x48;
        break;
      case 0x17:
        uVar2 = 0x7e;
        uVar1 = 1;
        puVar3 = &DAT_00201a9f;
        break;
      case 0x18:
        uVar2 = 0x7e;
        uVar1 = 1;
        puVar3 = &DAT_00201a9e;
        break;
      default:
        goto switchD_00557f34_caseD_19;
      case 0x1e:
        uVar2 = 0x7e;
        uVar1 = 1;
        puVar3 = &DAT_00201a9c;
        break;
      case 0x21:
        uVar2 = 0x7e;
        uVar1 = 1;
        puVar3 = &DAT_00201a9b;
        break;
      case 0x10f:
        uVar2 = 0x50;
        break;
      case 0x110:
        uVar2 = 0x51;
        break;
      case 0x111:
        uVar2 = 0x52;
        break;
      case 0x112:
        uVar2 = 0x53;
        break;
      case 0x113:
        uVar2 = 0x7e;
        uVar1 = 2;
        puVar3 = &DAT_002034e4;
        break;
      case 0x114:
        uVar2 = 0x7e;
        uVar1 = 2;
        puVar3 = &DAT_002034e6;
        break;
      case 0x115:
        uVar2 = 0x7e;
        uVar1 = 2;
        puVar3 = &DAT_002034e8;
        break;
      case 0x116:
        uVar2 = 0x7e;
        uVar1 = 2;
        puVar3 = &DAT_002034ea;
        break;
      case 0x117:
        uVar2 = 0x7e;
        uVar1 = 2;
        puVar3 = &DAT_002034ec;
        break;
      case 0x118:
        uVar2 = 0x7e;
        uVar1 = 2;
        puVar3 = &DAT_002034ee;
        break;
      case 0x119:
        uVar2 = 0x7e;
        uVar1 = 2;
        puVar3 = &DAT_002034f0;
        break;
      case 0x11a:
        uVar2 = 0x7e;
        uVar1 = 2;
        puVar3 = &DAT_002034f2;
        break;
      case 0x11b:
        uVar2 = 0x7e;
        uVar1 = 2;
        puVar3 = &DAT_002034f4;
        break;
      case 0x11c:
        uVar2 = 0x7e;
        uVar1 = 2;
        puVar3 = &DAT_002034f6;
        break;
      case 0x11d:
        uVar2 = 0x7e;
        uVar1 = 2;
        puVar3 = &DAT_002034f8;
        break;
      case 0x11e:
        uVar2 = 0x7e;
        uVar1 = 2;
        puVar3 = &DAT_002034fa;
        break;
      case 0x11f:
        uVar2 = 0x7e;
        uVar1 = 2;
        puVar3 = &DAT_002034fc;
        break;
      case 0x120:
        uVar2 = 0x7e;
        uVar1 = 2;
        puVar3 = &DAT_002034fe;
        break;
      case 0x121:
        uVar2 = 0x7e;
        uVar1 = 2;
        puVar3 = &DAT_00203500;
        break;
      case 0x122:
        uVar2 = 0x7e;
        uVar1 = 2;
        puVar3 = &DAT_00203502;
      }
      *param_1 = 0x8000000000000000;
      param_1[1] = puVar3;
      param_1[2] = uVar1;
      *(undefined4 *)(param_1 + 3) = uVar2;
      return;
    }
  }
switchD_00557f34_caseD_19:
  *param_1 = 0x8000000000000001;
  return;
}