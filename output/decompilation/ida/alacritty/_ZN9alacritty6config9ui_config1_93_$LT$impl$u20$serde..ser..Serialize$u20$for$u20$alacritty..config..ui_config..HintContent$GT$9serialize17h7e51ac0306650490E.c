__int64 __fastcall alacritty::config::ui_config::_::<impl serde::ser::Serialize for alacritty::config::ui_config::HintContent>::serialize(
        __int64 a1,
        unsigned int a2,
        __int64 a3)
{
  __int64 v3; // r15

  v3 = <serde::__private::ser::FlatMapSerializer<M> as serde::ser::Serializer>::serialize_struct(a3);
  <serde::__private::ser::FlatMapSerializeStruct<M> as serde::ser::SerializeStruct>::serialize_field(v3, a1);
  return <serde::__private::ser::FlatMapSerializeStruct<M> as serde::ser::SerializeStruct>::serialize_field(v3, a2);
}