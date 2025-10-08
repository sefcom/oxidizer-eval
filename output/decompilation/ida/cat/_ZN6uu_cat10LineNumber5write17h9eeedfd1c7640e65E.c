__int64 __fastcall uu_cat::LineNumber::write(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rdi

  v3 = *(_QWORD *)(a1 + 32);
  if ( v3 > 0x20 )
    core::slice::index::slice_start_index_len_fail(v3, 32LL, &off_EAA70);
  return <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a2, v3 + a1, 32 - v3);
}