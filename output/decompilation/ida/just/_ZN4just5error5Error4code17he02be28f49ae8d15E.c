__int64 __fastcall just::error::Error::code(__int64 a1)
{
  __int64 result; // rax
  unsigned int *v2; // rdi
  char v3; // al
  char v4; // cl
  char v5; // al

  LOBYTE(result) = 0;
  switch ( *(_BYTE *)a1 )
  {
    case 3:
      v3 = *(_BYTE *)(a1 + 88);
      v2 = (unsigned int *)(a1 + 80);
      v4 = v3 - 2;
      v5 = 5;
      if ( (unsigned __int8)v4 < 5u )
        v5 = v4;
      switch ( v5 )
      {
        case 0:
          goto LABEL_12;
        case 1:
          goto LABEL_14;
        case 3:
          goto LABEL_5;
      }
      result = 0LL;
      break;
    case 4:
    case 5:
    case 7:
    case 8:
    case 0xA:
    case 0xB:
    case 0xC:
    case 0xD:
    case 0xE:
    case 0xF:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x1A:
    case 0x1B:
    case 0x1C:
    case 0x1D:
    case 0x1F:
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
    case 0x2A:
    case 0x2B:
      goto LABEL_3;
    case 6:
    case 0x14:
      LOBYTE(result) = (*(_DWORD *)(a1 + 4) & 0x7F) == 0;
LABEL_3:
      result = (unsigned __int8)result;
      break;
    case 9:
LABEL_12:
      result = 1LL;
      break;
    case 0x1E:
      v2 = (unsigned int *)(a1 + 4);
LABEL_14:
      just::signal::Signal::code(*v2);
      result = 1LL;
      break;
    case 0x2C:
      v2 = (unsigned int *)(a1 + 4);
LABEL_5:
      result = !__OFSUB__(*v2, -128);
      break;
    default:
      result = 0LL;
      break;
  }
  return result;
}