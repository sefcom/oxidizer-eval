__int64 __fastcall uu_tsort::Graph::run_tsort(__int64 a1, __int64 *a2)
{
  __int64 *v2; // rbp
  __int64 v3; // rcx
  __int16 v4; // dx
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 contiguous; // rax
  unsigned __int64 v9; // rdx
  __int64 v10; // rbx
  __int64 v11; // r15
  __int64 v12; // r14
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rsi
  __int64 v16; // rcx
  __int64 v17; // rbx
  __int64 v18; // r15
  __int64 v19; // rbp
  __int64 v20; // rax
  __int64 v21; // rcx
  _QWORD *v22; // rax
  __int64 *v23; // rbp
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rbx
  __int64 v29; // r15
  __int64 inner_mut; // rax
  __int64 v31; // rcx
  __int64 v32; // rcx
  unsigned __int64 v33; // rcx
  __int64 v34; // rax
  _QWORD *v35; // rax
  const __m128i *v36; // rax
  __m128i *v37; // rcx
  __int64 v38; // rax
  __m128i v39; // xmm0
  __int64 v40; // r15
  __int64 v41; // r13
  const __m128i *v42; // r14
  int v44; // eax
  int v45; // ecx
  __int64 v46; // rax
  __int64 v47; // rsi
  __int64 v48; // rdx
  __m128i v49; // xmm0
  __int64 v50; // rbp
  __m128i si128; // xmm0
  __m128i v52; // xmm1
  unsigned __int64 v53; // rbx
  __int64 v54; // rax
  __int64 v55; // rsi
  __int64 v56; // rdx
  __int64 v57; // rax
  __int64 v58; // rcx
  unsigned int v60; // [rsp+4h] [rbp-174h]
  __m128i v61; // [rsp+8h] [rbp-170h] BYREF
  __int64 v62; // [rsp+18h] [rbp-160h]
  __int64 v63; // [rsp+20h] [rbp-158h]
  __int64 *i; // [rsp+28h] [rbp-150h]
  __m256i v65; // [rsp+30h] [rbp-148h] BYREF
  __m128i v66; // [rsp+50h] [rbp-128h]
  __int128 v67; // [rsp+60h] [rbp-118h]
  __int64 v68; // [rsp+70h] [rbp-108h]
  __int128 v69; // [rsp+78h] [rbp-100h] BYREF
  __int64 v70; // [rsp+88h] [rbp-F0h]
  __m128d v71; // [rsp+90h] [rbp-E8h] BYREF
  __int64 v72; // [rsp+A0h] [rbp-D8h]
  __int64 v73; // [rsp+A8h] [rbp-D0h]
  __int64 v74; // [rsp+B0h] [rbp-C8h]
  __int64 v75; // [rsp+B8h] [rbp-C0h]
  __m128i v76; // [rsp+C0h] [rbp-B8h] BYREF
  __int128 v77; // [rsp+D0h] [rbp-A8h]
  __m128i v78; // [rsp+E0h] [rbp-98h] BYREF
  __m128i v79; // [rsp+F8h] [rbp-80h] BYREF
  __int64 v80; // [rsp+108h] [rbp-70h]
  __int64 v81; // [rsp+110h] [rbp-68h] BYREF
  __int64 v82; // [rsp+118h] [rbp-60h]
  __int64 v83; // [rsp+120h] [rbp-58h]
  __int64 v84; // [rsp+128h] [rbp-50h]
  __m128i v85; // [rsp+130h] [rbp-48h] BYREF
  __int64 v86; // [rsp+140h] [rbp-38h]

  v2 = a2;
  v75 = a1;
  alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v65, a2[3], 0LL);
  if ( v65.m256i_i64[0] )
    alloc::raw_vec::handle_error(v65.m256i_i64[1], v65.m256i_i64[2]);
  v69 = *(_OWORD *)&v65.m256i_u64[1];
  v70 = 0LL;
  v3 = *a2 + a2[1] + 1;
  v4 = ~(unsigned __int16)_mm_movemask_epi8(_mm_load_si128((const __m128i *)*a2));
  v5 = a2[3];
  v65.m256i_i64[0] = *v2;
  v65.m256i_i64[1] = v65.m256i_i64[0] + 16;
  v65.m256i_i64[2] = v3;
  v65.m256i_i16[12] = v4;
  v66.m128i_i64[0] = v5;
  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(&v76, &v65);
  if ( !v76.m128i_i64[1] )
    core::panicking::panic_nounwind(anon_16821614a9cf413f4e75ec5b1b7c9413_0_llvm_2740545493757299333, 93LL, v6, v7);
  v62 = 0LL;
  v63 = v77;
  v61 = v76;
  contiguous = alloc::collections::vec_deque::VecDeque<T,A>::make_contiguous(&v61);
  if ( v9 >= 2 )
  {
    v10 = contiguous;
    if ( v9 >= 0x15 )
    {
      core::slice::sort::unstable::ipnsort(contiguous, v9, &v65);
    }
    else
    {
      v11 = 16 * v9;
      v12 = 16LL;
      do
      {
        core::slice::sort::shared::smallsort::insert_tail(v10, v10 + v12, &v65);
        v12 += 16LL;
      }
      while ( v11 != v12 );
    }
  }
  v13 = v63;
  for ( i = v2; v63; v2 = i )
  {
    v14 = v62;
    v15 = v61.m128i_i64[0];
    if ( (unsigned __int64)(v62 + 1) < v61.m128i_i64[0] )
      v15 = 0LL;
    v62 = v62 - v15 + 1;
    v63 = v13 - 1;
    if ( (unsigned __int64)(v13 - 1) >= v61.m128i_i64[0] )
      core::panicking::panic_nounwind(
        anon_b868ed4da222ba9062be98d2d394e4af_16_llvm_8603923905359120187,
        104LL,
        v61.m128i_i64[0],
        v14);
    v16 = 16 * v14;
    v17 = *(_QWORD *)(v61.m128i_i64[1] + v16);
    if ( !v17 )
      break;
    v18 = *(_QWORD *)(v61.m128i_i64[1] + v16 + 8);
    v19 = v70;
    if ( v70 == (_QWORD)v69 )
      alloc::raw_vec::RawVec<T,A>::grow_one(&v69);
    v20 = *((_QWORD *)&v69 + 1);
    v21 = 16 * v19;
    *(_QWORD *)(*((_QWORD *)&v69 + 1) + v21) = v17;
    *(_QWORD *)(v20 + v21 + 8) = v18;
    v70 = v19 + 1;
    hashbrown::map::HashMap<K,V,S,A>::remove_entry(&v65, i, v17, v18);
    if ( v65.m256i_i64[2] != 0x8000000000000000LL )
    {
      v22 = (_QWORD *)v65.m256i_i64[3];
      v81 = v65.m256i_i64[3];
      v82 = v65.m256i_i64[3];
      v83 = v65.m256i_i64[2];
      v84 = v65.m256i_i64[3] + 16 * v66.m128i_i64[0];
      v23 = i;
      if ( v66.m128i_i64[0] )
      {
        do
        {
          v82 = (__int64)(v22 + 2);
          v28 = *v22;
          if ( !*v22 )
            break;
          v29 = v22[1];
          inner_mut = hashbrown::map::HashMap<K,V,S,A>::get_inner_mut(v23, *v22, v29);
          if ( !inner_mut )
            core::option::unwrap_failed(&off_110FC0);
          v31 = *(_QWORD *)(inner_mut + 40);
          if ( !v31 )
            core::panicking::panic_const::panic_const_sub_overflow(&off_110FD8);
          v32 = v31 - 1;
          *(_QWORD *)(inner_mut + 40) = v32;
          if ( !v32 )
          {
            v33 = v61.m128i_i64[0];
            v34 = v63;
            if ( v63 == v61.m128i_i64[0] )
            {
              alloc::collections::vec_deque::VecDeque<T,A>::grow(&v61);
              v33 = v61.m128i_i64[0];
              v34 = v63;
            }
            v24 = v62 + v34;
            v25 = 0LL;
            if ( v24 >= v33 )
              v25 = v33;
            v26 = v61.m128i_i64[1];
            v27 = 16 * (v24 - v25);
            *(_QWORD *)(v61.m128i_i64[1] + v27) = v28;
            *(_QWORD *)(v26 + v27 + 8) = v29;
            ++v63;
          }
          v22 = (_QWORD *)v82;
        }
        while ( v82 != v84 );
      }
      <alloc::vec::into_iter::IntoIter<T,A> as core::ops::drop::Drop>::drop(&v81);
    }
    v13 = v63;
  }
  v74 = v2[3];
  if ( !v74 )
  {
    v37 = (__m128i *)&v69;
    v38 = 0LL;
    goto LABEL_53;
  }
  v35 = (_QWORD *)(__readfsqword(0) - 48);
  if ( !*v35 )
  {
    v36 = (const __m128i *)std::sys::thread_local::native::lazy::Storage<T,D>::initialize(__readfsqword(0) - 48, 0LL);
    if ( v36 )
      goto LABEL_38;
LABEL_68:
    core::result::unwrap_failed(
      anon_36ed41eda6fe4f586c1075cc8653ab23_8_llvm_8279379623583455147,
      70LL,
      &v65,
      &anon_fc29c7c6ca22db7019ef23aa61119845_34_llvm_4141834359802392258,
      &anon_36ed41eda6fe4f586c1075cc8653ab23_10_llvm_8279379623583455147);
  }
  if ( *v35 != 1LL )
    goto LABEL_68;
  v36 = (const __m128i *)(v35 + 1);
