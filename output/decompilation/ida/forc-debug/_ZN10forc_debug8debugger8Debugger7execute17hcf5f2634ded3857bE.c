void __fastcall forc_debug::debugger::Debugger::execute(__int64 a1, __int64 a2, _OWORD *a3)
{
  __int128 v3; // xmm1
  __int128 v4; // xmm2

  *(_QWORD *)(a1 + 48) = a2;
  v3 = a3[1];
  v4 = a3[2];
  *(_OWORD *)a1 = *a3;
  *(_OWORD *)(a1 + 16) = v3;
  *(_OWORD *)(a1 + 32) = v4;
  *(_BYTE *)(a1 + 104) = 0;
}