char __fastcall uu_tsort::Graph::dfs(__int64 *a1, const void *a2, size_t a3, __int64 *a4, _QWORD *a5)
{
  __int64 v7; // r15
  __int64 v8; // r14
  unsigned __int64 v9; // rax
  __int64 v11; // rbx
  unsigned __int64 v12; // r14
  __m128i v13; // xmm0
  __int64 v14; // rbp
  __int64 v16; // r14
  int v17; // eax
  _QWORD *v18; // r13
  __int64 v19; // rax
  __int64 v20; // r14
  unsigned __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rbp
  __int64 v24; // rsi
  __m128i v25; // xmm0
  __int64 v26; // rbx
  __int64 i; // r15
  __int64 v30; // r13
  int v31; // eax
  __int64 v32; // rsi
  _QWORD *v33; // rcx
  __int64 v34; // rbx
  _QWORD *v35; // r14
  char v36; // al
  __int64 v38; // [rsp+0h] [rbp-A8h]
  __int64 v39; // [rsp+0h] [rbp-A8h]
  __int64 v40; // [rsp+8h] [rbp-A0h]
  __int64 v41; // [rsp+8h] [rbp-A0h]
  _QWORD *v44; // [rsp+20h] [rbp-88h]
  __m128i v45; // [rsp+30h] [rbp-78h] BYREF
  __m128i v46; // [rsp+40h] [rbp-68h]
  __m128i v47; // [rsp+50h] [rbp-58h] BYREF
  _QWORD v48[8]; // [rsp+68h] [rbp-40h] BYREF

  v48[0] = a2;
  v48[1] = a3;
  v7 = a5[1];
  v38 = a5[2];
  if ( v38 )
  {
    v8 = 0LL;
    while ( *(_QWORD *)(v7 + v8 + 8) != a3 || bcmp(*(const void **)(v7 + v8), a2, a3) )
    {
      v8 += 16LL;
      if ( 16 * v38 == v8 )
        goto LABEL_7;
    }
    return 1;
  }
  else
  {
LABEL_7:
    v44 = a5;
    if ( a4[3] )
    {
      v9 = core::hash::BuildHasher::hash_one(a4 + 4, v48);
      _RCX = *a4;
      v11 = a4[1];
      v12 = v9 & v11;
      v13 = _mm_cvtsi32_si128(v9 >> 57);
      v46 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v13, v13), 0), 0);
      v40 = _RCX;
      v14 = _RCX - 16;
      v45.m128i_i64[0] = 0LL;
      while ( 1 )
      {
        v47 = _mm_loadu_si128((const __m128i *)(v40 + v12));
        _R13D = _mm_movemask_epi8(_mm_cmpeq_epi8(v47, v46));
        if ( _R13D )
          break;
LABEL_10:
        if ( _mm_movemask_epi8(
               _mm_cmpeq_epi8(
                 _mm_load_si128(&v47),
                 (__m128i)anon_c57a7805e9a900e622496ec0d4f4cf5c_4_llvm_6768286536187217038)) )
        {
          goto LABEL_16;
        }
        v16 = v45.m128i_i64[0] + v12 + 16;
        v45.m128i_i64[0] += 16LL;
        v12 = v11 & v16;
      }
      while ( 1 )
      {
        __asm { tzcnt   ecx, r13d }
        _RCX = 16 * (v11 & (v12 + _RCX));
        if ( *(_QWORD *)(v14 - _RCX + 8) == a3 && !bcmp(a2, *(const void **)(v14 - _RCX), a3) )
          break;
        v17 = _R13D - 1;
        LOWORD(v17) = _R13D & (_R13D - 1);
        _R13D = v17;
        if ( !(_WORD)v17 )
          goto LABEL_10;
      }
    }
    else
    {
LABEL_16:
      hashbrown::map::HashMap<K,V,S,A>::insert(a4, a2, a3);
      v18 = v44;
      if ( v38 == *v44 )
      {
        alloc::raw_vec::RawVec<T,A>::grow_one(v44);
        v7 = v44[1];
      }
      v19 = 16 * v38;
      *(_QWORD *)(v7 + v19) = a2;
      *(_QWORD *)(v7 + v19 + 8) = a3;
      v20 = v38 + 1;
      v44[2] = v38 + 1;
      if ( a1[3] )
      {
        v39 = v38 + 1;
        v21 = core::hash::BuildHasher::hash_one(a1 + 4, a2, a3);
        v22 = *a1;
        v23 = a1[1];
        v24 = v21 & v23;
        v25 = _mm_cvtsi32_si128(v21 >> 57);
        v46 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v25, v25), 0), 0);
        v41 = v22;
        v26 = v22 - 48;
        for ( i = 0LL; ; i += 16LL )
        {
          HIDWORD(_RAX) = HIDWORD(v41);
          v45 = _mm_loadu_si128((const __m128i *)(v41 + v24));
          _R14D = _mm_movemask_epi8(_mm_cmpeq_epi8(v45, v46));
          if ( _R14D )
          {
            v47.m128i_i64[0] = v24;
            while ( 1 )
            {
              __asm { tzcnt   eax, r14d }
              v30 = -48 * (v23 & (v24 + _RAX));
              if ( *(_QWORD *)(v26 - 48 * (v23 & (v24 + _RAX)) + 8) == a3 )
              {
                v31 = bcmp(a2, *(const void **)(v26 - 48 * (v23 & (v24 + _RAX))), a3);
                v24 = v47.m128i_i64[0];
                if ( !v31 )
                  break;
              }
              _RAX = (unsigned int)(_R14D - 1);
              LOWORD(_RAX) = _R14D & (_R14D - 1);
              _R14D = _RAX;
              if ( !(_WORD)_RAX )
                goto LABEL_26;
            }
            v33 = *(_QWORD **)(v41 + v30 - 24);
            v34 = 16LL * *(_QWORD *)(v41 + v30 - 16);
            v18 = v44;
            while ( v34 )
            {
              v35 = v33 + 2;
              v36 = uu_tsort::Graph::dfs(a1, *v33, v33[1], a4, v44);
              v34 -= 16LL;
              v33 = v35;
              if ( v36 )
                return 1;
            }
            v20 = v44[2];
            goto LABEL_32;
          }
LABEL_26:
          if ( _mm_movemask_epi8(
                 _mm_cmpeq_epi8(
                   _mm_load_si128(&v45),
                   (__m128i)anon_c57a7805e9a900e622496ec0d4f4cf5c_4_llvm_6768286536187217038)) )
          {
            break;
          }
          v32 = i + v24 + 16;
          v24 = v23 & v32;
        }
        v18 = v44;
        v20 = v39;
        if ( v39 )
          goto LABEL_33;
      }
      else
      {
LABEL_32:
        if ( v20 )
LABEL_33:
          v18[2] = v20 - 1;
      }
    }
    return 0;
  }
}
