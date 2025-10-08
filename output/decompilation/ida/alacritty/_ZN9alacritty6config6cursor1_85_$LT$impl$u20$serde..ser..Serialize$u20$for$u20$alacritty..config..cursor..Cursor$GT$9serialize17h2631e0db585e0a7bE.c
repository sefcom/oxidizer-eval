__int64 __fastcall alacritty::config::cursor::_::<impl serde::ser::Serialize for alacritty::config::cursor::Cursor>::serialize(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax
  _QWORD *v3; // [rsp+8h] [rbp-20h] BYREF
  unsigned int v4; // [rsp+10h] [rbp-18h]

  <&mut serde_json::ser::Serializer<W,F> as serde::ser::Serializer>::serialize_struct(&v3, a2, 6LL);
  result = (__int64)v3;
  if ( (_BYTE)v4 != 3 )
  {
    result = <serde_json::ser::Compound<W,F> as serde::ser::SerializeStruct>::serialize_field(
               &v3,
               *(unsigned __int8 *)(a1 + 14),
               *(unsigned __int8 *)(a1 + 15));
    if ( !result )
    {
      result = <serde_json::ser::Compound<W,F> as serde::ser::SerializeStruct>::serialize_field(
                 &v3,
                 *(unsigned int *)(a1 + 12),
                 *(unsigned __int8 *)(a1 + 13));
      if ( !result )
      {
        <serde_json::ser::Compound<W,F> as serde::ser::SerializeStruct>::serialize_field(
          &v3,
          aUnfocusedHollo,
          16LL,
          *(unsigned __int8 *)(a1 + 17));
        <serde_json::ser::Compound<W,F> as serde::ser::SerializeStruct>::serialize_field(
          &v3,
          aThickness,
          9LL,
          *(float *)(a1 + 8));
        <serde_json::ser::Compound<W,F> as serde::ser::SerializeStruct>::serialize_field(&v3, *(_QWORD *)a1);
        <serde_json::ser::Compound<W,F> as serde::ser::SerializeStruct>::serialize_field(
          &v3,
          aBlinkTimeout,
          13LL,
          *(unsigned int *)(a1 + 16));
        <serde_json::ser::Compound<W,F> as serde::ser::SerializeStruct>::end(*v3, v4);
        return 0LL;
      }
    }
  }
  return result;
}