__int64 __fastcall just::parameter::_::<impl serde_core::ser::Serialize for just::parameter::Parameter>::serialize(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // [rsp+0h] [rbp-18h] BYREF
  unsigned int v4; // [rsp+8h] [rbp-10h]

  <&mut serde_json::ser::Serializer<W,F> as serde_core::ser::Serializer>::serialize_struct(&v3, a2, 4LL);
  result = v3;
  if ( (_BYTE)v4 != 3 )
  {
    result = <serde_json::ser::Compound<W,F> as serde_core::ser::SerializeStruct>::serialize_field(&v3, a1);
    if ( !result )
    {
      result = <serde_json::ser::Compound<W,F> as serde_core::ser::SerializeStruct>::serialize_field(
                 &v3,
                 aExport_0,
                 6LL,
                 *(unsigned int *)(a1 + 200));
      if ( !result )
      {
        result = <serde_json::ser::Compound<W,F> as serde_core::ser::SerializeStruct>::serialize_field(
                   &v3,
                   *(unsigned __int8 *)(a1 + 201));
        if ( !result )
        {
          result = <serde_json::ser::Compound<W,F> as serde_core::ser::SerializeStruct>::serialize_field(&v3, a1 + 128);
          if ( !result )
            return <serde_json::ser::Compound<W,F> as serde_core::ser::SerializeStruct>::end(v3, v4);
        }
      }
    }
  }
  return result;
}