_QWORD *__fastcall alacritty::config::font::_::<impl serde::ser::Serialize for alacritty::config::font::FontDescription>::serialize(
        __int64 a1,
        __int64 a2)
{
  _QWORD *result; // rax
  _QWORD *v3; // [rsp+8h] [rbp-20h] BYREF
  unsigned int v4; // [rsp+10h] [rbp-18h]

  <&mut serde_json::ser::Serializer<W,F> as serde::ser::Serializer>::serialize_struct(&v3, a2, 2LL);
  result = v3;
  if ( (_BYTE)v4 != 3 )
  {
    <serde_json::ser::Compound<W,F> as serde::ser::SerializeStruct>::serialize_field(
      &v3,
      aFamily_0,
      6LL,
      *(_QWORD *)(a1 + 8),
      *(_QWORD *)(a1 + 16));
    <serde_json::ser::Compound<W,F> as serde::ser::SerializeStruct>::serialize_field(&v3, aStyle_0, 5LL, a1 + 24);
    <serde_json::ser::Compound<W,F> as serde::ser::SerializeStruct>::end(*v3, v4);
    return 0LL;
  }
  return result;
}