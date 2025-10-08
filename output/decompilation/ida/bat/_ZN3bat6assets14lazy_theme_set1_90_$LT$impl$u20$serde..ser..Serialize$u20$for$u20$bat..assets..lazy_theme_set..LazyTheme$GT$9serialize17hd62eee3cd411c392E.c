__int64 __fastcall bat::assets::lazy_theme_set::_::<impl serde::ser::Serialize for bat::assets::lazy_theme_set::LazyTheme>::serialize(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rax

  v3 = <&mut bincode::ser::Serializer<W,O> as serde::ser::Serializer>::serialize_tuple(a3);
  return <bincode::ser::Compound<W,O> as serde::ser::SerializeStruct>::serialize_field(v3, a1, a2);
}