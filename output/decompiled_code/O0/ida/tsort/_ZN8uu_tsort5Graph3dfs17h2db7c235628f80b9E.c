char __fastcall uu_tsort::Graph::dfs(__int64 a1, const void *a2, __int64 a3, const __m128i *a4, unsigned __int64 *a5)
{
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // r15
  size_t v7; // r12
  const void *v8; // r13
  __int64 v9; // r15
  __int64 v10; // rbx
  const __m128i *v11; // r14
  __m128i v12; // xmm0
  unsigned __int64 v13; // rax
  __m128i v14; // xmm0
  __m128i v15; // xmm0
  __int64 *v16; // rbp
  __m128i v17; // xmm1
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // r12
  __int64 v20; // rdx
  __int128 v21; // xmm0
  __int64 v22; // rax
  unsigned __int64 v23; // r12
  __int64 v24; // rcx
  __int64 v25; // r13
  const void *v26; // r14
  size_t v27; // r15
  unsigned __int64 *v28; // r12
  unsigned __int64 v29; // rbx
  unsigned __int64 v30; // rax
  __int64 v31; // rcx
  __int64 inner; // rax
  unsigned __int64 v33; // r15
  __int64 i; // r15
  const __m128i *v35; // rbx
  char v36; // al
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // rax
  __m128d v40; // [rsp+0h] [rbp-E8h] BYREF
  __m128i v41; // [rsp+10h] [rbp-D8h]
  const void *v42; // [rsp+20h] [rbp-C8h] BYREF
  size_t v43; // [rsp+28h] [rbp-C0h]
  const __m128i *v44; // [rsp+30h] [rbp-B8h]
  __int64 v45; // [rsp+38h] [rbp-B0h]
  __m128i v46; // [rsp+40h] [rbp-A8h] BYREF
  __m128i v47; // [rsp+50h] [rbp-98h] BYREF
  __m128i v48; // [rsp+60h] [rbp-88h]
  __int128 v49; // [rsp+70h] [rbp-78h]
  __int64 v50; // [rsp+80h] [rbp-68h]
  __m128d v51; // [rsp+90h] [rbp-58h]
  unsigned __int64 *v52; // [rsp+A0h] [rbp-48h]
  __int128 v53; // [rsp+A8h] [rbp-40h] BYREF

  v44 = a4;
  v45 = a1;
  v42 = a2;
  v43 = a3;
  v5 = a5[1];
  if ( !v5 )
    goto LABEL_30;
  if ( (v5 & 7) != 0 )
    goto LABEL_30;
  v6 = a5[2];
  if ( v6 > 0x7FFFFFFFFFFFFFFLL )
    goto LABEL_30;
  v7 = a3;
  v8 = a2;
  v52 = a5;
  if ( !v6 )
  {
LABEL_10:
    v11 = v44;
    if ( v44[1].m128i_i64[1] )
    {
      v12 = _mm_loadu_si128(v44 + 2);
      v46 = _mm_xor_si128(_mm_shuffle_epi32(v12, 68), (__m128i)xmmword_16050);
      v47 = _mm_xor_si128(_mm_shuffle_epi32(v12, 238), (__m128i)xmmword_15FB0);
      v48 = v12;
      v49 = 0LL;
      v50 = 0LL;
      <core::hash::sip::Hasher<S> as core::hash::Hasher>::write(&v46);
      LOBYTE(v40.m128d_f64[0]) = -1;
      v11 = v44;
      <core::hash::sip::Hasher<S> as core::hash::Hasher>::write(&v46);
      v41.m128i_i64[0] = v47.m128i_i64[0];
      v40 = (__m128d)v46;
      v13 = *((_QWORD *)&v49 + 1) | ((_QWORD)v49 << 56);
      v51 = (__m128d)v13;
      v41.m128i_i64[1] = v13 ^ v47.m128i_i64[1];
      <core::hash::sip::Sip13Rounds as core::hash::sip::Sip>::c_rounds(&v40, &v40);
      v40 = _mm_xor_pd(_mm_shuffle_pd(v51, unk_16160, 2), v40);
      <core::hash::sip::Sip13Rounds as core::hash::sip::Sip>::d_rounds(&v40);
      v14 = _mm_xor_si128(_mm_load_si128((const __m128i *)&v40), v41);
      if ( hashbrown::raw::RawTable<T,A>::find(v11, _mm_xor_si128(_mm_shuffle_epi32(v14, 238), v14).m128i_u64[0], &v42) )
        return 0;
      v8 = v42;
      v7 = v43;
    }
    *(_QWORD *)&v53 = v8;
    *((_QWORD *)&v53 + 1) = v7;
    v15 = _mm_loadu_si128(v11 + 2);
    v46 = _mm_xor_si128(_mm_shuffle_epi32(v15, 68), (__m128i)xmmword_16050);
    v47 = _mm_xor_si128(_mm_shuffle_epi32(v15, 238), (__m128i)xmmword_15FB0);
    v48 = v15;
    v49 = 0LL;
    v50 = 0LL;
    <core::hash::sip::Hasher<S> as core::hash::Hasher>::write(&v46);
    LOBYTE(v40.m128d_f64[0]) = -1;
    v16 = (__int64 *)v44;
    <core::hash::sip::Hasher<S> as core::hash::Hasher>::write(&v46);
    v17 = _mm_load_si128(&v47);
    v41.m128i_i64[0] = v17.m128i_i64[0];
    v40 = (__m128d)v46;
    v18 = *((_QWORD *)&v49 + 1) | ((_QWORD)v49 << 56);
    v51 = (__m128d)v18;
    v41.m128i_i64[1] = v18 ^ v17.m128i_i64[1];
    <core::hash::sip::Sip13Rounds as core::hash::sip::Sip>::c_rounds(&v40, &v40);
    v40 = _mm_xor_pd(_mm_shuffle_pd(v51, unk_16160, 2), v40);
    <core::hash::sip::Sip13Rounds as core::hash::sip::Sip>::d_rounds(&v40);
    v19 = v41.m128i_i64[1] ^ *(_QWORD *)&v40.m128d_f64[1] ^ *(_QWORD *)&v40.m128d_f64[0] ^ v41.m128i_i64[0];
    *(_QWORD *)&v40.m128d_f64[0] = &v53;
    if ( !v16[2] )
      hashbrown::raw::RawTable<T,A>::reserve_rehash(v16, 1LL, v16 + 4, 1LL);
    v46.m128i_i64[0] = (__int64)&v40;
    v46.m128i_i64[1] = (__int64)v16;
    if ( hashbrown::raw::RawTableInner::find_or_find_insert_slot_inner(
           v16,
           v19,
           &v46,
           &anon_4f7dc1d0c611ba0c2f23d0766af8b1ae_9_llvm_8073096756824606961) )
    {
      v21 = v53;
      v22 = *v16;
      v16[2] -= *(_BYTE *)(*v16 + v20) & 1;
      v23 = v19 >> 57;
      v24 = v16[1] & (v20 - 16);
      *(_BYTE *)(v22 + v20) = v23;
      *(_BYTE *)(*v16 + v24 + 16) = v23;
      ++v16[3];
      *(_OWORD *)(*v16 - 16 * v20 - 16) = v21;
    }
    v25 = v45;
    v26 = v42;
    v27 = v43;
    v28 = v52;
    v29 = v52[2];
    if ( v29 == *v52 )
      alloc::raw_vec::RawVec<T,A>::grow_one(v52);
    v30 = v28[1];
    v31 = 16 * v29;
    *(_QWORD *)(v30 + v31) = v26;
    *(_QWORD *)(v30 + v31 + 8) = v27;
    v28[2] = v29 + 1;
    inner = hashbrown::map::HashMap<K,V,S,A>::get_inner(v25, v42, v43);
    if ( !inner )
    {
LABEL_27:
      v38 = v28[2];
      if ( v38 )
      {
        v39 = v38 - 1;
        v28[2] = v39;
        if ( v39 >= *v28 )
          core::panicking::panic_nounwind(
            anon_b868ed4da222ba9062be98d2d394e4af_16_llvm_8603923905359120187,
            104LL,
            a3,
            a4);
      }
      return 0;
    }
    a4 = *(const __m128i **)(inner + 24);
    if ( a4 )
    {
      a3 = *(_QWORD *)(inner + 24) & 7LL;
      if ( ((unsigned __int8)a4 & 7) == 0 )
      {
        v33 = *(_QWORD *)(inner + 32);
        if ( v33 <= 0x7FFFFFFFFFFFFFFLL )
        {
          for ( i = 16 * v33; i; i -= 16LL )
          {
            v35 = a4 + 1;
            v36 = uu_tsort::Graph::dfs(v25, a4->m128i_i64[0], a4->m128i_i64[1], v16, v28);
            a4 = v35;
            if ( v36 )
              return 1;
          }
          goto LABEL_27;
        }
      }
    }
LABEL_30:
    core::panicking::panic_nounwind(anon_b8e768ed0ddf17f1539d76bb5aedca5a_38_llvm_9157631453777517788, 162LL, a3, a4);
  }
  v9 = 16 * v6;
  v10 = 0LL;
  while ( *(_QWORD *)(v5 + v10 + 8) != v7 || bcmp(*(const void **)(v5 + v10), a2, v7) )
  {
    v10 += 16LL;
    if ( v9 == v10 )
      goto LABEL_10;
  }
  return 1;
}
