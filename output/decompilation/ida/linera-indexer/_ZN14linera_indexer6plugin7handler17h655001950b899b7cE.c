void *__fastcall linera_indexer::plugin::handler(__int64 a1, __int64 a2, const void *a3)
{
  void *result; // rax

  *(_QWORD *)(a1 + 344) = a2;
  result = memcpy((void *)a1, a3, 0x158uLL);
  *(_BYTE *)(a1 + 3216) = 0;
  return result;
}