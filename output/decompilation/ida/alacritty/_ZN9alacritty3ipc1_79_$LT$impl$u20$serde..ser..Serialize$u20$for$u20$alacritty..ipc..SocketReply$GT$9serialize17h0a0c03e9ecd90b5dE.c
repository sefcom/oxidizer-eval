__int64 __fastcall alacritty::ipc::_::<impl serde::ser::Serialize for alacritty::ipc::SocketReply>::serialize(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  return <&mut serde_json::ser::Serializer<W,F> as serde::ser::Serializer>::serialize_newtype_variant(a3, a1, a2);
}