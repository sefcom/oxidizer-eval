void __fastcall forc_debug::debugger::commands::DebugCommand::parse_memory(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // r12d
  __int64 v5; // rax
  int v6; // r13d
  __int128 v7; // xmm0
  __int64 v8; // [rsp+0h] [rbp-48h] BYREF
  __int128 v9; // [rsp+8h] [rbp-40h]

  v3 = 0x20000000;
  if ( !a3 )
  {
    v6 = 0;
    goto LABEL_8;
  }
  forc_debug::debugger::commands::DebugCommand::parse_memory::{{closure}}(&v8);
  v5 = v8;
  if ( v8 != 0x8000000000000000LL )
    goto LABEL_6;
  v6 = v9;
  if ( a3 != 1 )
  {
    forc_debug::debugger::commands::DebugCommand::parse_memory::{{closure}}(&v8, a2 + 24);
    v5 = v8;
    if ( v8 == 0x8000000000000000LL )
    {
      v3 = v9;
      goto LABEL_8;
    }
LABEL_6:
    v7 = v9;
    *(_QWORD *)(a1 + 8) = v5;
    *(_OWORD *)(a1 + 16) = v7;
    *(_QWORD *)a1 = 0x8000000000000007LL;
    return;
  }
LABEL_8:
  *(_QWORD *)a1 = 0x8000000000000005LL;
  *(_DWORD *)(a1 + 8) = v6;
  *(_DWORD *)(a1 + 12) = v3;
}