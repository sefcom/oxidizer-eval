_QWORD *__fastcall alacritty::config::cursor::_::<impl serde::ser::Serialize for alacritty::config::cursor::ConfigCursorStyle>::serialize(
        unsigned __int8 a1,
        unsigned __int8 a2,
        _QWORD *a3)
{
  _QWORD *result; // rax
  _QWORD *v4; // [rsp+0h] [rbp-38h] BYREF
  unsigned int v5; // [rsp+8h] [rbp-30h]
  _QWORD *v6; // [rsp+10h] [rbp-28h] BYREF
  char v7; // [rsp+18h] [rbp-20h]

  if ( a1 == 3 )
  {
    alacritty::config::cursor::_::<impl serde::ser::Serialize for alacritty::config::cursor::CursorShape>::serialize(
      a2,
      *a3);
  }
  else
  {
    <&mut serde_json::ser::Serializer<W,F> as serde::ser::Serializer>::serialize_struct(&v6, a3, 2LL);
    result = v6;
    if ( v7 == 3 )
      return result;
    v4 = v6;
    LOBYTE(v5) = v7;
    <serde_json::ser::Compound<W,F> as serde::ser::SerializeStruct>::serialize_field(&v4, a1);
    <serde_json::ser::Compound<W,F> as serde::ser::SerializeStruct>::serialize_field(&v4, a2);
    <serde_json::ser::Compound<W,F> as serde::ser::SerializeStruct>::end(*v4, v5);
  }
  return 0LL;
}