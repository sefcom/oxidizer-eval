__int64 __fastcall uu_join::Repr<Sep>::print_format(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rbp
  __int64 v5; // r15
  __int64 v6; // rbx
  unsigned __int64 v7; // r14
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 result; // rax
  __int64 v11; // r13
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // [rsp+0h] [rbp-58h]
  __int64 v15; // [rsp+8h] [rbp-50h]
  __int64 v16; // [rsp+10h] [rbp-48h]

  v4 = a1[40];
  v15 = a1[33];
  v14 = a1[34];
  v16 = a1[39];
  v5 = a1[36];
  v6 = a1[37];
  v7 = 0LL;
  while ( v7 < v4 )
  {
    v11 = <usize as core::iter::range::Step>::forward_unchecked(v7);
    if ( !v7
      || (v12 = <uu_join::MultiByteSep as uu_join::Separator>::output_separator(v15, v14),
          (result = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a2, v12, v13)) == 0) )
    {
      v8 = uu_join::State::print_line::{{closure}}(a3, a4, v16 + 16 * v7);
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
