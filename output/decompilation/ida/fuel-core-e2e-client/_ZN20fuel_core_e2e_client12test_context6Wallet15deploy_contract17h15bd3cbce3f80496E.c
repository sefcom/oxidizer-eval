void *__fastcall fuel_core_e2e_client::test_context::Wallet::deploy_contract(
        __int64 a1,
        __int64 a2,
        const void *a3,
        _OWORD *a4)
{
  void *result; // rax
  __int128 v6; // xmm1

  *(_QWORD *)(a1 + 144) = a2;
  result = memcpy((void *)a1, a3, 0x90uLL);
  v6 = a4[1];
  *(_OWORD *)(a1 + 152) = *a4;
  *(_OWORD *)(a1 + 168) = v6;
  *(_BYTE *)(a1 + 400) = 0;
  return result;
}