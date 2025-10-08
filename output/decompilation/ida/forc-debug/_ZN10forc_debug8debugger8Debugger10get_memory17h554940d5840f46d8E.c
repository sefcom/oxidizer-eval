void __fastcall forc_debug::debugger::Debugger::get_memory(__int64 a1, __int64 a2, int a3, int a4)
{
  *(_QWORD *)a1 = a2;
  *(_DWORD *)(a1 + 168) = a3;
  *(_DWORD *)(a1 + 172) = a4;
  *(_BYTE *)(a1 + 176) = 0;
}