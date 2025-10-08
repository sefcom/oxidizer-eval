__int64 __fastcall uu_csplit::SplitWriter::writeln(__int64 a1, const void *a2, size_t a3)
{
  __int64 v4; // r15
  __int64 result; // rax
  _QWORD v6[3]; // [rsp+0h] [rbp-48h] BYREF
  __int128 v7; // [rsp+18h] [rbp-30h]

  if ( *(_BYTE *)(a1 + 56) )
    return 0LL;
  if ( __OFSUB__(-*(_QWORD *)a1, 1LL) )
  {
    v6[0] = &off_242C60;
    v6[1] = 1LL;
    v6[2] = 8LL;
    v7 = 0LL;
    core::panicking::panic_fmt(v6, &off_242C70);
  }
  v4 = *(_QWORD *)(a1 + 16);
  if ( a3 < *(_QWORD *)a1 - v4 )
  {
    memcpy((void *)(v4 + *(_QWORD *)(a1 + 8)), a2, a3);
    *(_QWORD *)(a1 + 16) = a3 + v4;
LABEL_5:
    *(_QWORD *)(a1 + 48) += a3;
    return 0LL;
  }
  result = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a1, a2, a3, -*(_QWORD *)a1);
  if ( !result )
    goto LABEL_5;
  return result;
}