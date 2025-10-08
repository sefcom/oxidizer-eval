void __fastcall forc_debug::cli::commands::cmd_help(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a3;
  *(_QWORD *)(a1 + 16) = a4;
  *(_BYTE *)(a1 + 24) = 0;
}