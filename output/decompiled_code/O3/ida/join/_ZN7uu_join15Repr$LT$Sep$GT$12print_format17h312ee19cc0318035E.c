__int64 __fastcall uu_join::Repr<Sep>::print_format(_QWORD *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // r12
  __int64 v4; // r14
  __int64 v5; // rbx
  unsigned __int64 v6; // rbp
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 result; // rax
  __int64 v10; // r13
  __int64 v11; // rax
  __int64 v12; // [rsp+8h] [rbp-40h]

  v12 = a1[1];
  v3 = a1[2];
  v4 = a1[3];
  v5 = a1[4];
  v6 = 0LL;
  while ( v6 < v3 )
  {
    v10 = <usize as core::iter::range::Step>::forward_unchecked(v6);
    if ( !v6
      || (v11 = <uu_join::OneByteSep as uu_join::Separator>::output_separator((char *)a1 + 41),
          (result = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a2, v11, 1LL)) == 0) )
    {
      v7 = uu_join::State::combine::{{closure}}(a3, v12 + 16 * v6);
      if ( !v7 )
      {
        v7 = v4;
        v8 = v5;
      }
      result = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a2, v7, v8);
      v6 = v10;
      if ( !result )
        continue;
    }
    return result;
  }
  return 0LL;
}
