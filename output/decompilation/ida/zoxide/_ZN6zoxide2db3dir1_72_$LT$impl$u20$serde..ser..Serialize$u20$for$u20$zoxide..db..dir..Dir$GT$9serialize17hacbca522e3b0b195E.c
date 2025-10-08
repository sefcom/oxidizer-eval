__int64 __fastcall zoxide::db::dir::_::<impl serde::ser::Serialize for zoxide::db::dir::Dir>::serialize(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // r14

  v2 = <&mut bincode::ser::SizeChecker<O> as serde::ser::Serializer>::serialize_struct(a2);
  <bincode::ser::SizeCompound<O> as serde::ser::SerializeStruct>::serialize_field(v2, a1);
  <bincode::ser::SizeCompound<O> as serde::ser::SerializeStruct>::serialize_field(v2);
  return <bincode::ser::SizeCompound<O> as serde::ser::SerializeStruct>::serialize_field(v2);
}