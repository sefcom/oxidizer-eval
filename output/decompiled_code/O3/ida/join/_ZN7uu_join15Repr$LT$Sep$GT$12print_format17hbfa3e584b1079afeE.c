__int64 __fastcall uu_join::Repr<Sep>::print_format(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // r14
  __int64 v5; // r15
  __int64 v6; // r13
  unsigned __int64 v7; // rbp
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 result; // rax
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // [rsp+10h] [rbp-48h]

  v13 = a1[1];
  v4 = a1[2];
  v5 = a1[3];
  v6 = a1[4];
  v7 = 0LL;
  while ( v7 < v4 )
  {
    v11 = <usize as core::iter::range::Step>::forward_unchecked(v7);
    if ( !v7
      || (v12 = <uu_join::OneByteSep as uu_join::Separator>::output_separator((char *)a1 + 41),
          (result = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a2, v12, 1LL)) == 0) )
    {
      v8 = uu_join::State::print_line::{{closure}}(a3, a4, v13 + 16 * v7);
      if ( !v8 )
      {
        v8 = v5;
        v9 = v6;
      }
      result = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a2, v8, v9);
      v7 = v11;
      if ( !result )
        continue;
    }
    return result;
  }
  return 0LL;
}
