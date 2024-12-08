__int64 __fastcall uu_env::split_iterator::SplitIterator::state_unquoted(__int64 a1, __int128 *a2)
{
  int current_char; // eax
  __int64 result; // rax
  __int128 v4; // xmm0
  _OWORD v5[2]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v6; // [rsp+20h] [rbp-38h]
  int v7[11]; // [rsp+2Ch] [rbp-2Ch] BYREF

  while ( 1 )
  {
    current_char = uu_env::split_iterator::SplitIterator::get_current_char((__int64)a2);
    v7[0] = current_char;
    if ( current_char > 38 )
      break;
    if ( current_char == 34 )
    {
      uu_env::split_iterator::SplitIterator::skip_one((__int64)v5, (__int64)a2);
      if ( LODWORD(v5[0]) != 8 )
        goto LABEL_21;
      uu_env::split_iterator::SplitIterator::state_double_quoted(v5, a2);
    }
    else
    {
      if ( current_char != 36 )
        goto LABEL_16;
      uu_env::split_iterator::SplitIterator::substitute_variable((__int64)v5, (__int64)a2);
    }
LABEL_5:
    if ( LODWORD(v5[0]) != 8 )
      goto LABEL_21;
  }
  switch ( current_char )
  {
    case 39:
      uu_env::split_iterator::SplitIterator::skip_one((__int64)v5, (__int64)a2);
      if ( LODWORD(v5[0]) != 8 )
        goto LABEL_21;
      uu_env::split_iterator::SplitIterator::state_single_quoted(v5, a2);
      goto LABEL_5;
    case 92:
      uu_env::split_iterator::SplitIterator::skip_one((__int64)v5, (__int64)a2);
      if ( LODWORD(v5[0]) != 8 )
        goto LABEL_21;
      uu_env::split_iterator::SplitIterator::state_unquoted_backslash(v5, a2);
      goto LABEL_5;
    case 1114112:
      result = uu_env::split_iterator::SplitIterator::push_word_to_words(a2);
      *(_DWORD *)a1 = 6;
      return result;
  }
LABEL_16:
  if ( !(unsigned __int8)<T as core::slice::cmp::SliceContains>::slice_contains(v7, &unk_25464, 6LL) )
  {
    uu_env::split_iterator::SplitIterator::take_one((__int64)v5, (__int64)a2);
    goto LABEL_5;
  }
  uu_env::split_iterator::SplitIterator::push_word_to_words(a2);
  result = uu_env::split_iterator::SplitIterator::skip_one((__int64)v5, (__int64)a2);
  if ( LODWORD(v5[0]) == 8 )
  {
    *(_DWORD *)a1 = 8;
    return result;
  }
LABEL_21:
  result = v6;
  *(_QWORD *)(a1 + 32) = v6;
  v4 = v5[0];
  *(_OWORD *)(a1 + 16) = v5[1];
  *(_OWORD *)a1 = v4;
  return result;
}
