__int64 __fastcall uu_env::variable_parser::VariableParser::parse_unbraced_variable_name(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r12
  unsigned int i; // eax
  __int64 result; // rax
  __int128 v5; // xmm0
  __int64 v6; // rdx
  _OWORD v7[2]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v8; // [rsp+20h] [rbp-28h]

  v2 = a2[4];
  uu_env::variable_parser::VariableParser::check_variable_name_start((__int64)v7, (__int64)a2);
  if ( LODWORD(v7[0]) == 12 )
  {
    for ( i = (unsigned int)uu_env::variable_parser::VariableParser::get_current_char((__int64)a2);
          i != (_DWORD)&off_110000;
          i = (unsigned int)uu_env::variable_parser::VariableParser::get_current_char((__int64)a2) )
    {
      if ( i != 95 && i - 48 >= 0xA && (i & 0x1FFFDF) - 65 >= 0x1A )
        break;
      uu_env::variable_parser::VariableParser::skip_one((__int64)v7, a2);
      if ( LODWORD(v7[0]) != 12 )
        goto LABEL_10;
    }
    result = a2[4];
    if ( result == v2 )
    {
      *(_DWORD *)a1 = 5;
      *(_QWORD *)(a1 + 8) = v2;
    }
    else
    {
      *(_QWORD *)&v7[0] = v2;
      *((_QWORD *)&v7[0] + 1) = result;
      result = uu_env::string_parser::StringParser::substring(a2, (__int64 *)v7);
      *(_QWORD *)(a1 + 8) = result;
      *(_QWORD *)(a1 + 16) = v6;
      *(_DWORD *)a1 = 12;
    }
  }
  else
  {
LABEL_10:
    result = v8;
    *(_QWORD *)(a1 + 32) = v8;
    v5 = v7[0];
    *(_OWORD *)(a1 + 16) = v7[1];
    *(_OWORD *)a1 = v5;
  }
  return result;
}