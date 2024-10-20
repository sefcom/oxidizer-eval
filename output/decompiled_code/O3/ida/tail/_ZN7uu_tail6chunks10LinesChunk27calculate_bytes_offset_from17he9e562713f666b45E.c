__int64 __fastcall uu_tail::chunks::LinesChunk::calculate_bytes_offset_from(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rdi
  __int64 result; // rax
  unsigned __int64 v5; // rdi
  __int64 v6; // r10
  __int64 v7; // r8
  bool v8; // r9

  v3 = *(_QWORD *)(a1 + 0x2000);
  if ( v3 >= 0x2001 )
    core::slice::index::slice_end_index_len_fail(
      v3,
      0x2000LL,
      &anon_260ad779062915721296377f2d114085_13_llvm_11775337101010531792);
  result = 0LL;
  if ( a2 && v3 )
  {
    v5 = v3 - 1;
    result = 0LL;
    do
    {
      v6 = result;
      v7 = 0LL;
      v8 = *(_BYTE *)(a1 + result++) == *(_BYTE *)(a1 + 8208);
      if ( v5 == v6 )
        break;
      LOBYTE(v7) = v8;
      a2 -= v7;
    }
    while ( a2 );
  }
  return result;
}
