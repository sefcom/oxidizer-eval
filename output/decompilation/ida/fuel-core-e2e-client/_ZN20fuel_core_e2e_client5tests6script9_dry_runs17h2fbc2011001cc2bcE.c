void __fastcall fuel_core_e2e_client::tests::script::_dry_runs(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  *(_QWORD *)(a1 + 72) = a2;
  *(_QWORD *)(a1 + 16) = a3;
  *(_QWORD *)(a1 + 24) = a4;
  *(_QWORD *)(a1 + 32) = 100LL;
  *(_BYTE *)(a1 + 85) = a5;
  *(_BYTE *)(a1 + 84) = 0;
}