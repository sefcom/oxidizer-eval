void __fastcall fuel_core_e2e_client::tests::script::receipts(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a1 + 8) = a2;
  *(_BYTE *)(a1 + 18) = 0;
}