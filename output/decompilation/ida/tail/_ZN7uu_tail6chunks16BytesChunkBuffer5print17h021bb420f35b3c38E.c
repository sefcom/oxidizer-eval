__int64 __fastcall uu_tail::chunks::BytesChunkBuffer::print(__int64 a1, __int64 a2)
{
  __int64 *v2; // rdx
  __int64 *v3; // r13
  __int64 *v4; // r12
  __int64 *v5; // rcx
  __int64 *v6; // rbp
  __int64 *v7; // rbx
  __int64 buffer; // rax
  __int64 v9; // rax
  _QWORD v11[10]; // [rsp+8h] [rbp-50h] BYREF

  alloc::collections::vec_deque::VecDeque<T,A>::iter(v11, a1);
  v2 = (__int64 *)v11[0];
  v3 = (__int64 *)v11[1];
  v4 = (__int64 *)v11[2];
  v5 = (__int64 *)v11[3];
  do
  {
    if ( v2 == v3 )
    {
      v6 = v2;
      v7 = v2;
      if ( v4 == v5 )
        return 0LL;
    }
    else
    {
      v6 = v4;
      v7 = v5;
      v5 = v3;
      v4 = v2;
    }
    v3 = v5;
    buffer = uu_tail::chunks::BytesChunk::get_buffer(*v4);
    v9 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a2, buffer);
    v2 = v4 + 1;
    v4 = v6;
    v5 = v7;
  }
  while ( !v9 );
  return uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v9);
}