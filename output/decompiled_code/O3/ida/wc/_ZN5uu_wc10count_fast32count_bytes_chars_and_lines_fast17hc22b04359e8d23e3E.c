__int64 __fastcall uu_wc::count_fast::count_bytes_chars_and_lines_fast(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  __int64 v3; // rax
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // r12
  __int64 v7; // [rsp+0h] [rbp-4038h]
  _QWORD s[2054]; // [rsp+8h] [rbp-4030h] BYREF

  v7 = 0LL;
  memset(s, 0, 0x4000uLL);
  v2 = 0LL;
  while ( 1 )
  {
    while ( 1 )
    {
      v3 = <std::io::stdio::StdinLock as std::io::Read>::read(a2, s, 0x4000LL);
      v5 = v4;
      if ( !v3 )
        break;
      if ( (unsigned __int8)std::io::error::Error::kind(v4) != 35 )
      {
        *(_QWORD *)a1 = v2;
        *(_QWORD *)(a1 + 8) = 0LL;
        *(_QWORD *)(a1 + 16) = v7;
        *(_OWORD *)(a1 + 24) = 0LL;
        *(_QWORD *)(a1 + 40) = v5;
        return a1;
      }
      core::ptr::drop_in_place<std::io::error::Error>(v5);
    }
    if ( !v4 )
      break;
    if ( v4 >= 0x4001 )
      core::slice::index::slice_end_index_len_fail(
        v4,
        0x4000LL,
        &anon_a808bb20f78aff64bf06a0678fac6b82_2_llvm_4946481185994499599);
    v2 += v4;
    v7 += bytecount::count(s, v4, 10LL);
  }
  *(_QWORD *)a1 = v2;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = v7;
  *(_OWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  return a1;
}
