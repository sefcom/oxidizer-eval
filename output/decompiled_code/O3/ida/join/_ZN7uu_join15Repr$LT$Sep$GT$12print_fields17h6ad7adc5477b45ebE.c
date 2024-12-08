__int64 __fastcall uu_join::Repr<Sep>::print_fields(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbx
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // r13
  __int64 result; // rax
  __int64 field; // rax
  __int64 v9; // rdx

  v3 = *(_QWORD *)(a2 + 16);
  if ( !v3 )
    return 0LL;
  v5 = 0LL;
  while ( 1 )
  {
    v6 = <usize as core::iter::range::Step>::forward_unchecked(v5);
    if ( v5 != a3 )
    {
      result = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a1, 1LL, 0LL);
      if ( result )
        break;
      field = uu_join::Line::get_field(a2, v5);
      if ( !field )
        core::option::unwrap_failed(&off_133178);
      result = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a1, field, v9);
      if ( result )
        break;
    }
    v5 = v6;
    if ( v6 >= v3 )
      return 0LL;
  }
  return result;
}
