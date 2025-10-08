__int64 __fastcall linera_summary::summary_options::SummaryOptions::workflows(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  _QWORD v4[2]; // [rsp+0h] [rbp-58h] BYREF
  _BYTE v5[48]; // [rsp+10h] [rbp-48h] BYREF
  __int16 v6; // [rsp+40h] [rbp-18h]

  v2 = *(_QWORD *)(a2 + 32);
  <char as core::str::pattern::Pattern>::into_searcher(v5, 44LL, *(_QWORD *)(a2 + 24), v2);
  v4[0] = 0LL;
  v4[1] = v2;
  v6 = 1;
  core::iter::traits::iterator::Iterator::collect(a1, v4);
  return a1;
}