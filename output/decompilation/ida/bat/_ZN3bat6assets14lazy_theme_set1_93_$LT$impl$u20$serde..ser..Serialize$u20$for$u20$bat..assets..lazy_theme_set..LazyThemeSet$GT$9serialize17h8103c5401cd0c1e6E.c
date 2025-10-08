__int64 __fastcall bat::assets::lazy_theme_set::_::<impl serde::ser::Serialize for bat::assets::lazy_theme_set::LazyThemeSet>::serialize(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rax

  v2 = <&mut bincode::ser::Serializer<W,O> as serde::ser::Serializer>::serialize_tuple(a2);
  return <bincode::ser::Compound<W,O> as serde::ser::SerializeStruct>::serialize_field(v2, a1);
}