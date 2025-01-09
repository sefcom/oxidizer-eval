__int64 __fastcall uu_tail::chunks::LinesChunkBuffer::print(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 *v3; // rax
  __int128 v4; // xmm0
  __int128 v5; // [rsp+0h] [rbp-38h] BYREF
  __int128 v6; // [rsp+10h] [rbp-28h]

  alloc::collections::vec_deque::VecDeque<T,A>::iter(&v5, a1);
  while ( 1 )
  {
    v3 = (__int64 *)<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v5);
    if ( !v3 )
    {
      v4 = v5;
      v5 = v6;
      v6 = v4;
      v3 = (__int64 *)<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v5);
      if ( !v3 )
        break;
    }
    result = uu_tail::chunks::LinesChunk::print_bytes(*v3, a2);
    if ( result )
      return result;
  }
  return 0LL;
}
