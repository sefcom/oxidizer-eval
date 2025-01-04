__int64 __fastcall uu_od::parse_formats::od_format_type(_OWORD *a1, unsigned __int8 a2, unsigned __int8 a3)
{
  __int64 result; // rax

  result = a2;
  switch ( a2 )
  {
    case 0u:
      a1[1] = xmmword_142068;
      *a1 = uu_od::prn_char::FORMAT_ITEM_A;
      break;
    case 1u:
      a1[1] = xmmword_142088;
      *a1 = uu_od::prn_char::FORMAT_ITEM_C;
      break;
    case 2u:
      result = a3;
      switch ( a3 )
      {
        case 0u:
        case 4u:
          a1[1] = xmmword_141C80;
          *a1 = uu_od::prn_int::FORMAT_ITEM_DEC32S;
          break;
        case 1u:
          a1[1] = xmmword_141C40;
          *a1 = uu_od::prn_int::FORMAT_ITEM_DEC8S;
          break;
        case 2u:
          a1[1] = xmmword_141C60;
          *a1 = uu_od::prn_int::FORMAT_ITEM_DEC16S;
          break;
        case 8u:
          a1[1] = xmmword_141CA0;
          *a1 = uu_od::prn_int::FORMAT_ITEM_DEC64S;
          break;
        default:
          goto LABEL_14;
      }
      break;
    case 3u:
      result = a3;
      switch ( a3 )
      {
        case 0u:
        case 4u:
          a1[1] = xmmword_141B00;
          *a1 = uu_od::prn_int::FORMAT_ITEM_OCT32;
          break;
        case 1u:
          a1[1] = xmmword_141AC0;
          *a1 = uu_od::prn_int::FORMAT_ITEM_OCT8;
          break;
        case 2u:
          a1[1] = xmmword_141AE0;
          *a1 = uu_od::prn_int::FORMAT_ITEM_OCT16;
          break;
        case 8u:
          a1[1] = xmmword_141B20;
          *a1 = uu_od::prn_int::FORMAT_ITEM_OCT64;
          break;
        default:
          goto LABEL_14;
      }
      break;
    case 4u:
      result = a3;
      switch ( a3 )
      {
        case 0u:
        case 4u:
          a1[1] = xmmword_141C00;
          *a1 = uu_od::prn_int::FORMAT_ITEM_DEC32U;
          break;
        case 1u:
          a1[1] = xmmword_141BC0;
          *a1 = uu_od::prn_int::FORMAT_ITEM_DEC8U;
          break;
        case 2u:
          a1[1] = xmmword_141BE0;
          *a1 = uu_od::prn_int::FORMAT_ITEM_DEC16U;
          break;
        case 8u:
          a1[1] = xmmword_141C20;
          *a1 = uu_od::prn_int::FORMAT_ITEM_DEC64U;
          break;
        default:
          goto LABEL_14;
      }
      break;
    case 5u:
      result = a3;
      switch ( a3 )
      {
        case 0u:
        case 4u:
          a1[1] = xmmword_141B80;
          *a1 = uu_od::prn_int::FORMAT_ITEM_HEX32;
          break;
        case 1u:
          a1[1] = xmmword_141B40;
          *a1 = uu_od::prn_int::FORMAT_ITEM_HEX8;
          break;
        case 2u:
          a1[1] = xmmword_141B60;
          *a1 = uu_od::prn_int::FORMAT_ITEM_HEX16;
          break;
        case 8u:
          a1[1] = xmmword_141BA0;
          *a1 = uu_od::prn_int::FORMAT_ITEM_HEX64;
          break;
        default:
          goto LABEL_14;
      }
      break;
    case 6u:
      result = a3;
      switch ( a3 )
      {
        case 0u:
        case 4u:
          a1[1] = xmmword_142008;
          *a1 = uu_od::prn_float::FORMAT_ITEM_F32;
          break;
        case 2u:
          a1[1] = xmmword_141FE8;
          *a1 = uu_od::prn_float::FORMAT_ITEM_F16;
          break;
        case 8u:
          a1[1] = xmmword_142028;
          *a1 = uu_od::prn_float::FORMAT_ITEM_F64;
          break;
        default:
LABEL_14:
          *(_QWORD *)a1 = 3LL;
          break;
      }
      break;
  }
  return result;
}
