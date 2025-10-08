__int64 __fastcall just::request::_::<impl serde_core::ser::Serialize for just::request::Response>::serialize(
        __int64 a1,
        __int64 a2)
{
  if ( *(_DWORD *)a1 == 1 )
    return <&mut serde_json::ser::Serializer<W,F> as serde_core::ser::Serializer>::serialize_newtype_variant(
             a2,
             *(_QWORD *)(a1 + 16),
             *(_QWORD *)(a1 + 24));
  else
    return <&mut serde_json::ser::Serializer<W,F> as serde_core::ser::Serializer>::serialize_newtype_variant(a2, a1 + 8);
}