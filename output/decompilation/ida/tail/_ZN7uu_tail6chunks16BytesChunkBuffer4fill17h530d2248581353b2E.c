__int64 __fastcall uu_tail::chunks::BytesChunkBuffer::fill(unsigned __int64 *a1, __int64 *a2)
{
  __int64 v2; // r14
  __int64 v3; // r13
  __int64 v4; // rbp
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // r15
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdx
  bool v12; // cf
  unsigned __int64 v13; // rax
  __int64 v14; // rax
  _QWORD v16[1025]; // [rsp+0h] [rbp-4038h] BYREF
  _QWORD s[1024]; // [rsp+2008h] [rbp-2030h] BYREF

  memset(s, 0, sizeof(s));
  memset(v16, 0, sizeof(v16));
  v2 = alloc::boxed::Box<T>::new(v16);
  v3 = *a2;
  v4 = a2[1];
  while ( 1 )
  {
    uu_tail::chunks::BytesChunk::fill(v16, v2, v3, v4);
    if ( v16[0] )
    {
      v8 = v16[1];
      goto LABEL_18;
    }
    if ( !v16[1] )
      break;
    a1[5] += *(_QWORD *)(v2 + 0x2000);
    alloc::collections::vec_deque::VecDeque<T,A>::push_back(a1, v2);
    if ( !a1[3] )
      core::option::expect_failed(aOutOfBoundsAcc, 20LL, &off_1BC878);
    v5 = a1[2];
    v6 = 0LL;
    if ( v5 >= *a1 )
      v6 = *a1;
    if ( a1[5] - *(_QWORD *)(*(_QWORD *)(a1[1] + 8 * (v5 - v6)) + 0x2000LL) <= a1[4] )
    {
      memcpy(v16, s, 0x2000uLL);
      v16[1024] = 0LL;
      v2 = alloc::boxed::Box<T>::new(v16);
    }
    else
    {
      v7 = alloc::collections::vec_deque::VecDeque<T,A>::pop_front(a1);
      if ( !v7 )
        core::option::unwrap_failed(&off_1BC890);
      v2 = v7;
      a1[5] -= *(_QWORD *)(v7 + 0x2000);
    }
  }
  if ( a1[3] )
  {
    v9 = alloc::collections::vec_deque::VecDeque<T,A>::pop_front(a1);
    if ( !v9 )
      core::option::unwrap_failed(&off_1BC8A8);
    v10 = a1[5];
    v11 = 0LL;
    v12 = v10 < a1[4];
    v13 = v10 - a1[4];
    if ( !v12 )
      v11 = v13;
    uu_tail::chunks::BytesChunk::from_chunk(v16, v9, v11);
    v14 = alloc::boxed::Box<T>::new(v16);
    alloc::collections::vec_deque::VecDeque<T,A>::push_front(a1, v14);
    core::ptr::drop_in_place<alloc::boxed::Box<uu_tail::chunks::BytesChunk>>(v9);
  }
  v8 = 0LL;
LABEL_18:
  core::ptr::drop_in_place<alloc::boxed::Box<uu_tail::chunks::BytesChunk>>(v2);
  return v8;
}
