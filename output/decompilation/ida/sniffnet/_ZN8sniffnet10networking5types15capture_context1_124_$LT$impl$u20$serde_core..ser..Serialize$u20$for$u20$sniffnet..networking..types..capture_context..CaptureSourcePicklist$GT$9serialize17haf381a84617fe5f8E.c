void __fastcall __spoils<rdx,rcx,r8,r9,r10,r11,xmm4,xmm5> sniffnet::networking::types::capture_context::_::<impl serde_core::ser::Serialize for sniffnet::networking::types::capture_context::CaptureSourcePicklist>::serialize(
        int a1,
        char a2,
        int a3)
{
  if ( (a2 & 1) != 0 )
    <toml_edit::ser::map::MapValueSerializer as serde_core::ser::Serializer>::serialize_unit_variant(
      a1,
      a3,
      (unsigned int)aCapturesourcep,
      21,
      1,
      (unsigned int)aFile,
      4LL);
  else
    <toml_edit::ser::map::MapValueSerializer as serde_core::ser::Serializer>::serialize_unit_variant(
      a1,
      a3,
      (unsigned int)aCapturesourcep,
      21,
      0,
      (unsigned int)aDevice_1,
      6LL);
}