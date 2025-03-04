undefined  [16]
_ZN7uu_echo4Base15ascii_to_number33hexadecimal_ascii_digit_to_number17h4428452b03aed7eaE
          (undefined param_1,undefined8 param_2,ulong param_3)

{
  undefined auVar1 [16];
  undefined8 uVar2;
  uint *puVar3;
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined auVar8 [16];
  undefined auVar9 [16];
  undefined auVar10 [16];
  undefined auVar11 [16];
  undefined auVar12 [16];
  undefined auVar13 [16];
  undefined auVar14 [16];
  undefined auVar15 [16];
  undefined auVar16 [16];
  undefined auVar17 [16];
  undefined auVar18 [16];
  
  uVar2 = 0;
  puVar3 = &switchD_001a453c::switchdataD_0011b204;
  switch(param_1) {
  case 0x30:
    return ZEXT816(1);
  case 0x31:
    auVar16._8_8_ = &UNK_0011b201;
    auVar16._0_8_ = 1;
    return auVar16;
  case 0x32:
    auVar10._8_8_ = &UNK_0011b202;
    auVar10._0_8_ = 1;
    return auVar10;
  case 0x33:
    auVar13._8_8_ = &UNK_0011b203;
    auVar13._0_8_ = 1;
    return auVar13;
  case 0x34:
    auVar14._8_8_ = &switchD_001a453c::switchdataD_0011b204;
    auVar14._0_8_ = 1;
    return auVar14;
  case 0x35:
    auVar18._8_8_ = 0x11b205;
    auVar18._0_8_ = 1;
    return auVar18;
  case 0x36:
    auVar11._8_8_ = 0x11b206;
    auVar11._0_8_ = 1;
    return auVar11;
  case 0x37:
    auVar12._8_8_ = 0x11b207;
    auVar12._0_8_ = 1;
    return auVar12;
  case 0x38:
    auVar17._8_8_ = &UINT_0011b208;
    auVar17._0_8_ = 1;
    return auVar17;
  case 0x39:
    auVar15._8_8_ = 0x11b209;
    auVar15._0_8_ = 1;
    return auVar15;
  case 0x3a:
  case 0x3b:
  case 0x3c:
  case 0x3d:
  case 0x3e:
  case 0x3f:
  case 0x40:
  case 0x47:
  case 0x48:
  case 0x49:
  case 0x4a:
  case 0x4b:
  case 0x4c:
  case 0x4d:
  case 0x4e:
  case 0x4f:
  case 0x50:
  case 0x51:
  case 0x52:
  case 0x53:
  case 0x54:
  case 0x55:
  case 0x56:
  case 0x57:
  case 0x58:
  case 0x59:
  case 0x5a:
  case 0x5b:
  case 0x5c:
  case 0x5d:
  case 0x5e:
  case 0x5f:
  case 0x60:
    goto switchD_001a453c_caseD_3a;
  case 0x41:
  case 0x61:
    uVar2 = 1;
    puVar3 = (uint *)0x11b20a;
switchD_001a453c_caseD_3a:
    auVar4._8_8_ = puVar3;
    auVar4._0_8_ = uVar2;
    return auVar4;
  case 0x42:
  case 0x62:
    auVar8._8_8_ = 0x11b20b;
    auVar8._0_8_ = 1;
    return auVar8;
  case 0x43:
  case 99:
    auVar7._8_8_ = &UINT_0011b20c;
    auVar7._0_8_ = 1;
    return auVar7;
  case 0x44:
  case 100:
    auVar5._8_8_ = 0x11b20d;
    auVar5._0_8_ = 1;
    return auVar5;
  case 0x45:
  case 0x65:
    auVar6._8_8_ = 0x11b20e;
    auVar6._0_8_ = 1;
    return auVar6;
  case 0x46:
  case 0x66:
    auVar9._8_8_ = 0x11b20f;
    auVar9._0_8_ = 1;
    return auVar9;
  default:
    auVar1._8_8_ = 0;
    auVar1._0_8_ = param_3;
    return auVar1 << 0x40;
  }
}