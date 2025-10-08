void *__fastcall fuel_core_client::reqwest_ext::deser_gql(_BYTE *a1, const void *a2)
{
  void *result; // rax

  result = memcpy(a1, a2, 0x88uLL);
  a1[410] = 0;
  return result;
}