__int64 __fastcall uu_join::Repr<Sep>::print_format(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r13
  __int64 v5; // r12
  __int64 v6; // rbp
  __int64 v7; // rax
  __int64 result; // rax
  __int64 v9; // r12
  __int64 v10; // rax

  v3 = a1[2];
  if ( !v3 )
    return 0LL;
  v5 = a1[1];
  v6 = a1[3];
  v7 = uu_join::State::combine::{{closure}}(a3, v5);
  if ( !v7 )
    v7 = v6;
  result = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a2, v7);
  if ( !result )
  {
    v9 = v5 + 16;
    while ( --v3 )
    {
      result = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a2, 1LL);
      if ( !result )
      {
        v10 = uu_join::State::combine::{{closure}}(a3, v9);
        if ( !v10 )
          v10 = v6;
        result = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a2, v10);
        v9 += 16LL;
        if ( !result )
          continue;
      }
      return result;
    }
    return 0LL;
  }
  return result;
}