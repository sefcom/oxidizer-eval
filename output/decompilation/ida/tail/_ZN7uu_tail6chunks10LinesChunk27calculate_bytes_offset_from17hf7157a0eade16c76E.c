__int64 __fastcall uu_tail::chunks::LinesChunk::calculate_bytes_offset_from(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  _BYTE *v4; // rax
  __int64 v5; // r14
  unsigned __int8 v6; // bp
  __int64 v7; // r12
  bool v8; // r13
  _QWORD v10[8]; // [rsp+8h] [rbp-40h] BYREF

  v2 = a2;
  v10[0] = uu_tail::chunks::LinesChunk::get_buffer(a1);
  v10[1] = v10[0] + v3;
  v4 = (_BYTE *)<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v10);
  v5 = 0LL;
  if ( a2 && v4 )
  {
    v6 = *(_BYTE *)(a1 + 8208);
    v5 = 0LL;
    do
    {
      v7 = 0LL;
      v8 = *v4 == v6;
      ++v5;
      v4 = (_BYTE *)<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v10);
      if ( !v4 )
        break;
      LOBYTE(v7) = v8;
      v2 -= v7;
    }
    while ( v2 );
  }
  return v5;
}
