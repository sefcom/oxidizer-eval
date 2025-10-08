void __fastcall fuel_core_client::CliArgs::exec(__int64 a1, __int64 a2)
{
  *(_QWORD *)a1 = a2;
  *(_BYTE *)(a1 + 144) = 0;
}