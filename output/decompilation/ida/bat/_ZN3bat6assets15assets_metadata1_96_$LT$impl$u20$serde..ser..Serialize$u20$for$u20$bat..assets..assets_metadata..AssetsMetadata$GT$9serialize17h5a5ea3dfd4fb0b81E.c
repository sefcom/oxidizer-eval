__int64 __fastcall bat::assets::assets_metadata::_::<impl serde::ser::Serialize for bat::assets::assets_metadata::AssetsMetadata>::serialize(
        __int64 a1,
        __int64 a2)
{
  char v2; // al
  __int64 v3; // rdx
  __int64 v4; // rbx
  __int64 v5; // rax

  v2 = <&mut serde_yaml::ser::Serializer<W> as serde::ser::Serializer>::serialize_struct(a2);
  v4 = v3;
  if ( (v2 & 1) != 0 )
    return v4;
  v5 = <&mut serde_yaml::ser::Serializer<W> as serde::ser::SerializeStruct>::serialize_field(v3, a1);
  if ( v5 )
    return v5;
  v5 = <&mut serde_yaml::ser::Serializer<W> as serde::ser::SerializeStruct>::serialize_field(v4, a1 + 24);
  if ( v5 )
    return v5;
  return <&mut serde_yaml::ser::Serializer<W> as serde::ser::SerializeStruct>::end(v4);
}