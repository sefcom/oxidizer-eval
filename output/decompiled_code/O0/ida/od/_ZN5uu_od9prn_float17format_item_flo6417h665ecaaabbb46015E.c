__int64 __fastcall uu_od::prn_float::format_item_flo64(__int64 a1, double a2)
{
  void *v3; // [rsp+8h] [rbp-80h] BYREF
  __int64 v4; // [rsp+10h] [rbp-78h]
  _QWORD *v5; // [rsp+18h] [rbp-70h]
  __int64 v6; // [rsp+20h] [rbp-68h]
  __int64 v7; // [rsp+28h] [rbp-60h]
  _QWORD v8[2]; // [rsp+38h] [rbp-50h] BYREF
  __int128 v9; // [rsp+48h] [rbp-40h] BYREF
  __int64 v10; // [rsp+58h] [rbp-30h]
  _BYTE v11[16]; // [rsp+60h] [rbp-28h] BYREF
  _BYTE v12[24]; // [rsp+70h] [rbp-18h] BYREF

  uu_od::prn_float::format_float(v11, 24LL, 17LL, a2);
  v8[0] = v11;
  v8[1] = <alloc::string::String as core::fmt::Display>::fmt;
  v3 = &off_12E338;
  v4 = 1LL;
  v5 = v8;
  v6 = 1LL;
  v7 = 0LL;
  alloc::fmt::format::format_inner(&v9, &v3);
  alloc::raw_vec::RawVec<T,A>::current_memory(&v3, v11);
  if ( v4 )
    <alloc::alloc::Global as core::alloc::Allocator>::deallocate(v12, v3, v4, v5);
  *(_QWORD *)(a1 + 16) = v10;
  *(_OWORD *)a1 = v9;
  return a1;
}
