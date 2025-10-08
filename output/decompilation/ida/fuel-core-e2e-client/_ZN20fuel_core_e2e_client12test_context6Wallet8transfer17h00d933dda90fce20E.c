__int64 __fastcall fuel_core_e2e_client::test_context::Wallet::transfer(
        __int64 a1,
        __int64 a2,
        _OWORD *a3,
        __int64 a4,
        __int64 a5)
{
  __int128 v5; // xmm1
  __int128 v6; // xmm1
  __int64 result; // rax

  *(_QWORD *)(a1 + 48) = a2;
  v5 = a3[1];
  *(_OWORD *)a1 = *a3;
  *(_OWORD *)(a1 + 16) = v5;
  *(_QWORD *)(a1 + 32) = a4;
  v6 = *(_OWORD *)(a5 + 16);
  *(_OWORD *)(a1 + 57) = *(_OWORD *)a5;
  *(_OWORD *)(a1 + 73) = v6;
  result = *(unsigned __int8 *)(a5 + 32);
  *(_BYTE *)(a1 + 89) = result;
  *(_BYTE *)(a1 + 56) = 0;
  return result;
}