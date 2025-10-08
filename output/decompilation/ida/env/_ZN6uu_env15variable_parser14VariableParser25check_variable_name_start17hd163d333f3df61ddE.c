_UNKNOWN **__fastcall uu_env::variable_parser::VariableParser::check_variable_name_start(__int64 a1, __int64 a2)
{
  _UNKNOWN **result; // rax
  int v3; // ecx
  __int64 v4; // r14
  __int64 v5; // rax
  __int64 v6; // rdx
  int v7; // [rsp+Ch] [rbp-2Ch] BYREF
  __int128 v8; // [rsp+10h] [rbp-28h] BYREF
  _UNKNOWN **v9; // [rsp+20h] [rbp-18h]

  result = uu_env::variable_parser::VariableParser::get_current_char(a2);
  v3 = 12;
  if ( (unsigned int)((_DWORD)result - 48) <= 9 )
  {
    v4 = *(_QWORD *)(a2 + 32);
    v7 = 0;
    v5 = core::char::methods::encode_utf8_raw((unsigned int)result, &v7);
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v8, v5, v6);
    *(_QWORD *)(a1 + 8) = v4;
    *(_OWORD *)(a1 + 16) = v8;
    result = v9;
    *(_QWORD *)(a1 + 32) = v9;
    v3 = 7;
  }
  *(_DWORD *)a1 = v3;
  return result;
}