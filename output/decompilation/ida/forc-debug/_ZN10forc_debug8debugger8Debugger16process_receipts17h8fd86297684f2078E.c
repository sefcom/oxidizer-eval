__int64 __fastcall forc_debug::debugger::Debugger::process_receipts(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD v5[4]; // [rsp+8h] [rbp-20h] BYREF

  v5[0] = a3;
  v5[1] = a3 + 168 * a4;
  v5[2] = a2 + 160;
  core::iter::traits::iterator::Iterator::collect(a1, v5);
  return a1;
}