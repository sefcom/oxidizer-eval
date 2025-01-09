__int64 __fastcall uu_csplit::SplitWriter::writeln(__int64 a1, const void *a2, size_t a3)
{
  __int64 v4; // r15
  size_t v5; // r15
  __int64 result; // rax
  _QWORD v7[3]; // [rsp+0h] [rbp-48h] BYREF
  __int128 v8; // [rsp+18h] [rbp-30h]

  if ( *(_BYTE *)(a1 + 56) )
    return 0LL;
  if ( *(_QWORD *)a1 == 0x8000000000000000LL )
  {
    v7[0] = &off_2E1DD0;
    v7[1] = 1LL;
    v7[2] = 8LL;
    v8 = 0LL;
    core::panicking::panic_fmt(v7, &off_2E1DE0);
  }
  v4 = *(_QWORD *)(a1 + 16);
  if ( *(_QWORD *)a1 - v4 <= a3 )
  {
    result = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a1, a2, a3);
    if ( result )
      return result;
    v5 = *(_QWORD *)(a1 + 16);
  }
  else
  {
    memcpy((void *)(v4 + *(_QWORD *)(a1 + 8)), a2, a3);
    v5 = a3 + v4;
    *(_QWORD *)(a1 + 16) = v5;
  }
  if ( *(_QWORD *)a1 - v5 >= 2 )
  {
    *(_BYTE *)(*(_QWORD *)(a1 + 8) + v5) = 10;
    *(_QWORD *)(a1 + 16) = v5 + 1;
LABEL_7:
    *(_QWORD *)(a1 + 48) += a3 + 1;
    return 0LL;
  }
  result = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a1, asc_70537, 1LL);
  if ( !result )
    goto LABEL_7;
  return result;
}
