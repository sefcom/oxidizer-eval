__int64 __fastcall sniffnet::mmdb::asn::get_asn(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  _DWORD v4[12]; // [rsp+8h] [rbp-30h] BYREF

  sniffnet::mmdb::types::mmdb_reader::MmdbReader::lookup(v4, a3, a2);
  if ( v4[0] >= 2u )
  {
    result = core::ptr::drop_in_place<core::result::Result<core::option::Option<sniffnet::mmdb::types::mmdb_asn_entry::MmdbAsnEntry>,maxminddb::MaxMindDbError>>(v4);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 1LL;
    *(_OWORD *)(a1 + 16) = 0LL;
    *(_QWORD *)(a1 + 32) = 1LL;
    *(_QWORD *)(a1 + 40) = 0LL;
  }
  else
  {
    sniffnet::mmdb::types::mmdb_asn_entry::MmdbAsnEntry::get_asn(a1, v4);
    return core::ptr::drop_in_place<core::result::Result<core::option::Option<sniffnet::mmdb::types::mmdb_asn_entry::MmdbAsnEntry>,maxminddb::MaxMindDbError>>(v4);
  }
  return result;
}