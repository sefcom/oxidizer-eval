__int64 __fastcall uu_join::Repr<Sep>::print_field(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( a3 )
    return <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a2, a3, a4);
  else
    return <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(
             a2,
             *(_QWORD *)(a1 + 288),
             *(_QWORD *)(a1 + 296));
}
