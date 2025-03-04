__int64 __fastcall uu_tail::chunks::LinesChunk::print_bytes(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 buffer_with; // rax
  __int64 v4; // rax

  v2 = 0LL;
  buffer_with = uu_tail::chunks::LinesChunk::get_buffer_with(a1, 0LL);
  v4 = std::io::impls::<impl std::io::Write for &mut W>::write_all(a2, buffer_with);
  if ( v4 )
    return uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v4);
  return v2;
}
