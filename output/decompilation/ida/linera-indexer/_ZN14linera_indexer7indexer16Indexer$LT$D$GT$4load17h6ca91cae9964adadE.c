void __fastcall linera_indexer::indexer::Indexer<D>::load(__int64 a1, __int128 *a2)
{
  __int128 v2; // xmm0
  __int128 v3; // xmm1
  __int128 v4; // xmm2

  *(_OWORD *)(a1 + 112) = a2[7];
  *(_OWORD *)(a1 + 96) = a2[6];
  *(_OWORD *)(a1 + 80) = a2[5];
  *(_OWORD *)(a1 + 64) = a2[4];
  v2 = *a2;
  v3 = a2[1];
  v4 = a2[2];
  *(_OWORD *)(a1 + 48) = a2[3];
  *(_OWORD *)(a1 + 32) = v4;
  *(_OWORD *)(a1 + 16) = v3;
  *(_OWORD *)a1 = v2;
  *(_BYTE *)(a1 + 280) = 0;
}