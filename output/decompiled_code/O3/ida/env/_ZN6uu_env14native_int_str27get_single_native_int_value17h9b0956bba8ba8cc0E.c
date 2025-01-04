bool __fastcall uu_env::native_int_str::get_single_native_int_value(unsigned int *a1)
{
  int v2; // [rsp+0h] [rbp-4h] BYREF

  v2 = 0;
  return core::char::methods::encode_utf8_raw(*a1, &v2) == 1;
}
