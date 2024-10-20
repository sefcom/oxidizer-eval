__int64 __fastcall uu_dd::bufferedoutput::BufferedOutput::flush(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  unsigned __int64 v4; // r15
  __int64 v5; // rsi
  unsigned __int64 v6; // r12
  bool v7; // cf
  size_t v8; // r12
  __int64 v10[2]; // [rsp+0h] [rbp-68h] BYREF
  unsigned __int64 v11; // [rsp+10h] [rbp-58h]
  __int64 v12; // [rsp+18h] [rbp-50h]
  __int128 v13; // [rsp+20h] [rbp-48h]
  __int128 v14; // [rsp+30h] [rbp-38h]

  uu_dd::Output::write_blocks(v10, a2 + 24, *(_QWORD *)(a2 + 8), *(_QWORD *)(a2 + 16));
  if ( !v10[0] )
  {
    v4 = v11;
    v14 = v13;
    if ( v12 )
      core::result::unwrap_failed(
        anon_47fcc33835ba2501a8fd1dfb926be52d_7_llvm_7315772993864627227,
        43LL,
        v10,
        &anon_47fcc33835ba2501a8fd1dfb926be52d_6_llvm_7315772993864627227,
        &anon_47fcc33835ba2501a8fd1dfb926be52d_25_llvm_7315772993864627227);
    v5 = *(_QWORD *)(a2 + 16);
    v6 = *(_QWORD *)(a2 + 16);
    v7 = v6 < v11;
    v8 = v6 - v11;
    if ( v7 )
      core::slice::index::slice_end_index_len_fail(
        v11,
        v5,
        &anon_0e664cac2df82d3dbe45a871137baf80_11_llvm_16267360750278268012);
    *(_QWORD *)(a2 + 16) = 0LL;
    if ( v4 )
    {
      if ( v5 != v4 )
      {
        memmove(*(void **)(a2 + 8), (const void *)(*(_QWORD *)(a2 + 8) + v4), v8);
LABEL_9:
        *(_QWORD *)(a2 + 16) = v8;
      }
    }
    else if ( v5 )
    {
      goto LABEL_9;
    }
    *(_QWORD *)(a1 + 16) = v4;
    *(_QWORD *)(a1 + 24) = 0LL;
    *(_OWORD *)(a1 + 32) = v14;
    v3 = 0LL;
    goto LABEL_11;
  }
  *(_QWORD *)(a1 + 8) = v10[1];
  v3 = 1LL;
LABEL_11:
  *(_QWORD *)a1 = v3;
  return a1;
}
