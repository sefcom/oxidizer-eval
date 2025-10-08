unsigned __int64 __fastcall alacritty::input::keyboard::SequenceBuilder::try_build_control_char_or_mod(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        __int64 a5)
{
  unsigned __int64 result; // rax
  __int64 v6; // rbx
  const char *v7; // r14
  char v8; // dl
  _BOOL8 v9; // rdx
  __int64 v10; // r15
  __int64 v11; // rdi
  __int64 v12; // rsi

  if ( ((a3 & 1) != 0 || (a2 & 1) != 0) && !*(_WORD *)a4 )
  {
    v6 = 2LL;
    switch ( *(_WORD *)(a4 + 2) )
    {
      case 0xE:
        v7 = a13;
        goto LABEL_16;
      case 0xF:
        v6 = 1LL;
        v7 = a9_0;
        goto LABEL_16;
      case 0x10:
        v7 = (const char *)&unk_1034FE;
        goto LABEL_16;
      case 0x19:
        v6 = 3LL;
        v7 = (const char *)&unk_103504;
        goto LABEL_16;
      case 0x2A:
        v7 = (const char *)&unk_103507;
        goto LABEL_16;
      default:
        if ( (a3 & 1) != 0 )
        {
          v8 = *(_BYTE *)(a4 + 122);
          v6 = 5LL;
          switch ( *(_WORD *)(a4 + 2) )
          {
            case 0:
              v7 = (const char *)&unk_10350E;
              if ( v8 == 1 )
                v7 = (const char *)&unk_103509;
              v9 = (*(_BYTE *)(a4 + 120) & 1) == 0;
              v10 = a1;
              v11 = a5;
              v12 = 2LL;
              break;
            case 2:
              v7 = (const char *)&unk_103513;
              goto LABEL_16;
            case 3:
              v7 = (const char *)&unk_10351D;
              if ( v8 == 1 )
                v7 = (const char *)&unk_103518;
              v9 = (*(_BYTE *)(a4 + 120) & 1) == 0;
              v10 = a1;
              v11 = a5;
              v12 = 4LL;
              break;
            case 6:
              v7 = (const char *)&unk_103522;
              goto LABEL_16;
            case 8:
              v7 = (const char *)&unk_10352C;
              if ( v8 == 1 )
                v7 = (const char *)&unk_103527;
              v9 = (*(_BYTE *)(a4 + 120) & 1) == 0;
              v10 = a1;
              v11 = a5;
              v12 = 1LL;
              break;
            case 0xB:
              v7 = (const char *)&unk_103536;
              if ( v8 == 1 )
                v7 = (const char *)&unk_103531;
              goto LABEL_16;
            case 0xC:
              v7 = (const char *)&unk_103540;
              if ( v8 == 1 )
                v7 = (const char *)&unk_10353B;
              goto LABEL_16;
            case 0xD:
              v7 = (const char *)&unk_10354A;
              if ( v8 == 1 )
                v7 = (const char *)&unk_103545;
              v9 = (*(_BYTE *)(a4 + 120) & 1) == 0;
              v10 = a1;
              v11 = a5;
              v12 = 8LL;
              break;
            default:
              goto LABEL_17;
          }
          alacritty::input::keyboard::_::InternalBitFlags::set(v11, v12, v9);
          a1 = v10;
LABEL_16:
          result = 0x8000000000000000LL;
          *(_QWORD *)a1 = 0x8000000000000000LL;
          *(_QWORD *)(a1 + 8) = v7;
          *(_QWORD *)(a1 + 16) = v6;
          *(_DWORD *)(a1 + 24) = (_DWORD)&unk_110000;
        }
        else
        {
LABEL_17:
          result = 0x8000000000000001LL;
          *(_QWORD *)a1 = 0x8000000000000001LL;
        }
        break;
    }
  }
  else
  {
    result = 0x8000000000000001LL;
    *(_QWORD *)a1 = 0x8000000000000001LL;
  }
  return result;
}