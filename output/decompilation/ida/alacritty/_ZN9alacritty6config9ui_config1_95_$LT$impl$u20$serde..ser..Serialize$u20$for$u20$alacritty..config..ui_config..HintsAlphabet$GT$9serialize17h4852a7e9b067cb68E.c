__int64 __fastcall alacritty::config::ui_config::_::<impl serde::ser::Serialize for alacritty::config::ui_config::HintsAlphabet>::serialize(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  return <&mut serde_json::ser::Serializer<W,F> as serde::ser::Serializer>::serialize_some(a3, a1, a2);
}