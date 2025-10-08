void __fastcall linera_summary::performance_summary::PerformanceSummary::upsert_pr_comment(__int64 a1, __int64 a2)
{
  *(_QWORD *)a1 = a2;
  *(_BYTE *)(a1 + 2440) = 0;
}