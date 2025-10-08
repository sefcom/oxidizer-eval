__int64 __fastcall uu_env::split_iterator::SplitIterator::state_unquoted(__int64 a1, __int128 *a2)
{
  int current_char; // eax
  __int64 result; // rax
  __int128 v4; // xmm0
  __int128 v5; // xmm0
  _BYTE v6[40]; // [rsp+0h] [rbp-58h] BYREF
  int v7[11]; // [rsp+2Ch] [rbp-2Ch] BYREF

  while ( 1 )
  {
    while ( 1 )
    {
      current_char = (unsigned int)uu_env::split_iterator::SplitIterator::get_current_char((__int64)a2);
      v7[0] = current_char;
      if ( current_char > 38 )
        break;
      if ( current_char != 34 )
      {
        if ( current_char == 36 )
        {
          uu_env::split_iterator::SplitIterator::substitute_variable((__int64)v6, (__int64)a2);
          goto LABEL_5;
        }
        goto LABEL_16;
      }
      uu_env::split_iterator::SplitIterator::skip_one((__int64)v6, (__int64)a2);
      if ( *(_DWORD *)v6 != 12 )
        goto LABEL_22;
      uu_env::split_iterator::SplitIterator::state_double_quoted(v6, a2);
LABEL_5:
      if ( *(_DWORD *)v6 != 12 )
        goto LABEL_22;
    }
    if ( current_char == 39 )
    {
      uu_env::split_iterator::SplitIterator::skip_one((__int64)v6, (__int64)a2);
      if ( *(_DWORD *)v6 != 12 )
        goto LABEL_22;
      uu_env::split_iterator::SplitIterator::state_single_quoted(v6, a2);
      goto LABEL_5;
    }
    if ( current_char == 92 )
    {
      uu_env::split_iterator::SplitIterator::skip_one((__int64)v6, (__int64)a2);
      if ( *(_DWORD *)v6 != 12 )
        goto LABEL_22;
      uu_env::split_iterator::SplitIterator::state_unquoted_backslash(v6, a2);
      goto LABEL_5;
    }
    if ( current_char == (_DWORD)&off_110000 )
    {
      result = uu_env::split_iterator::SplitIterator::push_word_to_words(a2);
      *(_DWORD *)a1 = 9;
      return result;
    }
LABEL_16:
    if ( (unsigned __int8)<char as core::slice::cmp::SliceContains>::slice_contains(v7, &unk_1E808, 6LL) )
      break;
    uu_env::split_iterator::SplitIterator::take_one((__int64)v6, (__int64)a2);
    result = *(unsigned int *)v6;
    if ( *(_DWORD *)v6 != 12 )
    {
      *(_DWORD *)(a1 + 36) = *(_DWORD *)&v6[36];
      v4 = *(_OWORD *)&v6[4];
      *(_OWORD *)(a1 + 20) = *(_OWORD *)&v6[20];
      *(_OWORD *)(a1 + 4) = v4;
      *(_DWORD *)a1 = result;
      return result;
    }
  }
  uu_env::split_iterator::SplitIterator::push_word_to_words(a2);
  result = uu_env::split_iterator::SplitIterator::skip_one((__int64)v6, (__int64)a2);
  if ( *(_DWORD *)v6 == 12 )
  {
    *(_DWORD *)a1 = 12;
    return result;
  }
LABEL_22:
  result = *(_QWORD *)&v6[32];
  *(_QWORD *)(a1 + 32) = *(_QWORD *)&v6[32];
  v5 = *(_OWORD *)v6;
  *(_OWORD *)(a1 + 16) = *(_OWORD *)&v6[16];
  *(_OWORD *)a1 = v5;
  return result;
}