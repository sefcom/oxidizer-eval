__int64 __fastcall uu_csplit::SplitWriter::writeln(__int64 a1, _BYTE *a2, size_t a3)
{
  __int64 v5; // r15
  __int64 v6; // rdi
  _BYTE *v7; // rdi
  size_t v8; // rcx
  size_t v9; // r15
  __int64 v10; // rax
  unsigned __int64 v11; // rax
  char *v12; // rsi
  size_t v13; // rbx
  bool v14; // cf
  size_t v15; // rbx
  __int64 result; // rax
  _QWORD v17[3]; // [rsp+0h] [rbp-48h] BYREF
  __int128 v18; // [rsp+18h] [rbp-30h]

  if ( (*(_BYTE *)(a1 + 56) & 1) != 0 )
    return 0LL;
  if ( *(_QWORD *)a1 == 0x8000000000000000LL )
  {
    v17[0] = &off_2A5010;
    v17[1] = 1LL;
    v17[2] = 8LL;
    v18 = 0LL;
    core::panicking::panic_fmt(v17, &off_2A5020);
  }
  v5 = *(_QWORD *)(a1 + 16);
  if ( *(_QWORD *)a1 - v5 <= a3 )
  {
    result = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a1, a2, a3);
    if ( result )
      return result;
    v9 = *(_QWORD *)(a1 + 16);
  }
  else
  {
    if ( !a2 )
      goto LABEL_25;
    v6 = *(_QWORD *)(a1 + 8);
    if ( !v6 )
      goto LABEL_25;
    v7 = (_BYTE *)(v5 + v6);
    v8 = v7 - a2;
    if ( v7 <= a2 )
      v8 = a2 - v7;
    if ( v8 < a3 )
      goto LABEL_25;
    memcpy(v7, a2, a3);
    v9 = a3 + v5;
    *(_QWORD *)(a1 + 16) = v9;
  }
  if ( *(_QWORD *)a1 - v9 >= 2 )
  {
    v10 = *(_QWORD *)(a1 + 8);
    if ( v10 )
    {
      v11 = v9 + v10;
      v12 = (char *)(v11 - (_QWORD)asc_5F7C8);
      if ( v11 <= (unsigned __int64)asc_5F7C8 )
        v12 = &asc_5F7C8[-v11];
      if ( v12 )
      {
        *(_BYTE *)v11 = 10;
        *(_QWORD *)(a1 + 16) = v9 + 1;
LABEL_16:
        v13 = a3 + 1;
        if ( !v13 )
          core::panicking::panic_const::panic_const_add_overflow(&off_2A5038);
        v14 = __CFADD__(*(_QWORD *)(a1 + 48), v13);
        v15 = *(_QWORD *)(a1 + 48) + v13;
        if ( v14 )
          core::panicking::panic_const::panic_const_add_overflow(&off_2A5050);
        *(_QWORD *)(a1 + 48) = v15;
        return 0LL;
      }
    }
LABEL_25:
    core::panicking::panic_nounwind(anon_bb214e635f3e52e586c02a5eeb538d7c_17_llvm_3235605871402522358, 166LL);
  }
  result = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a1, asc_5F7C8, 1LL);
  if ( !result )
    goto LABEL_16;
  return result;
}
