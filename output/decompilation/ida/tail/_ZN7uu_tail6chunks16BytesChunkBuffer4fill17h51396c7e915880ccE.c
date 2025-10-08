__int64 __fastcall uu_tail::chunks::BytesChunkBuffer::fill(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // r14
  __int64 v6; // rax
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
    if ( LODWORD(v14[0]) == 1 )
    {
      v5 = v14[1];
      goto LABEL_16;
    }
    if ( !v14[1] )
      break;
    a1[5] += *(_QWORD *)(v2 + 0x2000);
    alloc::collections::vec_deque::VecDeque<T,A>::push_back(a1, v2);
    v3 = alloc::collections::vec_deque::VecDeque<T,A>::get(a1);
    if ( !v3 )
      core::option::expect_failed(aOutOfBoundsAcc, 20LL, &off_1732D0);
    if ( a1[5] - *(_QWORD *)(*(_QWORD *)v3 + 0x2000LL) <= a1[4] )
    {
      memcpy(v14, s, 0x2000uLL);
      v14[1024] = 0LL;
      v2 = alloc::boxed::Box<T>::new(v14);
    }
    else
    {
      v4 = alloc::collections::vec_deque::VecDeque<T,A>::pop_front(a1);
      if ( !v4 )
        core::option::unwrap_failed(&off_1732E8);
      v2 = v4;
      a1[5] -= *(_QWORD *)(v4 + 0x2000);
    }
  }
  if ( a1[3] )
  {
    v6 = alloc::collections::vec_deque::VecDeque<T,A>::pop_front(a1);
    if ( !v6 )
      core::option::unwrap_failed(&off_173300);
    v7 = v6;
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
  v5 = 0LL;
LABEL_16:
  core::ptr::drop_in_place<alloc::boxed::Box<uu_tail::chunks::BytesChunk>>(v2);
  return v5;
}