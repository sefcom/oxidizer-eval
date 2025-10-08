__int64 __fastcall alacritty::config::scrolling::_::<impl serde::ser::Serialize for alacritty::config::scrolling::ScrollingHistory>::serialize(
        unsigned int a1,
        __int64 a2)
{
  return <&mut serde_json::ser::Serializer<W,F> as serde::ser::Serializer>::serialize_newtype_struct(a2, a1);
}