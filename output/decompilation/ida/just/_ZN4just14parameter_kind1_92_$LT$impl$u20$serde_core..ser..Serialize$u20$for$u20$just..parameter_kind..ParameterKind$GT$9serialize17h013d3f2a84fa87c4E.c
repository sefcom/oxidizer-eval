__int64 __fastcall just::parameter_kind::_::<impl serde_core::ser::Serialize for just::parameter_kind::ParameterKind>::serialize(
        char a1,
        __int64 a2)
{
  if ( !a1 )
    return <&mut serde_json::ser::Serializer<W,F> as serde_core::ser::Serializer>::serialize_unit_variant(
             a2,
             aPlus,
             4LL);
  if ( a1 == 1 )
    return <&mut serde_json::ser::Serializer<W,F> as serde_core::ser::Serializer>::serialize_unit_variant(
             a2,
             aSingular,
             8LL);
  return <&mut serde_json::ser::Serializer<W,F> as serde_core::ser::Serializer>::serialize_unit_variant(a2, aStar, 4LL);
}