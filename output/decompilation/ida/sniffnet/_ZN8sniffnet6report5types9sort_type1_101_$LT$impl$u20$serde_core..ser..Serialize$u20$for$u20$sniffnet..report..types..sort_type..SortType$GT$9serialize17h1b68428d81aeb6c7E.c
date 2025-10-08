void __fastcall __spoils<rdx,rcx,r8,r9,r10,r11,xmm4,xmm5> sniffnet::report::types::sort_type::_::<impl serde_core::ser::Serialize for sniffnet::report::types::sort_type::SortType>::serialize(
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
        (unsigned int)&unk_273FF8,
        8,
        1,
        (unsigned int)aDescending,
        10LL);
    else
      <toml_edit::ser::map::MapValueSerializer as serde_core::ser::Serializer>::serialize_unit_variant(
        a1,
        a3,
        (unsigned int)&unk_273FF8,
        8,
        2,
        (unsigned int)aNeutral,
        7LL);
  }
  else
  {
    <toml_edit::ser::map::MapValueSerializer as serde_core::ser::Serializer>::serialize_unit_variant(
      a1,
      a3,
      (unsigned int)&unk_273FF8,
      8,
      0,
      (unsigned int)aAscending,
      9LL);
  }
}