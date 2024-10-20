int __fastcall uu_tsort::Graph::add_edge(__int64 *a1, void *a2, size_t a3, const void *a4, size_t a5)
{
  __int64 v7; // rax
  const __m128i *v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // r9
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 v14; // r8
  char v16; // r9
  unsigned __int64 v18; // rdx
  __int64 v19; // rdx
  size_t v20; // rcx
  int result; // eax
  __int64 v22; // rax
  const __m128i *v23; // rcx
  __int64 v24; // rsi
  __int64 v25; // r9
  __int64 v27; // rdi
  __int64 v28; // rdi
  __int64 v29; // r8
  char v31; // r9
  unsigned __int64 v33; // rdx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r15
  unsigned __int64 v37; // r14
  __m128i v38; // xmm0
  __int64 v39; // r13
  __int64 v42; // r14
  __int64 v43; // rbx
  __int64 v44; // r14
  __int64 v45; // r15
  __int64 v46; // rax
  __int64 v47; // rcx
  unsigned __int64 v48; // rax
  size_t v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r14
  unsigned __int64 v52; // r12
  __m128i v53; // xmm0
  __int64 v54; // r13
  __int64 j; // r15
  __int64 v58; // r12
  __int64 v59; // rbx
  int v60; // eax
  void *s1[2]; // [rsp+10h] [rbp-B8h] BYREF
  __int64 *v64; // [rsp+20h] [rbp-A8h]
  __int64 i; // [rsp+28h] [rbp-A0h]
  __m128i v66; // [rsp+30h] [rbp-98h]
  __m128i v67; // [rsp+40h] [rbp-88h] BYREF
  __int64 v68; // [rsp+50h] [rbp-78h] BYREF
  __int64 v69; // [rsp+58h] [rbp-70h]
  __int64 v70; // [rsp+60h] [rbp-68h]
  __int64 v71; // [rsp+68h] [rbp-60h]
  unsigned __int64 v72; // [rsp+70h] [rbp-58h]
  _QWORD *v73; // [rsp+78h] [rbp-50h]
  __m128i v74; // [rsp+80h] [rbp-48h]

  s1[0] = a2;
  hashbrown::rustc_entry::<impl hashbrown::map::HashMap<K,V,S,A>>::rustc_entry(&v68, a1, a2, a3);
  if ( v68 )
  {
    v7 = v71;
    v8 = *(const __m128i **)v71;
    v9 = *(_QWORD *)(v71 + 8);
    v10 = v72 & v9;
    _R10 = (unsigned int)_mm_movemask_epi8(_mm_loadu_si128((const __m128i *)(*(_QWORD *)v71 + (v72 & v9))));
    if ( !(_DWORD)_R10 )
    {
      v12 = 16LL;
      do
      {
        v10 = v9 & (v12 + v10);
        _R10 = (unsigned int)_mm_movemask_epi8(_mm_loadu_si128((const __m128i *)((char *)v8 + v10)));
        v12 += 16LL;
      }
      while ( !(_DWORD)_R10 );
    }
    v13 = v69;
    v14 = v70;
    __asm { tzcnt   r10d, r10d }
    _R10 = v9 & (v10 + _R10);
    v16 = v8->m128i_i8[_R10];
    if ( v16 >= 0 )
    {
      _R9D = _mm_movemask_epi8(_mm_load_si128(v8));
      __asm { tzcnt   r10d, r9d }
      v16 = v8->m128i_i8[_R10];
    }
    v18 = v72 >> 57;
    v8->m128i_i8[_R10] = v72 >> 57;
    v8[1].m128i_i8[v9 & (_R10 - 16)] = v18;
    v19 = -3 * _R10;
    *(_QWORD *)(v7 + 16) -= v16 & 1;
    v8[v19 - 3].m128i_i64[0] = v13;
    *((_QWORD *)&v8[v19 - 2] - 1) = v14;
    v8[v19 - 2].m128i_i64[0] = 0LL;
    *((_QWORD *)&v8[v19 - 1] - 1) = 8LL;
    v8[v19 - 1] = 0LL;
    ++*(_QWORD *)(v7 + 24);
  }
  v20 = a5;
  if ( a3 != a5 || (result = bcmp(s1[0], a4, a3), v20 = a5, result) )
  {
    hashbrown::rustc_entry::<impl hashbrown::map::HashMap<K,V,S,A>>::rustc_entry(&v68, a1, a4, v20);
    if ( v68 )
    {
      v22 = v71;
      v23 = *(const __m128i **)v71;
      v24 = *(_QWORD *)(v71 + 8);
      v25 = v72 & v24;
      _R10 = (unsigned int)_mm_movemask_epi8(_mm_loadu_si128((const __m128i *)(*(_QWORD *)v71 + (v72 & v24))));
      if ( !(_DWORD)_R10 )
      {
        v27 = 16LL;
        do
        {
          v25 = v24 & (v27 + v25);
          _R10 = (unsigned int)_mm_movemask_epi8(_mm_loadu_si128((const __m128i *)((char *)v23 + v25)));
          v27 += 16LL;
        }
        while ( !(_DWORD)_R10 );
      }
      v28 = v69;
      v29 = v70;
      __asm { tzcnt   r10d, r10d }
      _R10 = v24 & (v25 + _R10);
      v31 = v23->m128i_i8[_R10];
      if ( v31 >= 0 )
      {
        _R9D = _mm_movemask_epi8(_mm_load_si128(v23));
        __asm { tzcnt   r10d, r9d }
        v31 = v23->m128i_i8[_R10];
      }
      v33 = v72 >> 57;
      v23->m128i_i8[_R10] = v72 >> 57;
      v23[1].m128i_i8[v24 & (_R10 - 16)] = v33;
      v34 = -3 * _R10;
      *(_QWORD *)(v22 + 16) -= v31 & 1;
      v23[v34 - 3].m128i_i64[0] = v28;
      *((_QWORD *)&v23[v34 - 2] - 1) = v29;
      v23[v34 - 2].m128i_i64[0] = 0LL;
      *((_QWORD *)&v23[v34 - 1] - 1) = 8LL;
      v23[v34 - 1] = 0LL;
      ++*(_QWORD *)(v22 + 24);
    }
    v64 = a1;
    if ( !a1[3] )
LABEL_37:
      core::option::unwrap_failed(&off_E7700);
    v73 = v64 + 4;
    _RAX = core::hash::BuildHasher::hash_one(v64 + 4, s1[0], a3);
    v35 = *v64;
    v36 = v64[1];
    v37 = _RAX & v36;
    v38 = _mm_cvtsi32_si128(_RAX >> 57);
    v74 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v38, v38), 0), 0);
    v39 = v35 - 48;
    HIDWORD(_RAX) = 0;
    v66.m128i_i64[0] = 0LL;
    for ( i = v35; ; v35 = i )
    {
      v67 = _mm_loadu_si128((const __m128i *)(v35 + v37));
      _EBP = _mm_movemask_epi8(_mm_cmpeq_epi8(v67, v74));
      if ( _EBP )
        break;
LABEL_20:
      if ( _mm_movemask_epi8(
             _mm_cmpeq_epi8(
               _mm_load_si128(&v67),
               (__m128i)anon_c57a7805e9a900e622496ec0d4f4cf5c_4_llvm_6768286536187217038)) )
      {
        goto LABEL_37;
      }
      v42 = v66.m128i_i64[0] + v37 + 16;
      _RAX = v66.m128i_i64[0] + 16;
      v66.m128i_i64[0] += 16LL;
      v37 = v36 & v42;
    }
    while ( 1 )
    {
      __asm { tzcnt   eax, ebp }
      v43 = -48LL * (v36 & (v37 + _RAX));
      if ( *(_QWORD *)(v39 - 48 * (v36 & (v37 + _RAX)) + 8) == a3 && !bcmp(s1[0], *(const void **)(v43 + v39), a3) )
        break;
      _RAX = (unsigned int)(_EBP - 1);
      LOWORD(_RAX) = _EBP & (_EBP - 1);
      _EBP = _RAX;
      if ( !(_WORD)_RAX )
        goto LABEL_20;
    }
    v44 = i + v43;
    v45 = *(_QWORD *)(i + v43 - 16);
    if ( v45 == *(_QWORD *)(i + v43 - 32) )
      alloc::raw_vec::RawVec<T,A>::grow_one(i + v43 - 32);
    v46 = *(_QWORD *)(v44 - 24);
    v47 = 16 * v45;
    *(_QWORD *)(v46 + v47) = a4;
    *(_QWORD *)(v46 + v47 + 8) = a5;
    *(_QWORD *)(v44 - 16) = v45 + 1;
    if ( !v64[3] )
