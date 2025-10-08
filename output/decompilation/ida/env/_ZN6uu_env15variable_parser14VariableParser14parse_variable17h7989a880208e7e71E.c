__int64 __fastcall uu_env::variable_parser::VariableParser::parse_variable(__int64 a1, _QWORD **a2)
{
  _QWORD *v2; // r14
  unsigned int current_char; // eax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  _QWORD *v8; // rsi
  __int128 v9; // xmm0
  int v11; // eax
  int v12; // ecx
  __int128 v13; // xmm0
  int v14; // ecx
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  _BYTE v17[40]; // [rsp+0h] [rbp-38h] BYREF

  v2 = *a2;
  uu_env::variable_parser::VariableParser::skip_one((__int64)v17, *a2);
  if ( *(_DWORD *)v17 != 12 )
    goto LABEL_8;
  current_char = (unsigned int)uu_env::variable_parser::VariableParser::get_current_char((__int64)v2);
  if ( current_char == 123 )
  {
    uu_env::variable_parser::VariableParser::skip_one((__int64)v17, v2);
    if ( *(_DWORD *)v17 == 12 )
    {
      uu_env::variable_parser::VariableParser::parse_braced_variable_name((__int64)v17, v2);
      if ( *(_DWORD *)v17 != 12 )
      {
        v14 = *(_DWORD *)&v17[4];
        v15 = *(_OWORD *)&v17[8];
        v16 = *(_OWORD *)&v17[24];
        *(_DWORD *)a1 = *(_DWORD *)v17;
        *(_DWORD *)(a1 + 4) = v14;
        *(_OWORD *)(a1 + 8) = v15;
        *(_OWORD *)(a1 + 24) = v16;
        return a1;
      }
      v5 = *(_QWORD *)&v17[8];
      v6 = *(_QWORD *)&v17[24];
      v7 = *(_QWORD *)&v17[16];
      v8 = *(_QWORD **)&v17[32];
LABEL_12:
      *(_QWORD *)(a1 + 8) = v5;
      *(_QWORD *)(a1 + 16) = v7;
      *(_QWORD *)(a1 + 24) = v6;
      *(_QWORD *)(a1 + 32) = v8;
      *(_DWORD *)a1 = 12;
      return a1;
    }
LABEL_8:
    *(_QWORD *)(a1 + 32) = *(_QWORD *)&v17[32];
    v9 = *(_OWORD *)v17;
    *(_OWORD *)(a1 + 16) = *(_OWORD *)&v17[16];
    *(_OWORD *)a1 = v9;
    return a1;
  }
  if ( current_char != (_DWORD)&off_110000 )
  {
    v8 = v2;
    uu_env::variable_parser::VariableParser::parse_unbraced_variable_name((__int64)v17, v2);
    v11 = *(_DWORD *)v17;
    if ( *(_DWORD *)v17 != 12 )
    {
      v12 = *(_DWORD *)&v17[4];
      v13 = *(_OWORD *)&v17[8];
      *(_OWORD *)(a1 + 24) = *(_OWORD *)&v17[24];
      *(_DWORD *)a1 = v11;
      *(_DWORD *)(a1 + 4) = v12;
      *(_OWORD *)(a1 + 8) = v13;
      return a1;
    }
    v5 = *(_QWORD *)&v17[8];
    v7 = *(_QWORD *)&v17[16];
    v6 = 0LL;
    goto LABEL_12;
  }
  v4 = v2[4];
  *(_DWORD *)a1 = 5;
  *(_QWORD *)(a1 + 8) = v4;
  return a1;
}