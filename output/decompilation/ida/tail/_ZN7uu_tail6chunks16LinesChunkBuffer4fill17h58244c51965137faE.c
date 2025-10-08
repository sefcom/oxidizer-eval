__int64 __fastcall uu_tail::chunks::LinesChunkBuffer::fill(__int64 a1)
{
  char v1; // bl
  __int64 v2; // rbx
  char v3; // bl
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // r14
  __int64 v7; // rsi
  __int64 *mut; // rax
  __int64 *v9; // r15
  __int64 buffer; // rax
  __int64 v11; // rdx
  __int64 v12; // rax
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rdx
  bool v17; // cf
  unsigned __int64 v18; // rcx
  __int64 v19; // r15
  __int64 v20; // rax
  _OWORD dest[513]; // [rsp+8h] [rbp-6060h] BYREF
  char v23; // [rsp+2018h] [rbp-4050h]
  _BYTE src[24]; // [rsp+2020h] [rbp-4048h] BYREF
  __int64 v25; // [rsp+2038h] [rbp-4030h]
  __int64 v26; // [rsp+3038h] [rbp-3030h]
  _QWORD s[1024]; // [rsp+4038h] [rbp-2030h] BYREF

  s[512] = 0LL;
  s[0] = 0LL;
  v26 = 0LL;
  v25 = 0LL;
  *(_QWORD *)&dest[259] = 0LL;
  *(_QWORD *)&dest[3] = 0LL;
  v1 = *(_BYTE *)(a1 + 48);
  memset(s, 0, sizeof(s));
  memset(dest, 0, sizeof(dest));
  v23 = v1;
  v2 = alloc::boxed::Box<T>::new(dest);
  while ( 1 )
  {
    uu_tail::chunks::LinesChunk::fill((__int64)dest, v2);
    if ( LODWORD(dest[0]) == 1 )
    {
      v6 = *((_QWORD *)&dest[0] + 1);
      goto LABEL_21;
    }
    if ( !*((_QWORD *)&dest[0] + 1) )
      break;
    *(_QWORD *)(a1 + 32) += *(_QWORD *)(v2 + 8200);
    alloc::collections::vec_deque::VecDeque<T,A>::push_back(a1, v2);
    v4 = alloc::collections::vec_deque::VecDeque<T,A>::get(a1);
    if ( !v4 )
      core::option::expect_failed(aOutOfBoundsAcc, 20LL, &off_173348);
    if ( *(_QWORD *)(a1 + 32) - *(_QWORD *)(*(_QWORD *)v4 + 8200LL) <= *(_QWORD *)(a1 + 40) )
    {
      v3 = *(_BYTE *)(a1 + 48);
      memcpy(dest, s, 0x2000uLL);
      dest[512] = 0LL;
      v23 = v3;
      v2 = alloc::boxed::Box<T>::new(dest);
    }
    else
    {
      v5 = alloc::collections::vec_deque::VecDeque<T,A>::pop_front(a1);
      if ( !v5 )
        core::option::unwrap_failed(&off_173360);
      v2 = v5;
      *(_QWORD *)(a1 + 32) -= *(_QWORD *)(v5 + 8200);
    }
  }
  v7 = *(_QWORD *)(a1 + 24);
  if ( v7 )
  {
    mut = (__int64 *)alloc::collections::vec_deque::VecDeque<T,A>::get_mut(a1, v7 - 1);
    if ( !mut )
      core::option::expect_failed(aOutOfBoundsAcc, 20LL, &off_173378);
    v9 = mut;
    buffer = uu_tail::chunks::LinesChunk::get_buffer(*mut);
    LOBYTE(dest[0]) = *(_BYTE *)(a1 + 48);
    if ( !(unsigned __int8)core::slice::<impl [T]>::ends_with(buffer, v11, dest) )
    {
      ++*(_QWORD *)(*v9 + 8200);
      ++*(_QWORD *)(a1 + 32);
    }
    while ( 1 )
    {
      v12 = alloc::collections::vec_deque::VecDeque<T,A>::pop_front(a1);
      if ( !v12 )
        core::option::unwrap_failed(&off_173390);
      v13 = *(_QWORD *)(a1 + 32);
      v14 = *(_QWORD *)(a1 + 40);
      v15 = v13 - *(_QWORD *)(v12 + 8200);
      if ( v15 <= v14 )
        break;
      *(_QWORD *)(a1 + 32) = v15;
      core::ptr::drop_in_place<alloc::boxed::Box<uu_tail::chunks::LinesChunk>>(v12);
    }
    v16 = 0LL;
    v17 = v13 < v14;
    v18 = v13 - v14;
    if ( !v17 )
      v16 = v18;
    v19 = v12;
    uu_tail::chunks::LinesChunk::from_chunk(src, v12, v16);
    v20 = alloc::boxed::Box<T>::new(src);
    alloc::collections::vec_deque::VecDeque<T,A>::push_front(a1, v20);
    core::ptr::drop_in_place<alloc::boxed::Box<uu_tail::chunks::LinesChunk>>(v19);
  }
  v6 = 0LL;
LABEL_21:
  core::ptr::drop_in_place<alloc::boxed::Box<uu_tail::chunks::LinesChunk>>(v2);
  return v6;
}