LABEL_38:
  v39 = _mm_loadu_si128(v36);
  ++v36->m128i_i64[0];
  v77 = xmmword_110F68;
  v76 = _mm_loadu_si128((const __m128i *)&off_110F58);
  v78 = v39;
  alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v65, v2[3], 0LL);
  if ( v65.m256i_i64[0] )
    alloc::raw_vec::handle_error(v65.m256i_i64[1], v65.m256i_i64[2]);
  v79 = *(__m128i *)&v65.m256i_u64[1];
  v80 = 0LL;
  v40 = v2[3];
  if ( !v40 )
LABEL_64:
    core::panicking::panic(aInternalErrorE_3, 40LL, &off_110FF0);
  v41 = *v2;
  v42 = (const __m128i *)(*v2 + 16);
  _RAX = (unsigned int)~_mm_movemask_epi8(_mm_load_si128((const __m128i *)*v2));
  while ( 1 )
  {
    if ( (_WORD)_RAX )
    {
      v60 = _RAX & (_RAX - 1);
    }
    else
    {
      do
      {
        v44 = _mm_movemask_epi8(_mm_load_si128(v42));
        v41 -= 768LL;
        ++v42;
      }
      while ( v44 == 0xFFFF );
      v45 = -2 - v44;
      _RAX = (unsigned int)~v44;
      v60 = v45 & _RAX;
    }
    __asm { tzcnt   eax, eax }
    v46 = -48 * _RAX;
    v47 = *(_QWORD *)(v41 + v46 - 48);
    v48 = *(_QWORD *)(v41 + v46 - 40);
    if ( !*((_QWORD *)&v77 + 1) )
      goto LABEL_73;
    v49 = _mm_load_si128(&v78);
    *(__m128i *)v65.m256i_i8 = _mm_xor_si128(_mm_shuffle_epi32(v49, 68), (__m128i)xmmword_16050);
    *(__m128i *)&v65.m256i_u64[2] = _mm_xor_si128(_mm_shuffle_epi32(v49, 238), (__m128i)xmmword_15FB0);
    v66 = v49;
    v67 = 0LL;
    v68 = 0LL;
    v50 = v48;
    <core::hash::sip::Hasher<S> as core::hash::Hasher>::write(&v65);
    LOBYTE(v71.m128d_f64[0]) = -1;
    <core::hash::sip::Hasher<S> as core::hash::Hasher>::write(&v65);
    si128 = _mm_load_si128((const __m128i *)&v65);
    v52 = _mm_load_si128((const __m128i *)&v65.m256i_u64[2]);
    v72 = v52.m128i_i64[0];
    v53 = *((_QWORD *)&v67 + 1) | ((_QWORD)v67 << 56);
    v71 = (__m128d)si128;
    v73 = v53 ^ v52.m128i_i64[1];
    <core::hash::sip::Sip13Rounds as core::hash::sip::Sip>::c_rounds(&v71, &v71);
    v71 = _mm_xor_pd(_mm_shuffle_pd((__m128d)v53, unk_16160, 2), v71);
    <core::hash::sip::Sip13Rounds as core::hash::sip::Sip>::d_rounds(&v71);
    v54 = hashbrown::raw::RawTable<T,A>::find(
            &v76,
            v73 ^ *(_QWORD *)&v71.m128d_f64[1] ^ *(_QWORD *)&v71.m128d_f64[0] ^ v72,
            v47,
            v50);
    v48 = v50;
    if ( !v54 )
    {
LABEL_73:
      if ( (unsigned __int8)uu_tsort::Graph::dfs(i, v47, v48, &v76, &v79) )
        break;
    }
    _RAX = v60;
    if ( !--v40 )
      goto LABEL_64;
  }
  v86 = v80;
  v85 = _mm_loadu_si128(&v79);
  if ( v76.m128i_i64[1] )
  {
    hashbrown::raw::TableLayout::calculate_layout_for(&v65, 16LL, 16LL, v76.m128i_i64[1] + 1);
    if ( v65.m256i_i64[1] )
      _rust_dealloc(v76.m128i_i64[0] - v65.m256i_i64[2]);
  }
  v38 = 1LL;
  v37 = &v85;
LABEL_53:
  v55 = v75;
  *(_QWORD *)(v75 + 24) = v37[1].m128i_i64[0];
  *(__m128i *)(v55 + 8) = _mm_loadu_si128(v37);
  *(_QWORD *)v55 = v38;
  core::ptr::drop_in_place<alloc::collections::vec_deque::VecDeque<&str>>(&v61);
  if ( v74 )
  {
    if ( (_QWORD)v69 )
    {
      if ( (unsigned __int64)v69 >> 60 )
        core::panicking::panic_nounwind(
          anon_e45d65516cdf6c355a9aa2094419ed73_18_llvm_7530283562111826792,
          69LL,
          v56,
          (unsigned __int64)v69 >> 60);
      v57 = 16 * v69;
      v65.m256i_i64[0] = *((_QWORD *)&v69 + 1);
      v65.m256i_i64[1] = 8LL;
      v58 = 2LL;
    }
    else
    {
      v58 = 1LL;
      v57 = 0LL;
    }
    v65.m256i_i64[v58] = v57;
    if ( v65.m256i_i64[1] && v65.m256i_i64[2] )
      _rust_dealloc(v65.m256i_i64[0]);
  }
  return v75;
}
