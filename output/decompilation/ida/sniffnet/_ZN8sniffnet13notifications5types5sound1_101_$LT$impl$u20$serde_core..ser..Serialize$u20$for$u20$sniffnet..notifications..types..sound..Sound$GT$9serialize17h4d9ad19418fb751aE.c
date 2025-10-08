void __fastcall __spoils<rdx,rcx,r8,r9,r10,r11,xmm4,xmm5> sniffnet::notifications::types::sound::_::<impl serde_core::ser::Serialize for sniffnet::notifications::types::sound::Sound>::serialize(
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
        (unsigned int)&unk_1842C98,
        5,
        0,
        (unsigned int)"GulpArgsmurxgrisjukanirplsnrstunmbusvrtpracfcopyxndsiqrmllrparcp\"",
        4LL);
      break;
    case 1:
      <toml_edit::ser::map::MapValueSerializer as serde_core::ser::Serializer>::serialize_unit_variant(
        a1,
        a3,
        (unsigned int)&unk_1842C98,
        5,
        1,
        (unsigned int)aPop,
        3LL);
      break;
    case 2:
      <toml_edit::ser::map::MapValueSerializer as serde_core::ser::Serializer>::serialize_unit_variant(
        a1,
        a3,
        (unsigned int)&unk_1842C98,
        5,
        2,
        (unsigned int)aSwhoosh,
        7LL);
      break;
    case 3:
      <toml_edit::ser::map::MapValueSerializer as serde_core::ser::Serializer>::serialize_unit_variant(
        a1,
        a3,
        (unsigned int)&unk_1842C98,
        5,
        3,
        (unsigned int)aNone_1,
        4LL);
      break;
  }
}