void __fastcall forc_debug::debugger::Debugger::reset(__int64 a1, __int64 a2)
{
  *(_QWORD *)a1 = a2;
  *(_BYTE *)(a1 + 152) = 0;
}