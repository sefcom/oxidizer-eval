__int64 __fastcall uu_od::prn_float::format_item_flo32(__int64 a1, __m128 a2)
{
  __m128i v2; // xmm1
  __int32 v4; // [rsp+4h] [rbp-F4h] BYREF
  void *v5; // [rsp+8h] [rbp-F0h] BYREF
  __int64 v6; // [rsp+10h] [rbp-E8h]
  _QWORD *v7; // [rsp+18h] [rbp-E0h]
  __int64 v8; // [rsp+20h] [rbp-D8h]
  __int64 v9; // [rsp+28h] [rbp-D0h]
  __int64 v10; // [rsp+30h] [rbp-C8h]
  char v11; // [rsp+38h] [rbp-C0h]
  __int128 v12; // [rsp+40h] [rbp-B8h] BYREF
  __int64 v13; // [rsp+50h] [rbp-A8h] BYREF
  _QWORD v14[2]; // [rsp+60h] [rbp-98h] BYREF
  __int128 v15; // [rsp+70h] [rbp-88h] BYREF
  __int64 v16; // [rsp+80h] [rbp-78h]
  _QWORD v17[4]; // [rsp+88h] [rbp-70h] BYREF
  _QWORD v18[6]; // [rsp+A8h] [rbp-50h] BYREF
  __int128 v19; // [rsp+D8h] [rbp-20h] BYREF
  __int64 v20; // [rsp+E8h] [rbp-10h]

  a2.m128_f32[0] = *(double *)a2.m128_u64;
  v4 = a2.m128_i32[0];
  v2 = (__m128i)_mm_and_ps((__m128)xmmword_1A1D0, a2);
  if ( *(float *)v2.m128i_i32 == INFINITY
    || !_mm_cvtsi128_si32(v2)
    || (_mm_cvtsi128_si32((__m128i)a2) & 0x7F800000) != 0 )
  {
    uu_od::prn_float::format_float(&v12, 14LL, 8LL, a2.m128_f32[0]);
  }
  else
  {
    v17[0] = &v4;
    v17[1] = core::fmt::float::<impl core::fmt::LowerExp for f32>::fmt;
    v17[2] = 14LL;
    v17[3] = 0LL;
    v5 = &dword_0 + 2;
    v7 = (_QWORD *)(&dword_0 + 1);
    v8 = 1LL;
    v9 = 0LL;
    v10 = 32LL;
    v11 = 3;
    v18[0] = &anon_5881361bc50ddb8569a319ef7cd28565_52_llvm_17519153253422479168;
    v18[1] = 1LL;
    v18[2] = v17;
    v18[3] = 2LL;
    v18[4] = &v5;
    v18[5] = 1LL;
    alloc::fmt::format::format_inner(&v19, v18);
    v12 = v19;
    v13 = v20;
  }
  v14[0] = &v12;
  v14[1] = <alloc::string::String as core::fmt::Display>::fmt;
  v5 = &off_12E338;
  v6 = 1LL;
  v7 = v14;
  v8 = 1LL;
  v9 = 0LL;
  alloc::fmt::format::format_inner(&v15, &v5);
  alloc::raw_vec::RawVec<T,A>::current_memory(&v5, &v12);
  if ( v6 )
    <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&v13, v5, v6, v7);
  *(_QWORD *)(a1 + 16) = v16;
  *(_OWORD *)a1 = v15;
  return a1;
}
