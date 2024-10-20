unsigned __int64 __fastcall uu_env::string_parser::StringParser::substring(_QWORD *a1, unsigned __int64 *a2)
{
  unsigned __int64 v2; // rcx
  unsigned __int64 v3; // rax
  bool v4; // cf
  unsigned __int64 v5; // rcx
  char **v7; // [rsp+8h] [rbp-30h] BYREF
  __int64 v8; // [rsp+10h] [rbp-28h]
  __int64 v9; // [rsp+18h] [rbp-20h]
  __int128 v10; // [rsp+20h] [rbp-18h]

  v2 = a1[1];
  v3 = *a2;
  v4 = v2 < *a2;
  v5 = v2 - *a2;
  if ( v4 )
  {
    v7 = &anon_c479f575d13bdc6af5496164023f20a6_5_llvm_1842864401518779319;
    v8 = 1LL;
    v9 = 8LL;
    v10 = 0LL;
    core::panicking::panic_fmt(&v7, &anon_c479f575d13bdc6af5496164023f20a6_11_llvm_1842864401518779319);
  }
  if ( a2[1] - v3 > v5 )
  {
    v7 = &anon_c479f575d13bdc6af5496164023f20a6_5_llvm_1842864401518779319;
    v8 = 1LL;
    v9 = 8LL;
    v10 = 0LL;
    core::panicking::panic_fmt(&v7, &anon_c479f575d13bdc6af5496164023f20a6_12_llvm_1842864401518779319);
  }
  return *a1 + v3;
}
