__int64 __fastcall alacritty_terminal::term::cell::_::<impl serde::ser::Serialize for alacritty_terminal::term::cell::Hyperlink>::serialize(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax
  _QWORD *v3; // [rsp+0h] [rbp-18h] BYREF
  unsigned int v4; // [rsp+8h] [rbp-10h]

  <&mut serde_json::ser::Serializer<W,F> as serde::ser::Serializer>::serialize_struct(&v3, a2, 1LL);
  result = (__int64)v3;
  if ( (_BYTE)v4 != 3 )
  {
    result = <serde_json::ser::Compound<W,F> as serde::ser::SerializeStruct>::serialize_field(&v3, a1);
    if ( !result )
    {
      <serde_json::ser::Compound<W,F> as serde::ser::SerializeStruct>::end(*v3, v4);
      return 0LL;
    }
  }
  return result;
}