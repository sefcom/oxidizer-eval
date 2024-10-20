        char a5)
{
  __int64 v5; // rbx
  __int64 (__fastcall *v6)(__int64, __int64); // r14
  __int64 contiguous; // rax
  __int64 result; // rax
  unsigned __int64 *v10; // r15
  size_t v11; // r13
  unsigned __int64 v12; // rdx
  char *v13; // rbp
  unsigned __int64 v14; // rbx
  size_t v15; // rdx
  size_t v16; // rbx
  size_t v17; // r14
  unsigned __int64 v18; // r12
  __int64 v19; // r12
  size_t v20; // r14
  size_t v21; // rdx
  unsigned __int64 v22; // rsi
  unsigned __int64 v23; // rax
  bool v24; // cf
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // r12
  unsigned __int64 v27; // rdx
  __int64 v28; // rax
  __int64 (__fastcall *v31)(__int64, __int64); // [rsp+18h] [rbp-40h]

  v5 = a3;
  v6 = *(__int64 (__fastcall **)(__int64, __int64))(a4 + 56);
  if ( *a1 == 0x8000000000000000LL )
  {
    contiguous = alloc::collections::vec_deque::VecDeque<T,A>::make_contiguous(a2);
    result = v6(v5, contiguous);
    if ( result )
      return result;
    if ( a5 )
    {
LABEL_4:
      result = ((__int64 (__fastcall *)(__int64, const char *, __int64))v6)(v5, asc_1F4EA, 1LL);
      if ( result )
        return result;
      return 0LL;
    }
    if ( a2[3] )
      a2[3] = 0LL;
    v10 = a2;
    goto LABEL_31;
  }
  v10 = a1;
  v11 = a1[3];
  v13 = (char *)alloc::collections::vec_deque::VecDeque<T,A>::make_contiguous(a2);
  v14 = v12;
  if ( (v11 | v12) >> 32 )
    v15 = v12 % v11;
  else
    v15 = (unsigned int)v12 % (unsigned int)v11;
  v31 = v6;
  v16 = v14 - v15;
  if ( v16 >= v11 )
  {
    v17 = a1[2];
    v19 = 0LL;
    do
    {
      if ( *a1 - v17 < v11 )
      {
        alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(a1, v17, v11);
        v17 = a1[2];
      }
      memcpy((void *)(a1[1] + v17), v13, v11);
      v20 = v11 + a1[2];
      a1[2] = v20;
      if ( v20 == *a1 )
        alloc::raw_vec::RawVec<T,A>::grow_one(a1);
      v13 += v11;
      *(_BYTE *)(a1[1] + v20) = 10;
      v17 = v20 + 1;
      a1[2] = v17;
      v19 -= v11;
    }
    while ( v16 + v19 >= v11 );
    v18 = -v19;
  }
  else
  {
    v17 = a1[2];
    v18 = 0LL;
  }
  v5 = a3;
  v21 = v17;
  v6 = v31;
  result = ((__int64 (__fastcall *)(__int64, unsigned __int64, size_t))v31)(a3, a1[1], v21);
  if ( !result )
  {
    v22 = a2[3];
    v23 = a2[3];
    v24 = v23 < v18;
    v25 = v23 - v18;
    if ( v24 )
      core::slice::index::slice_end_index_len_fail(v18, v22, &off_101E88);
    if ( v25 )
    {
      v26 = a2[2] + v18;
      v27 = 0LL;
      if ( v26 >= *a2 )
        v27 = *a2;
      a2[2] = v26 - v27;
      a2[3] = v25;
      if ( a5 )
      {
        v28 = alloc::collections::vec_deque::VecDeque<T,A>::make_contiguous(a2);
        result = v31(a3, v28);
        if ( result )
          return result;
        goto LABEL_4;
      }
    }
    else
    {
      a2[2] = 0LL;
      a2[3] = 0LL;
      if ( a5 )
        return 0LL;
    }
LABEL_31:
    v10[2] = 0LL;
    return 0LL;
  }
  return result;
}
