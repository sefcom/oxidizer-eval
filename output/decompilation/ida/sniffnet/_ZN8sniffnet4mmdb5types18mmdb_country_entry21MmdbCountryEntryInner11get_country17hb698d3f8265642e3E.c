char __fastcall sniffnet::mmdb::types::mmdb_country_entry::MmdbCountryEntryInner::get_country(_QWORD *a1)
{
  __int64 v1; // rax

  if ( *a1 == 2LL )
  {
    v1 = a1[1];
    if ( v1 )
      return sniffnet::countries::types::country::Country::from_str(v1, a1[2]);
  }
  else
  {
    v1 = a1[1];
    if ( ((unsigned __int8)*a1 & (v1 != 0)) == 1 )
      return sniffnet::countries::types::country::Country::from_str(v1, a1[2]);
  }
  return -7;
}