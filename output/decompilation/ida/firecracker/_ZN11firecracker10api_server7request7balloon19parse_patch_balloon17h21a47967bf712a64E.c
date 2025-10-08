unsigned __int64 __fastcall firecracker::api_server::request::balloon::parse_patch_balloon(
        __int64 a1,
        _QWORD *a2,
        __int64 (__fastcall *a3)(),
        __int64 a4,
        __int64 a5)
{
  __int64 v6; // rdx
  unsigned __int64 result; // rax
  unsigned __int64 v8; // rcx
  _DWORD v9[2]; // [rsp+8h] [rbp-120h] BYREF
  unsigned __int64 v10; // [rsp+10h] [rbp-118h]
  _QWORD *v11; // [rsp+18h] [rbp-110h] BYREF
  __int64 (__fastcall *v12)(); // [rsp+20h] [rbp-108h]
  __int64 v13; // [rsp+28h] [rbp-100h]
  _QWORD v14[2]; // [rsp+30h] [rbp-F8h] BYREF
  __int128 v15; // [rsp+40h] [rbp-E8h] BYREF
  __int64 v16; // [rsp+50h] [rbp-D8h]
  __m256i v17; // [rsp+58h] [rbp-D0h] BYREF
  __int64 v18; // [rsp+78h] [rbp-B0h]

  if ( !a4 )
  {
    v11 = a2;
    v12 = a3;
    v13 = 0LL;
    serde_json::de::from_trait(v9, &v11);
    if ( v9[0] != 1 )
    {
      v17.m256i_i32[2] = v9[1];
      v17.m256i_i64[0] = 31LL;
      goto LABEL_9;
    }
LABEL_6:
    result = v10;
    *(_BYTE *)(a1 + 8) = 4;
    *(_QWORD *)(a1 + 16) = result;
    *(_QWORD *)a1 = 1LL;
    return result;
  }
  v14[0] = a4;
  v14[1] = a5;
  if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a4, a5, aStatistics, 10LL) )
  {
    v11 = v14;
    v12 = <&T as core::fmt::Display>::fmt;
    v17.m256i_i64[0] = (__int64)&off_3A3830;
    v17.m256i_i64[1] = 2LL;
    v18 = 0LL;
    v17.m256i_i64[2] = (__int64)&v11;
    v17.m256i_i64[3] = 1LL;
    core::option::Option<T>::map_or_else(&v15, 0LL, v6, &v17);
    *(_OWORD *)&v17.m256i_u16[3] = v15;
    *(__int64 *)((char *)&v17.m256i_i64[2] + 6) = v16;
    *(_WORD *)(a1 + 8) = 769;
    v8 = *(unsigned __int64 *)((char *)&v17.m256i_u64[2] + 6);
    result = *(unsigned __int64 *)((char *)&v17.m256i_u64[1] + 6);
    *(_OWORD *)(a1 + 10) = *(_OWORD *)v17.m256i_i8;
    *(_OWORD *)(a1 + 24) = __PAIR128__(v8, result);
    *(_QWORD *)a1 = 1LL;
    return result;
  }
  v11 = a2;
  v12 = a3;
  v13 = 0LL;
  serde_json::de::from_trait(v9, &v11);
  if ( (v9[0] & 1) != 0 )
    goto LABEL_6;
  v17.m256i_i16[4] = HIWORD(v9[0]);
  v17.m256i_i64[0] = 32LL;
LABEL_9:
  result = firecracker::api_server::parsed_request::ParsedRequest::new_sync((_QWORD *)(a1 + 8), &v17);
  *(_QWORD *)a1 = 0LL;
  return result;
}