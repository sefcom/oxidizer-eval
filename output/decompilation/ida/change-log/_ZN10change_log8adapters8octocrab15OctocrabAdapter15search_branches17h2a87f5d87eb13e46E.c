const char *__fastcall change_log::adapters::octocrab::OctocrabAdapter::search_branches(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  const char *result; // rax

  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a3;
  *(_QWORD *)(a1 + 16) = a4;
  *(_QWORD *)(a1 + 24) = a5;
  *(_QWORD *)(a1 + 32) = a6;
  result = aLts;
  *(_QWORD *)(a1 + 40) = aLts;
  *(_QWORD *)(a1 + 48) = 4LL;
  *(_BYTE *)(a1 + 2008) = 0;
  return result;
}