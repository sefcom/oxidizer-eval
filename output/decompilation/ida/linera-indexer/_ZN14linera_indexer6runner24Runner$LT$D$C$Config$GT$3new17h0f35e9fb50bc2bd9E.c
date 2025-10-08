void *__fastcall linera_indexer::runner::Runner<D,Config>::new(__int64 a1, const void *a2, _OWORD *a3)
{
  void *result; // rax
  __int128 v5; // xmm1
  __int128 v6; // xmm2
  __int128 v7; // xmm3

  result = memcpy((void *)a1, a2, 0xA8uLL);
  v5 = a3[1];
  v6 = a3[2];
  v7 = a3[3];
  *(_OWORD *)(a1 + 168) = *a3;
  *(_OWORD *)(a1 + 184) = v5;
  *(_OWORD *)(a1 + 200) = v6;
  *(_OWORD *)(a1 + 216) = v7;
  *(_OWORD *)(a1 + 232) = a3[4];
  *(_OWORD *)(a1 + 248) = a3[5];
  *(_OWORD *)(a1 + 264) = a3[6];
  *(_OWORD *)(a1 + 280) = a3[7];
  *(_BYTE *)(a1 + 1896) = 0;
  return result;
}