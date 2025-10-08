__int64 __fastcall sniffnet::notifications::types::notifications::_::<impl serde_core::ser::Serialize for sniffnet::notifications::types::notifications::FavoriteNotification>::serialize(
        char *dest,
        unsigned __int8 a2,
        unsigned __int8 a3,
        __int64 a4)
{
  __int64 result; // rax
  __int128 v6; // [rsp+0h] [rbp-1F8h]
  _BYTE v7[216]; // [rsp+20h] [rbp-1D8h] BYREF
  _QWORD v8[32]; // [rsp+F8h] [rbp-100h] BYREF

  <toml_edit::ser::map::MapValueSerializer as serde_core::ser::Serializer>::serialize_struct(
    v7,
    a4,
    aFavoritenotifi,
    20LL,
    2LL);
  v6 = *(_OWORD *)&v7[8];
  if ( *(_QWORD *)v7 == 0x8000000000000001LL )
  {
    result = *(_QWORD *)&v7[24];
    *((_QWORD *)dest + 3) = *(_QWORD *)&v7[24];
    *(_OWORD *)(dest + 8) = v6;
    *(_QWORD *)dest = 8LL;
  }
  else
  {
    memcpy(&v8[4], &v7[32], 0xB8uLL);
    *(_OWORD *)&v8[1] = *(_OWORD *)&v7[8];
    v8[3] = *(_QWORD *)&v7[24];
    v8[0] = *(_QWORD *)v7;
    <toml_edit::ser::map::SerializeMap as serde_core::ser::SerializeStruct>::serialize_field(
      v7,
      v8,
      aNotifyOnFavori,
      18LL,
      a2);
    if ( *(_QWORD *)v7 == 0x8000000000000005LL
      && (<toml_edit::ser::map::SerializeMap as serde_core::ser::SerializeStruct>::serialize_field(v7, v8, a3),
          *(_QWORD *)v7 == 0x8000000000000005LL) )
    {
      memcpy(v7, v8, sizeof(v7));
      return <toml_edit::ser::map::SerializeMap as serde_core::ser::SerializeStruct>::end(dest);
    }
    else
    {
      *((_QWORD *)dest + 3) = *(_QWORD *)&v7[16];
      *(_OWORD *)(dest + 8) = *(_OWORD *)v7;
      *(_QWORD *)dest = 8LL;
      return core::ptr::drop_in_place<toml_edit::ser::map::SerializeMap>(v8);
    }
  }
  return result;
}