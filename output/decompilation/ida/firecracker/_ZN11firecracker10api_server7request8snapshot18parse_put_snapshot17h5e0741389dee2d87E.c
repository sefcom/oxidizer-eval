__int64 __fastcall firecracker::api_server::request::snapshot::parse_put_snapshot(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  __int64 result; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __m256i v11; // [rsp+0h] [rbp-98h] BYREF
  __int64 v12; // [rsp+20h] [rbp-78h]
  __int128 v13; // [rsp+30h] [rbp-68h] BYREF
  __int64 v14; // [rsp+40h] [rbp-58h]
  _QWORD v15[2]; // [rsp+48h] [rbp-50h] BYREF
  __int128 v16; // [rsp+58h] [rbp-40h] BYREF
  __int64 v17; // [rsp+68h] [rbp-30h]

  if ( a4 )
  {
    v15[0] = a4;
    v15[1] = a5;
    if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a4, a5, aCreate_0, 6LL) )
      return firecracker::api_server::request::snapshot::parse_put_snapshot_create(a1, a2, a3);
    if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a4, a5, aLoad, 4LL) )
      return firecracker::api_server::request::snapshot::parse_put_snapshot_load(a1, a2, a3);
    *(_QWORD *)&v13 = v15;
    *((_QWORD *)&v13 + 1) = <&T as core::fmt::Display>::fmt;
    v11.m256i_i64[0] = (__int64)&off_3A38A0;
    v11.m256i_i64[1] = 1LL;
    v12 = 0LL;
    v11.m256i_i64[2] = (__int64)&v13;
    v11.m256i_i64[3] = 1LL;
    core::option::Option<T>::map_or_else(&v16, 0LL, v9, &v11);
    *(_OWORD *)&v11.m256i_u16[3] = v16;
    *(__int64 *)((char *)&v11.m256i_i64[2] + 6) = v17;
    *(_WORD *)(a1 + 8) = 259;
  }
  else
  {
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v13);
    *(__int64 *)((char *)&v11.m256i_i64[2] + 6) = v14;
    *(_OWORD *)&v11.m256i_u16[3] = v13;
    *(_WORD *)(a1 + 8) = 769;
  }
  result = *(__int64 *)((char *)&v11.m256i_i64[1] + 6);
  v10 = *(__int64 *)((char *)&v11.m256i_i64[2] + 6);
  *(_OWORD *)(a1 + 10) = *(_OWORD *)v11.m256i_i8;
  *(_QWORD *)(a1 + 24) = result;
  *(_QWORD *)(a1 + 32) = v10;
  *(_QWORD *)a1 = 1LL;
  return result;
}