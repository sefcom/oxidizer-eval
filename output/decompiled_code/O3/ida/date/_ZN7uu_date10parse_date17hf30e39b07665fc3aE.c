__int64 __fastcall uu_date::parse_date(__int64 a1, __int64 a2)
{
  const void *v2; // r12
  size_t v3; // r15
  __int64 v4; // r13
  void *v5; // rbp
  _BYTE v7[24]; // [rsp+0h] [rbp-78h] BYREF
  __int64 v8; // [rsp+18h] [rbp-60h] BYREF
  __int64 v9; // [rsp+20h] [rbp-58h]
  void *dest; // [rsp+28h] [rbp-50h]
  __int128 v11; // [rsp+30h] [rbp-48h]
  __int64 v12; // [rsp+40h] [rbp-38h]

  v2 = *(const void **)(a2 + 8);
  v3 = *(_QWORD *)(a2 + 16);
  parse_datetime::parse_datetime(v7, v2, v3);
  if ( *(_QWORD *)v7 == 0x8000000000000002LL )
  {
    *(_OWORD *)(a1 + 8) = *(_OWORD *)&v7[8];
    *(_QWORD *)a1 = 0x8000000000000000LL;
  }
  else
  {
    v12 = *(_QWORD *)&v7[16];
    v11 = *(_OWORD *)v7;
    alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v8, v3, 0LL);
    v4 = v9;
    if ( v8 )
      alloc::raw_vec::handle_error(v9, dest);
    v5 = dest;
    memcpy(dest, v2, v3);
    *(_OWORD *)(a1 + 24) = *(_OWORD *)v7;
    *(_QWORD *)(a1 + 40) = *(_QWORD *)&v7[16];
    *(_QWORD *)a1 = v4;
    *(_QWORD *)(a1 + 8) = v5;
    *(_QWORD *)(a1 + 16) = v3;
  }
  <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(a2);
  return <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(a2);
}
