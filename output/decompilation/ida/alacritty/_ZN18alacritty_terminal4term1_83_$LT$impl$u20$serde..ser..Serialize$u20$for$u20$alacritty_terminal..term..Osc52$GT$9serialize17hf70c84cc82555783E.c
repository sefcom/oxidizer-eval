__int64 __fastcall alacritty_terminal::term::_::<impl serde::ser::Serialize for alacritty_terminal::term::Osc52>::serialize(
        char a1,
        __int64 a2)
{
  __int64 result; // rax

  switch ( a1 )
  {
    case 0:
      result = <&mut serde_json::ser::Serializer<W,F> as serde::ser::Serializer>::serialize_unit_variant(
                 a2,
                 aDisabled,
                 8LL);
      break;
    case 1:
      result = <&mut serde_json::ser::Serializer<W,F> as serde::ser::Serializer>::serialize_unit_variant(
                 a2,
                 aOnlycopy,
                 8LL);
      break;
    case 2:
      result = <&mut serde_json::ser::Serializer<W,F> as serde::ser::Serializer>::serialize_unit_variant(
                 a2,
                 aOnlypaste,
                 9LL);
      break;
    case 3:
      result = <&mut serde_json::ser::Serializer<W,F> as serde::ser::Serializer>::serialize_unit_variant(
                 a2,
                 aCopypaste,
                 9LL);
      break;
  }
  return result;
}