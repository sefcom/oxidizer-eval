__int64 __fastcall zoxide::db::stream::Stream::new(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int128 v5; // xmm1
  __int128 v6; // xmm2
  __int128 v7; // xmm3

  zoxide::db::<impl zoxide::db::ouroboros_impl_database::Database>::sort_by_score(a2, *(_QWORD *)(a3 + 72));
  result = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 96) = a2;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = result;
  v5 = *(_OWORD *)(a3 + 16);
  v6 = *(_OWORD *)(a3 + 32);
  v7 = *(_OWORD *)(a3 + 48);
  *(_OWORD *)a1 = *(_OWORD *)a3;
  *(_OWORD *)(a1 + 16) = v5;
  *(_OWORD *)(a1 + 32) = v6;
  *(_OWORD *)(a1 + 48) = v7;
  *(_OWORD *)(a1 + 64) = *(_OWORD *)(a3 + 64);
  *(_OWORD *)(a1 + 80) = *(_OWORD *)(a3 + 80);
  return result;
}