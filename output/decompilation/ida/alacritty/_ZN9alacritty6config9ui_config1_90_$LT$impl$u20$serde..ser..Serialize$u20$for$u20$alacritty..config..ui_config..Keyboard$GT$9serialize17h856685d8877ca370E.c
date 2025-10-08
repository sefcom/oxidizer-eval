_QWORD *__fastcall alacritty::config::ui_config::_::<impl serde::ser::Serialize for alacritty::config::ui_config::Keyboard>::serialize(
        __int64 a1)
{
  _QWORD *result; // rax
  _QWORD *v2; // [rsp+8h] [rbp-10h] BYREF
  unsigned __int8 v3; // [rsp+10h] [rbp-8h]

  <&mut serde_json::ser::Serializer<W,F> as serde::ser::Serializer>::serialize_struct(&v2, a1, 0LL);
  result = v2;
  if ( v3 != 3 )
  {
    <serde_json::ser::Compound<W,F> as serde::ser::SerializeStruct>::end(*v2, v3);
    return 0LL;
  }
  return result;
}