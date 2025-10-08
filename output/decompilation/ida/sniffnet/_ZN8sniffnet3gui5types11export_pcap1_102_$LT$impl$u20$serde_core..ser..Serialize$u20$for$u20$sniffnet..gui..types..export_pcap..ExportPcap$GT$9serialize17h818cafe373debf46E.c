__int64 __fastcall sniffnet::gui::types::export_pcap::_::<impl serde_core::ser::Serialize for sniffnet::gui::types::export_pcap::ExportPcap>::serialize(
        char *dest,
        __int64 a2,
        __int64 a3)
{
  __int64 result; // rax
  __int128 v4; // [rsp+0h] [rbp-1E8h]
  _BYTE v5[216]; // [rsp+18h] [rbp-1D0h] BYREF
  _QWORD v6[31]; // [rsp+F0h] [rbp-F8h] BYREF

  <toml_edit::ser::map::MapValueSerializer as serde_core::ser::Serializer>::serialize_struct(
    v5,
    a3,
    aExportpcap,
    10LL,
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
      aEnabled_0,
      7LL,
      *(unsigned int *)(a2 + 48));
    if ( *(_QWORD *)v5 == 0x8000000000000005LL
      && (<toml_edit::ser::map::SerializeMap as serde_core::ser::SerializeStruct>::serialize_field(
            v5,
            v6,
            aFileName,
            9LL,
            *(_QWORD *)(a2 + 8),
            *(_QWORD *)(a2 + 16)),
          *(_QWORD *)v5 == 0x8000000000000005LL)
      && (<toml_edit::ser::map::SerializeMap as serde_core::ser::SerializeStruct>::serialize_field(
            v5,
            v6,
            aDirectory,
            9LL,
            *(_QWORD *)(a2 + 32),
            *(_QWORD *)(a2 + 40)),
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