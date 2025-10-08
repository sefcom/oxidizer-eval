__int64 __fastcall alacritty::cli::_::<impl serde::ser::Serialize for alacritty::cli::SocketMessage>::serialize(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v2; // rdx

  v2 = 0LL;
  if ( *a1 < (signed __int64)0x8000000000000002LL )
    v2 = *a1 - 0x7FFFFFFFFFFFFFFFLL;
  if ( !v2 )
    return <&mut serde_json::ser::Serializer<W,F> as serde::ser::Serializer>::serialize_newtype_variant(a2, a1);
  if ( v2 == 1 )
    return <&mut serde_json::ser::Serializer<W,F> as serde::ser::Serializer>::serialize_newtype_variant(a2, a1 + 2);
  return <&mut serde_json::ser::Serializer<W,F> as serde::ser::Serializer>::serialize_newtype_variant(
           a2,
           a1[2],
           a1[3],
           a1[4],
           a1[5]);
}