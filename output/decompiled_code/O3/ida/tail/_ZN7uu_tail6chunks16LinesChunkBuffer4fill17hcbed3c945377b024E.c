__int64 __fastcall uu_tail::chunks::LinesChunkBuffer::fill(unsigned __int64 *a1, __int64 a2)
{
  char v2; // r14
  __int64 v3; // r14
  __int64 v4; // r13
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rdx
  __int64 v7; // rax
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // r12
  unsigned __int64 v10; // r13
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // r12
  __int64 buffer; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rsi
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rdx
  bool v20; // cf
  unsigned __int64 v21; // rcx
  __int64 v22; // r12
  __int64 v23; // rax
  _OWORD dest[513]; // [rsp+8h] [rbp-6060h] BYREF
  char v26; // [rsp+2018h] [rbp-4050h]
  _QWORD s[1024]; // [rsp+2020h] [rbp-4048h] BYREF
  _BYTE src[24]; // [rsp+4020h] [rbp-2048h] BYREF
  __int64 v29; // [rsp+4038h] [rbp-2030h]
  __int64 v30; // [rsp+5038h] [rbp-1030h]

  v30 = 0LL;
  v29 = 0LL;
  s[515] = 0LL;
  s[3] = 0LL;
  *(_QWORD *)&dest[259] = 0LL;
  *(_QWORD *)&dest[3] = 0LL;
  v2 = *((_BYTE *)a1 + 48);
  memset(s, 0, sizeof(s));
  memset(dest, 0, sizeof(dest));
LABEL_3:
  v26 = v2;
  v3 = alloc::boxed::Box<T>::new(dest);
  while ( 1 )
  {
    uu_tail::chunks::LinesChunk::fill((__int64)dest, v3, a2);
    v4 = *((_QWORD *)&dest[0] + 1);
    if ( *(_QWORD *)&dest[0] )
      goto LABEL_24;
    if ( *((_QWORD *)&dest[0] + 1) != 1LL )
      break;
    a1[4] += *(_QWORD *)(v3 + 8200);
    alloc::collections::vec_deque::VecDeque<T,A>::push_back(a1, v3);
    if ( !a1[3] )
      core::option::expect_failed(aOutOfBoundsAcc, 20LL, &off_1BC8C0);
    v5 = a1[2];
    v6 = 0LL;
    if ( v5 >= *a1 )
      v6 = *a1;
    if ( a1[4] - *(_QWORD *)(*(_QWORD *)(a1[1] + 8 * (v5 - v6)) + 8200LL) <= a1[5] )
    {
      v2 = *((_BYTE *)a1 + 48);
      memcpy(dest, s, 0x2000uLL);
      dest[512] = 0LL;
      goto LABEL_3;
    }
    v7 = alloc::collections::vec_deque::VecDeque<T,A>::pop_front(a1);
    if ( !v7 )
      core::option::unwrap_failed(&off_1BC8D8);
    v3 = v7;
    a1[4] -= *(_QWORD *)(v7 + 8200);
  }
  v8 = a1[3];
  if ( !v8 )
  {
    v4 = 0LL;
LABEL_24:
    core::ptr::drop_in_place<alloc::boxed::Box<uu_tail::chunks::LinesChunk>>(v3);
    return v4;
  }
  v9 = v8 + a1[2] - 1;
  v10 = a1[1];
  v11 = 0LL;
  if ( v9 >= *a1 )
    v11 = *a1;
  v12 = v9 - v11;
  buffer = uu_tail::chunks::LinesChunk::get_buffer(*(_QWORD *)(v10 + 8 * v12));
  LOBYTE(dest[0]) = *((_BYTE *)a1 + 48);
  if ( !(unsigned __int8)core::slice::<impl [T]>::ends_with(buffer, v14, dest, 1LL) )
  {
    ++*(_QWORD *)(*(_QWORD *)(v10 + 8 * v12) + 8200LL);
    ++a1[4];
  }
  while ( 1 )
  {
    v15 = alloc::collections::vec_deque::VecDeque<T,A>::pop_front(a1);
    if ( !v15 )
      core::option::unwrap_failed(&off_1BC8F0);
    v16 = a1[4];
    v17 = a1[5];
    v18 = v16 - *(_QWORD *)(v15 + 8200);
    if ( v18 <= v17 )
      break;
    a1[4] = v18;
    core::ptr::drop_in_place<alloc::boxed::Box<uu_tail::chunks::LinesChunk>>(v15);
  }
  v19 = 0LL;
  v20 = v16 < v17;
  v21 = v16 - v17;
  if ( !v20 )
    v19 = v21;
  v22 = v15;
  uu_tail::chunks::LinesChunk::from_chunk(src, v15, v19);
  v23 = alloc::boxed::Box<T>::new(src);
  alloc::collections::vec_deque::VecDeque<T,A>::push_front(a1, v23);
  core::ptr::drop_in_place<alloc::boxed::Box<uu_tail::chunks::LinesChunk>>(v22);
  core::ptr::drop_in_place<alloc::boxed::Box<uu_tail::chunks::LinesChunk>>(v3);
  return 0LL;
}
