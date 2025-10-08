_QWORD *__fastcall alacritty::config::ui_config::_::<impl serde::ser::Serialize for alacritty::config::ui_config::HintMouse>::serialize(
        unsigned __int8 a1,
        __int64 a2)
{
  _QWORD *result; // rax
  _QWORD *v3; // [rsp+0h] [rbp-18h] BYREF
  unsigned int v4; // [rsp+8h] [rbp-10h]

  <&mut serde_json::ser::Serializer<W,F> as serde::ser::Serializer>::serialize_struct(&v3, a2, 1LL);
  result = v3;
  if ( (_BYTE)v4 != 3 )
  {
    <serde_json::ser::Compound<W,F> as serde::ser::SerializeStruct>::serialize_field(&v3, aEnabled_0, 7LL, a1);
    <serde_json::ser::Compound<W,F> as serde::ser::SerializeStruct>::end(*v3, v4);
    return 0LL;
  }
  return result;
}