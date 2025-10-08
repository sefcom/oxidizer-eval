void __fastcall __spoils<rdx,rcx,r8,r9,r10,r11,xmm4,xmm5> sniffnet::gui::styles::types::gradient_type::_::<impl serde_core::ser::Serialize for sniffnet::gui::styles::types::gradient_type::GradientType>::serialize(
        int a1,
        char a2,
        int a3)
{
  if ( a2 )
  {
    if ( a2 == 1 )
      <toml_edit::ser::map::MapValueSerializer as serde_core::ser::Serializer>::serialize_unit_variant(
        a1,
        a3,
        (unsigned int)&unk_18D5C08,
        12,
        1,
        (unsigned int)aWild,
        4LL);
    else
      <toml_edit::ser::map::MapValueSerializer as serde_core::ser::Serializer>::serialize_unit_variant(
        a1,
        a3,
        (unsigned int)&unk_18D5C08,
        12,
        2,
        (unsigned int)aNone_1,
        4LL);
  }
  else
  {
    <toml_edit::ser::map::MapValueSerializer as serde_core::ser::Serializer>::serialize_unit_variant(
      a1,
      a3,
      (unsigned int)&unk_18D5C08,
      12,
      0,
      (unsigned int)aMild,
      4LL);
  }
}