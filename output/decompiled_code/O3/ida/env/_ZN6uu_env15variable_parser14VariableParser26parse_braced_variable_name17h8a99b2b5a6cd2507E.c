__int64 __fastcall uu_env::variable_parser::VariableParser::parse_braced_variable_name(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v4; // r13
  unsigned int current_char; // eax
  __int64 v6; // r14
  __int64 v7; // rdi
  const char *v8; // rsi
  __int64 v9; // rdx
  __int64 result; // rax
  __int128 v11; // xmm0
  __int64 v12; // rbp
  __int64 v13; // r15
  int v14; // eax
  __int64 v15; // r15
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int128 v18; // xmm0
  _BYTE v19[40]; // [rsp+0h] [rbp-78h] BYREF
  unsigned int v20; // [rsp+34h] [rbp-44h] BYREF
  _QWORD v21[8]; // [rsp+38h] [rbp-40h] BYREF

  v4 = *(_QWORD *)(a2 + 32);
  uu_env::variable_parser::VariableParser::check_variable_name_start((__int64)v19, a2);
  if ( *(_DWORD *)v19 != 8 )
  {
LABEL_12:
    result = *(_QWORD *)&v19[32];
    *(_QWORD *)(a1 + 32) = *(_QWORD *)&v19[32];
    v11 = *(_OWORD *)v19;
    *(_OWORD *)(a1 + 16) = *(_OWORD *)&v19[16];
    *(_OWORD *)a1 = v11;
    return result;
  }
  current_char = uu_env::variable_parser::VariableParser::get_current_char(a2);
  if ( current_char == 1114112 )
  {
LABEL_9:
    v6 = *(_QWORD *)(a2 + 32);
    v7 = a1 + 16;
    v8 = aMissingClosing;
    v9 = 21LL;
LABEL_10:
    result = <T as alloc::slice::hack::ConvertVec>::to_vec(v7, v8, v9);
    goto LABEL_11;
  }
  while ( current_char > 0x7F || current_char - 48 < 0xA || (current_char & 0x5F) - 65 <= 0x19 || current_char == 95 )
  {
    uu_env::variable_parser::VariableParser::skip_one((__int64)v19);
    if ( *(_DWORD *)v19 != 8 )
      goto LABEL_12;
    current_char = uu_env::variable_parser::VariableParser::get_current_char(a2);
    if ( current_char == 1114112 )
      goto LABEL_9;
  }
  if ( current_char != 58 )
  {
    if ( current_char == 125 )
    {
      v12 = *(_QWORD *)(a2 + 32);
      uu_env::variable_parser::VariableParser::skip_one((__int64)v19);
      result = *(unsigned int *)v19;
      if ( *(_DWORD *)v19 == 8 )
      {
        v13 = 0LL;
LABEL_26:
        *(_QWORD *)v19 = v4;
        *(_QWORD *)&v19[8] = v12;
        result = uu_env::string_parser::StringParser::substring(a2, v19);
        *(_QWORD *)(a1 + 8) = result;
        *(_QWORD *)(a1 + 16) = v17;
        *(_QWORD *)(a1 + 24) = v13;
        *(_QWORD *)(a1 + 32) = v2;
        *(_DWORD *)a1 = 8;
        return result;
      }
      goto LABEL_27;
    }
    v20 = current_char;
    v6 = *(_QWORD *)(a2 + 32);
    v21[0] = &v20;
    v21[1] = <char as core::fmt::Display>::fmt;
    *(_QWORD *)v19 = &off_1495B8;
    *(_QWORD *)&v19[8] = 2LL;
    *(_QWORD *)&v19[32] = 0LL;
    *(_QWORD *)&v19[16] = v21;
    *(_QWORD *)&v19[24] = 1LL;
    result = core::option::Option<T>::map_or_else(a1 + 16, v19);
LABEL_11:
    *(_DWORD *)a1 = 4;
    *(_QWORD *)(a1 + 8) = v6;
    return result;
  }
  v12 = *(_QWORD *)(a2 + 32);
  while ( 1 )
  {
    v14 = uu_env::variable_parser::VariableParser::get_current_char(a2);
    if ( v14 == 125 )
      break;
    if ( v14 == 1114112 )
    {
      v6 = *(_QWORD *)(a2 + 32);
      v7 = a1 + 16;
      v8 = aMissingClosing_0;
      v9 = 41LL;
      goto LABEL_10;
    }
    uu_env::variable_parser::VariableParser::skip_one((__int64)v19);
    result = *(unsigned int *)v19;
    if ( *(_DWORD *)v19 != 8 )
      goto LABEL_27;
  }
  v15 = *(_QWORD *)(a2 + 32);
  uu_env::variable_parser::VariableParser::skip_one((__int64)v19);
  result = *(unsigned int *)v19;
  if ( *(_DWORD *)v19 == 8 )
  {
    *(_QWORD *)v19 = v12 + 1;
    *(_QWORD *)&v19[8] = v15;
    v13 = uu_env::string_parser::StringParser::substring(a2, v19);
    v2 = v16;
    goto LABEL_26;
  }
LABEL_27:
  *(_DWORD *)(a1 + 36) = *(_DWORD *)&v19[36];
  v18 = *(_OWORD *)&v19[4];
  *(_OWORD *)(a1 + 20) = *(_OWORD *)&v19[20];
  *(_OWORD *)(a1 + 4) = v18;
  *(_DWORD *)a1 = result;
  return result;
}
