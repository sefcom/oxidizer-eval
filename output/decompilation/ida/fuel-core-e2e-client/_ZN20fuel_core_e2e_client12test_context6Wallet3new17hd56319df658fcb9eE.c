void *__fastcall fuel_core_e2e_client::test_context::Wallet::new(__int64 a1, __int128 *a2, const void *a3)
{
  __int128 v3; // xmm0
  void *result; // rax

  v3 = *a2;
  *(_OWORD *)(a1 + 152) = a2[1];
  *(_OWORD *)(a1 + 136) = v3;
  result = memcpy((void *)a1, a3, 0x88uLL);
  *(_BYTE *)(a1 + 536) = 0;
  return result;
}