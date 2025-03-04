__int64 __fastcall uu_env::native_int_str::get_char_from_native_int(char a1)
{
  char v2; // [rsp+7h] [rbp-21h] BYREF
  _QWORD v3[4]; // [rsp+8h] [rbp-20h] BYREF

  v2 = a1;
  core::str::converts::from_utf8(v3, &v2, 1LL);
  if ( v3[0] )
    return 1114112LL;
  else
    return uu_env::native_int_str::get_char_from_native_int::{{closure}}(v3[1], v3[2]);
}
