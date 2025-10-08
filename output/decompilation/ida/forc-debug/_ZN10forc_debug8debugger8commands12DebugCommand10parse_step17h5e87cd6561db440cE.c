char __fastcall forc_debug::debugger::commands::DebugCommand::parse_step(__int64 a1, __int64 a2, __int64 a3)
{
  char result; // al
  __int128 v4; // [rsp+0h] [rbp-18h] BYREF

  if ( a3 )
  {
    v4 = *(_OWORD *)(a2 + 8);
    result = <T as core::slice::cmp::SliceContains>::slice_contains(&v4, &off_1F8CD78, 3LL) ^ 1;
  }
  else
  {
    result = 1;
  }
  *(_QWORD *)a1 = 0x8000000000000002LL;
  *(_BYTE *)(a1 + 8) = result;
  return result;
}