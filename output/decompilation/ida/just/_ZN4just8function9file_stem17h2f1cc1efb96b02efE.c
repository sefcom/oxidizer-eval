__int64 __fastcall just::function::file_stem(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  char **v6; // rax
  __int64 v7; // rax
  _QWORD v9[2]; // [rsp+0h] [rbp-58h] BYREF
  char **v10; // [rsp+10h] [rbp-48h] BYREF
  __int128 v11; // [rsp+18h] [rbp-40h]
  __int64 v12; // [rsp+28h] [rbp-30h]
  __int64 v13; // [rsp+30h] [rbp-28h]
  _QWORD v14[3]; // [rsp+40h] [rbp-18h] BYREF

  v9[0] = a3;
  v9[1] = a4;
  v4 = std::path::Path::file_stem(a3, a4);
  if ( v4 )
  {
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v10, v4);
    v6 = v10;
    *(_OWORD *)(a1 + 16) = v11;
    *(_QWORD *)(a1 + 8) = v6;
    v7 = 0LL;
  }
  else
  {
    v14[0] = v9;
    v14[1] = <&T as core::fmt::Display>::fmt;
    v10 = &off_42FEC8;
    *(_QWORD *)&v11 = 2LL;
    v13 = 0LL;
    *((_QWORD *)&v11 + 1) = v14;
    v12 = 1LL;
    core::option::Option<T>::map_or_else(a1 + 8, 0LL, v5, &v10);
    v7 = 1LL;
  }
  *(_QWORD *)a1 = v7;
  return a1;
}