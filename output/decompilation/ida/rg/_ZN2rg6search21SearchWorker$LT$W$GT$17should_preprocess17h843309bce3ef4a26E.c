bool __fastcall rg::search::SearchWorker<W>::should_preprocess(__int64 a1)
{
  bool result; // al

  result = 0;
  if ( !__OFSUB__(0LL, *(_QWORD *)(a1 + 640)) )
    return !*(_QWORD *)(a1 + 560) || ignore::overrides::Override::matched(a1 + 536) != 1;
  return result;
}