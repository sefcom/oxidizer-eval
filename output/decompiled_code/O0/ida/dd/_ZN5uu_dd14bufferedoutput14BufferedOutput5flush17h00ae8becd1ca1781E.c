__int64 __fastcall uu_dd::bufferedoutput::BufferedOutput::flush(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  signed __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // r15
  __int64 v6; // r12
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  char v11; // [rsp+7h] [rbp-91h] BYREF
  _QWORD v12[5]; // [rsp+8h] [rbp-90h] BYREF
  __int64 v13[2]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v14; // [rsp+40h] [rbp-58h]
  __int64 v15; // [rsp+48h] [rbp-50h]
  __int128 v16; // [rsp+50h] [rbp-48h]
  __int128 v17; // [rsp+60h] [rbp-38h]

  v2 = *(_QWORD *)(a2 + 8);
  if ( !v2 || (v3 = *(_QWORD *)(a2 + 16), v3 < 0) )
    core::panicking::panic_nounwind(anon_69b1e845c8810c9cdb3b50477f5d946f_11_llvm_12964651969104725473, 162LL);
  uu_dd::Output::write_blocks(v13, a2 + 24, v2, v3);
  if ( v13[0] )
  {
    *(_QWORD *)(a1 + 8) = v13[1];
    v4 = 1LL;
  }
  else
  {
    v5 = v14;
    v17 = v16;
    if ( v15 )
      core::result::unwrap_failed(
        anon_133ddf28914458581e1f74587f6c4456_15_llvm_5851302437860897088,
        43LL,
        &v11,
        &anon_133ddf28914458581e1f74587f6c4456_14_llvm_5851302437860897088,
        &anon_133ddf28914458581e1f74587f6c4456_17_llvm_5851302437860897088);
    v6 = *(_QWORD *)(a2 + 16);
    v7 = core::slice::index::range(0LL, v14, v6, &anon_728c1a3e36a105da66b25bdb8b167723_13_llvm_12607918655597418711);
    *(_QWORD *)(a2 + 16) = v7;
    v9 = *(_QWORD *)(a2 + 8);
    if ( !v9 || v8 - v7 < 0 )
      core::panicking::panic_nounwind(anon_0a74bca3e52cb255fc36ef7cbadabfce_35_llvm_6001509983784529562, 162LL);
    v12[3] = v8;
    v12[4] = v6 - v8;
    v12[0] = v9 + v7;
    v12[1] = v8 + v9;
    v12[2] = a2;
    <alloc::vec::drain::Drain<T,A> as core::ops::drop::Drop>::drop(v12);
    *(_QWORD *)(a1 + 24) = 0LL;
    *(_QWORD *)(a1 + 16) = v5;
    *(_OWORD *)(a1 + 32) = v17;
    v4 = 0LL;
  }
  *(_QWORD *)a1 = v4;
  return a1;
}
