__int64 __fastcall linera_summary::github::Github::latest_runs(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int128 a7,
        __int64 a8)
{
  __int64 result; // rax

  result = a8;
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a3;
  *(_QWORD *)(a1 + 16) = a4;
  *(_QWORD *)(a1 + 24) = a5;
  *(_QWORD *)(a1 + 32) = a6;
  *(_OWORD *)(a1 + 40) = a7;
  *(_QWORD *)(a1 + 56) = a8;
  *(_BYTE *)(a1 + 152) = 0;
  return result;
}