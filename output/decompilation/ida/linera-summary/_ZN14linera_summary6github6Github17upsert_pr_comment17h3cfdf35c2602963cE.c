__int64 __fastcall linera_summary::github::Github::upsert_pr_comment(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  *(_QWORD *)(a1 + 24) = a2;
  *(_OWORD *)a1 = *(_OWORD *)a3;
  result = *(_QWORD *)(a3 + 16);
  *(_QWORD *)(a1 + 16) = result;
  *(_BYTE *)(a1 + 120) = 0;
  return result;
}