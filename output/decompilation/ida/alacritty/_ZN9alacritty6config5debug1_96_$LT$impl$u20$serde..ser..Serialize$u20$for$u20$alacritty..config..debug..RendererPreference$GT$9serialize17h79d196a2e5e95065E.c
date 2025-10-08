__int64 __fastcall alacritty::config::debug::_::<impl serde::ser::Serialize for alacritty::config::debug::RendererPreference>::serialize(
        char a1,
        __int64 a2)
{
  if ( !a1 )
    return <&mut serde_json::ser::Serializer<W,F> as serde::ser::Serializer>::serialize_unit_variant(a2, aGlsl3_0, 5LL);
  if ( a1 == 1 )
    return <&mut serde_json::ser::Serializer<W,F> as serde::ser::Serializer>::serialize_unit_variant(a2, aGles2_0, 5LL);
  return <&mut serde_json::ser::Serializer<W,F> as serde::ser::Serializer>::serialize_unit_variant(
           a2,
           aGles2pure_0,
           9LL);
}