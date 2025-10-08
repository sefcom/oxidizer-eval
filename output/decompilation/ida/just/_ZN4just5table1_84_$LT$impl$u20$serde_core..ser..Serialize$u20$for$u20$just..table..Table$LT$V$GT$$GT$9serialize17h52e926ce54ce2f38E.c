__int64 __fastcall just::table::_::<impl serde_core::ser::Serialize for just::table::Table<V>>::serialize(
        __int64 a1,
        __int64 a2)
{
  return serde_core::ser::Serializer::collect_map(a2, a1);
}