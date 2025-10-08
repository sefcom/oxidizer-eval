void *__fastcall linera_proxy::SimpleProxy<S>::run(__int64 a1, const void *a2, __int64 a3)
{
  void *result; // rax

  result = memcpy((void *)a1, a2, 0x110uLL);
  *(_QWORD *)(a1 + 272) = a3;
  *(_BYTE *)(a1 + 592) = 0;
  return result;
}