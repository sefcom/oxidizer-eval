_QWORD *__fastcall alacritty::config::color::_::<impl serde::ser::Serialize for alacritty::config::color::PrimaryColors>::serialize(
        __int64 a1,
        __int64 a2)
{
  _QWORD *result; // rax
  _QWORD *v3; // [rsp+8h] [rbp-20h] BYREF
  unsigned int v4; // [rsp+10h] [rbp-18h]

  <&mut serde_json::ser::Serializer<W,F> as serde::ser::Serializer>::serialize_struct(&v3, a2, 4LL);
  result = v3;
  if ( (_BYTE)v4 != 3 )
  {
    <serde_json::ser::Compound<W,F> as serde::ser::SerializeStruct>::serialize_field(&v3, aForeground_0, 10LL, a1 + 8);
    <serde_json::ser::Compound<W,F> as serde::ser::SerializeStruct>::serialize_field(&v3, aBackground_0, 10LL, a1 + 11);
    <serde_json::ser::Compound<W,F> as serde::ser::SerializeStruct>::serialize_field(&v3, aBrightForegrou, 17LL, a1);
    <serde_json::ser::Compound<W,F> as serde::ser::SerializeStruct>::serialize_field(&v3, aDimForeground, 14LL, a1 + 4);
    <serde_json::ser::Compound<W,F> as serde::ser::SerializeStruct>::end(*v3, v4);
    return 0LL;
  }
  return result;
}