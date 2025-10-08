void __fastcall change_log::adapters::octocrab::OctocrabAdapter::get_pr_for_commit(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int128 a7)
{
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a3;
  *(_QWORD *)(a1 + 16) = a4;
  *(_QWORD *)(a1 + 24) = a5;
  *(_QWORD *)(a1 + 32) = a6;
  *(_OWORD *)(a1 + 40) = a7;
  *(_BYTE *)(a1 + 2360) = 0;
}