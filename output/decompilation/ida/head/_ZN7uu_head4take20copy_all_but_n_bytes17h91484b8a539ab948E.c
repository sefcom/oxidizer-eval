__int64 __fastcall uu_head::take::copy_all_but_n_bytes(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // r13
  __int64 v4; // r15
  unsigned __int64 i; // r12
  _QWORD *v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int128 v9; // xmm0
  char v10; // al
  __int64 v11; // rdx
  __int64 v12; // r14
  __int64 v13; // r14
  __int64 v14; // rax
  __int64 v15; // rbx
  bool v16; // al
  __int64 v17; // rdx
  __int64 v18; // r14
  bool is_empty; // al
  __int64 v20; // rbx
  char **v22; // rdi
  __int64 v23; // [rsp+8h] [rbp-D0h] BYREF
  __int64 v24; // [rsp+10h] [rbp-C8h]
  __int64 v25; // [rsp+18h] [rbp-C0h]
  __m256i v26; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v27; // [rsp+40h] [rbp-98h]
  unsigned __int64 v28; // [rsp+48h] [rbp-90h]
  __m256i v29; // [rsp+50h] [rbp-88h] BYREF
  __int64 v30; // [rsp+78h] [rbp-60h]
  __int64 v31; // [rsp+80h] [rbp-58h]
  _QWORD v32[2]; // [rsp+88h] [rbp-50h] BYREF
  __int128 v33; // [rsp+98h] [rbp-40h]

  v28 = a3;
  v30 = a2;
  v31 = a1;
  v32[0] = 0LL;
  v33 = 0LL;
  v32[1] = 8LL;
  v23 = 0LL;
  v24 = 8LL;
  v25 = 0LL;
  v3 = 8LL;
  v4 = 0LL;
  v27 = 0LL;
  for ( i = 0LL; ; i += v12 )
  {
    while ( 1 )
    {
      v6 = (_QWORD *)alloc::collections::vec_deque::VecDeque<T,A>::get(v32);
      if ( !v6 )
        break;
      v7 = uu_head::take::TakeAllBuffer::remaining_bytes(v6);
      if ( i < v28 + v7 )
        break;
LABEL_11:
      v13 = i - v28;
      if ( i <= v28 )
      {
        v20 = 0LL;
LABEL_21:
        v25 = v4;
        goto LABEL_18;
      }
      v14 = alloc::collections::vec_deque::VecDeque<T,A>::get(v32);
      if ( !v14 )
      {
        v25 = v4;
        v22 = &off_F7B60;
        goto LABEL_23;
      }
      v15 = v14;
      v16 = uu_head::take::TakeAllBuffer::write_bytes_limit(v14, v30, v13);
      v18 = v17;
      if ( v16 )
      {
        v20 = 1LL;
        goto LABEL_21;
      }
      is_empty = uu_head::take::TakeAllBuffer::is_empty(*(_QWORD *)(v15 + 16), *(_QWORD *)(v15 + 24));
      v27 += v18;
      i -= v18;
      if ( is_empty )
      {
        v25 = v4;
        alloc::collections::vec_deque::VecDeque<T,A>::pop_front(&v29, v32);
        if ( __OFSUB__(0LL, v29.m256i_i64[0]) )
        {
          v22 = &off_F7B78;
LABEL_23:
          core::option::unwrap_failed(v22);
        }
        v26 = v29;
        alloc::vec::Vec<T,A>::push(&v23, &v26);
        v3 = v24;
        v4 = v25;
      }
    }
    if ( v4 )
    {
      --v4;
      v8 = *(_QWORD *)(v3 + 32 * v4);
      v9 = *(_OWORD *)(v3 + 32 * v4 + 8);
      v29.m256i_i64[2] = *(_QWORD *)(v3 + 32 * v4 + 24);
      *(_OWORD *)v29.m256i_i8 = v9;
      v26.m256i_i64[3] = v29.m256i_i64[2];
      *(_OWORD *)&v26.m256i_u64[1] = v9;
    }
    else
    {
      v26.m256i_i64[1] = 1LL;
      *(_OWORD *)&v26.m256i_u64[2] = 0LL;
      v8 = 0LL;
      v4 = 0LL;
    }
    v26.m256i_i64[0] = v8;
    v10 = uu_head::take::TakeAllBuffer::fill_buffer(&v26, v31);
    v12 = v11;
    if ( (v10 & 1) != 0 )
      break;
    if ( !v11 )
    {
      core::ptr::drop_in_place<std::sys::os_str::bytes::Buf>(v26.m256i_i64[0], v26.m256i_i64[1]);
      goto LABEL_11;
    }
    v29 = v26;
    alloc::collections::vec_deque::VecDeque<T,A>::push_back(v32, &v29);
  }
  v25 = v4;
  core::ptr::drop_in_place<std::sys::os_str::bytes::Buf>(v26.m256i_i64[0], v26.m256i_i64[1]);
  v20 = 1LL;
LABEL_18:
  core::ptr::drop_in_place<alloc::vec::Vec<uu_head::take::TakeAllBuffer>>(&v23);
  core::ptr::drop_in_place<alloc::collections::vec_deque::VecDeque<uu_head::take::TakeAllBuffer>>(v32);
  return v20;
}