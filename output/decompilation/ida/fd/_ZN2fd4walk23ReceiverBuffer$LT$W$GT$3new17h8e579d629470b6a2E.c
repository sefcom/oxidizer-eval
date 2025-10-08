__int64 __fastcall fd::walk::ReceiverBuffer<W>::new(__int64 a1, __m128i *a2, __int64 a3, __int64 a4, __m128i *a5)
{
  unsigned __int32 v7; // r15d
  __int64 v8; // rbp
  __int64 v9; // rax
  unsigned int v10; // edx
  __int64 v11; // rcx
  __int64 v12; // rax
  int v13; // edx
  __int64 v14; // rbp
  __m128i v15; // xmm0
  __int64 result; // rax
  __m128i v17; // xmm0
  __m128i v18; // xmm1
  __int64 v19; // rdx
  int v20; // [rsp+4h] [rbp-94h]
  __m128i v22[3]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v23; // [rsp+60h] [rbp-38h]

  v22[0] = a2[33];
  v7 = a2[25].m128i_u32[2];
  v8 = a2[25].m128i_i64[0];
  v9 = std::time::Instant::now();
  if ( v7 == 1000000000 )
    v8 = 0LL;
  v11 = 100000000LL;
  if ( v7 != 1000000000 )
    v11 = v7;
  v12 = <std::time::Instant as core::ops::arith::Add<core::time::Duration>>::add(v9, v10, v8, v11);
  v20 = v13;
  v14 = v12;
  v23 = a5[2].m128i_i64[0];
  v15 = *a5;
  v22[2] = a5[1];
  v22[1] = v15;
  result = alloc::raw_vec::RawVecInner<A>::with_capacity_in(1000LL, 8LL, 312LL, &off_4025E8);
  v17 = _mm_add_epi64(_mm_load_si128(v22), (__m128i)xmmword_70BA0);
  *(_QWORD *)(a1 + 96) = a2;
  *(__m128i *)(a1 + 104) = v17;
  *(_QWORD *)a1 = a3;
  *(_QWORD *)(a1 + 8) = a4;
  v18 = a5[1];
  *(__m128i *)(a1 + 16) = *a5;
  *(__m128i *)(a1 + 32) = v18;
  *(_QWORD *)(a1 + 48) = a5[2].m128i_i64[0];
  *(_BYTE *)(a1 + 128) = 0;
  *(_QWORD *)(a1 + 80) = v14;
  *(_DWORD *)(a1 + 88) = v20;
  *(_QWORD *)(a1 + 56) = result;
  *(_QWORD *)(a1 + 64) = v19;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  return result;
}