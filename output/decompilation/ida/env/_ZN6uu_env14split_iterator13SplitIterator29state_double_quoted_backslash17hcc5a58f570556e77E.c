__int64 __fastcall uu_env::split_iterator::SplitIterator::state_double_quoted_backslash(__int64 a1, __int64 a2)
{
  int current_char; // eax
  __int64 result; // rax
  __int128 v4; // xmm0
  int v5; // ebp
  int v6; // ecx
  __int128 v7; // xmm0
  _BYTE v8[40]; // [rsp+8h] [rbp-40h] BYREF

  current_char = (unsigned int)uu_env::split_iterator::SplitIterator::get_current_char(a2);
  if ( current_char > 91 )
  {
    if ( current_char != 92 )
    {
      if ( current_char == 99 )
      {
        result = *(_QWORD *)(a2 + 56);
        *(_DWORD *)a1 = 2;
      }
      else
      {
        if ( current_char != (_DWORD)&off_110000 )
          goto LABEL_14;
        result = *(_QWORD *)(a2 + 56);
        *(_QWORD *)a1 = 0x2200000000LL;
      }
LABEL_18:
      *(_QWORD *)(a1 + 8) = result;
      return result;
    }
    goto LABEL_10;
  }
  if ( current_char == 10 )
  {
    result = uu_env::split_iterator::SplitIterator::skip_one((__int64)v8, a2);
    if ( *(_DWORD *)v8 == 12 )
    {
LABEL_16:
      *(_DWORD *)a1 = 12;
      return result;
    }
LABEL_13:
    result = *(_QWORD *)&v8[32];
    *(_QWORD *)(a1 + 32) = *(_QWORD *)&v8[32];
    v4 = *(_OWORD *)v8;
    *(_OWORD *)(a1 + 16) = *(_OWORD *)&v8[16];
    *(_OWORD *)a1 = v4;
    return result;
  }
  if ( current_char == 34 || current_char == 36 )
  {
LABEL_10:
    result = uu_env::split_iterator::SplitIterator::take_one((__int64)v8, a2);
    if ( *(_DWORD *)v8 == 12 )
      goto LABEL_16;
    goto LABEL_13;
  }
LABEL_14:
  v5 = current_char;
  uu_env::split_iterator::SplitIterator::check_and_replace_ascii_escape_code((__int64)v8, a2, current_char);
  v6 = *(_DWORD *)v8;
  result = v8[4];
  if ( *(_DWORD *)v8 == 12 )
  {
    if ( (v8[4] & 1) != 0 )
      goto LABEL_16;
    result = *(_QWORD *)(a2 + 56);
    *(_DWORD *)a1 = 3;
    *(_DWORD *)(a1 + 4) = v5;
    goto LABEL_18;
  }
  *(_DWORD *)(a1 + 36) = *(_DWORD *)&v8[36];
  v7 = *(_OWORD *)&v8[5];
  *(_OWORD *)(a1 + 21) = *(_OWORD *)&v8[21];
  *(_OWORD *)(a1 + 5) = v7;
  *(_DWORD *)a1 = v6;
  *(_BYTE *)(a1 + 4) = result;
  return result;
}