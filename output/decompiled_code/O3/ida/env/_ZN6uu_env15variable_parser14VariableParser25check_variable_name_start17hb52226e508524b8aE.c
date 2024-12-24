__int64 __fastcall uu_env::variable_parser::VariableParser::check_variable_name_start(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v3; // r14
  int v4; // [rsp+4h] [rbp-54h] BYREF
  _QWORD v5[2]; // [rsp+8h] [rbp-50h] BYREF
  _QWORD v6[8]; // [rsp+18h] [rbp-40h] BYREF

  result = uu_env::variable_parser::VariableParser::get_current_char(a2);
  if ( (_DWORD)result == 1114112 || (v4 = result, result = (unsigned int)(result - 48), (unsigned int)result >= 0xA) )
  {
    *(_DWORD *)a1 = 8;
  }
  else
  {
    v3 = a2[4];
    v5[0] = &v4;
    v5[1] = <char as core::fmt::Display>::fmt;
    v6[0] = &off_149598;
    v6[1] = 2LL;
    v6[4] = 0LL;
    v6[2] = v5;
    v6[3] = 1LL;
    result = core::option::Option<T>::map_or_else(a1 + 16, v6);
    *(_DWORD *)a1 = 4;
    *(_QWORD *)(a1 + 8) = v3;
  }
  return result;
}
