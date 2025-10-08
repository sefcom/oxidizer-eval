__int64 __fastcall alacritty::config::ui_config::_::<impl serde::ser::Serialize for alacritty::config::ui_config::HintAction>::serialize(
        __int64 a1,
        __int64 a2)
{
  if ( *(_QWORD *)a1 != 0x8000000000000001LL )
    return <serde::__private::ser::FlatMapSerializer<M> as serde::ser::Serializer>::serialize_newtype_variant(a2, a1);
  <serde::__private::ser::FlatMapSerializer<M> as serde::ser::Serializer>::serialize_newtype_variant(
    a2,
    *(unsigned int *)(a1 + 8));
  return 0LL;
}