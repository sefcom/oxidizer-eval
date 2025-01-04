__int64 __fastcall uu_env::split_iterator::SplitIterator::state_unquoted_backslash(__int64 a1, __int64 a2)
{
  int current_char; // r15d
  __int64 result; // rax
  __int128 v4; // xmm0
  __int64 v5; // r14
  int v6; // ecx
  __int128 v7; // xmm0
  _BYTE v8[40]; // [rsp+8h] [rbp-40h] BYREF

  current_char = uu_env::split_iterator::SplitIterator::get_current_char(a2);
  if ( current_char <= 91 )
  {
    switch ( current_char )
    {
      case 10:
        result = uu_env::split_iterator::SplitIterator::skip_one((__int64)v8, a2);
        if ( *(_DWORD *)v8 != 8 )
          goto LABEL_12;
        goto LABEL_11;
      case 34:
      case 36:
      case 39:
        goto LABEL_10;
      default:
        goto LABEL_17;
    }
  }
  if ( current_char > 98 )
  {
    if ( current_char == 99 )
    {
      result = uu_env::split_iterator::SplitIterator::push_word_to_words((__int128 *)a2);
      *(_DWORD *)a1 = 6;
      return result;
    }
    if ( current_char == 1114112 )
    {
      v5 = *(_QWORD *)(a2 + 56);
      result = <T as alloc::slice::hack::ConvertVec>::to_vec(a1 + 16, aUnquoted, 8LL);
      *(_DWORD *)a1 = 1;
      *(_QWORD *)(a1 + 8) = v5;
      return result;
    }
  }
  else
  {
    if ( current_char == 92 )
    {
LABEL_10:
      result = uu_env::split_iterator::SplitIterator::take_one((__int64)v8, a2);
      if ( *(_DWORD *)v8 != 8 )
      {
LABEL_12:
        result = *(_QWORD *)&v8[32];
        *(_QWORD *)(a1 + 32) = *(_QWORD *)&v8[32];
        v4 = *(_OWORD *)v8;
        *(_OWORD *)(a1 + 16) = *(_OWORD *)&v8[16];
        *(_OWORD *)a1 = v4;
        return result;
      }
      goto LABEL_11;
    }
    if ( current_char == 95 )
    {
      uu_env::split_iterator::SplitIterator::skip_one((__int64)v8, a2);
      if ( *(_DWORD *)v8 == 8 )
      {
        result = uu_env::split_iterator::SplitIterator::push_word_to_words((__int128 *)a2);
        *(_DWORD *)a1 = 7;
        return result;
      }
      goto LABEL_12;
    }
  }
LABEL_17:
  uu_env::split_iterator::SplitIterator::check_and_replace_ascii_escape_code((__int64)v8, a2, current_char);
  v6 = *(_DWORD *)v8;
  result = v8[4];
  if ( *(_DWORD *)v8 == 8 )
  {
    if ( !v8[4] )
    {
      result = *(_QWORD *)(a2 + 56);
      *(_DWORD *)a1 = 3;
      *(_DWORD *)(a1 + 4) = current_char;
      *(_QWORD *)(a1 + 8) = result;
      return result;
    }
LABEL_11:
    *(_DWORD *)a1 = 8;
    return result;
  }
  *(_DWORD *)(a1 + 36) = *(_DWORD *)&v8[36];
  v7 = *(_OWORD *)&v8[5];
  *(_OWORD *)(a1 + 21) = *(_OWORD *)&v8[21];
  *(_OWORD *)(a1 + 5) = v7;
  *(_DWORD *)a1 = v6;
  *(_BYTE *)(a1 + 4) = result;
  return result;
}
