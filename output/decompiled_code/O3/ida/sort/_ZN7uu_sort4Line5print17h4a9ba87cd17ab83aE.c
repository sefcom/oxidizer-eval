__int64 __fastcall uu_sort::Line::print(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  _BYTE v10[17]; // [rsp+1h] [rbp-11h] BYREF

  v10[0] = HIBYTE(v3);
  v4 = a1[1];
  if ( *(_BYTE *)(a3 + 124) )
  {
    v5 = uu_sort::Line::print_debug(*a1, v4, a3, a2);
    return core::result::Result<T,E>::unwrap(v5, &off_1FF8D8);
  }
  else
  {
    v8 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a2, *a1, v4);
    core::result::Result<T,E>::unwrap(v8, &off_1FF8A8);
    v10[0] = *(_BYTE *)(a3 + 153);
    v9 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a2, v10, 1LL);
    return core::result::Result<T,E>::unwrap(v9, &off_1FF8C0);
  }
}
