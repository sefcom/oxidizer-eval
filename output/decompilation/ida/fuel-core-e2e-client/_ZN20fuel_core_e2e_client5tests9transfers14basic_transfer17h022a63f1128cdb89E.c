void __fastcall fuel_core_e2e_client::tests::transfers::basic_transfer(__int64 a1, __int64 a2)
{
  *(_QWORD *)a1 = a2;
  *(_BYTE *)(a1 + 16) = 0;
}