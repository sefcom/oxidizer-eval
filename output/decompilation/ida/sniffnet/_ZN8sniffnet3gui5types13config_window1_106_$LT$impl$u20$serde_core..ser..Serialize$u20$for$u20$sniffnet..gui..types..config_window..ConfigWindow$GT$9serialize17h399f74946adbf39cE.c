__int64 __fastcall sniffnet::gui::types::config_window::_::<impl serde_core::ser::Serialize for sniffnet::gui::types::config_window::ConfigWindow>::serialize(
        char *dest,
        float *a2,
        __int64 a3)
{
  __int64 result; // rax
  __int128 v4; // [rsp+0h] [rbp-1E8h]
  _BYTE v5[216]; // [rsp+18h] [rbp-1D0h] BYREF
  _QWORD v6[31]; // [rsp+F0h] [rbp-F8h] BYREF

  <toml_edit::ser::map::MapValueSerializer as serde_core::ser::Serializer>::serialize_struct(
    v5,
    a3,
    aConfigwindow,
    12LL,
    3LL);
  v4 = *(_OWORD *)&v5[8];
  if ( *(_QWORD *)v5 == 0x8000000000000001LL )
  {
    result = *(_QWORD *)&v5[24];
    *((_QWORD *)dest + 3) = *(_QWORD *)&v5[24];
    *(_OWORD *)(dest + 8) = v4;
    *(_QWORD *)dest = 8LL;
  }
  else
  {
    memcpy(&v6[4], &v5[32], 0xB8uLL);
    *(_OWORD *)&v6[1] = *(_OWORD *)&v5[8];
    v6[3] = *(_QWORD *)&v5[24];
    v6[0] = *(_QWORD *)v5;
    <toml_edit::ser::map::SerializeMap as serde_core::ser::SerializeStruct>::serialize_field(
      v5,
      v6,
      aPosition_0,
      8LL,
      *a2,
      a2[1]);
    if ( *(_QWORD *)v5 == 0x8000000000000005LL
      && (<toml_edit::ser::map::SerializeMap as serde_core::ser::SerializeStruct>::serialize_field(v5, v6, a2[2], a2[3]),
          *(_QWORD *)v5 == 0x8000000000000005LL)
      && (<toml_edit::ser::map::SerializeMap as serde_core::ser::SerializeStruct>::serialize_field(
            v5,
            v6,
            aThumbnailPosit,
            18LL,
            a2[4],
            a2[5]),
          *(_QWORD *)v5 == 0x8000000000000005LL) )
    {
      memcpy(v5, v6, sizeof(v5));
      return <toml_edit::ser::map::SerializeMap as serde_core::ser::SerializeStruct>::end(dest);
    }
    else
    {
      *((_QWORD *)dest + 3) = *(_QWORD *)&v5[16];
      *(_OWORD *)(dest + 8) = *(_OWORD *)v5;
      *(_QWORD *)dest = 8LL;
      return core::ptr::drop_in_place<toml_edit::ser::map::SerializeMap>(v6);
    }
  }
  return result;
}