void __fastcall fuel_core_e2e_client::tests::contracts::deploy_large_contract(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a1 + 3632) = a2;
  *(_BYTE *)(a1 + 3643) = 0;
}