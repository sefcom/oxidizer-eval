_UNKNOWN **__fastcall uu_env::native_int_str::get_char_from_native_int(char a1)
{
  _UNKNOWN **result; // rax
  char v2; // [rsp+7h] [rbp-21h] BYREF
  _BYTE v3[8]; // [rsp+8h] [rbp-20h] BYREF
  __int64 v4; // [rsp+10h] [rbp-18h]
  __int64 v5; // [rsp+18h] [rbp-10h]

  v2 = a1;
  core::str::converts::from_utf8(v3, &v2, 1LL);
  result = &off_110000;
  if ( (v3[0] & 1) == 0 )
    return (_UNKNOWN **)uu_env::native_int_str::get_char_from_native_int::{{closure}}(v4, v5);
  return result;
}