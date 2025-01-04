__int64 __fastcall uu_fmt::linebreak::write_newline(void *src, size_t n, _QWORD *a3)
{
  __int64 v4; // r12
  __int64 v5; // r12
  __int64 result; // rax

  v4 = a3[2];
  if ( (unsigned __int64)(*a3 - v4) <= 1 )
  {
    result = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a3, asc_1E186, 1LL);
    if ( result )
      return result;
    v5 = a3[2];
  }
  else
  {
    *(_BYTE *)(a3[1] + v4) = 10;
    v5 = v4 + 1;
    a3[2] = v5;
  }
  if ( *a3 - v5 <= n )
    return std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a3, src, n);
  memcpy((void *)(v5 + a3[1]), src, n);
  a3[2] = n + v5;
  return 0LL;
}
