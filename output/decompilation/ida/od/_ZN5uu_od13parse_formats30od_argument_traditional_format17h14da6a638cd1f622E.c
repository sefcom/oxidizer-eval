void __fastcall uu_od::parse_formats::od_argument_traditional_format(_OWORD *a1, int a2)
{
  switch ( a2 )
  {
    case 'B':
    case 'o':
      a1[1] = *(&uu_od::prn_int::FORMAT_ITEM_OCT16 + 1);
      *a1 = uu_od::prn_int::FORMAT_ITEM_OCT16;
      break;
    case 'D':
      a1[1] = xmmword_141C00;
      *a1 = uu_od::prn_int::FORMAT_ITEM_DEC32U;
      break;
    case 'F':
    case 'e':
      a1[1] = xmmword_142028;
      *a1 = uu_od::prn_float::FORMAT_ITEM_F64;
      break;
    case 'H':
    case 'X':
      a1[1] = xmmword_141B80;
      *a1 = uu_od::prn_int::FORMAT_ITEM_HEX32;
      break;
    case 'I':
    case 'L':
    case 'l':
      a1[1] = xmmword_141CA0;
      *a1 = uu_od::prn_int::FORMAT_ITEM_DEC64S;
      break;
    case 'O':
      a1[1] = xmmword_141B00;
      *a1 = uu_od::prn_int::FORMAT_ITEM_OCT32;
      break;
    case 'a':
      a1[1] = xmmword_142068;
      *a1 = uu_od::prn_char::FORMAT_ITEM_A;
      break;
    case 'b':
      a1[1] = xmmword_141AC0;
      *a1 = uu_od::prn_int::FORMAT_ITEM_OCT8;
      break;
    case 'c':
      a1[1] = xmmword_142088;
      *a1 = uu_od::prn_char::FORMAT_ITEM_C;
      break;
    case 'd':
      a1[1] = xmmword_141BE0;
      *a1 = uu_od::prn_int::FORMAT_ITEM_DEC16U;
      break;
    case 'f':
      a1[1] = xmmword_142008;
      *a1 = uu_od::prn_float::FORMAT_ITEM_F32;
      break;
    case 'h':
    case 'x':
      a1[1] = xmmword_141B60;
      *a1 = uu_od::prn_int::FORMAT_ITEM_HEX16;
      break;
    case 'i':
      a1[1] = xmmword_141C80;
      *a1 = uu_od::prn_int::FORMAT_ITEM_DEC32S;
      break;
    case 's':
      a1[1] = xmmword_141C60;
      *a1 = uu_od::prn_int::FORMAT_ITEM_DEC16S;
      break;
    default:
      *(_QWORD *)a1 = 3LL;
      break;
  }
}
