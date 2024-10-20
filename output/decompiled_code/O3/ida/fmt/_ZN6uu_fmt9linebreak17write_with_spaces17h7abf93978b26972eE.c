__int64 __fastcall uu_fmt::linebreak::write_with_spaces(void *src, size_t n, __int64 a3, _QWORD *a4)
{
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // r12
  __int64 result; // rax
  const char *v11; // rsi
  __int64 v12; // rdx

  if ( a3 == 1 )
  {
    v8 = a4[2];
    if ( (unsigned __int64)(*a4 - v8) > 1 )
    {
      *(_BYTE *)(a4[1] + v8) = 32;
      v7 = v8 + 1;
      goto LABEL_7;
    }
    v11 = asc_19E07;
    v12 = 1LL;
LABEL_14:
    result = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a4, v11, v12);
    if ( result )
      return result;
    goto LABEL_8;
  }
  if ( a3 != 2 )
    goto LABEL_8;
  v6 = a4[2];
  if ( (unsigned __int64)(*a4 - v6) <= 2 )
  {
    v11 = asc_19E05;
    v12 = 2LL;
    goto LABEL_14;
  }
  *(_WORD *)(a4[1] + v6) = 8224;
  v7 = v6 + 2;
LABEL_7:
  a4[2] = v7;
LABEL_8:
  v9 = a4[2];
  if ( *a4 - v9 <= n )
    return std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a4, src, n);
  memcpy((void *)(v9 + a4[1]), src, n);
  a4[2] = n + v9;
  return 0LL;
}
