__int64 __fastcall uu_env::native_int_str::NativeStr::slice(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  _QWORD v5[5]; // [rsp+0h] [rbp-28h] BYREF

  uu_env::native_int_str::NativeStr::match_cow(v5, a2, a3, a4, a3, a4);
  core::result::Result<T,E>::unwrap(a1, v5);
  return a1;
}
