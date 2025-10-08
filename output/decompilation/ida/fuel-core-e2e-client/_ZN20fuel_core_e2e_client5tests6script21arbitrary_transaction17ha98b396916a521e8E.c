void __fastcall fuel_core_e2e_client::tests::script::arbitrary_transaction(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a1 + 1704) = a2;
  *(_BYTE *)(a1 + 1713) = 0;
}