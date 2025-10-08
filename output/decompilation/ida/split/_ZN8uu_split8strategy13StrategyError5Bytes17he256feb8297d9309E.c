__int64 __fastcall uu_split::strategy::StrategyError::Bytes(__int64 a1, __int128 *a2)
{
  __int64 result; // rax
  __int128 v3; // xmm0

  result = a1;
  v3 = *a2;
  *(_OWORD *)(a1 + 24) = a2[1];
  *(_OWORD *)(a1 + 8) = v3;
  *(_QWORD *)a1 = 1LL;
  return result;
}