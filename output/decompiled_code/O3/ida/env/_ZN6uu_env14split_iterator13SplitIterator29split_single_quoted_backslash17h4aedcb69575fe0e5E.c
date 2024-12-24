__int64 __fastcall uu_env::split_iterator::SplitIterator::split_single_quoted_backslash(__int64 a1, __int64 a2)
{
  int current_char; // eax
  __int64 result; // rax
  int v4; // ebp
  __int128 v5; // xmm0
  int v6; // [rsp+4h] [rbp-44h] BYREF
  _OWORD v7[2]; // [rsp+8h] [rbp-40h] BYREF
  __int64 v8; // [rsp+28h] [rbp-20h]

  current_char = uu_env::split_iterator::SplitIterator::get_current_char(a2);
  v6 = current_char;
  if ( current_char > 91 )
  {
    if ( current_char == 92 )
      goto LABEL_10;
    if ( current_char == 1114112 )
    {
      result = *(_QWORD *)(a2 + 56);
      *(_QWORD *)a1 = 0x2700000000LL;
      goto LABEL_15;
    }
  }
  else
  {
    if ( current_char == 10 )
    {
      result = uu_env::split_iterator::SplitIterator::skip_one((__int64)v7, a2);
      if ( LODWORD(v7[0]) == 8 )
        goto LABEL_11;
LABEL_13:
      result = v8;
      *(_QWORD *)(a1 + 32) = v8;
      v5 = v7[0];
      *(_OWORD *)(a1 + 16) = v7[1];
      *(_OWORD *)a1 = v5;
      return result;
    }
    if ( current_char == 39 )
    {
LABEL_10:
      result = uu_env::split_iterator::SplitIterator::take_one((__int64)v7, a2);
      if ( LODWORD(v7[0]) == 8 )
      {
LABEL_11:
        *(_DWORD *)a1 = 8;
        return result;
      }
      goto LABEL_13;
    }
  }
  v4 = current_char;
  *(_QWORD *)&v7[0] = &unk_2541C;
  *((_QWORD *)&v7[0] + 1) = &unk_25464;
  if ( (unsigned __int8)<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::any(v7, &v6) )
  {
    uu_env::split_iterator::SplitIterator::push_char_to_word(a2, 0x5Cu);
    goto LABEL_10;
  }
  result = *(_QWORD *)(a2 + 56);
  *(_DWORD *)a1 = 3;
  *(_DWORD *)(a1 + 4) = v4;
LABEL_15:
  *(_QWORD *)(a1 + 8) = result;
  return result;
}
