__int64 __fastcall uu_env::native_int_str::NativeStr::match_cow(
        __int64 *a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v6; // r10
  __int64 v7; // rax
  __int64 result; // rax
  __int64 v9; // rdx
  __int64 v10; // [rsp+0h] [rbp-28h] BYREF
  __int128 v11; // [rsp+8h] [rbp-20h]

  v6 = a2[1];
  v7 = a2[2];
  if ( __OFSUB__(0LL, *a2) )
  {
    result = uu_env::native_int_str::NativeStr::slice::{{closure}}(a3, a4, v6, v7);
    if ( result )
    {
      *a1 = 0x8000000000000000LL;
      a1[1] = result;
      a1[2] = v9;
    }
    else
    {
      *a1 = 0x8000000000000001LL;
    }
  }
  else
  {
    uu_env::native_int_str::NativeStr::slice::{{closure}}(&v10, a5, a6, v6, v7);
    result = v10;
    if ( v10 == 0x8000000000000000LL )
      result = 0x8000000000000001LL;
    else
      *(_OWORD *)(a1 + 1) = v11;
    *a1 = result;
  }
  return result;
}