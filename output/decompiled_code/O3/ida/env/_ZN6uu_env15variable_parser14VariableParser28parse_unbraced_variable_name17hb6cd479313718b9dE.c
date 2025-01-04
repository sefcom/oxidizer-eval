__int64 __fastcall uu_env::variable_parser::VariableParser::parse_unbraced_variable_name(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  int i; // eax
  __int64 v4; // rax
  __int64 result; // rax
  __int128 v6; // xmm0
  __int64 v7; // rdx
  _OWORD v8[2]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v9; // [rsp+20h] [rbp-28h]

  v2 = *(_QWORD *)(a2 + 32);
  uu_env::variable_parser::VariableParser::check_variable_name_start((__int64)v8, a2);
  if ( LODWORD(v8[0]) == 8 )
  {
    for ( i = uu_env::variable_parser::VariableParser::get_current_char(a2);
          i != 1114112;
          i = uu_env::variable_parser::VariableParser::get_current_char(a2) )
    {
      if ( i != 95 && (unsigned int)(i - 48) >= 0xA && (i & 0x1FFFDFu) - 65 > 0x19 )
        break;
      uu_env::variable_parser::VariableParser::skip_one((__int64)v8);
      if ( LODWORD(v8[0]) != 8 )
        goto LABEL_10;
    }
    v4 = *(_QWORD *)(a2 + 32);
    if ( v4 == v2 )
    {
      result = <T as alloc::slice::hack::ConvertVec>::to_vec(a1 + 16, aMissingVariabl, 21LL);
      *(_DWORD *)a1 = 4;
      *(_QWORD *)(a1 + 8) = v2;
    }
    else
    {
      *(_QWORD *)&v8[0] = v2;
      *((_QWORD *)&v8[0] + 1) = v4;
      result = uu_env::string_parser::StringParser::substring(a2, v8);
      *(_QWORD *)(a1 + 8) = result;
      *(_QWORD *)(a1 + 16) = v7;
      *(_DWORD *)a1 = 8;
    }
  }
  else
  {
LABEL_10:
    result = v9;
    *(_QWORD *)(a1 + 32) = v9;
    v6 = v8[0];
    *(_OWORD *)(a1 + 16) = v8[1];
    *(_OWORD *)a1 = v6;
  }
  return result;
}
