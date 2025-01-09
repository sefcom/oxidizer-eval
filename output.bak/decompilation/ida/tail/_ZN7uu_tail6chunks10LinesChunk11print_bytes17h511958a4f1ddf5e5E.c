__int64 __fastcall uu_tail::chunks::LinesChunk::print_bytes(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 buffer_with; // rax
  __int64 v4; // rax

  buffer_with = uu_tail::chunks::LinesChunk::get_buffer_with(a1, a3);
  v4 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a2, buffer_with);
  if ( v4 )
    return uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v4);
  else
    return 0LL;
}
