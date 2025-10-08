void __fastcall fuel_core_client::client::FuelClient::query(__int64 a1, __int64 a2, _OWORD *a3)
{
  __int128 v3; // xmm1
  __int128 v4; // xmm2
  __int128 v5; // xmm3

  *(_QWORD *)(a1 + 80) = a2;
  v3 = a3[1];
  v4 = a3[2];
  v5 = a3[3];
  *(_OWORD *)a1 = *a3;
  *(_OWORD *)(a1 + 16) = v3;
  *(_OWORD *)(a1 + 32) = v4;
  *(_OWORD *)(a1 + 48) = v5;
  *(_OWORD *)(a1 + 64) = a3[4];
  *(_BYTE *)(a1 + 112) = 0;
}