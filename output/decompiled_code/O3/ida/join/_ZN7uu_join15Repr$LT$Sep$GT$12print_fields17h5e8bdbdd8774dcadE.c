__int64 __fastcall uu_join::Repr<Sep>::print_fields(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  unsigned __int64 v4; // r15
  unsigned __int64 v6; // rbp
  unsigned __int64 v7; // rbx
  __int64 v8; // rax
  __int64 result; // rax
  __int64 field; // rax
  __int64 v11; // rdx

  v4 = a3[2];
  if ( !v4 )
    return 0LL;
  v6 = 0LL;
  while ( 1 )
  {
    v7 = <usize as core::iter::range::Step>::forward_unchecked(v6);
    if ( v6 != a4 )
    {
      v8 = <uu_join::OneByteSep as uu_join::Separator>::output_separator(a1 + 41);
      result = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a2, v8, 1LL);
      if ( result )
        break;
      field = uu_join::Line::get_field(a3, v6);
      if ( !field )
        core::option::unwrap_failed(&off_133178);
      result = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a2, field, v11);
      if ( result )
        break;
    }
    v6 = v7;
    if ( v7 >= v4 )
      return 0LL;
  }
  return result;
}
