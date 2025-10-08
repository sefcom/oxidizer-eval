__int64 __fastcall sniffnet::gui::types::settings::_::<impl serde_core::ser::Serialize for sniffnet::gui::types::settings::Settings>::serialize(
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
    "SettingsDispatchafesc-mcapc-9951la-maintaker-cdpccag-pibmemcacheccss-qsmdfserverste-smscauthentxraventbsmatahariapc-"
    "3506colubrisfairviewparalleldigivotedxspiderjvserveraipn-regminivendsift-uftazeti-bdxcomputempls-udpTooLargeleft_ptrBgr888A8",
    8LL,
    8LL);
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
      *(unsigned int *)(a2 + 328));
    if ( *(_QWORD *)v5 == 0x8000000000000005LL
      && (<toml_edit::ser::map::SerializeMap as serde_core::ser::SerializeStruct>::serialize_field(
            v5,
            v6,
            *(unsigned __int8 *)(a2 + 329)),
          *(_QWORD *)v5 == 0x8000000000000005LL)
      && (<toml_edit::ser::map::SerializeMap as serde_core::ser::SerializeStruct>::serialize_field(
            v5,
            v6,
            *(double *)(a2 + 320)),
          *(_QWORD *)v5 == 0x8000000000000005LL)
      && (<toml_edit::ser::map::SerializeMap as serde_core::ser::SerializeStruct>::serialize_field(
            v5,
            v6,
            aMmdbCountry,
            12LL,
            *(_QWORD *)(a2 + 256),
            *(_QWORD *)(a2 + 264)),
          *(_QWORD *)v5 == 0x8000000000000005LL)
      && (<toml_edit::ser::map::SerializeMap as serde_core::ser::SerializeStruct>::serialize_field(
            v5,
            v6,
            aMmdbAsn,
            8LL,
            *(_QWORD *)(a2 + 280),
            *(_QWORD *)(a2 + 288)),
          *(_QWORD *)v5 == 0x8000000000000005LL)
      && (<toml_edit::ser::map::SerializeMap as serde_core::ser::SerializeStruct>::serialize_field(
            v5,
            v6,
            aStylePath,
            10LL,
            *(_QWORD *)(a2 + 304),
            *(_QWORD *)(a2 + 312)),
          *(_QWORD *)v5 == 0x8000000000000005LL)
      && (<toml_edit::ser::map::SerializeMap as serde_core::ser::SerializeStruct>::serialize_field(v5, v6, a2),
          *(_QWORD *)v5 == 0x8000000000000005LL)
      && (<toml_edit::ser::map::SerializeMap as serde_core::ser::SerializeStruct>::serialize_field(v5, v6, a2 + 40),
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