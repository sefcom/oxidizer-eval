__int64 __fastcall uu_env::split_iterator::SplitIterator::state_double_quoted(__int64 a1, __int64 a2)
{
  int current_char; // eax
  __int64 result; // rax
  __int128 v4; // xmm0
  _OWORD v5[2]; // [rsp+8h] [rbp-40h] BYREF
  __int64 v6; // [rsp+28h] [rbp-20h]

  while ( 1 )
  {
    current_char = (unsigned int)uu_env::split_iterator::SplitIterator::get_current_char(a2);
    if ( current_char <= 91 )
      break;
    if ( current_char != 92 )
    {
      if ( current_char == (_DWORD)&off_110000 )
      {
        result = *(_QWORD *)(a2 + 56);
        *(_QWORD *)a1 = 0x2200000000LL;
        *(_QWORD *)(a1 + 8) = result;
        return result;
      }
      goto LABEL_12;
    }
    uu_env::split_iterator::SplitIterator::skip_one((__int64)v5, a2);
    if ( LODWORD(v5[0]) != 12 )
      goto LABEL_16;
    uu_env::split_iterator::SplitIterator::state_double_quoted_backslash(v5, a2);
LABEL_4:
    if ( LODWORD(v5[0]) != 12 )
      goto LABEL_16;
  }
  if ( current_char == 36 )
  {
    uu_env::split_iterator::SplitIterator::substitute_variable((__int64)v5, a2);
    goto LABEL_4;
  }
  if ( current_char != 34 )
  {
LABEL_12:
    uu_env::split_iterator::SplitIterator::take_one((__int64)v5, a2);
    goto LABEL_4;
  }
  result = uu_env::split_iterator::SplitIterator::skip_one((__int64)v5, a2);
  if ( LODWORD(v5[0]) == 12 )
  {
    *(_DWORD *)a1 = 12;
    return result;
  }
LABEL_16:
  result = v6;
  *(_QWORD *)(a1 + 32) = v6;
  v4 = v5[0];
  *(_OWORD *)(a1 + 16) = v5[1];
  *(_OWORD *)a1 = v4;
  return result;
}