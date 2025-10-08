__int64 __fastcall uu_env::split_iterator::SplitIterator::skip_one(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  char v3; // al
  __int64 result; // rax
  __int64 v5; // [rsp+8h] [rbp-20h] BYREF
  __int64 v6; // [rsp+10h] [rbp-18h]
  char v7; // [rsp+18h] [rbp-10h]

  uu_env::string_parser::StringParser::consume_one_ascii_or_all_non_ascii(&v5, a2 + 24);
  v2 = v6;
  if ( __OFSUB__(-v5, 1LL) )
  {
    v3 = v7;
    *(_QWORD *)(a1 + 8) = v6;
    *(_QWORD *)(a1 + 16) = v2;
    *(_BYTE *)(a1 + 24) = v3;
    result = 11LL;
    *(_DWORD *)a1 = 11;
  }
  else
  {
    core::ptr::drop_in_place<alloc::vec::Vec<&str>>(v5, v6);
    result = 12LL;
    *(_DWORD *)a1 = 12;
  }
  return result;
}