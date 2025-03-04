__int64 __fastcall uu_join::Repr<Sep>::print_format(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // r14
  __int64 v5; // r15
  unsigned __int64 v6; // rbp
  __int64 v7; // rax
  __int64 result; // rax
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // [rsp+10h] [rbp-48h]

  v11 = a1[1];
  v4 = a1[2];
  v5 = a1[3];
  v6 = 0LL;
  while ( v6 < v4 )
  {
    v9 = <usize as core::iter::range::Step>::forward_unchecked(v6);
    if ( !v6
      || (v10 = <uu_join::OneByteSep as uu_join::Separator>::output_separator((char *)a1 + 41),
          (result = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a2, v10)) == 0) )
    {
      v7 = uu_join::State::print_line::{{closure}}(a3, a4, v11 + 16 * v6);
      if ( !v7 )
        v7 = v5;
      result = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a2, v7);
      v6 = v9;
      if ( !result )
        continue;
    }
    return result;
  }
  return 0LL;
}
