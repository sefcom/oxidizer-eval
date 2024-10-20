__int64 __fastcall uu_fmt::linebreak::write_with_spaces(void *src, size_t n, __int64 a3, _QWORD *a4)
{
  __int64 v6; // r12
  __int64 v7; // r13
  __int64 v8; // r12
  __int64 v9; // r12
  __int64 v10; // r13
  __int64 v11; // r13
  void *v12; // r12
  __int64 result; // rax
  const char *v14; // rsi
  __int64 v15; // rdx

  if ( a3 == 1 )
  {
    v9 = a4[2];
    if ( (unsigned __int64)(*a4 - v9) >= 2 )
    {
      v10 = a4[1];
      core::intrinsics::copy_nonoverlapping::precondition_check(asc_1F8E8, v9 + v10, 1LL, 1LL, 1LL);
      *(_BYTE *)(v10 + v9) = 32;
      v8 = v9 + 1;
      goto LABEL_7;
    }
    v14 = asc_1F8E8;
    v15 = 1LL;
LABEL_14:
    result = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a4, v14, v15);
    if ( result )
      return result;
    goto LABEL_8;
  }
  if ( a3 != 2 )
    goto LABEL_8;
  v6 = a4[2];
  if ( (unsigned __int64)(*a4 - v6) < 3 )
  {
    v14 = asc_1F8E6;
    v15 = 2LL;
    goto LABEL_14;
  }
  v7 = a4[1];
  core::intrinsics::copy_nonoverlapping::precondition_check(asc_1F8E6, v6 + v7, 1LL, 1LL, 2LL);
  *(_WORD *)(v7 + v6) = 8224;
  v8 = v6 + 2;
LABEL_7:
  a4[2] = v8;
LABEL_8:
  v11 = a4[2];
  if ( *a4 - v11 <= n )
    return std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a4, src, n);
  v12 = (void *)(v11 + a4[1]);
  core::intrinsics::copy_nonoverlapping::precondition_check(src, v12, 1LL, 1LL, n);
  memcpy(v12, src, n);
  a4[2] = n + v11;
  return 0LL;
}
