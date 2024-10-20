__int64 __fastcall uu_shred::BytesWriter::bytes_for_pass(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // r15
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rbp
  __int64 v5; // rax
  __int64 v6; // rdx
  bool v7; // cf
  __int64 v8; // rax
  unsigned __int64 v9; // rbx

  if ( (*(_BYTE *)a1 & 1) != 0 )
  {
    v8 = *(__int64 *)((char *)&qword_10008 + a1);
    v9 = v8 + a2;
    if ( __CFADD__(v8, a2) )
      core::panicking::panic_const::panic_const_add_overflow(&off_1193F0);
    if ( v9 >= (unsigned __int64)&unk_10003 )
      core::slice::index::slice_end_index_len_fail(v9, &unk_10002, &off_119408);
    v2 = a1 + v8 + 1;
    *(__int64 *)((char *)&qword_10008 + a1) = (unsigned int)v9 % 3;
  }
  else
  {
    if ( a2 >= (unsigned __int64)&unk_10001 )
      core::slice::index::slice_end_index_len_fail(a2, &unk_10000, &off_1193D8);
    v2 = a1 + 336;
    if ( a2 )
    {
      v3 = *(_QWORD *)(a1 + 272);
      v4 = 0LL;
      do
      {
        if ( v3 >= 0x40 )
        {
          rand_chacha::guts::refill_wide(a1 + 288, 6LL, a1 + 16);
          *(_QWORD *)(a1 + 272) = 0LL;
          v3 = 0LL;
        }
        v5 = rand_core::impls::fill_via_chunks(a1 + 16 + 4 * v3, 64 - v3, v2 + v4, a2 - v4);
        v7 = __CFADD__(*(_QWORD *)(a1 + 272), v5);
        v3 = *(_QWORD *)(a1 + 272) + v5;
        if ( v7 )
          core::panicking::panic_const::panic_const_add_overflow(&anon_9d81be959acf34f7d56c82ffda2144ee_36_llvm_1559976801502891496);
        *(_QWORD *)(a1 + 272) = v3;
        v7 = __CFADD__(v6, v4);
        v4 += v6;
        if ( v7 )
          core::panicking::panic_const::panic_const_add_overflow(&anon_9d81be959acf34f7d56c82ffda2144ee_37_llvm_1559976801502891496);
      }
      while ( v4 < a2 );
    }
  }
  return v2;
}
