        __int64 a6)
{
  unsigned __int64 v9; // r12
  __int64 v10; // rax
  __int64 v11; // rcx
  __int128 v12; // xmm0
  unsigned __int64 result; // rax
  __int64 v14; // rdi
  __int64 v15; // r14
  __int64 v16; // rax
  __int64 v17; // rcx
  __int128 v18; // xmm0
  __int64 v19; // rdx
  __m256i v20; // [rsp+0h] [rbp-58h] BYREF
  __int128 v21; // [rsp+20h] [rbp-38h]
  __int64 v22; // [rsp+30h] [rbp-28h]

  if ( *(_BYTE *)(a2 + 56) )
  {
    v20.m256i_i64[3] = *(_QWORD *)(a4 + 16);
    *(_OWORD *)&v20.m256i_u64[1] = *(_OWORD *)a4;
    v20.m256i_i64[0] = a3;
    ((void (__fastcall *)(__int64, _QWORD, __m256i *, __int64, __int64, __int64))alloc::vec::Vec<T,A>::insert)(
      a2,
      0LL,
      &v20,
      a4,
      a5,
      a6);
LABEL_7:
    result = 0x8000000000000000LL;
    *a1 = 0x8000000000000000LL;
    return result;
  }
  v9 = *(_QWORD *)(a2 + 16);
  if ( v9 < *(_QWORD *)(a2 + 48) )
  {
    v20.m256i_i64[3] = *(_QWORD *)(a4 + 16);
    *(_OWORD *)&v20.m256i_u64[1] = *(_OWORD *)a4;
    v20.m256i_i64[0] = a3;
    if ( v9 == *(_QWORD *)a2 )
      alloc::raw_vec::RawVec<T,A>::grow_one(a2);
    v10 = *(_QWORD *)(a2 + 8);
    v11 = 32 * v9;
    v12 = *(_OWORD *)v20.m256i_i8;
    *(_OWORD *)(v10 + v11 + 16) = *(_OWORD *)&v20.m256i_u64[2];
    *(_OWORD *)(v10 + v11) = v12;
    *(_QWORD *)(a2 + 16) = v9 + 1;
    goto LABEL_7;
  }
  alloc::vec::Vec<T,A>::remove(&v20, a2, 0LL, &off_2729D0);
  v22 = v20.m256i_i64[3];
  v21 = *(_OWORD *)&v20.m256i_u64[1];
  v20.m256i_i64[3] = *(_QWORD *)(a4 + 16);
  *(_OWORD *)&v20.m256i_u64[1] = *(_OWORD *)a4;
  v20.m256i_i64[0] = a3;
  v14 = a2;
  v15 = *(_QWORD *)(a2 + 16);
  if ( v15 == *(_QWORD *)a2 )
  {
    alloc::raw_vec::RawVec<T,A>::grow_one(a2);
    v14 = a2;
  }
  v16 = *(_QWORD *)(v14 + 8);
  v17 = 32 * v15;
  v18 = *(_OWORD *)v20.m256i_i8;
  *(_OWORD *)(v16 + v17 + 16) = *(_OWORD *)&v20.m256i_u64[2];
  *(_OWORD *)(v16 + v17) = v18;
  *(_QWORD *)(v14 + 16) = v15 + 1;
  result = *((_QWORD *)&v21 + 1);
  if ( (_QWORD)v21 == 0x8000000000000000LL )
  {
    v20.m256i_i64[0] = *((_QWORD *)&v21 + 1);
    core::result::unwrap_failed(aCalledResultUn, 43LL, &v20, &off_272860, &off_2729E8);
  }
  v19 = v22;
  *(_OWORD *)a1 = v21;
  a1[2] = v19;
  return result;
}
