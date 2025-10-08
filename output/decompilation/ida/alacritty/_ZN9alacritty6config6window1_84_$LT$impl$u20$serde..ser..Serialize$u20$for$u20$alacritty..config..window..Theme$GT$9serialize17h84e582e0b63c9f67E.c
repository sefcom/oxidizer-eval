__int64 __fastcall alacritty::config::window::_::<impl serde::ser::Serialize for alacritty::config::window::Theme>::serialize(
        char a1,
        __int64 a2)
{
  if ( (a1 & 1) != 0 )
    return <&mut serde_json::ser::Serializer<W,F> as serde::ser::Serializer>::serialize_unit_variant(a2, aDark_0, 4LL);
  else
    return <&mut serde_json::ser::Serializer<W,F> as serde::ser::Serializer>::serialize_unit_variant(a2, aLight_0, 5LL);
}