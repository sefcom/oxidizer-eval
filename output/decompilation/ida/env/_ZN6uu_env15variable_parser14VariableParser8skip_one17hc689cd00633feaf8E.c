__int64 __fastcall uu_env::variable_parser::VariableParser::skip_one(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  char v3; // cl
  __int64 result; // rax
  int v5; // [rsp+8h] [rbp-20h] BYREF
  __int64 v6; // [rsp+10h] [rbp-18h]
  char v7; // [rsp+18h] [rbp-10h]

  uu_env::string_parser::StringParser::consume_chunk((__int64)&v5, a2);
  if ( v5 == 1 )
  {
    v2 = v6;
    v3 = v7;
    *(_QWORD *)(a1 + 8) = v6;
    *(_QWORD *)(a1 + 16) = v2;
    *(_BYTE *)(a1 + 24) = v3;
    result = 11LL;
    *(_DWORD *)a1 = 11;
  }
  else
  {
    result = 12LL;
    *(_DWORD *)a1 = 12;
  }
  return result;
}