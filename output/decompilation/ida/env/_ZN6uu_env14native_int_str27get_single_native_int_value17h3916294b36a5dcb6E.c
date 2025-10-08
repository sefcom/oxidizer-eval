bool __fastcall uu_env::native_int_str::get_single_native_int_value(unsigned int *a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  int v4; // [rsp+0h] [rbp-4h] BYREF

  v4 = HIDWORD(v1);
  core::char::methods::encode_utf8_raw(*a1, &v4);
  return v2 == 1;
}