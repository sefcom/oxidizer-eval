void *__fastcall linera_summary::performance_summary::PerformanceSummary::init(__int64 a1, const void *a2, _OWORD *a3)
{
  void *result; // rax
  __int128 v5; // xmm1
  __int128 v6; // xmm2

  result = memcpy((void *)a1, a2, 0x118uLL);
  v5 = a3[1];
  v6 = a3[2];
  *(_OWORD *)(a1 + 280) = *a3;
  *(_OWORD *)(a1 + 296) = v5;
  *(_OWORD *)(a1 + 312) = v6;
  *(_BYTE *)(a1 + 736) = 0;
  return result;
}