__int64 __fastcall flealib::commandprocessor::_::<impl serde::ser::Serialize for flealib::commandprocessor::FleaConfig>::serialize(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rax
  __int128 v5; // [rsp+0h] [rbp-208h]
  _BYTE v6[232]; // [rsp+18h] [rbp-1F0h] BYREF
  _QWORD v7[33]; // [rsp+100h] [rbp-108h] BYREF

  <toml::ser::Serializer as serde::ser::Serializer>::serialize_struct(v6, a3, aFleaconfig, 10LL, 9LL);
  v5 = *(_OWORD *)&v6[8];
  if ( *(_QWORD *)v6 != 0x8000000000000001LL )
  {
    memcpy(&v7[4], &v6[32], 0xC8uLL);
    *(_OWORD *)&v7[1] = *(_OWORD *)&v6[8];
    v7[3] = *(_QWORD *)&v6[24];
    v7[0] = *(_QWORD *)v6;
    <toml::ser::map::SerializeDocumentTable as serde::ser::SerializeStruct>::serialize_field(
      v6,
      v7,
      &unk_51210,
      8LL,
      a2);
    if ( *(_QWORD *)v6 == 0x8000000000000005LL
      && (<toml::ser::map::SerializeDocumentTable as serde::ser::SerializeStruct>::serialize_field(
            v6,
            v7,
            aFtpPass,
            8LL,
            a2 + 24),
          *(_QWORD *)v6 == 0x8000000000000005LL)
      && (<toml::ser::map::SerializeDocumentTable as serde::ser::SerializeStruct>::serialize_field(
            v6,
            v7,
            aFtpAddress,
            11LL,
            a2 + 48),
          *(_QWORD *)v6 == 0x8000000000000005LL)
      && (<toml::ser::map::SerializeDocumentTable as serde::ser::SerializeStruct>::serialize_field(
            v6,
            v7,
            aFtpFolder,
            10LL,
            a2 + 72),
          *(_QWORD *)v6 == 0x8000000000000005LL)
      && (<toml::ser::map::SerializeDocumentTable as serde::ser::SerializeStruct>::serialize_field(
            v6,
            v7,
            aSmtpUserName,
            14LL,
            a2 + 96),
          *(_QWORD *)v6 == 0x8000000000000005LL)
      && (<toml::ser::map::SerializeDocumentTable as serde::ser::SerializeStruct>::serialize_field(
            v6,
            v7,
            aSmtpPass,
            9LL,
            a2 + 120),
          *(_QWORD *)v6 == 0x8000000000000005LL)
      && (<toml::ser::map::SerializeDocumentTable as serde::ser::SerializeStruct>::serialize_field(
            v6,
            v7,
            aSmtpHost,
            9LL,
            a2 + 144),
          *(_QWORD *)v6 == 0x8000000000000005LL) )
    {
      <toml::ser::map::SerializeDocumentTable as serde::ser::SerializeStruct>::serialize_field(
        v6,
        v7,
        aEmailAddressTo,
        16LL,
        a2 + 168);
      v3 = *(_QWORD *)v6;
      if ( *(_QWORD *)v6 == 0x8000000000000005LL )
      {
        <toml::ser::map::SerializeDocumentTable as serde::ser::SerializeStruct>::serialize_field(
          v6,
          v7,
          aEmailAddressFr,
          18LL,
          a2 + 192);
        v3 = *(_QWORD *)v6;
        if ( *(_QWORD *)v6 == 0x8000000000000005LL )
        {
          memcpy(v6, v7, sizeof(v6));
          <toml::ser::map::SerializeDocumentTable as serde::ser::SerializeStruct>::end(a1, v6);
          return a1;
        }
      }
      *(_OWORD *)(a1 + 8) = *(_OWORD *)&v6[8];
      *(_QWORD *)a1 = v3;
    }
    else
    {
      *(_QWORD *)(a1 + 16) = *(_QWORD *)&v6[16];
      *(_OWORD *)a1 = *(_OWORD *)v6;
    }
    core::ptr::drop_in_place<toml::ser::map::SerializeDocumentTable>(v7);
    return a1;
  }
  *(_QWORD *)(a1 + 16) = *(_QWORD *)&v6[24];
  *(_OWORD *)a1 = v5;
  return a1;
}