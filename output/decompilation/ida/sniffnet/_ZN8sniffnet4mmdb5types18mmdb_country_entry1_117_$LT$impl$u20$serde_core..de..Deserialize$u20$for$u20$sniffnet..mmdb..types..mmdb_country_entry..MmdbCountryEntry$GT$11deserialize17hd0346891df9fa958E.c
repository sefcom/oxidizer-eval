__int64 __fastcall sniffnet::mmdb::types::mmdb_country_entry::_::<impl serde_core::de::Deserialize for sniffnet::mmdb::types::mmdb_country_entry::MmdbCountryEntry>::deserialize(
        __int64 a1)
{
  __int64 result; // rax
  __int128 v2; // xmm0
  __m256i v3; // [rsp+0h] [rbp-28h] BYREF

  result = sniffnet::mmdb::types::mmdb_country_entry::_::<impl serde_core::de::Deserialize for sniffnet::mmdb::types::mmdb_country_entry::MmdbCountryEntryInner>::deserialize(&v3);
  if ( v3.m256i_i32[0] == 7 )
  {
    result = v3.m256i_i64[3];
    *(_QWORD *)(a1 + 24) = v3.m256i_i64[3];
    *(_OWORD *)(a1 + 8) = *(_OWORD *)&v3.m256i_u64[1];
    *(_QWORD *)a1 = 7LL;
  }
  else
  {
    v2 = *(_OWORD *)v3.m256i_i8;
    *(_OWORD *)(a1 + 16) = *(_OWORD *)&v3.m256i_u64[2];
    *(_OWORD *)a1 = v2;
  }
  return result;
}