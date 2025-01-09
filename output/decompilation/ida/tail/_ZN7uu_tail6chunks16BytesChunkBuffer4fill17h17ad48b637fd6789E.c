__int64 __fastcall uu_tail::chunks::BytesChunkBuffer::fill(unsigned __int64 *a1, __int64 a2)
{
  __int64 v2; // r14
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // r15
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdx
  bool v10; // cf
  unsigned __int64 v11; // rax
  __int64 v12; // rax
  _QWORD v14[1025]; // [rsp+0h] [rbp-4038h] BYREF
  _QWORD s[1024]; // [rsp+2008h] [rbp-2030h] BYREF

  memset(s, 0, sizeof(s));
  memset(v14, 0, sizeof(v14));
  v2 = alloc::boxed::Box<T>::new(v14);
  while ( 1 )
  {
    uu_tail::chunks::BytesChunk::fill(v14, v2, a2);
    if ( v14[0] )
    {
      v6 = v14[1];
      goto LABEL_18;
    }
    if ( !v14[1] )
      break;
    a1[5] += *(_QWORD *)(v2 + 0x2000);
    alloc::collections::vec_deque::VecDeque<T,A>::push_back(a1, v2);
    if ( !a1[3] )
      core::option::expect_failed(aOutOfBoundsAcc, 20LL, &off_1BC878);
    v3 = a1[2];
    v4 = 0LL;
    if ( v3 >= *a1 )
      v4 = *a1;
    if ( a1[5] - *(_QWORD *)(*(_QWORD *)(a1[1] + 8 * (v3 - v4)) + 0x2000LL) <= a1[4] )
    {
      memcpy(v14, s, 0x2000uLL);
      v14[1024] = 0LL;
      v2 = alloc::boxed::Box<T>::new(v14);
    }
    else
    {
      v5 = alloc::collections::vec_deque::VecDeque<T,A>::pop_front(a1);
      if ( !v5 )
        core::option::unwrap_failed(&off_1BC890);
      v2 = v5;
      a1[5] -= *(_QWORD *)(v5 + 0x2000);
    }
  }
  if ( a1[3] )
  {
    v7 = alloc::collections::vec_deque::VecDeque<T,A>::pop_front(a1);
    if ( !v7 )
      core::option::unwrap_failed(&off_1BC8A8);
    v8 = a1[5];
    v9 = 0LL;
    v10 = v8 < a1[4];
    v11 = v8 - a1[4];
    if ( !v10 )
      v9 = v11;
    uu_tail::chunks::BytesChunk::from_chunk(v14, v7, v9);
    v12 = alloc::boxed::Box<T>::new(v14);
    alloc::collections::vec_deque::VecDeque<T,A>::push_front(a1, v12);
    core::ptr::drop_in_place<alloc::boxed::Box<uu_tail::chunks::BytesChunk>>(v7);
  }
  v6 = 0LL;
LABEL_18:
  core::ptr::drop_in_place<alloc::boxed::Box<uu_tail::chunks::BytesChunk>>(v2);
  return v6;
}
