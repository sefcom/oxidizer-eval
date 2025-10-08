__int64 __fastcall uu_env::string_parser::StringParser::consume_chunk(__int64 a1, _QWORD *a2)
{
  unsigned __int64 v2; // r15
  __int64 v3; // r12
  char v4; // bp
  __int64 v5; // rax
  int v6; // eax
  int v8; // [rsp+0h] [rbp-48h] BYREF
  __int64 v9; // [rsp+8h] [rbp-40h]
  char v10; // [rsp+10h] [rbp-38h]
  _BYTE v11[7]; // [rsp+11h] [rbp-37h]
  __int64 v12; // [rsp+18h] [rbp-30h]

  v2 = a2[4];
  uu_env::string_parser::StringParser::get_chunk_with_length_at((__int64)&v8, a2, v2);
  v3 = v9;
  v4 = v10;
  if ( v8 == 1 )
  {
    v5 = 1LL;
  }
  else
  {
    v6 = *(_DWORD *)v11;
    *(_DWORD *)(a1 + 20) = *(_DWORD *)&v11[3];
    *(_DWORD *)(a1 + 17) = v6;
    uu_env::string_parser::StringParser::set_pointer(a2, v12 + v2);
    v5 = 0LL;
  }
  *(_QWORD *)(a1 + 8) = v3;
  *(_BYTE *)(a1 + 16) = v4;
  *(_QWORD *)a1 = v5;
  return a1;
}