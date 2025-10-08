__int64 __fastcall just::function::quote(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdx
  _QWORD v6[2]; // [rsp+8h] [rbp-80h] BYREF
  __int128 v7; // [rsp+18h] [rbp-70h] BYREF
  __int64 v8; // [rsp+28h] [rbp-60h]
  _QWORD v9[6]; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v10[40]; // [rsp+60h] [rbp-28h] BYREF

  alloc::str::<impl str>::replace(v10, a3, a4);
  v6[0] = v10;
  v6[1] = <alloc::string::String as core::fmt::Display>::fmt;
  v9[0] = &off_42FFC0;
  v9[1] = 2LL;
  v9[4] = 0LL;
  v9[2] = v6;
  v9[3] = 1LL;
  core::option::Option<T>::map_or_else(&v7, 0LL, v4, v9);
  core::ptr::drop_in_place<alloc::string::String>(v10);
  *(_QWORD *)(a1 + 24) = v8;
  *(_OWORD *)(a1 + 8) = v7;
  *(_QWORD *)a1 = 0LL;
  return a1;
}