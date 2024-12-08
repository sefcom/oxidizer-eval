__int64 __fastcall uu_env::variable_parser::VariableParser::skip_one(__int64 a1)
{
  __int64 v1; // rax
  char v2; // cl
  __int64 result; // rax
  __int64 v4; // [rsp+8h] [rbp-20h] BYREF
  __int64 v5; // [rsp+10h] [rbp-18h]
  char v6; // [rsp+18h] [rbp-10h]

  uu_env::string_parser::StringParser::consume_chunk(&v4);
  if ( v4 )
  {
    v1 = v5;
    v2 = v6;
    *(_QWORD *)(a1 + 8) = v5;
    *(_QWORD *)(a1 + 16) = v1;
    *(_BYTE *)(a1 + 24) = v2;
    result = 5LL;
  }
  else
  {
    result = 8LL;
  }
  *(_DWORD *)a1 = result;
  return result;
}
