__int64 __fastcall uu_tr::operation::SymbolTranslator::chain(__int64 a1, const void *a2, const void *a3)
{
  memcpy((void *)a1, a2, 0x30uLL);
  memcpy((void *)(a1 + 48), a3, 0x38uLL);
  return a1;
}
