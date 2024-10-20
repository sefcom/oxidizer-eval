_QWORD *__fastcall uu_tr::operation::SymbolTranslator::chain(_QWORD *a1, _QWORD *a2, const void *a3)
{
  *a1 = *a2;
  a1[1] = a2[1];
  a1[2] = a2[2];
  memcpy(a1 + 3, a3, 0x38uLL);
  return a1;
}
