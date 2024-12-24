void __rustcall
uu_od::parse_formats::od_argument_traditional_format(undefined8 *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  uVar14 = prn_float::FORMAT_ITEM_F64._24_8_;
  uVar13 = prn_float::FORMAT_ITEM_F32._24_8_;
  uVar12 = prn_char::FORMAT_ITEM_C._24_8_;
  uVar11 = prn_char::FORMAT_ITEM_A._24_8_;
  uVar10 = prn_int::FORMAT_ITEM_DEC64S._24_8_;
  uVar9 = prn_int::FORMAT_ITEM_DEC32S._24_8_;
  uVar8 = prn_int::FORMAT_ITEM_DEC16S._24_8_;
  uVar7 = prn_int::FORMAT_ITEM_DEC32U._24_8_;
  uVar6 = prn_int::FORMAT_ITEM_DEC16U._24_8_;
  uVar5 = prn_int::FORMAT_ITEM_HEX32._24_8_;
  uVar4 = prn_int::FORMAT_ITEM_HEX16._24_8_;
  uVar3 = prn_int::FORMAT_ITEM_OCT32._24_8_;
  uVar2 = prn_int::FORMAT_ITEM_OCT16._24_8_;
  uVar1 = prn_int::FORMAT_ITEM_OCT8._24_8_;
  switch(param_2) {
  case 0x42:
  case 0x6f:
    param_1[2] = prn_int::FORMAT_ITEM_OCT16._16_8_;
    param_1[3] = uVar2;
    uVar1 = prn_int::FORMAT_ITEM_OCT16._8_8_;
    *param_1 = prn_int::FORMAT_ITEM_OCT16._0_8_;
    param_1[1] = uVar1;
    return;
  default:
    *param_1 = 3;
    return;
  case 0x44:
    param_1[2] = prn_int::FORMAT_ITEM_DEC32U._16_8_;
    param_1[3] = uVar7;
    uVar1 = prn_int::FORMAT_ITEM_DEC32U._8_8_;
    *param_1 = prn_int::FORMAT_ITEM_DEC32U._0_8_;
    param_1[1] = uVar1;
    return;
  case 0x46:
  case 0x65:
    param_1[2] = prn_float::FORMAT_ITEM_F64._16_8_;
    param_1[3] = uVar14;
    uVar1 = prn_float::FORMAT_ITEM_F64._8_8_;
    *param_1 = prn_float::FORMAT_ITEM_F64._0_8_;
    param_1[1] = uVar1;
    return;
  case 0x48:
  case 0x58:
    param_1[2] = prn_int::FORMAT_ITEM_HEX32._16_8_;
    param_1[3] = uVar5;
    uVar1 = prn_int::FORMAT_ITEM_HEX32._8_8_;
    *param_1 = prn_int::FORMAT_ITEM_HEX32._0_8_;
    param_1[1] = uVar1;
    return;
  case 0x49:
  case 0x4c:
  case 0x6c:
    param_1[2] = prn_int::FORMAT_ITEM_DEC64S._16_8_;
    param_1[3] = uVar10;
    uVar1 = prn_int::FORMAT_ITEM_DEC64S._8_8_;
    *param_1 = prn_int::FORMAT_ITEM_DEC64S._0_8_;
    param_1[1] = uVar1;
    return;
  case 0x4f:
    param_1[2] = prn_int::FORMAT_ITEM_OCT32._16_8_;
    param_1[3] = uVar3;
    uVar1 = prn_int::FORMAT_ITEM_OCT32._8_8_;
    *param_1 = prn_int::FORMAT_ITEM_OCT32._0_8_;
    param_1[1] = uVar1;
    return;
  case 0x61:
    param_1[2] = prn_char::FORMAT_ITEM_A._16_8_;
    param_1[3] = uVar11;
    uVar1 = prn_char::FORMAT_ITEM_A._8_8_;
    *param_1 = prn_char::FORMAT_ITEM_A._0_8_;
    param_1[1] = uVar1;
    return;
  case 0x62:
    param_1[2] = prn_int::FORMAT_ITEM_OCT8._16_8_;
    param_1[3] = uVar1;
    uVar1 = prn_int::FORMAT_ITEM_OCT8._8_8_;
    *param_1 = prn_int::FORMAT_ITEM_OCT8._0_8_;
    param_1[1] = uVar1;
    return;
  case 99:
    param_1[2] = prn_char::FORMAT_ITEM_C._16_8_;
    param_1[3] = uVar12;
    uVar1 = prn_char::FORMAT_ITEM_C._8_8_;
    *param_1 = prn_char::FORMAT_ITEM_C._0_8_;
    param_1[1] = uVar1;
    return;
  case 100:
    param_1[2] = prn_int::FORMAT_ITEM_DEC16U._16_8_;
    param_1[3] = uVar6;
    uVar1 = prn_int::FORMAT_ITEM_DEC16U._8_8_;
    *param_1 = prn_int::FORMAT_ITEM_DEC16U._0_8_;
    param_1[1] = uVar1;
    return;
  case 0x66:
    param_1[2] = prn_float::FORMAT_ITEM_F32._16_8_;
    param_1[3] = uVar13;
    uVar1 = prn_float::FORMAT_ITEM_F32._8_8_;
    *param_1 = prn_float::FORMAT_ITEM_F32._0_8_;
    param_1[1] = uVar1;
    return;
  case 0x68:
  case 0x78:
    param_1[2] = prn_int::FORMAT_ITEM_HEX16._16_8_;
    param_1[3] = uVar4;
    uVar1 = prn_int::FORMAT_ITEM_HEX16._8_8_;
    *param_1 = prn_int::FORMAT_ITEM_HEX16._0_8_;
    param_1[1] = uVar1;
    return;
  case 0x69:
    param_1[2] = prn_int::FORMAT_ITEM_DEC32S._16_8_;
    param_1[3] = uVar9;
    uVar1 = prn_int::FORMAT_ITEM_DEC32S._8_8_;
    *param_1 = prn_int::FORMAT_ITEM_DEC32S._0_8_;
    param_1[1] = uVar1;
    return;
  case 0x73:
    param_1[2] = prn_int::FORMAT_ITEM_DEC16S._16_8_;
    param_1[3] = uVar8;
    uVar1 = prn_int::FORMAT_ITEM_DEC16S._8_8_;
    *param_1 = prn_int::FORMAT_ITEM_DEC16S._0_8_;
    param_1[1] = uVar1;
    return;
  }
}