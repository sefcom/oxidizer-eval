__int64 __fastcall sniffnet::gui::styles::types::custom_palette::_::<impl serde_core::ser::Serialize for sniffnet::gui::styles::types::custom_palette::ExtraStyles>::serialize(
        char *dest,
        _QWORD *a2,
        __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 result; // rax
  __int128 v7; // [rsp+0h] [rbp-1E8h]
  __int64 v8; // [rsp+10h] [rbp-1D8h]
  _QWORD v9[27]; // [rsp+18h] [rbp-1D0h] BYREF
  _QWORD v10[31]; // [rsp+F0h] [rbp-F8h] BYREF

  v4 = 10LL;
  if ( (unsigned __int64)(*a2 - 6LL) < 0xA )
    v4 = *a2 - 6LL;
  switch ( v4 )
  {
    case 0LL:
      <toml_edit::ser::map::MapValueSerializer as serde_core::ser::Serializer>::serialize_struct(
        v9,
        a3,
        aExtrastyles,
        11LL,
        1LL);
      v7 = *(_OWORD *)&v9[1];
      v8 = v9[3];
      if ( v9[0] == 0x8000000000000001LL )
        goto LABEL_27;
      memcpy(&v10[4], &v9[4], 0xB8uLL);
      *(_OWORD *)&v10[1] = *(_OWORD *)&v9[1];
      v10[3] = v9[3];
      v10[0] = v9[0];
      <toml_edit::ser::map::SerializeMap as serde_core::ser::SerializeStruct>::serialize_field(
        v9,
        v10,
        aCustom_0,
        6LL,
        &off_2E012C8);
      goto LABEL_29;
    case 1LL:
      <toml_edit::ser::map::MapValueSerializer as serde_core::ser::Serializer>::serialize_struct(
        v9,
        a3,
        aExtrastyles,
        11LL,
        1LL);
      v7 = *(_OWORD *)&v9[1];
      v8 = v9[3];
      if ( v9[0] == 0x8000000000000001LL )
        goto LABEL_27;
      memcpy(&v10[4], &v9[4], 0xB8uLL);
      *(_OWORD *)&v10[1] = *(_OWORD *)&v9[1];
      v10[3] = v9[3];
      v10[0] = v9[0];
      <toml_edit::ser::map::SerializeMap as serde_core::ser::SerializeStruct>::serialize_field(
        v9,
        v10,
        aCustom_0,
        6LL,
        &off_2E012F0);
      goto LABEL_29;
    case 2LL:
      <toml_edit::ser::map::MapValueSerializer as serde_core::ser::Serializer>::serialize_struct(
        v9,
        a3,
        aExtrastyles,
        11LL,
        1LL);
      v7 = *(_OWORD *)&v9[1];
      v8 = v9[3];
      if ( v9[0] == 0x8000000000000001LL )
        goto LABEL_27;
      memcpy(&v10[4], &v9[4], 0xB8uLL);
      *(_OWORD *)&v10[1] = *(_OWORD *)&v9[1];
      v10[3] = v9[3];
      v10[0] = v9[0];
      <toml_edit::ser::map::SerializeMap as serde_core::ser::SerializeStruct>::serialize_field(
        v9,
        v10,
        aCustom_0,
        6LL,
        &off_2E01318);
      goto LABEL_29;
    case 3LL:
      <toml_edit::ser::map::MapValueSerializer as serde_core::ser::Serializer>::serialize_struct(
        v9,
        a3,
        aExtrastyles,
        11LL,
        1LL);
      v7 = *(_OWORD *)&v9[1];
      v8 = v9[3];
      if ( v9[0] == 0x8000000000000001LL )
        goto LABEL_27;
      memcpy(&v10[4], &v9[4], 0xB8uLL);
      *(_OWORD *)&v10[1] = *(_OWORD *)&v9[1];
      v10[3] = v9[3];
      v10[0] = v9[0];
      <toml_edit::ser::map::SerializeMap as serde_core::ser::SerializeStruct>::serialize_field(
        v9,
        v10,
        aCustom_0,
        6LL,
        &off_2E01340);
      goto LABEL_29;
    case 4LL:
      <toml_edit::ser::map::MapValueSerializer as serde_core::ser::Serializer>::serialize_struct(
        v9,
        a3,
        aExtrastyles,
        11LL,
        1LL);
      v7 = *(_OWORD *)&v9[1];
      v8 = v9[3];
      if ( v9[0] == 0x8000000000000001LL )
        goto LABEL_27;
      memcpy(&v10[4], &v9[4], 0xB8uLL);
      *(_OWORD *)&v10[1] = *(_OWORD *)&v9[1];
      v10[3] = v9[3];
      v10[0] = v9[0];
      <toml_edit::ser::map::SerializeMap as serde_core::ser::SerializeStruct>::serialize_field(
        v9,
        v10,
        aCustom_0,
        6LL,
        &off_2E01368);
      goto LABEL_29;
    case 5LL:
      <toml_edit::ser::map::MapValueSerializer as serde_core::ser::Serializer>::serialize_struct(
        v9,
        a3,
        aExtrastyles,
        11LL,
        1LL);
      v7 = *(_OWORD *)&v9[1];
      v8 = v9[3];
      if ( v9[0] == 0x8000000000000001LL )
        goto LABEL_27;
      memcpy(&v10[4], &v9[4], 0xB8uLL);
      *(_OWORD *)&v10[1] = *(_OWORD *)&v9[1];
      v10[3] = v9[3];
      v10[0] = v9[0];
      <toml_edit::ser::map::SerializeMap as serde_core::ser::SerializeStruct>::serialize_field(
        v9,
        v10,
        aCustom_0,
        6LL,
        &off_2E01390);
      goto LABEL_29;
    case 6LL:
      <toml_edit::ser::map::MapValueSerializer as serde_core::ser::Serializer>::serialize_struct(
        v9,
        a3,
        aExtrastyles,
        11LL,
        1LL);
      v7 = *(_OWORD *)&v9[1];
      v8 = v9[3];
      if ( v9[0] == 0x8000000000000001LL )
        goto LABEL_27;
      memcpy(&v10[4], &v9[4], 0xB8uLL);
      *(_OWORD *)&v10[1] = *(_OWORD *)&v9[1];
      v10[3] = v9[3];
      v10[0] = v9[0];
      <toml_edit::ser::map::SerializeMap as serde_core::ser::SerializeStruct>::serialize_field(
        v9,
        v10,
        aCustom_0,
        6LL,
        &off_2E013B8);
      goto LABEL_29;
    case 7LL:
      <toml_edit::ser::map::MapValueSerializer as serde_core::ser::Serializer>::serialize_struct(
        v9,
        a3,
        aExtrastyles,
        11LL,
        1LL);
      v7 = *(_OWORD *)&v9[1];
      v8 = v9[3];
      if ( v9[0] == 0x8000000000000001LL )
        goto LABEL_27;
      memcpy(&v10[4], &v9[4], 0xB8uLL);
      *(_OWORD *)&v10[1] = *(_OWORD *)&v9[1];
      v10[3] = v9[3];
      v10[0] = v9[0];
      <toml_edit::ser::map::SerializeMap as serde_core::ser::SerializeStruct>::serialize_field(
        v9,
        v10,
        aCustom_0,
        6LL,
        &off_2E013E0);
      goto LABEL_29;
    case 8LL:
      <toml_edit::ser::map::MapValueSerializer as serde_core::ser::Serializer>::serialize_struct(
        v9,
        a3,
        aExtrastyles,
        11LL,
        1LL);
      v7 = *(_OWORD *)&v9[1];
      v8 = v9[3];
      if ( v9[0] == 0x8000000000000001LL )
        goto LABEL_27;
      memcpy(&v10[4], &v9[4], 0xB8uLL);
      *(_OWORD *)&v10[1] = *(_OWORD *)&v9[1];
      v10[3] = v9[3];
      v10[0] = v9[0];
      <toml_edit::ser::map::SerializeMap as serde_core::ser::SerializeStruct>::serialize_field(
        v9,
        v10,
        aCustom_0,
        6LL,
        &off_2E01408);
      goto LABEL_29;
    case 9LL:
      <toml_edit::ser::map::MapValueSerializer as serde_core::ser::Serializer>::serialize_struct(
        v9,
        a3,
        aExtrastyles,
        11LL,
        1LL);
      v7 = *(_OWORD *)&v9[1];
      v8 = v9[3];
      if ( v9[0] == 0x8000000000000001LL )
        goto LABEL_27;
      memcpy(&v10[4], &v9[4], 0xB8uLL);
      *(_OWORD *)&v10[1] = *(_OWORD *)&v9[1];
      v10[3] = v9[3];
      v10[0] = v9[0];
      <toml_edit::ser::map::SerializeMap as serde_core::ser::SerializeStruct>::serialize_field(
        v9,
        v10,
        aCustom_0,
        6LL,
        &off_2E01430);
LABEL_29:
      v5 = v9[0];
      if ( v9[0] == 0x8000000000000005LL )
        goto LABEL_30;
      goto LABEL_25;
    case 10LL:
      <toml_edit::ser::map::MapValueSerializer as serde_core::ser::Serializer>::serialize_struct(
        v9,
        a3,
        aExtrastyles,
        11LL,
        2LL);
      v7 = *(_OWORD *)&v9[1];
      v8 = v9[3];
      if ( v9[0] == 0x8000000000000001LL )
      {
LABEL_27:
        result = v8;
        *((_QWORD *)dest + 3) = v8;
        *(_OWORD *)(dest + 8) = v7;
        *(_QWORD *)dest = 8LL;
      }
      else
      {
        memcpy(&v10[4], &v9[4], 0xB8uLL);
        *(_OWORD *)&v10[1] = *(_OWORD *)&v9[1];
        v10[3] = v9[3];
        v10[0] = v9[0];
        <toml_edit::ser::map::SerializeMap as serde_core::ser::SerializeStruct>::serialize_field(
          v9,
          v10,
          aCustom_0,
          6LL,
          &off_2E01458);
        v5 = v9[0];
        if ( v9[0] == 0x8000000000000005LL
          && (<toml_edit::ser::map::SerializeMap as serde_core::ser::SerializeStruct>::serialize_field(v9, v10, a2),
              v5 = v9[0],
              v9[0] == 0x8000000000000005LL) )
        {
LABEL_30:
          memcpy(v9, v10, sizeof(v9));
          return <toml_edit::ser::map::SerializeMap as serde_core::ser::SerializeStruct>::end(dest);
        }
        else
        {
LABEL_25:
          *((_OWORD *)dest + 1) = *(_OWORD *)&v9[1];
          *((_QWORD *)dest + 1) = v5;
          *(_QWORD *)dest = 8LL;
          return core::ptr::drop_in_place<toml_edit::ser::map::SerializeMap>(v10);
        }
      }
      return result;
  }
}