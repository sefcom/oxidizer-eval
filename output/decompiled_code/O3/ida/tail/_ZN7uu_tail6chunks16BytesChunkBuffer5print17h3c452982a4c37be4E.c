__int64 __fastcall uu_tail::chunks::BytesChunkBuffer::print(__int64 a1, __int64 a2)
{
  __int64 *v2; // rax
  __int128 v3; // xmm0
  __int64 buffer; // rax
  __int64 v5; // rax
  __int64 v6; // r14
  __int128 v8; // [rsp+0h] [rbp-58h] BYREF
  __int128 v9; // [rsp+10h] [rbp-48h]
  _OWORD v10[3]; // [rsp+20h] [rbp-38h] BYREF

  alloc::collections::vec_deque::VecDeque<T,A>::iter(v10, a1);
  v9 = v10[1];
  v8 = v10[0];
  while ( 1 )
  {
    v2 = (__int64 *)<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v8);
    if ( !v2 )
    {
      v3 = v8;
      v8 = v9;
      v9 = v3;
      v2 = (__int64 *)<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v8);
      if ( !v2 )
        break;
    }
    buffer = uu_tail::chunks::BytesChunk::get_buffer(*v2);
    v5 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a2, buffer);
    if ( v5 )
    {
      v6 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v5);
      goto LABEL_7;
    }
  }
  v6 = 0LL;
LABEL_7:
  core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutLock>>(a2);
  return v6;
}
