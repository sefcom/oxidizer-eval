__int64 __fastcall uu_tail::chunks::BytesChunkBuffer::print(__int64 a1, __int64 a2)
{
  __int64 buffer; // rax
  __int64 v3; // rax
  __int64 *v4; // rax
  __int128 v5; // xmm0
  __int128 v7; // [rsp+0h] [rbp-38h] BYREF
  __int128 v8; // [rsp+10h] [rbp-28h]

  alloc::collections::vec_deque::VecDeque<T,A>::iter(&v7, a1);
  do
  {
    v4 = (__int64 *)<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v7);
    if ( !v4 )
    {
      v5 = v7;
      v7 = v8;
      v8 = v5;
      v4 = (__int64 *)<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v7);
      if ( !v4 )
        return 0LL;
    }
    buffer = uu_tail::chunks::BytesChunk::get_buffer(*v4);
    v3 = std::io::impls::<impl std::io::Write for &mut W>::write_all(a2, buffer);
  }
  while ( !v3 );
  return uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v3);
}
