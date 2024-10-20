__int64 __fastcall uu_wc::files0_iter_stdin(__int64 a1)
{
  __int64 v1; // r14
  char v2; // dl
  char v3; // bp
  __int128 v4; // xmm0
  __int64 v6; // [rsp+8h] [rbp-E0h] BYREF
  __int128 v7; // [rsp+10h] [rbp-D8h]
  __int64 v8; // [rsp+20h] [rbp-C8h]
  __int64 v9; // [rsp+30h] [rbp-B8h]
  char v10; // [rsp+38h] [rbp-B0h]
  __int64 v11; // [rsp+50h] [rbp-98h]
  _BYTE v12[40]; // [rsp+58h] [rbp-90h]
  __int64 v13; // [rsp+88h] [rbp-60h]
  __int128 v14; // [rsp+98h] [rbp-50h] BYREF
  __int128 v15; // [rsp+A8h] [rbp-40h]
  __int64 v16; // [rsp+B8h] [rbp-30h]
  __int64 v17; // [rsp+C0h] [rbp-28h]
  __int64 v18; // [rsp+C8h] [rbp-20h]

  v6 = std::io::stdio::stdin();
  v1 = std::io::stdio::Stdin::lock(&v6);
  v3 = v2;
  v9 = v1;
  v10 = v2 & 1;
  std::sys::os_str::bytes::Slice::to_owned(
    &v14,
    anon_f24642c09166824134b4a04b26eaa90d_11_llvm_11289963011487936703,
    1LL);
  v8 = v15;
  v7 = v14;
  std::io::buffered::bufreader::BufReader<R>::with_capacity(&v14, 0x2000LL, v1, v3 & 1);
  v13 = v18;
  *(_QWORD *)&v12[32] = v16;
  *(_OWORD *)&v12[16] = v15;
  *(_OWORD *)v12 = v14;
  v11 = v8;
  v4 = v7;
  *(_QWORD *)(a1 + 64) = v17;
  *(_QWORD *)(a1 + 72) = v13;
  *(_OWORD *)(a1 + 48) = *(_OWORD *)&v12[24];
  *(_OWORD *)(a1 + 32) = *(_OWORD *)&v12[8];
  *(_QWORD *)(a1 + 16) = v11;
  *(_QWORD *)(a1 + 24) = *(_QWORD *)v12;
  *(_OWORD *)a1 = v4;
  *(_BYTE *)(a1 + 80) = 0;
  return a1;
}
