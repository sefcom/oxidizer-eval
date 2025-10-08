__int64 __fastcall alacritty_terminal::grid::storage::_::<impl serde::ser::Serialize for alacritty_terminal::grid::storage::Storage<T>>::serialize(
        _QWORD *a1,
        __int64 a2)
{
  __int64 result; // rax
  _QWORD *v3; // [rsp+8h] [rbp-20h] BYREF
  unsigned int v4; // [rsp+10h] [rbp-18h]

  <&mut serde_json::ser::Serializer<W,F> as serde::ser::Serializer>::serialize_struct(&v3, a2, 4LL);
  result = (__int64)v3;
  if ( (_BYTE)v4 != 3 )
  {
    result = <serde_json::ser::Compound<W,F> as serde::ser::SerializeStruct>::serialize_field(&v3, a1[1], a1[2]);
    if ( !result )
    {
      <serde_json::ser::Compound<W,F> as serde::ser::SerializeStruct>::serialize_field(&v3, aZero_0, 4LL, a1[3]);
      <serde_json::ser::Compound<W,F> as serde::ser::SerializeStruct>::serialize_field(&v3, aVisibleLines, 13LL, a1[4]);
      <serde_json::ser::Compound<W,F> as serde::ser::SerializeStruct>::serialize_field(&v3, aLen, 3LL, a1[5]);
      <serde_json::ser::Compound<W,F> as serde::ser::SerializeStruct>::end(*v3, v4);
      return 0LL;
    }
  }
  return result;
}