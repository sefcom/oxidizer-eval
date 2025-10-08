void __fastcall fuel_core_client::client::FuelClient::dry_run_opt(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  *(_QWORD *)(a1 + 24) = a2;
  *(_QWORD *)(a1 + 32) = a3;
  *(_QWORD *)(a1 + 40) = a4;
  *(_WORD *)(a1 + 192) = 2;
  *(_QWORD *)a1 = 0LL;
  *(_DWORD *)(a1 + 16) = 0;
}