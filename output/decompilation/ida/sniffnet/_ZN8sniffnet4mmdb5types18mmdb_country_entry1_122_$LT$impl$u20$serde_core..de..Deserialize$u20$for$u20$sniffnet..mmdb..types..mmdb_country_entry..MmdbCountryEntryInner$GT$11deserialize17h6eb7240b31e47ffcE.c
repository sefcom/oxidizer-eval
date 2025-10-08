__int64 __fastcall sniffnet::mmdb::types::mmdb_country_entry::_::<impl serde_core::de::Deserialize for sniffnet::mmdb::types::mmdb_country_entry::MmdbCountryEntryInner>::deserialize(
        __int64 a1)
{
  __int64 result; // rax
  __int128 v2; // xmm0
  __int128 v3; // xmm0
  __m256i v4; // [rsp+0h] [rbp-78h] BYREF
  _BYTE v5[40]; // [rsp+28h] [rbp-50h] BYREF
  __m256i v6; // [rsp+50h] [rbp-28h] BYREF

  serde_core::de::Deserializer::__deserialize_content_v1(v5);
  result = *(unsigned int *)v5;
  v4 = *(__m256i *)&v5[8];
  if ( *(_DWORD *)v5 == 1 )
  {
    v2 = *(_OWORD *)v4.m256i_i8;
    *(_OWORD *)(a1 + 16) = *(_OWORD *)&v4.m256i_u64[2];
    *(_OWORD *)a1 = v2;
    return result;
  }
  v6 = v4;
  <serde::private::de::content::ContentRefDeserializer<E> as serde_core::de::Deserializer>::deserialize_struct(v5, &v6);
  if ( *(_DWORD *)v5 == 7 )
  {
    v4.m256i_i64[3] = *(_QWORD *)&v5[24];
    *(_OWORD *)&v4.m256i_u64[1] = *(_OWORD *)&v5[8];
    v4.m256i_i64[0] = 7LL;
  }
  else
  {
    v4 = *(__m256i *)v5;
    if ( *(_QWORD *)v5 != 7LL )
    {
      core::ptr::drop_in_place<core::result::Result<sniffnet::mmdb::types::mmdb_asn_entry::MmdbAsnCode,maxminddb::MaxMindDbError>>(&v4);
      <serde::private::de::content::ContentRefDeserializer<E> as serde_core::de::Deserializer>::deserialize_struct(
        v5,
        &v6);
      if ( *(_DWORD *)v5 == 7 )
      {
        v4.m256i_i64[1] = 2LL;
        *(_OWORD *)&v4.m256i_u64[2] = *(_OWORD *)&v5[8];
        v4.m256i_i64[0] = 7LL;
      }
      else
      {
        v4 = *(__m256i *)v5;
        if ( *(_QWORD *)v5 != 7LL )
        {
          core::ptr::drop_in_place<core::result::Result<sniffnet::mmdb::types::mmdb_asn_entry::MmdbAsnCode,maxminddb::MaxMindDbError>>(&v4);
          <maxminddb::MaxMindDbError as serde_core::de::Error>::custom(v5, aDataDidNotMatc_0, 69LL);
          v3 = *(_OWORD *)v5;
          *(_OWORD *)(a1 + 16) = *(_OWORD *)&v5[16];
          *(_OWORD *)a1 = v3;
          return core::ptr::drop_in_place<serde_core::private::content::Content>(&v6);
        }
      }
    }
  }
  *(_QWORD *)(a1 + 24) = v4.m256i_i64[3];
  *(_OWORD *)(a1 + 8) = *(_OWORD *)&v4.m256i_u64[1];
  *(_QWORD *)a1 = 7LL;
  core::ptr::drop_in_place<core::result::Result<sniffnet::mmdb::types::mmdb_asn_entry::MmdbAsnCode,maxminddb::MaxMindDbError>>(&v4);
  return core::ptr::drop_in_place<serde_core::private::content::Content>(&v6);
}