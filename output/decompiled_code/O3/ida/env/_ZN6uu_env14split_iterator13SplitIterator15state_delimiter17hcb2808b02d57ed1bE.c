__int64 __fastcall uu_env::split_iterator::SplitIterator::state_delimiter(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int128 v3; // xmm0
  _OWORD v4[2]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v5; // [rsp+20h] [rbp-38h]
  _DWORD v6[11]; // [rsp+2Ch] [rbp-2Ch] BYREF

  while ( 1 )
  {
    result = uu_env::split_iterator::SplitIterator::get_current_char(a2);
    v6[0] = result;
    if ( (_DWORD)result != 35 )
      break;
    uu_env::split_iterator::SplitIterator::skip_one((__int64)v4, a2);
    if ( LODWORD(v4[0]) != 8 )
    {
LABEL_13:
      result = v5;
      *(_QWORD *)(a1 + 32) = v5;
      v3 = v4[0];
      *(_OWORD *)(a1 + 16) = v4[1];
      *(_OWORD *)a1 = v3;
      return result;
    }
    uu_env::split_iterator::SplitIterator::state_comment(v4, a2);
LABEL_3:
    if ( LODWORD(v4[0]) != 8 )
      goto LABEL_13;
  }
  if ( (_DWORD)result == 92 )
  {
    uu_env::split_iterator::SplitIterator::skip_one((__int64)v4, a2);
    if ( LODWORD(v4[0]) != 8 )
      goto LABEL_13;
    uu_env::split_iterator::SplitIterator::state_delimiter_backslash(v4, a2);
    goto LABEL_3;
  }
  if ( (_DWORD)result != 1114112 )
  {
    if ( (unsigned __int8)<T as core::slice::cmp::SliceContains>::slice_contains(v6, &unk_25318, 6LL) )
      uu_env::split_iterator::SplitIterator::skip_one((__int64)v4, a2);
    else
      uu_env::split_iterator::SplitIterator::state_unquoted(v4, a2);
    goto LABEL_3;
  }
  *(_DWORD *)a1 = 8;
  return result;
}
