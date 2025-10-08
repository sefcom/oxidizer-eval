__int64 __fastcall uu_chcon::fts::EntryRef::access_path(__int64 a1)
{
  if ( !*(_QWORD *)(a1 + 40) )
    return 0LL;
  strlen(*(const char **)(a1 + 40));
  return *(_QWORD *)(a1 + 40);
}