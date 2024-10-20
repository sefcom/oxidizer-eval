_OWORD *__fastcall uu_pr::read_stream_and_create_pages::{{closure}}(_QWORD *a1, _QWORD *a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 v5; // rdx
  unsigned __int64 v6; // rbp
  __int64 v7; // r12
  __int64 v8; // rax
  __int64 v9; // rcx
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm2
  __int64 v13; // r12
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int128 v17; // xmm0
  _OWORD *v18; // rax
  _OWORD *v19; // rbx
  __int64 v20; // rbx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int128 v23; // xmm0
  __int64 v24; // rbx
  __int64 v25; // r15
  unsigned __int64 v26; // rbp
  __int64 v27; // rax
  __int128 v28; // xmm0
  __int128 v30; // [rsp+0h] [rbp-188h] BYREF
  __int64 v31; // [rsp+10h] [rbp-178h]
  __int128 v32; // [rsp+18h] [rbp-170h] BYREF
  __int64 v33; // [rsp+28h] [rbp-160h]
  _QWORD *v34; // [rsp+30h] [rbp-158h]
  __int128 v35; // [rsp+38h] [rbp-150h]
  __int64 v36; // [rsp+48h] [rbp-140h]
  __int128 v37; // [rsp+50h] [rbp-138h]
  __int64 v38; // [rsp+60h] [rbp-128h]
  __int128 v39; // [rsp+70h] [rbp-118h]
  __int64 v40; // [rsp+80h] [rbp-108h]
  __m256i v41; // [rsp+90h] [rbp-F8h]
  __m256i v42; // [rsp+B0h] [rbp-D8h]
  __int128 v43; // [rsp+D0h] [rbp-B8h]
  __int128 v44; // [rsp+E0h] [rbp-A8h]
  __m256i v45; // [rsp+F0h] [rbp-98h]
  __int64 v46; // [rsp+110h] [rbp-78h] BYREF
  _OWORD v47[2]; // [rsp+118h] [rbp-70h]
  __m256i v48; // [rsp+138h] [rbp-50h]

  v34 = a1;
  *(_QWORD *)&v32 = 0LL;
  *((_QWORD *)&v32 + 1) = 8LL;
  v33 = 0LL;
  *(_QWORD *)&v30 = 0LL;
  *((_QWORD *)&v30 + 1) = 8LL;
  v31 = 0LL;
  while ( 1 )
  {
    <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v46, a3);
    if ( *(_QWORD *)&v47[0] == 0x8000000000000001LL )
    {
      if ( v33 )
        goto LABEL_10;
      goto LABEL_14;
    }
    v45 = v48;
    v44 = v47[1];
    v43 = v47[0];
    v4 = *(_QWORD *)(a3 + 128) + v46;
    if ( __CFADD__(*(_QWORD *)(a3 + 128), v46) )
      core::panicking::panic_const::panic_const_add_overflow(&anon_7c75ec29d226220b36fc1f3bbd3b01ef_161_llvm_17389174869910011146);
    v5 = *(_QWORD *)(a3 + 136);
    v6 = v45.m256i_u64[3];
    *(_OWORD *)&v41.m256i_u64[1] = *(_OWORD *)((char *)v47 + 8);
    v41.m256i_i64[0] = *(_QWORD *)&v47[0];
    v41.m256i_i64[3] = v5;
    v42.m256i_i64[0] = v4;
    *(_OWORD *)&v42.m256i_u64[1] = *(_OWORD *)&v45.m256i_u64[1];
    v42.m256i_i64[3] = v45.m256i_i64[3];
    v7 = v33;
    if ( v33 == (_QWORD)v32 )
      alloc::raw_vec::RawVec<T,A>::grow_one(&v32);
    v8 = *((_QWORD *)&v32 + 1);
    v9 = v7 << 6;
    v10 = *(_OWORD *)v41.m256i_i8;
    v11 = *(_OWORD *)&v41.m256i_u64[2];
    v12 = *(_OWORD *)v42.m256i_i8;
    *(_OWORD *)(*((_QWORD *)&v32 + 1) + v9 + 48) = *(_OWORD *)&v42.m256i_u64[2];
    *(_OWORD *)(v8 + v9 + 32) = v12;
    *(_OWORD *)(v8 + v9 + 16) = v11;
    *(_OWORD *)(v8 + v9) = v10;
    v13 = v7 + 1;
    v33 = v13;
    if ( v6 >= 2 )
      break;
    if ( v13 == *a2 || v6 == 1 )
    {
      if ( v13 )
      {
LABEL_10:
        v40 = v33;
        v39 = v32;
        v14 = v31;
        if ( v31 == (_QWORD)v30 )
          alloc::raw_vec::RawVec<T,A>::grow_one(&v30);
        v15 = *((_QWORD *)&v30 + 1);
        v16 = 3 * v14;
        v17 = v39;
        *(_QWORD *)(*((_QWORD *)&v30 + 1) + 8 * v16 + 16) = v40;
        *(_OWORD *)(v15 + 8 * v16) = v17;
        v31 = v14 + 1;
        v18 = v34;
        v34[2] = v14 + 1;
        v19 = v18;
        *v18 = v30;
        return v19;
      }
LABEL_14:
      v19 = v34;
      *v34 = 0x8000000000000000LL;
      core::ptr::drop_in_place<alloc::vec::Vec<alloc::vec::Vec<uu_pr::FileLine>>>(&v30);
      core::ptr::drop_in_place<alloc::vec::Vec<uu_pr::FileLine>>(&v32);
      return v19;
    }
  }
  v38 = v33;
  v37 = v32;
  v20 = v31;
  if ( v31 == (_QWORD)v30 )
    alloc::raw_vec::RawVec<T,A>::grow_one(&v30);
  v21 = *((_QWORD *)&v30 + 1);
  v22 = 24 * v20;
  v23 = v37;
  *(_QWORD *)(*((_QWORD *)&v30 + 1) + v22 + 16) = v38;
  *(_OWORD *)(v21 + v22) = v23;
  v24 = v20 + 1;
  v31 = v24;
  v25 = v22 + 24;
  v26 = v6 - 1;
  do
  {
    *(_QWORD *)&v35 = 0LL;
    *((_QWORD *)&v35 + 1) = 8LL;
    v36 = 0LL;
    if ( v24 == (_QWORD)v30 )
      alloc::raw_vec::RawVec<T,A>::grow_one(&v30);
    v27 = *((_QWORD *)&v30 + 1);
    v28 = v35;
    *(_QWORD *)(*((_QWORD *)&v30 + 1) + v25 + 16) = v36;
    *(_OWORD *)(v27 + v25) = v28;
    v31 = ++v24;
    v25 += 24LL;
    --v26;
  }
  while ( v26 );
  v19 = v34;
  v34[2] = v31;
  *v19 = v30;
  return v19;
}
