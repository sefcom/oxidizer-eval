__int64 __fastcall uu_fmt::linebreak::write_newline(void *src, size_t n, _QWORD *a3)
{
  __int64 v4; // r13
  __int64 v5; // r12
  __int64 v6; // r13
  void *v7; // r12
  __int64 result; // rax

  v4 = a3[2];
  if ( (unsigned __int64)(*a3 - v4) < 2 )
  {
    result = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a3, asc_1F8E5, 1LL);
    if ( result )
      return result;
    v6 = a3[2];
  }
  else
  {
    v5 = a3[1];
    core::intrinsics::copy_nonoverlapping::precondition_check(asc_1F8E5, v5 + v4, 1LL, 1LL, 1LL);
    *(_BYTE *)(v5 + v4) = 10;
    v6 = v4 + 1;
    a3[2] = v6;
  }
  if ( *a3 - v6 <= n )
    return std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a3, src, n);
  v7 = (void *)(v6 + a3[1]);
  core::intrinsics::copy_nonoverlapping::precondition_check(src, v7, 1LL, 1LL, n);
  memcpy(v7, src, n);
  a3[2] = n + v6;
  return 0LL;
}
