void __fastcall forc_debug::debugger::Debugger::set_breakpoint(__int64 a1, __int64 a2, _OWORD *a3, __int64 a4)
{
  __int128 v4; // xmm1

  *(_QWORD *)a1 = a2;
  v4 = a3[1];
  *(_OWORD *)(a1 + 8) = *a3;
  *(_OWORD *)(a1 + 24) = v4;
  *(_QWORD *)(a1 + 40) = a4;
  *(_BYTE *)(a1 + 272) = 0;
}