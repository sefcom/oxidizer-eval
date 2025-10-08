__int64 __fastcall alacritty::display::color::_::<impl serde::ser::Serialize for alacritty::display::color::CellRgb>::serialize(
        _BYTE *a1,
        __int64 a2)
{
  if ( !*a1 )
    return <&mut serde_json::ser::Serializer<W,F> as serde::ser::Serializer>::serialize_unit_variant(
             a2,
             aCellforeground_0,
             14LL);
  if ( *a1 == 1 )
    return <&mut serde_json::ser::Serializer<W,F> as serde::ser::Serializer>::serialize_unit_variant(
             a2,
             aCellbackground,
             14LL);
  return <alacritty::display::color::Rgb as serde::ser::Serialize>::serialize(a1 + 1);
}