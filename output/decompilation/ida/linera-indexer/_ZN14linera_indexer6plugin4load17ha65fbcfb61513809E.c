void __fastcall linera_indexer::plugin::load(__int64 a1, __int128 *a2, __int64 a3, __int64 a4)
{
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm2

  *(_OWORD *)(a1 + 112) = a2[7];
  *(_OWORD *)(a1 + 96) = a2[6];
  *(_OWORD *)(a1 + 80) = a2[5];
  *(_OWORD *)(a1 + 64) = a2[4];
  v4 = *a2;
  v5 = a2[1];
  v6 = a2[2];
  *(_OWORD *)(a1 + 48) = a2[3];
  *(_OWORD *)(a1 + 32) = v6;
  *(_OWORD *)(a1 + 16) = v5;
  *(_OWORD *)a1 = v4;
  *(_QWORD *)(a1 + 128) = a3;
  *(_QWORD *)(a1 + 136) = a4;
  *(_BYTE *)(a1 + 296) = 0;
}