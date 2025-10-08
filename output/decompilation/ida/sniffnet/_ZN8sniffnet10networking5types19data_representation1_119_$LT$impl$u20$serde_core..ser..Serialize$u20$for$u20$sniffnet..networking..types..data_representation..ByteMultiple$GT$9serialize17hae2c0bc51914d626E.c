void __fastcall __spoils<rdx,rcx,r8,r9,r10,r11,xmm4,xmm5> sniffnet::networking::types::data_representation::_::<impl serde_core::ser::Serialize for sniffnet::networking::types::data_representation::ByteMultiple>::serialize(
        int a1,
        char a2,
        int a3)
{
  switch ( a2 )
  {
    case 0:
      <toml_edit::ser::map::MapValueSerializer as serde_core::ser::Serializer>::serialize_unit_variant(
        a1,
        a3,
        (unsigned int)&unk_18E6A2E,
        12,
        0,
        (unsigned int)aB,
        1LL);
      break;
    case 1:
      <toml_edit::ser::map::MapValueSerializer as serde_core::ser::Serializer>::serialize_unit_variant(
        a1,
        a3,
        (unsigned int)&unk_18E6A2E,
        12,
        1,
        (unsigned int)aKb,
        2LL);
      break;
    case 2:
      <toml_edit::ser::map::MapValueSerializer as serde_core::ser::Serializer>::serialize_unit_variant(
        a1,
        a3,
        (unsigned int)&unk_18E6A2E,
        12,
        2,
        (unsigned int)aMb,
        2LL);
      break;
    case 3:
      <toml_edit::ser::map::MapValueSerializer as serde_core::ser::Serializer>::serialize_unit_variant(
        a1,
        a3,
        (unsigned int)&unk_18E6A2E,
        12,
        3,
        (unsigned int)aGb,
        2LL);
      break;
    case 4:
      <toml_edit::ser::map::MapValueSerializer as serde_core::ser::Serializer>::serialize_unit_variant(
        a1,
        a3,
        (unsigned int)&unk_18E6A2E,
        12,
        4,
        (unsigned int)aTb,
        2LL);
      break;
    case 5:
      <toml_edit::ser::map::MapValueSerializer as serde_core::ser::Serializer>::serialize_unit_variant(
        a1,
        a3,
        (unsigned int)&unk_18E6A2E,
        12,
        5,
        (unsigned int)aPb,
        2LL);
      break;
  }
}