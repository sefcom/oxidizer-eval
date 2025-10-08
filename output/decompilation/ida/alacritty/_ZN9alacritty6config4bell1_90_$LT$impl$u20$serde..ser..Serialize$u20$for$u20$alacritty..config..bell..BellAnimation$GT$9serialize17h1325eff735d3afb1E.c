__int64 __fastcall alacritty::config::bell::_::<impl serde::ser::Serialize for alacritty::config::bell::BellAnimation>::serialize(
        char a1,
        __int64 a2)
{
  __int64 result; // rax

  switch ( a1 )
  {
    case 0:
      result = <&mut serde_json::ser::Serializer<W,F> as serde::ser::Serializer>::serialize_unit_variant(a2, aEase, 4LL);
      break;
    case 1:
      result = <&mut serde_json::ser::Serializer<W,F> as serde::ser::Serializer>::serialize_unit_variant(
                 a2,
                 aEaseout_0,
                 7LL);
      break;
    case 2:
      result = <&mut serde_json::ser::Serializer<W,F> as serde::ser::Serializer>::serialize_unit_variant(
                 a2,
                 aEaseoutsine_0,
                 11LL);
      break;
    case 3:
      result = <&mut serde_json::ser::Serializer<W,F> as serde::ser::Serializer>::serialize_unit_variant(
                 a2,
                 aEaseoutquad_0,
                 11LL);
      break;
    case 4:
      result = <&mut serde_json::ser::Serializer<W,F> as serde::ser::Serializer>::serialize_unit_variant(
                 a2,
                 aEaseoutcubic_0,
                 12LL);
      break;
    case 5:
      result = <&mut serde_json::ser::Serializer<W,F> as serde::ser::Serializer>::serialize_unit_variant(
                 a2,
                 aEaseoutquart_0,
                 12LL);
      break;
    case 6:
      result = <&mut serde_json::ser::Serializer<W,F> as serde::ser::Serializer>::serialize_unit_variant(
                 a2,
                 aEaseoutquint_0,
                 12LL);
      break;
    case 7:
      result = <&mut serde_json::ser::Serializer<W,F> as serde::ser::Serializer>::serialize_unit_variant(
                 a2,
                 aEaseoutexpo_0,
                 11LL);
      break;
    case 8:
      result = <&mut serde_json::ser::Serializer<W,F> as serde::ser::Serializer>::serialize_unit_variant(
                 a2,
                 aEaseoutcirc_0,
                 11LL);
      break;
    case 9:
      result = <&mut serde_json::ser::Serializer<W,F> as serde::ser::Serializer>::serialize_unit_variant(
                 a2,
                 aLinear_0,
                 6LL);
      break;
  }
  return result;
}