__int64 __fastcall just::keyed::serialize(__int64 a1, __int64 a2)
{
  __int64 v2; // rax

  v2 = <alloc::sync::Arc<T> as just::keyed::Keyed>::key();
  return <&mut serde_json::ser::Serializer<W,F> as serde_core::ser::Serializer>::serialize_str(a2, v2);
}