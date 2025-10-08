__int64 __fastcall forc_publish::credentials::_::<impl serde::ser::Serialize for forc_publish::credentials::Credentials>::serialize(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 result; // rax
  __int128 v6; // [rsp+0h] [rbp-218h]
  _BYTE v7[232]; // [rsp+20h] [rbp-1F8h] BYREF
  _QWORD v8[34]; // [rsp+108h] [rbp-110h] BYREF

  <toml::ser::Serializer as serde::ser::Serializer>::serialize_struct(v7, a4, aCredentials, 11LL, 1LL);
  v6 = *(_OWORD *)&v7[8];
  if ( *(_QWORD *)v7 == 0x8000000000000001LL )
  {
    result = *(_QWORD *)&v7[24];
    *(_QWORD *)(a1 + 16) = *(_QWORD *)&v7[24];
    *(_OWORD *)a1 = v6;
  }
  else
  {
    memcpy(&v8[4], &v7[32], 0xC8uLL);
    *(_OWORD *)&v8[1] = *(_OWORD *)&v7[8];
    v8[3] = *(_QWORD *)&v7[24];
    v8[0] = *(_QWORD *)v7;
    <toml::ser::map::SerializeDocumentTable as serde::ser::SerializeStruct>::serialize_field(v7, v8, a2, a3);
    if ( *(_QWORD *)v7 == 0x8000000000000005LL )
    {
      memcpy(v7, v8, sizeof(v7));
      return <toml::ser::map::SerializeDocumentTable as serde::ser::SerializeStruct>::end(a1, v7);
    }
    else
    {
      *(_QWORD *)(a1 + 16) = *(_QWORD *)&v7[16];
      *(_OWORD *)a1 = *(_OWORD *)v7;
      return core::ptr::drop_in_place<toml::ser::map::SerializeDocumentTable>(v8);
    }
  }
  return result;
}