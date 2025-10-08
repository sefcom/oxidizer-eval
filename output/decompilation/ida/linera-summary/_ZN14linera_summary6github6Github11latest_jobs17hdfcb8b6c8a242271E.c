__int64 __fastcall linera_summary::github::Github::latest_jobs(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int128 a8)
{
  __int64 result; // rax

  result = a7;
  *(_QWORD *)(a1 + 25568) = a2;
  *(_QWORD *)(a1 + 32) = a3;
  *(_QWORD *)(a1 + 40) = a4;
  *(_QWORD *)(a1 + 48) = a5;
  *(_QWORD *)(a1 + 56) = a6;
  *(_QWORD *)(a1 + 25576) = a7;
  *(_OWORD *)(a1 + 64) = a8;
  *(_BYTE *)(a1 + 25586) = 0;
  return result;
}