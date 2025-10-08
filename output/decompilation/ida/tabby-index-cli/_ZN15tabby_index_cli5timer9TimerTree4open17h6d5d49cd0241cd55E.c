__int64 __fastcall tabby_index_cli::timer::TimerTree::open(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  int v7; // edx

  result = time::instant::Instant::now(a1);
  *(_QWORD *)(a1 + 16) = a3;
  *(_QWORD *)(a1 + 24) = a4;
  *(_QWORD *)(a1 + 32) = a2;
  *(_QWORD *)a1 = result;
  *(_DWORD *)(a1 + 8) = v7;
  *(_DWORD *)(a1 + 40) = 0;
  return result;
}