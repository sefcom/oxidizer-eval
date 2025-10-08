__int64 __fastcall just::dependency::_::<impl serde_core::ser::Serialize for just::dependency::Dependency>::serialize(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // [rsp+0h] [rbp-18h] BYREF
  unsigned int v4; // [rsp+8h] [rbp-10h]

  <&mut serde_json::ser::Serializer<W,F> as serde_core::ser::Serializer>::serialize_struct(&v3, a2, 2LL);
  result = v3;
  if ( (_BYTE)v4 != 3 )
  {
    result = <serde_json::ser::Compound<W,F> as serde_core::ser::SerializeStruct>::serialize_field(
               &v3,
               *(_QWORD *)(a1 + 8),
               *(_QWORD *)(a1 + 16));
    if ( !result )
    {
      result = <serde_json::ser::Compound<W,F> as serde_core::ser::SerializeStruct>::serialize_field(&v3, a1 + 24);
      if ( !result )
        return <serde_json::ser::Compound<W,F> as serde_core::ser::SerializeStruct>::end(v3, v4);
    }
  }
  return result;
}