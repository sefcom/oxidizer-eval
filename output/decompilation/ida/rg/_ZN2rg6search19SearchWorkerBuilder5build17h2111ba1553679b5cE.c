void *__fastcall rg::search::SearchWorkerBuilder::build(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const void *a4,
        const void *a5)
{
  char v7; // bp
  char v8; // r13
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm1
  __int128 v12; // xmm2
  __int128 v13; // xmm3
  _OWORD v16[3]; // [rsp+8h] [rbp-F0h] BYREF
  __int64 v17; // [rsp+38h] [rbp-C0h]
  _BYTE src[184]; // [rsp+40h] [rbp-B8h] BYREF

  <rg::search::Config as core::clone::Clone>::clone(src);
  v7 = *(_BYTE *)(a2 + 200);
  <grep_cli::decompress::DecompressionMatcher as core::clone::Clone>::clone(v16, a2 + 136);
  v8 = *(_BYTE *)(a2 + 192);
  *(_QWORD *)(a1 + 688) = v17;
  v9 = v16[0];
  v10 = v16[1];
  *(_OWORD *)(a1 + 672) = v16[2];
  *(_OWORD *)(a1 + 656) = v10;
  *(_OWORD *)(a1 + 640) = v9;
  memcpy((void *)(a1 + 504), src, 0x88uLL);
  v11 = *(_OWORD *)(a3 + 16);
  v12 = *(_OWORD *)(a3 + 32);
  v13 = *(_OWORD *)(a3 + 48);
  *(_OWORD *)(a1 + 704) = *(_OWORD *)a3;
  *(_OWORD *)(a1 + 720) = v11;
  *(_OWORD *)(a1 + 736) = v12;
  *(_OWORD *)(a1 + 752) = v13;
  *(_OWORD *)(a1 + 768) = *(_OWORD *)(a3 + 64);
  *(_OWORD *)(a1 + 784) = *(_OWORD *)(a3 + 80);
  *(_QWORD *)(a1 + 800) = *(_QWORD *)(a3 + 96);
  memcpy((void *)(a1 + 264), a5, 0xF0uLL);
  *(_BYTE *)(a1 + 808) = v7;
  *(_BYTE *)(a1 + 696) = v8;
  return memcpy((void *)a1, a4, 0x108uLL);
}