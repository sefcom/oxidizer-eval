__int64 __fastcall uu_env::split_iterator::SplitIterator::state_unquoted(__int64 a1, __int128 *a2)
{
  __int128 *v2; // r14
  int current_char; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 result; // rax
  __int128 v13; // xmm0
  _OWORD v14[2]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v15; // [rsp+20h] [rbp-38h]
  int v16[11]; // [rsp+2Ch] [rbp-2Ch] BYREF

  v2 = a2;
  while ( 1 )
  {
    current_char = uu_env::split_iterator::SplitIterator::get_current_char((__int64)v2);
    v16[0] = current_char;
    if ( current_char > 38 )
      break;
    if ( current_char == 34 )
    {
      uu_env::split_iterator::SplitIterator::skip_one((__int64)v14, (__int64)v2);
      if ( LODWORD(v14[0]) != 8 )
        goto LABEL_21;
      a2 = v2;
      uu_env::split_iterator::SplitIterator::state_double_quoted((__int64)v14, (__int64)v2);
    }
    else
    {
      if ( current_char != 36 )
        goto LABEL_16;
      a2 = v2;
      uu_env::split_iterator::SplitIterator::substitute_variable((__int64)v14, (__int64)v2);
    }
LABEL_5:
    if ( LODWORD(v14[0]) != 8 )
      goto LABEL_21;
  }
  switch ( current_char )
  {
    case 39:
      uu_env::split_iterator::SplitIterator::skip_one((__int64)v14, (__int64)v2);
      if ( LODWORD(v14[0]) != 8 )
        goto LABEL_21;
      a2 = v2;
      uu_env::split_iterator::SplitIterator::state_single_quoted((__int64)v14, (__int64)v2);
      goto LABEL_5;
    case 92:
      uu_env::split_iterator::SplitIterator::skip_one((__int64)v14, (__int64)v2);
      if ( LODWORD(v14[0]) != 8 )
        goto LABEL_21;
      a2 = v2;
      uu_env::split_iterator::SplitIterator::state_unquoted_backslash((__int64)v14, (__int64)v2);
      goto LABEL_5;
    case 1114112:
      result = uu_env::split_iterator::SplitIterator::push_word_to_words(v2, (__int64)a2, v4, v5, v6, v7);
      *(_DWORD *)a1 = 6;
      return result;
  }
LABEL_16:
  if ( !(unsigned __int8)<T as core::slice::cmp::SliceContains>::slice_contains(v16, &unk_25464, 6LL) )
  {
    a2 = v2;
    uu_env::split_iterator::SplitIterator::take_one((__int64)v14, (__int64)v2);
    goto LABEL_5;
  }
  uu_env::split_iterator::SplitIterator::push_word_to_words(v2, (__int64)&unk_25464, v8, v9, v10, v11);
  result = uu_env::split_iterator::SplitIterator::skip_one((__int64)v14, (__int64)v2);
  if ( LODWORD(v14[0]) == 8 )
  {
    *(_DWORD *)a1 = 8;
    return result;
  }
LABEL_21:
  result = v15;
  *(_QWORD *)(a1 + 32) = v15;
  v13 = v14[0];
  *(_OWORD *)(a1 + 16) = v14[1];
  *(_OWORD *)a1 = v13;
  return result;
}
