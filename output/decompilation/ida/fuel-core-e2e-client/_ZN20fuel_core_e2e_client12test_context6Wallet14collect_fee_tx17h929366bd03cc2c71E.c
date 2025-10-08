void __fastcall fuel_core_e2e_client::test_context::Wallet::collect_fee_tx(
        __int64 a1,
        __int64 a2,
        _OWORD *a3,
        _OWORD *a4)
{
  __int128 v4; // xmm1
  __int128 v5; // xmm1

  *(_QWORD *)(a1 + 1456) = a2;
  v4 = a3[1];
  *(_OWORD *)a1 = *a3;
  *(_OWORD *)(a1 + 16) = v4;
  v5 = a4[1];
  *(_OWORD *)(a1 + 32) = *a4;
  *(_OWORD *)(a1 + 48) = v5;
  *(_BYTE *)(a1 + 1465) = 0;
}