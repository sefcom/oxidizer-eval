// attributes: thunk
__int64 __fastcall alacritty::cli::_::<impl serde::de::Deserialize for alacritty::cli::SocketMessage>::deserialize(
        void *a1)
{
  return <&mut serde_json::de::Deserializer<R> as serde::de::Deserializer>::deserialize_enum(a1);
}