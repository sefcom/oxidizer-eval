__int64 __fastcall fuel_core_e2e_client::test_context::Wallet::owns_coin(__int64 a1, __int64 a2, __int64 a3)
{
  __int128 v3; // xmm1
  __int64 result; // rax

  *(_QWORD *)a1 = a2;
  v3 = *(_OWORD *)(a3 + 16);
  *(_OWORD *)(a1 + 160) = *(_OWORD *)a3;
  *(_OWORD *)(a1 + 176) = v3;
  result = *(unsigned __int16 *)(a3 + 32);
  *(_WORD *)(a1 + 192) = result;
  *(_BYTE *)(a1 + 228) = 0;
  return result;
}