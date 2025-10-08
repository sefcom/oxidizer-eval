unsigned __int64 __fastcall firecracker::api_server::request::balloon::parse_get_balloon(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rdx
  unsigned __int64 result; // rax
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rcx
  _QWORD v7[2]; // [rsp+0h] [rbp-F8h] BYREF
  _QWORD v8[2]; // [rsp+10h] [rbp-E8h] BYREF
  __int128 v9; // [rsp+20h] [rbp-D8h] BYREF
  __int64 v10; // [rsp+30h] [rbp-C8h]
  __m256i v11; // [rsp+38h] [rbp-C0h] BYREF
  __int64 v12; // [rsp+58h] [rbp-A0h]

  if ( a2 )
  {
    v7[0] = a2;
    v7[1] = a3;
    if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a2, a3, aStatistics, 10LL) )
    {
      v11.m256i_i64[0] = 10LL;
      firecracker::api_server::parsed_request::ParsedRequest::new_sync((_QWORD *)(a1 + 8), &v11);
      result = 0LL;
      *(_QWORD *)a1 = 0LL;
    }
    else
    {
      v8[0] = v7;
      v8[1] = <&T as core::fmt::Display>::fmt;
      v11.m256i_i64[0] = (__int64)&off_3A3810;
      v11.m256i_i64[1] = 2LL;
      v12 = 0LL;
      v11.m256i_i64[2] = (__int64)v8;
      v11.m256i_i64[3] = 1LL;
      core::option::Option<T>::map_or_else(&v9, 0LL, v3, &v11);
      *(_OWORD *)&v11.m256i_u16[3] = v9;
      *(__int64 *)((char *)&v11.m256i_i64[2] + 6) = v10;
      *(_WORD *)(a1 + 8) = 769;
      v6 = *(unsigned __int64 *)((char *)&v11.m256i_u64[2] + 6);
      v5 = *(unsigned __int64 *)((char *)&v11.m256i_u64[1] + 6);
      *(_OWORD *)(a1 + 10) = *(_OWORD *)v11.m256i_i8;
      *(_OWORD *)(a1 + 24) = __PAIR128__(v6, v5);
      result = 1LL;
      *(_QWORD *)a1 = 1LL;
    }
  }
  else
  {
    v11.m256i_i64[0] = 9LL;
    result = firecracker::api_server::parsed_request::ParsedRequest::new_sync((_QWORD *)(a1 + 8), &v11);
    *(_QWORD *)a1 = 0LL;
  }
  return result;
}