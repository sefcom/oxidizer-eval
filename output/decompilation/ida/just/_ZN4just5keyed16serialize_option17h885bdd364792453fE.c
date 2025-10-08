__int64 __fastcall just::keyed::serialize_option(__int64 a1, __int64 a2)
{
  if ( a1 )
    return just::keyed::serialize(a1, a2);
  else
    return <&mut serde_json::ser::Serializer<W,F> as serde_core::ser::Serializer>::serialize_none(a2);
}