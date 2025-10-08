void __fastcall forc_debug::debugger::Debugger::set_single_stepping(__int64 a1, __int64 a2, char a3)
{
  *(_QWORD *)(a1 + 152) = a2;
  *(_BYTE *)(a1 + 161) = a3;
  *(_BYTE *)(a1 + 160) = 0;
}