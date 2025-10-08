__int64 __fastcall forc_debug::cli::Cli::run(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  *(_QWORD *)(a1 + 24) = a2;
  *(_QWORD *)(a1 + 32) = a3;
  *(_OWORD *)a1 = *(_OWORD *)a4;
  result = *(_QWORD *)(a4 + 16);
  *(_QWORD *)(a1 + 16) = result;
  *(_BYTE *)(a1 + 176) = 0;
  return result;
}