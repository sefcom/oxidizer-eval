__int64 __fastcall forc_debug::debugger::Debugger::start_transaction(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  *(_QWORD *)(a1 + 48) = a2;
  *(_OWORD *)a1 = *(_OWORD *)a3;
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a3 + 16);
  *(_OWORD *)(a1 + 24) = *(_OWORD *)a4;
  result = *(_QWORD *)(a4 + 16);
  *(_QWORD *)(a1 + 40) = result;
  *(_BYTE *)(a1 + 720) = 0;
  return result;
}