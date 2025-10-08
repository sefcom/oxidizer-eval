_QWORD *__fastcall alacritty::config::debug::_::<impl serde::ser::Serialize for alacritty::config::debug::Debug>::serialize(
        __int64 a1,
        __int64 a2)
{
  _QWORD *result; // rax
  _QWORD *v3; // [rsp+8h] [rbp-20h] BYREF
  unsigned int v4; // [rsp+10h] [rbp-18h]

  <&mut serde_json::ser::Serializer<W,F> as serde::ser::Serializer>::serialize_struct(&v3, a2, 7LL);
  result = v3;
  if ( (_BYTE)v4 != 3 )
  {
    <serde_json::ser::Compound<W,F> as serde::ser::SerializeStruct>::serialize_field(&v3, *(_QWORD *)a1);
    <serde_json::ser::Compound<W,F> as serde::ser::SerializeStruct>::serialize_field(
      &v3,
      aPrintEvents,
      12LL,
      *(unsigned int *)(a1 + 8));
    <serde_json::ser::Compound<W,F> as serde::ser::SerializeStruct>::serialize_field(
      &v3,
      aPersistentLogg,
      18LL,
      *(unsigned __int8 *)(a1 + 9));
    <serde_json::ser::Compound<W,F> as serde::ser::SerializeStruct>::serialize_field(
      &v3,
      aRenderTimer,
      12LL,
      *(unsigned __int8 *)(a1 + 10));
    <serde_json::ser::Compound<W,F> as serde::ser::SerializeStruct>::serialize_field(
      &v3,
      aHighlightDamag,
      16LL,
      *(unsigned __int8 *)(a1 + 11));
    <serde_json::ser::Compound<W,F> as serde::ser::SerializeStruct>::serialize_field(&v3, *(unsigned __int8 *)(a1 + 14));
    <serde_json::ser::Compound<W,F> as serde::ser::SerializeStruct>::serialize_field(
      &v3,
      aPreferEgl,
      10LL,
      *(unsigned int *)(a1 + 12));
    <serde_json::ser::Compound<W,F> as serde::ser::SerializeStruct>::end(*v3, v4);
    return 0LL;
  }
  return result;
}