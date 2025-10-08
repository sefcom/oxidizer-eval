__int64 __fastcall uu_env::variable_parser::VariableParser::parse_braced_variable_name(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r12
  __int64 v3; // r13
  unsigned int current_char; // eax
  __int64 result; // rax
  __int128 v6; // xmm0
  __int64 v7; // rbp
  __int64 v8; // r15
  unsigned int v9; // eax
  __int64 v10; // r14
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r15
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int128 v16; // xmm0
  _BYTE v17[40]; // [rsp+8h] [rbp-70h] BYREF
  __int128 v18; // [rsp+30h] [rbp-48h] BYREF
  __int64 v19; // [rsp+40h] [rbp-38h]

  v3 = a2[4];
  uu_env::variable_parser::VariableParser::check_variable_name_start((__int64)v17, (__int64)a2);
  if ( *(_DWORD *)v17 != 12 )
  {
LABEL_10:
    result = *(_QWORD *)&v17[32];
    *(_QWORD *)(a1 + 32) = *(_QWORD *)&v17[32];
    v6 = *(_OWORD *)v17;
    *(_OWORD *)(a1 + 16) = *(_OWORD *)&v17[16];
    *(_OWORD *)a1 = v6;
    return result;
  }
  current_char = (unsigned int)uu_env::variable_parser::VariableParser::get_current_char((__int64)a2);
  if ( current_char == (_DWORD)&off_110000 )
  {
LABEL_9:
    result = a2[4];
    *(_DWORD *)a1 = 4;
    *(_QWORD *)(a1 + 8) = result;
    return result;
  }
  while ( current_char >= 0x80 || current_char - 48 < 0xA || (current_char & 0x5F) - 65 <= 0x19 || current_char == 95 )
  {
    uu_env::variable_parser::VariableParser::skip_one((__int64)v17, a2);
    if ( *(_DWORD *)v17 != 12 )
      goto LABEL_10;
    current_char = (unsigned int)uu_env::variable_parser::VariableParser::get_current_char((__int64)a2);
    if ( current_char == (_DWORD)&off_110000 )
      goto LABEL_9;
  }
  if ( current_char == 58 )
  {
    v7 = a2[4];
    while ( 1 )
    {
      v9 = (unsigned int)uu_env::variable_parser::VariableParser::get_current_char((__int64)a2);
      if ( v9 == 125 )
        break;
      if ( v9 == (_DWORD)&off_110000 )
      {
        result = a2[4];
        *(_DWORD *)a1 = 6;
        *(_QWORD *)(a1 + 8) = result;
        return result;
      }
      uu_env::variable_parser::VariableParser::skip_one((__int64)v17, a2);
      result = *(unsigned int *)v17;
      if ( *(_DWORD *)v17 != 12 )
        goto LABEL_25;
    }
    v13 = a2[4];
    uu_env::variable_parser::VariableParser::skip_one((__int64)v17, a2);
    result = *(unsigned int *)v17;
    if ( *(_DWORD *)v17 == 12 )
    {
      *(_QWORD *)v17 = v7 + 1;
      *(_QWORD *)&v17[8] = v13;
      v8 = uu_env::string_parser::StringParser::substring(a2, (__int64 *)v17);
      v2 = v14;
      goto LABEL_24;
    }
  }
  else
  {
    if ( current_char != 125 )
    {
      v10 = a2[4];
      *(_DWORD *)v17 = 0;
      v11 = core::char::methods::encode_utf8_raw(current_char, v17);
      <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v18, v11, v12);
      *(_DWORD *)a1 = 8;
      *(_QWORD *)(a1 + 8) = v10;
      *(_OWORD *)(a1 + 16) = v18;
      result = v19;
      *(_QWORD *)(a1 + 32) = v19;
      return result;
    }
    v7 = a2[4];
    uu_env::variable_parser::VariableParser::skip_one((__int64)v17, a2);
    result = *(unsigned int *)v17;
    if ( *(_DWORD *)v17 == 12 )
    {
      v8 = 0LL;
LABEL_24:
      *(_QWORD *)v17 = v3;
      *(_QWORD *)&v17[8] = v7;
      result = uu_env::string_parser::StringParser::substring(a2, (__int64 *)v17);
      *(_QWORD *)(a1 + 8) = result;
      *(_QWORD *)(a1 + 16) = v15;
      *(_QWORD *)(a1 + 24) = v8;
      *(_QWORD *)(a1 + 32) = v2;
      *(_DWORD *)a1 = 12;
      return result;
    }
  }
LABEL_25:
  *(_DWORD *)(a1 + 36) = *(_DWORD *)&v17[36];
  v16 = *(_OWORD *)&v17[4];
  *(_OWORD *)(a1 + 20) = *(_OWORD *)&v17[20];
  *(_OWORD *)(a1 + 4) = v16;
  *(_DWORD *)a1 = result;
  return result;
}