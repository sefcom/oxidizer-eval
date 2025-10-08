__int64 __fastcall alacritty::input::keyboard::SequenceBuilder::try_build_named_normal(
        __int64 a1,
        char a2,
        char a3,
        __int16 a4,
        __int16 a5,
        char a6)
{
  __int64 result; // rax
  char v7; // dl
  const char *v8; // rsi
  int v9; // ecx

  if ( a4 )
  {
LABEL_2:
    result = 0x8000000000000001LL;
    *(_QWORD *)a1 = 0x8000000000000001LL;
  }
  else
  {
    v7 = (a2 != 0) | a6 | a3;
    v8 = (_BYTE *)(&dword_0 + 1);
    if ( (v7 & 1) != 0 )
      v8 = a1_1;
    result = v7 & 1;
    switch ( a5 )
    {
      case 17:
        v9 = 66;
        break;
      case 18:
        v9 = 68;
        break;
      case 19:
        v9 = 67;
        break;
      case 20:
        v9 = 65;
        break;
      case 21:
        v9 = 70;
        break;
      case 22:
        v9 = 72;
        break;
      case 23:
        v9 = 126;
        result = 1LL;
        v8 = ::a6;
        break;
      case 24:
        v9 = 126;
        result = 1LL;
        v8 = a5_0;
        break;
      case 30:
        v9 = 126;
        result = 1LL;
        v8 = a3_0;
        break;
      case 33:
        v9 = 126;
        result = 1LL;
        v8 = a2_0;
        break;
      case 271:
        v9 = 80;
        break;
      case 272:
        v9 = 81;
        break;
      case 273:
        v9 = 82;
        break;
      case 274:
        v9 = 83;
        break;
      case 275:
        v9 = 126;
        result = 2LL;
        v8 = (const char *)&unk_1034E4;
        break;
      case 276:
        v9 = 126;
        result = 2LL;
        v8 = (const char *)&unk_1034E6;
        break;
      case 277:
        v9 = 126;
        result = 2LL;
        v8 = (const char *)&unk_1034E8;
        break;
      case 278:
        v9 = 126;
        result = 2LL;
        v8 = (const char *)&unk_1034EA;
        break;
      case 279:
        v9 = 126;
        result = 2LL;
        v8 = (const char *)&unk_1034EC;
        break;
      case 280:
        v9 = 126;
        result = 2LL;
        v8 = (const char *)&unk_1034EE;
        break;
      case 281:
        v9 = 126;
        result = 2LL;
        v8 = (const char *)&unk_1034F0;
        break;
      case 282:
        v9 = 126;
        result = 2LL;
        v8 = (const char *)&unk_1034F2;
        break;
      case 283:
        v9 = 126;
        result = 2LL;
        v8 = (const char *)&unk_1034F4;
        break;
      case 284:
        v9 = 126;
        result = 2LL;
        v8 = (const char *)&unk_1034F6;
        break;
      case 285:
        v9 = 126;
        result = 2LL;
        v8 = (const char *)&unk_1034F8;
        break;
      case 286:
        v9 = 126;
        result = 2LL;
        v8 = (const char *)&unk_1034FA;
        break;
      case 287:
        v9 = 126;
        result = 2LL;
        v8 = (const char *)&unk_1034FC;
        break;
      case 288:
        v9 = 126;
        result = 2LL;
        v8 = (const char *)&unk_1034FE;
        break;
      case 289:
        v9 = 126;
        result = 2LL;
        v8 = (const char *)&unk_103500;
        break;
      case 290:
        v9 = 126;
        result = 2LL;
        v8 = (const char *)&unk_103502;
        break;
      default:
        goto LABEL_2;
    }
    *(_QWORD *)a1 = 0x8000000000000000LL;
    *(_QWORD *)(a1 + 8) = v8;
    *(_QWORD *)(a1 + 16) = result;
    *(_DWORD *)(a1 + 24) = v9;
  }
  return result;
}