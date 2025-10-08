__int64 __fastcall uu_tail::chunks::LinesChunkBuffer::print(__int64 a1, __int64 a2)
{
  _QWORD *v3; // r15
  _QWORD *v4; // r12
  _QWORD *v5; // rcx
  _QWORD *v6; // rsi
  __int64 v7; // r14
  _QWORD *v8; // r13
  _QWORD *v9; // rbp
  __int64 v10; // rax
  _QWORD v12[10]; // [rsp+8h] [rbp-50h] BYREF

  alloc::collections::vec_deque::VecDeque<T,A>::iter(v12, a1);
  v3 = (_QWORD *)v12[0];
  v4 = (_QWORD *)v12[1];
  v5 = (_QWORD *)v12[2];
  v6 = (_QWORD *)v12[3];
  v7 = 0LL;
  do
  {
    if ( v3 == v4 )
    {
      v8 = v3;
      v9 = v3;
      if ( v5 == v6 )
        return v7;
    }
    else
    {
      v8 = v5;
      v9 = v6;
      v6 = v4;
      v5 = v3;
    }
    v4 = v6;
    v3 = v5 + 1;
    v10 = uu_tail::chunks::LinesChunk::print_bytes(*v5, a2);
    v5 = v8;
    v6 = v9;
  }
  while ( !v10 );
  return v10;
}