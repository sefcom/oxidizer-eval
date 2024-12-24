__int64 __fastcall uu_env::string_parser::StringParser::new(__int64 a1, __int64 a2, __int64 a3)
{
  __int128 v3; // xmm0
  __int128 v5; // [rsp+8h] [rbp-30h] BYREF
  __int128 v6; // [rsp+18h] [rbp-20h]
  __int64 v7; // [rsp+28h] [rbp-10h]

  *(_QWORD *)&v5 = a2;
  *((_QWORD *)&v5 + 1) = a3;
  v7 = 0LL;
  *(_QWORD *)&v6 = a2;
  *((_QWORD *)&v6 + 1) = a3;
  uu_env::string_parser::StringParser::set_pointer((__int64)&v5, 0LL);
  *(_QWORD *)(a1 + 32) = v7;
  v3 = v5;
  *(_OWORD *)(a1 + 16) = v6;
  *(_OWORD *)a1 = v3;
  return a1;
}
