__int64 __fastcall alacritty::config::cursor::_::<impl serde::ser::Serialize for alacritty::config::cursor::CursorShape>::serialize(
        char a1,
        __int64 a2)
{
  if ( !a1 )
    return <&mut serde_json::ser::Serializer<W,F> as serde::ser::Serializer>::serialize_unit_variant(
             a2,
             &unk_FB88B,
             5LL);
  if ( a1 == 1 )
    return <&mut serde_json::ser::Serializer<W,F> as serde::ser::Serializer>::serialize_unit_variant(
             a2,
             aUnderline,
             9LL);
  return <&mut serde_json::ser::Serializer<W,F> as serde::ser::Serializer>::serialize_unit_variant(a2, aBeam, 4LL);
}