__int64 __fastcall uu_env::split_iterator::SplitIterator::state_comment(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int128 v3; // xmm0
  _OWORD v4[2]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v5; // [rsp+20h] [rbp-28h]

  result = (__int64)uu_env::split_iterator::SplitIterator::get_current_char(a2);
  if ( (_DWORD)result == 10 )
  {
LABEL_4:
    result = uu_env::split_iterator::SplitIterator::skip_one((__int64)v4, a2);
    if ( LODWORD(v4[0]) == 12 )
    {
      *(_DWORD *)a1 = 12;
    }
    else
    {
      result = v5;
      *(_QWORD *)(a1 + 32) = v5;
      v3 = v4[0];
      *(_OWORD *)(a1 + 16) = v4[1];
      *(_OWORD *)a1 = v3;
    }
  }
  else
  {
    while ( (_DWORD)result != (_DWORD)&off_110000 )
    {
      uu_env::string_parser::StringParser::skip_until_char_or_end(a2 + 24, 10LL);
      result = (__int64)uu_env::split_iterator::SplitIterator::get_current_char(a2);
      if ( (_DWORD)result == 10 )
        goto LABEL_4;
    }
    *(_DWORD *)a1 = 9;
  }
  return result;
}