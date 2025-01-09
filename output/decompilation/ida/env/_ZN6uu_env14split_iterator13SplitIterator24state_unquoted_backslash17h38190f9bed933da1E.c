__int64 __fastcall uu_env::split_iterator::SplitIterator::state_unquoted_backslash(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  int current_char; // r15d
  __int64 result; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int128 v12; // xmm0
  __int64 v13; // r14
  int v14; // ecx
  __int128 v15; // xmm0
  _BYTE v16[40]; // [rsp+8h] [rbp-40h] BYREF

  current_char = uu_env::split_iterator::SplitIterator::get_current_char(a2);
  if ( current_char <= 91 )
  {
    switch ( current_char )
    {
      case 10:
        result = uu_env::split_iterator::SplitIterator::skip_one((__int64)v16, a2);
        if ( *(_DWORD *)v16 != 8 )
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
      result = uu_env::split_iterator::SplitIterator::push_word_to_words((__int128 *)a2, a2, v2, v3, v4, v5);
      *(_DWORD *)a1 = 6;
      return result;
    }
    if ( current_char == 1114112 )
    {
      v13 = *(_QWORD *)(a2 + 56);
      result = <T as alloc::slice::hack::ConvertVec>::to_vec(a1 + 16, aUnquoted, 8LL);
      *(_DWORD *)a1 = 1;
      *(_QWORD *)(a1 + 8) = v13;
      return result;
    }
  }
  else
  {
    if ( current_char == 92 )
    {
LABEL_10:
      result = uu_env::split_iterator::SplitIterator::take_one((__int64)v16, a2);
      if ( *(_DWORD *)v16 != 8 )
      {
LABEL_12:
        result = *(_QWORD *)&v16[32];
        *(_QWORD *)(a1 + 32) = *(_QWORD *)&v16[32];
        v12 = *(_OWORD *)v16;
        *(_OWORD *)(a1 + 16) = *(_OWORD *)&v16[16];
        *(_OWORD *)a1 = v12;
        return result;
      }
      goto LABEL_11;
    }
    if ( current_char == 95 )
    {
      uu_env::split_iterator::SplitIterator::skip_one((__int64)v16, a2);
      if ( *(_DWORD *)v16 == 8 )
      {
        result = uu_env::split_iterator::SplitIterator::push_word_to_words((__int128 *)a2, a2, v8, v9, v10, v11);
        *(_DWORD *)a1 = 7;
        return result;
      }
      goto LABEL_12;
    }
  }
LABEL_17:
  uu_env::split_iterator::SplitIterator::check_and_replace_ascii_escape_code((__int64)v16, a2, current_char);
  v14 = *(_DWORD *)v16;
  result = v16[4];
  if ( *(_DWORD *)v16 == 8 )
  {
    if ( !v16[4] )
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
  *(_DWORD *)(a1 + 36) = *(_DWORD *)&v16[36];
  v15 = *(_OWORD *)&v16[5];
  *(_OWORD *)(a1 + 21) = *(_OWORD *)&v16[21];
  *(_OWORD *)(a1 + 5) = v15;
  *(_DWORD *)a1 = v14;
  *(_BYTE *)(a1 + 4) = result;
  return result;
}
