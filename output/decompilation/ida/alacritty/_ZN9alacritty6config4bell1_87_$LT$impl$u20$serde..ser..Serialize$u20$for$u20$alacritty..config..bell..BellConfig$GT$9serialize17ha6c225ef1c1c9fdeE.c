__int64 __fastcall alacritty::config::bell::_::<impl serde::ser::Serialize for alacritty::config::bell::BellConfig>::serialize(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax
  _QWORD *v3; // [rsp+8h] [rbp-20h] BYREF
  unsigned int v4; // [rsp+10h] [rbp-18h]

  <&mut serde_json::ser::Serializer<W,F> as serde::ser::Serializer>::serialize_struct(&v3, a2, 4LL);
  result = (__int64)v3;
  if ( (_BYTE)v4 != 3 )
  {
    <serde_json::ser::Compound<W,F> as serde::ser::SerializeStruct>::serialize_field(&v3, *(unsigned __int8 *)(a1 + 50));
    result = <serde_json::ser::Compound<W,F> as serde::ser::SerializeStruct>::serialize_field(&v3, aCommand, 7LL, a1);
    if ( !result )
    {
      <serde_json::ser::Compound<W,F> as serde::ser::SerializeStruct>::serialize_field(&v3, aColor_1, 5LL, a1 + 51);
      <serde_json::ser::Compound<W,F> as serde::ser::SerializeStruct>::serialize_field(
        &v3,
        aDuration,
        8LL,
        *(unsigned int *)(a1 + 48));
      <serde_json::ser::Compound<W,F> as serde::ser::SerializeStruct>::end(*v3, v4);
      return 0LL;
    }
  }
  return result;
}