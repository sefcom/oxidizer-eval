void __fastcall forc_debug::debugger::Debugger::continue_execution(__int64 a1, __int64 a2)
{
  *(_QWORD *)a1 = a2;
  *(_BYTE *)(a1 + 160) = 0;
}