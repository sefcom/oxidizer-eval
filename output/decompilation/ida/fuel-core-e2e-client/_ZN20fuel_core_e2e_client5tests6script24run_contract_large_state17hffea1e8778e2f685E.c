void __fastcall fuel_core_e2e_client::tests::script::run_contract_large_state(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a1 + 648) = a2;
  *(_BYTE *)(a1 + 659) = 0;
}