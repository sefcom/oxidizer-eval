        __int64 a4)
{
  unsigned __int64 v7; // r12
  __int64 v8; // rax
  __int64 v9; // rcx
  __int128 v10; // xmm0
  unsigned __int64 result; // rax
  __int64 v12; // rdi
  __int64 v13; // r14
  __int64 v14; // rax
  __int64 v15; // rcx
  __int128 v16; // xmm0
  __int64 v17; // rdx
  __m256i v18; // [rsp+0h] [rbp-58h] BYREF
  __int128 v19; // [rsp+20h] [rbp-38h]
  __int64 v20; // [rsp+30h] [rbp-28h]

  if ( *(_BYTE *)(a2 + 88) )
  {
    v18.m256i_i64[3] = *(_QWORD *)(a4 + 16);
    *(_OWORD *)&v18.m256i_u64[1] = *(_OWORD *)a4;
    v18.m256i_i64[0] = a3;
    ((void (__fastcall *)(__int64, _QWORD, __m256i *))alloc::vec::Vec<T,A>::insert)(a2, 0LL, &v18);
LABEL_7:
    result = 0x8000000000000000LL;
    *a1 = 0x8000000000000000LL;
    return result;
  }
  v7 = *(_QWORD *)(a2 + 16);
  if ( v7 < *(_QWORD *)(a2 + 80) )
  {
    v18.m256i_i64[3] = *(_QWORD *)(a4 + 16);
    *(_OWORD *)&v18.m256i_u64[1] = *(_OWORD *)a4;
    v18.m256i_i64[0] = a3;
    if ( v7 == *(_QWORD *)a2 )
      alloc::raw_vec::RawVec<T,A>::grow_one(a2);
    v8 = *(_QWORD *)(a2 + 8);
    v9 = 32 * v7;
    v10 = *(_OWORD *)v18.m256i_i8;
    *(_OWORD *)(v8 + v9 + 16) = *(_OWORD *)&v18.m256i_u64[2];
    *(_OWORD *)(v8 + v9) = v10;
    *(_QWORD *)(a2 + 16) = v7 + 1;
    goto LABEL_7;
  }
  alloc::vec::Vec<T,A>::remove(&v18, a2, 0LL, &off_2729D0);
  v20 = v18.m256i_i64[3];
  v19 = *(_OWORD *)&v18.m256i_u64[1];
  v18.m256i_i64[3] = *(_QWORD *)(a4 + 16);
  *(_OWORD *)&v18.m256i_u64[1] = *(_OWORD *)a4;
  v18.m256i_i64[0] = a3;
  v12 = a2;
  v13 = *(_QWORD *)(a2 + 16);
  if ( v13 == *(_QWORD *)a2 )
  {
    alloc::raw_vec::RawVec<T,A>::grow_one(a2);
    v12 = a2;
  }
  v14 = *(_QWORD *)(v12 + 8);
  v15 = 32 * v13;
  v16 = *(_OWORD *)v18.m256i_i8;
  *(_OWORD *)(v14 + v15 + 16) = *(_OWORD *)&v18.m256i_u64[2];
  *(_OWORD *)(v14 + v15) = v16;
  *(_QWORD *)(v12 + 16) = v13 + 1;
  result = *((_QWORD *)&v19 + 1);
  if ( (_QWORD)v19 == 0x8000000000000000LL )
  {
    v18.m256i_i64[0] = *((_QWORD *)&v19 + 1);
    core::result::unwrap_failed(aCalledResultUn, 43LL, &v18, &off_272860, &off_2729E8);
  }
  v17 = v20;
  *(_OWORD *)a1 = v19;
  a1[2] = v17;
  return result;
}
