__int64 __fastcall uu_join::Repr<Sep>::print_format(_QWORD *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // r12
  __int64 v4; // r14
  unsigned __int64 v5; // rbp
  __int64 v6; // rax
  __int64 result; // rax
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // [rsp+8h] [rbp-50h]
  __int64 v11; // [rsp+10h] [rbp-48h]
  __int64 v12; // [rsp+18h] [rbp-40h]

  v3 = a1[40];
  v11 = a1[33];
  v10 = a1[34];
  v12 = a1[39];
  v4 = a1[36];
  v5 = 0LL;
  while ( v5 < v3 )
  {
    v8 = <usize as core::iter::range::Step>::forward_unchecked(v5);
    if ( !v5
      || (v9 = <uu_join::MultiByteSep as uu_join::Separator>::output_separator(v11, v10),
          (result = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a2, v9)) == 0) )
    {
      v6 = uu_join::State::combine::{{closure}}(a3, v12 + 16 * v5);
      if ( !v6 )
        v6 = v4;
      result = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a2, v6);
      v5 = v8;
      if ( !result )
        continue;
    }
    return result;
  }
  return 0LL;
}
