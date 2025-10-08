_QWORD *__fastcall alacritty_terminal::term::test::_::<impl serde::ser::Serialize for alacritty_terminal::term::test::TermSize>::serialize(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  _QWORD *result; // rax
  _QWORD *v4; // [rsp+0h] [rbp-28h] BYREF
  unsigned int v5; // [rsp+8h] [rbp-20h]

  <&mut serde_json::ser::Serializer<W,F> as serde::ser::Serializer>::serialize_struct(&v4, a3, 2LL);
  result = v4;
  if ( (_BYTE)v5 != 3 )
  {
    <serde_json::ser::Compound<W,F> as serde::ser::SerializeStruct>::serialize_field(&v4, aColumns, 7LL, a1);
    <serde_json::ser::Compound<W,F> as serde::ser::SerializeStruct>::serialize_field(&v4, aScreenLines, 12LL, a2);
    <serde_json::ser::Compound<W,F> as serde::ser::SerializeStruct>::end(*v4, v5);
    return 0LL;
  }
  return result;
}