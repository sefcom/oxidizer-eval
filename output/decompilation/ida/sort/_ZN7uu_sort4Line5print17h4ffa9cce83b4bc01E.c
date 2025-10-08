__int64 __fastcall uu_sort::Line::print(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 result; // rax
  _BYTE v8[17]; // [rsp+1h] [rbp-11h] BYREF

  v8[0] = HIBYTE(v4);
  if ( *(_BYTE *)(a4 + 124) )
    return uu_sort::Line::print_debug(a1, a2, a4, a3);
  result = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a3, a1, a2);
  if ( !result )
  {
    v8[0] = *(_BYTE *)(a4 + 153);
    return <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a3, v8, 1LL);
  }
  return result;
}