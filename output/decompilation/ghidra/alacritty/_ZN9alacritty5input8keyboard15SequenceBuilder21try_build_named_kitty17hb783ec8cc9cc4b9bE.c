void _ZN9alacritty5input8keyboard15SequenceBuilder21try_build_named_kitty17hb783ec8cc9cc4b9bE
               (undefined8 *param_1,ulong param_2,short param_3,undefined2 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  if ((param_3 == 0) && ((param_2 & 1) != 0)) {
    uVar1 = 0x110000;
    uVar2 = 5;
    switch(param_4) {
    case 7:
      puVar3 = &DAT_0020341f;
      break;
    default:
      goto switchD_00557cf1_caseD_8;
    case 0x29:
      puVar3 = &DAT_00203424;
      break;
    case 0x2e:
      puVar3 = &DAT_00203429;
      break;
    case 0x3a:
      puVar3 = &DAT_0020342e;
      break;
    case 0x66:
      puVar3 = &DAT_00203433;
      break;
    case 0x67:
      puVar3 = &DAT_00203438;
      break;
    case 0x68:
      puVar3 = &DAT_0020343d;
      break;
    case 0x69:
      puVar3 = &DAT_00203442;
      break;
    case 0x6a:
      puVar3 = &DAT_00203447;
      break;
    case 0x6b:
      puVar3 = &DAT_0020344c;
      break;
    case 0x6c:
      puVar3 = &DAT_00203451;
      break;
    case 0x6d:
      puVar3 = &DAT_00203456;
      break;
    case 0x6e:
      puVar3 = &DAT_0020345b;
      break;
    case 0x80:
      puVar3 = &DAT_00203460;
      break;
    case 0x81:
      puVar3 = &DAT_00203465;
      break;
    case 0x82:
      puVar3 = &DAT_0020346a;
      break;
    case 0x111:
      uVar1 = 0x7e;
      uVar2 = 2;
      puVar3 = &DAT_0020346f;
      break;
    case 0x11b:
      puVar3 = &DAT_00203471;
      break;
    case 0x11c:
      puVar3 = &DAT_00203476;
      break;
    case 0x11d:
      puVar3 = &DAT_0020347b;
      break;
    case 0x11e:
      puVar3 = &DAT_00203480;
      break;
    case 0x11f:
      puVar3 = &DAT_00203485;
      break;
    case 0x120:
      puVar3 = &DAT_0020348a;
      break;
    case 0x121:
      puVar3 = &DAT_0020348f;
      break;
    case 0x122:
      puVar3 = &DAT_00203494;
      break;
    case 0x123:
      puVar3 = &DAT_00203499;
      break;
    case 0x124:
      puVar3 = &DAT_0020349e;
      break;
    case 0x125:
      puVar3 = &DAT_002034a3;
      break;
    case 0x126:
      puVar3 = &DAT_002034a8;
      break;
    case 0x127:
      puVar3 = &DAT_002034ad;
      break;
    case 0x128:
      puVar3 = &DAT_002034b2;
      break;
    case 0x129:
      puVar3 = &DAT_002034b7;
      break;
    case 0x12a:
      puVar3 = &DAT_002034bc;
      break;
    case 299:
      puVar3 = &DAT_002034c1;
      break;
    case 300:
      puVar3 = &DAT_002034c6;
      break;
    case 0x12d:
      puVar3 = &DAT_002034cb;
      break;
    case 0x12e:
      puVar3 = &DAT_002034d0;
      break;
    case 0x12f:
      puVar3 = &DAT_002034d5;
      break;
    case 0x130:
      puVar3 = &DAT_002034da;
      break;
    case 0x131:
      puVar3 = &DAT_002034df;
    }
    *param_1 = 0x8000000000000000;
    param_1[1] = puVar3;
    param_1[2] = uVar2;
    *(undefined4 *)(param_1 + 3) = uVar1;
    return;
  }
switchD_00557cf1_caseD_8:
  *param_1 = 0x8000000000000001;
  return;
}