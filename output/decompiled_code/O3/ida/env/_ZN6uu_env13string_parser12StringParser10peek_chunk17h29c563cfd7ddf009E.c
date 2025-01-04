__int64 __fastcall uu_env::string_parser::StringParser::peek_chunk(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  __int64 v4; // [rsp+0h] [rbp-28h] BYREF
  __int128 v5; // [rsp+8h] [rbp-20h]

  uu_env::string_parser::StringParser::get_chunk_with_length_at((__int64)&v4, a2, a2[4]);
  if ( v4 )
  {
    v2 = 0LL;
  }
  else
  {
    *(_OWORD *)(a1 + 8) = v5;
    v2 = 1LL;
  }
  *(_QWORD *)a1 = v2;
  return a1;
}
