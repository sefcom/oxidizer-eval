__int64 __fastcall uu_numfmt::handle_buffer(__int64 a1, __int64 a2)
{
  __int64 v2; // rax

  if ( !*(_BYTE *)(a2 + 200) )
    return uu_numfmt::handle_buffer_iterator();
  v2 = std::io::BufRead::split();
  return uu_numfmt::handle_buffer_iterator(v2, a2);
}