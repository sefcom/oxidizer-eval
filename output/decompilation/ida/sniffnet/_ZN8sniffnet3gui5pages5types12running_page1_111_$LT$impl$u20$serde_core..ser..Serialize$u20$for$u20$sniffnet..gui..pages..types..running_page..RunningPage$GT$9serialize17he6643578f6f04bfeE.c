void __fastcall __spoils<rdx,rcx,r8,r9,r10,r11,xmm4,xmm5> sniffnet::gui::pages::types::running_page::_::<impl serde_core::ser::Serialize for sniffnet::gui::pages::types::running_page::RunningPage>::serialize(
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
        (unsigned int)&aZzrunningpages[2],
        11,
        1,
        (unsigned int)&unk_184576C,
        7LL);
    else
      <toml_edit::ser::map::MapValueSerializer as serde_core::ser::Serializer>::serialize_unit_variant(
        a1,
        a3,
        (unsigned int)&aZzrunningpages[2],
        11,
        2,
        (unsigned int)aNotifications,
        13LL);
  }
  else
  {
    <toml_edit::ser::map::MapValueSerializer as serde_core::ser::Serializer>::serialize_unit_variant(
      a1,
      a3,
      (unsigned int)&aZzrunningpages[2],
      11,
      0,
      (unsigned int)&unk_274E50,
      8LL);
  }
}