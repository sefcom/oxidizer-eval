void __fastcall fuel_core_client::client::FuelClient::submit_opt(__int64 a1, __int64 a2, __int64 a3)
{
  *(_QWORD *)(a1 + 120) = a2;
  *(_QWORD *)(a1 + 128) = a3;
  *(_WORD *)(a1 + 137) = 512;
}