__int64 __fastcall sniffnet::mmdb::country::get_country(__int64 a1, __int64 a2)
{
  unsigned int country; // ebx
  int v4; // [rsp+0h] [rbp-28h] BYREF
  _DWORD v5[8]; // [rsp+8h] [rbp-20h] BYREF

  sniffnet::mmdb::types::mmdb_reader::MmdbReader::lookup(&v4, a2, a1);
  LOBYTE(country) = -7;
  if ( v4 == 7 && v5[0] != 3 )
    country = sniffnet::mmdb::types::mmdb_country_entry::MmdbCountryEntry::get_country(v5);
  core::ptr::drop_in_place<core::result::Result<sniffnet::mmdb::types::mmdb_asn_entry::MmdbAsnCode,maxminddb::MaxMindDbError>>(&v4);
  return country;
}