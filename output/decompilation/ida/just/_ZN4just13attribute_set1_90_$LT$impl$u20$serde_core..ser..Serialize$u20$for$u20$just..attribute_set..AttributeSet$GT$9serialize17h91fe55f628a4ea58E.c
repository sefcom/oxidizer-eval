__int64 __fastcall just::attribute_set::_::<impl serde_core::ser::Serialize for just::attribute_set::AttributeSet>::serialize(
        __int64 a1,
        __int64 a2)
{
  return <&mut serde_json::ser::Serializer<W,F> as serde_core::ser::Serializer>::serialize_newtype_struct(a2, a1);
}