__int64 __fastcall alacritty_terminal::grid::_::<impl serde::ser::Serialize for alacritty_terminal::grid::Grid<T>>::serialize(
        _QWORD *a1,
        __int64 a2)
{
  __int64 result; // rax
  _QWORD *v3; // [rsp+8h] [rbp-20h] BYREF
  unsigned int v4; // [rsp+10h] [rbp-18h]

  <&mut serde_json::ser::Serializer<W,F> as serde::ser::Serializer>::serialize_struct(&v3, a2, 5LL);
  result = (__int64)v3;
  if ( (_BYTE)v4 != 3 )
  {
    result = <serde_json::ser::Compound<W,F> as serde::ser::SerializeStruct>::serialize_field(&v3, a1);
    if ( !result )
    {
      <serde_json::ser::Compound<W,F> as serde::ser::SerializeStruct>::serialize_field(&v3, aColumns, 7LL, a1[18]);
      <serde_json::ser::Compound<W,F> as serde::ser::SerializeStruct>::serialize_field(&v3, aLines_0, 5LL, a1[19]);
      <serde_json::ser::Compound<W,F> as serde::ser::SerializeStruct>::serialize_field(
        &v3,
        aDisplayOffset,
        14LL,
        a1[20]);
      <serde_json::ser::Compound<W,F> as serde::ser::SerializeStruct>::serialize_field(
        &v3,
        aMaxScrollLimit,
        16LL,
        a1[21]);
      <serde_json::ser::Compound<W,F> as serde::ser::SerializeStruct>::end(*v3, v4);
      return 0LL;
    }
  }
  return result;
}