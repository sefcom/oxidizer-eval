__int64 __fastcall uu_join::Repr<Sep>::print_fields(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v5; // rbp
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // r13
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 result; // rax
  __int64 field; // rax
  __int64 v15; // rdx

  v5 = *(_QWORD *)(a4 + 16);
  if ( !v5 )
    return 0LL;
  v9 = 0LL;
  while ( 1 )
  {
    v10 = <usize as core::iter::range::Step>::forward_unchecked(v9);
    if ( v9 != a5 )
    {
      v11 = <uu_join::MultiByteSep as uu_join::Separator>::output_separator(a1, a2);
      result = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a3, v11, v12);
      if ( result )
        break;
      field = uu_join::Line::get_field(a4, v9);
      if ( !field )
        core::option::unwrap_failed(&off_133178);
      result = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a3, field, v15);
      if ( result )
        break;
    }
    v9 = v10;
    if ( v10 >= v5 )
      return 0LL;
  }
  return result;
}
