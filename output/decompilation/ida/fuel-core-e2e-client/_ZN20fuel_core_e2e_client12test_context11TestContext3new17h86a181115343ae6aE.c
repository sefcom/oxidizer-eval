void *__fastcall fuel_core_e2e_client::test_context::TestContext::new(_BYTE *a1, const void *a2)
{
  void *result; // rax

  result = memcpy(a1, a2, 0xC0uLL);
  a1[792] = 0;
  return result;
}