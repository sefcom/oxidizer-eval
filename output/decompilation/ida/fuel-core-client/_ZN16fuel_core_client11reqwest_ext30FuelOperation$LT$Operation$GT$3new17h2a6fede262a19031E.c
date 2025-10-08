__int64 __fastcall fuel_core_client::reqwest_ext::FuelOperation<Operation>::new(
        __int64 a1,
        __int128 *a2,
        int a3,
        int a4)
{
  __int64 result; // rax
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm2

  result = *((_QWORD *)a2 + 12);
  *(_QWORD *)(a1 + 96) = result;
  *(_OWORD *)(a1 + 80) = a2[5];
  *(_OWORD *)(a1 + 64) = a2[4];
  v5 = *a2;
  v6 = a2[1];
  v7 = a2[2];
  *(_OWORD *)(a1 + 48) = a2[3];
  *(_OWORD *)(a1 + 32) = v7;
  *(_OWORD *)(a1 + 16) = v6;
  *(_OWORD *)a1 = v5;
  *(_DWORD *)(a1 + 104) = a3;
  *(_DWORD *)(a1 + 108) = a4;
  return result;
}