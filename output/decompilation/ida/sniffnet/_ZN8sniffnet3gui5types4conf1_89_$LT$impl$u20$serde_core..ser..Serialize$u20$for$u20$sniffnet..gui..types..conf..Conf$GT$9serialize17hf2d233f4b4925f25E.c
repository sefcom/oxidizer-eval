__int64 __fastcall sniffnet::gui::types::conf::_::<impl serde_core::ser::Serialize for sniffnet::gui::types::conf::Conf>::serialize(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // rax
  __int128 v5; // [rsp+0h] [rbp-208h]
  _BYTE v6[232]; // [rsp+18h] [rbp-1F0h] BYREF
  _QWORD v7[33]; // [rsp+100h] [rbp-108h] BYREF

  <toml::ser::Serializer as serde_core::ser::Serializer>::serialize_struct(v6, a3, aConf_0, 4LL, 12LL);
  v5 = *(_OWORD *)&v6[8];
  if ( *(_QWORD *)v6 == 0x8000000000000001LL )
  {
    result = *(_QWORD *)&v6[24];
    *(_QWORD *)(a1 + 16) = *(_QWORD *)&v6[24];
    *(_OWORD *)a1 = v5;
    return result;
  }
  memcpy(&v7[4], &v6[32], 0xC8uLL);
  *(_OWORD *)&v7[1] = *(_OWORD *)&v6[8];
  v7[3] = *(_QWORD *)&v6[24];
  v7[0] = *(_QWORD *)v6;
  <toml::ser::map::SerializeDocumentTable as serde_core::ser::SerializeStruct>::serialize_field(v6, v7, a2);
  if ( *(_QWORD *)v6 == 0x8000000000000005LL
    && (<toml::ser::map::SerializeDocumentTable as serde_core::ser::SerializeStruct>::serialize_field(
          v6,
          v7,
          *(_QWORD *)(a2 + 344),
          *(_QWORD *)(a2 + 352)),
        *(_QWORD *)v6 == 0x8000000000000005LL)
    && (<toml::ser::map::SerializeDocumentTable as serde_core::ser::SerializeStruct>::serialize_field(v6, v7, a2 + 472),
        *(_QWORD *)v6 == 0x8000000000000005LL)
    && (<toml::ser::map::SerializeDocumentTable as serde_core::ser::SerializeStruct>::serialize_field(
          v6,
          v7,
          *(unsigned int *)(a2 + 496)),
        *(_QWORD *)v6 == 0x8000000000000005LL)
    && (<toml::ser::map::SerializeDocumentTable as serde_core::ser::SerializeStruct>::serialize_field(v6, v7, a2 + 360),
        *(_QWORD *)v6 == 0x8000000000000005LL)
    && (<toml::ser::map::SerializeDocumentTable as serde_core::ser::SerializeStruct>::serialize_field(
          v6,
          v7,
          aReportSortType,
          16LL,
          *(unsigned __int8 *)(a2 + 497)),
        *(_QWORD *)v6 == 0x8000000000000005LL) )
  {
    <toml::ser::map::SerializeDocumentTable as serde_core::ser::SerializeStruct>::serialize_field(
      v6,
      v7,
      aHostSortType,
      14LL,
      *(unsigned __int8 *)(a2 + 498));
    v4 = *(_QWORD *)v6;
    if ( *(_QWORD *)v6 == 0x8000000000000005LL )
    {
      <toml::ser::map::SerializeDocumentTable as serde_core::ser::SerializeStruct>::serialize_field(
        v6,
        v7,
        aServiceSortTyp,
        17LL,
        *(unsigned __int8 *)(a2 + 499));
      v4 = *(_QWORD *)v6;
      if ( *(_QWORD *)v6 == 0x8000000000000005LL )
      {
        <toml::ser::map::SerializeDocumentTable as serde_core::ser::SerializeStruct>::serialize_field(
          v6,
          v7,
          *(unsigned int *)(a2 + 500));
        v4 = *(_QWORD *)v6;
        if ( *(_QWORD *)v6 == 0x8000000000000005LL )
        {
          <toml::ser::map::SerializeDocumentTable as serde_core::ser::SerializeStruct>::serialize_field(
            v6,
            v7,
            *(unsigned __int8 *)(a2 + 501));
          v4 = *(_QWORD *)v6;
          if ( *(_QWORD *)v6 == 0x8000000000000005LL )
          {
            <toml::ser::map::SerializeDocumentTable as serde_core::ser::SerializeStruct>::serialize_field(
              v6,
              v7,
              a2 + 392);
            v4 = *(_QWORD *)v6;
            if ( *(_QWORD *)v6 == 0x8000000000000005LL )
            {
              <toml::ser::map::SerializeDocumentTable as serde_core::ser::SerializeStruct>::serialize_field(
                v6,
                v7,
                *(_QWORD *)(a2 + 456),
                *(_QWORD *)(a2 + 464));
              v4 = *(_QWORD *)v6;
              if ( *(_QWORD *)v6 == 0x8000000000000005LL )
              {
                memcpy(v6, v7, sizeof(v6));
                return <toml::ser::map::SerializeDocumentTable as serde_core::ser::SerializeStruct>::end(a1, v6);
              }
            }
          }
        }
      }
    }
    *(_OWORD *)(a1 + 8) = *(_OWORD *)&v6[8];
    *(_QWORD *)a1 = v4;
  }
  else
  {
    *(_QWORD *)(a1 + 16) = *(_QWORD *)&v6[16];
    *(_OWORD *)a1 = *(_OWORD *)v6;
  }
  return core::ptr::drop_in_place<toml::ser::map::SerializeDocumentTable>(v7);
}