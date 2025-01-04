        __int64 a6)
{
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 result; // rax
  __int64 v10; // rdx
  _QWORD v11[3]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v12; // [rsp+18h] [rbp-40h] BYREF
  __int128 v13; // [rsp+20h] [rbp-38h]
  __int64 v14; // [rsp+30h] [rbp-28h] BYREF
  __int128 v15; // [rsp+38h] [rbp-20h]

  v7 = a2[1];
  v8 = a2[2];
  if ( *a2 == 0x8000000000000000LL )
  {
    result = uu_env::native_int_str::NativeStr::slice::{{closure}}(a3, a4, v7, v8);
    if ( result )
    {
      *a1 = 0x8000000000000000LL;
      a1[1] = result;
      a1[2] = v10;
      return result;
    }
    goto LABEL_5;
  }
  result = uu_env::native_int_str::NativeStr::slice::{{closure}}(v11, a5, a6, v7, v8);
  if ( v11[0] == 0x8000000000000000LL )
  {
LABEL_5:
    *a1 = 0x8000000000000001LL;
    return result;
  }
  core::ops::function::FnOnce::call_once(&v12, v11);
  v15 = v13;
  v14 = v12;
  return core::ops::function::FnOnce::call_once(a1, &v14);
}
