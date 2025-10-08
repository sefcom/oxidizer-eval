char __fastcall uu_env::native_int_str::NativeStr::contains(__int64 a1, unsigned int *a2)
{
  unsigned __int8 v2; // dl
  bool single_native_int_value; // cl
  char result; // al

  single_native_int_value = uu_env::native_int_str::get_single_native_int_value(a2);
  result = 2;
  if ( single_native_int_value )
    return core::slice::memchr::memchr(v2, *(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 16)) == 1;
  return result;
}