LABEL_38:
      core::option::unwrap_failed(&off_E7718);
    v48 = core::hash::BuildHasher::hash_one(v73, a4, a5);
    v49 = a5;
    v50 = *v64;
    v51 = v64[1];
    v52 = v48 & v51;
    v53 = _mm_cvtsi32_si128(v48 >> 57);
    v66 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v53, v53), 0), 0);
    v67.m128i_i64[0] = v50;
    v54 = v50 - 48;
    for ( j = 0LL; ; j += 16LL )
    {
      HIDWORD(_RAX) = v67.m128i_i32[1];
      *(__m128i *)s1 = _mm_loadu_si128((const __m128i *)(v67.m128i_i64[0] + v52));
      _EBP = _mm_movemask_epi8(_mm_cmpeq_epi8(*(__m128i *)s1, v66));
      if ( _EBP )
        break;
LABEL_30:
      if ( _mm_movemask_epi8(
             _mm_cmpeq_epi8(
               _mm_load_si128((const __m128i *)s1),
               (__m128i)anon_c57a7805e9a900e622496ec0d4f4cf5c_4_llvm_6768286536187217038)) )
      {
        goto LABEL_38;
      }
      v58 = j + v52 + 16;
      v52 = v51 & v58;
    }
    while ( 1 )
    {
      __asm { tzcnt   eax, ebp }
      v59 = -48LL * (v51 & (v52 + _RAX));
      if ( *(_QWORD *)(v54 - 48 * (v51 & (v52 + _RAX)) + 8) == v49 )
      {
        v60 = bcmp(a4, *(const void **)(v59 + v54), v49);
        v49 = a5;
        if ( !v60 )
          break;
      }
      _RAX = (unsigned int)(_EBP - 1);
      LOWORD(_RAX) = _EBP & (_EBP - 1);
      _EBP = _RAX;
      if ( !(_WORD)_RAX )
        goto LABEL_30;
    }
    result = v67.m128i_i32[0];
    ++*(_QWORD *)(v67.m128i_i64[0] + v59 - 8);
  }
  return result;
}
