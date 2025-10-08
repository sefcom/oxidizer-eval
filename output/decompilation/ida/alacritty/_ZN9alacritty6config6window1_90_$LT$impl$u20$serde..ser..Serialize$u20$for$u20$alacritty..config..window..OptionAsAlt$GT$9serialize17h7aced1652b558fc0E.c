__int64 __fastcall alacritty::config::window::_::<impl serde::ser::Serialize for alacritty::config::window::OptionAsAlt>::serialize(
        char a1,
        __int64 a2)
{
  __int64 result; // rax

  switch ( a1 )
  {
    case 0:
      result = <&mut serde_json::ser::Serializer<W,F> as serde::ser::Serializer>::serialize_unit_variant(
                 a2,
                 "OnlyLeftsafecopyS",
                 8LL);
      break;
    case 1:
      result = <&mut serde_json::ser::Serializer<W,F> as serde::ser::Serializer>::serialize_unit_variant(
                 a2,
                 aOnlyright_0,
                 9LL);
      break;
    case 2:
      result = <&mut serde_json::ser::Serializer<W,F> as serde::ser::Serializer>::serialize_unit_variant(a2, aBoth, 4LL);
      break;
    case 3:
      result = <&mut serde_json::ser::Serializer<W,F> as serde::ser::Serializer>::serialize_unit_variant(
                 a2,
                 aNone_1,
                 4LL);
      break;
  }
  return result;
}