__int64 __fastcall alacritty::config::window::_::<impl serde::ser::Serialize for alacritty::config::window::WindowConfig>::serialize(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax
  _QWORD *v3; // [rsp+8h] [rbp-20h] BYREF
  unsigned int v4; // [rsp+10h] [rbp-18h]

  <&mut serde_json::ser::Serializer<W,F> as serde::ser::Serializer>::serialize_struct(&v3, a2, 14LL);
  result = (__int64)v3;
  if ( (_BYTE)v4 != 3 )
  {
    result = <serde_json::ser::Compound<W,F> as serde::ser::SerializeStruct>::serialize_field(&v3, a1 + 96);
    if ( !result )
    {
      <serde_json::ser::Compound<W,F> as serde::ser::SerializeStruct>::serialize_field(
        &v3,
        *(unsigned __int8 *)(a1 + 122));
      <serde_json::ser::Compound<W,F> as serde::ser::SerializeStruct>::serialize_field(
        &v3,
        *(unsigned __int8 *)(a1 + 123));
      <serde_json::ser::Compound<W,F> as serde::ser::SerializeStruct>::serialize_field(
        &v3,
        aDynamicPadding,
        15LL,
        *(unsigned int *)(a1 + 116));
      <serde_json::ser::Compound<W,F> as serde::ser::SerializeStruct>::serialize_field(
        &v3,
        aDynamicTitle,
        13LL,
        *(unsigned __int8 *)(a1 + 117));
      result = <serde_json::ser::Compound<W,F> as serde::ser::SerializeStruct>::serialize_field(&v3, a1);
      if ( !result )
      {
        <serde_json::ser::Compound<W,F> as serde::ser::SerializeStruct>::serialize_field(
          &v3,
          aOpacity,
          7LL,
          *(float *)(a1 + 108));
        <serde_json::ser::Compound<W,F> as serde::ser::SerializeStruct>::serialize_field(
          &v3,
          aBlur,
          4LL,
          *(unsigned __int8 *)(a1 + 118));
        <serde_json::ser::Compound<W,F> as serde::ser::SerializeStruct>::serialize_field(
          &v3,
          *(unsigned int *)(a1 + 124));
        <serde_json::ser::Compound<W,F> as serde::ser::SerializeStruct>::serialize_field(
          &v3,
          aResizeIncremen,
          17LL,
          *(unsigned __int8 *)(a1 + 119));
        result = <serde_json::ser::Compound<W,F> as serde::ser::SerializeStruct>::serialize_field(
                   &v3,
                   *(unsigned int *)(a1 + 112),
                   *(unsigned __int16 *)(a1 + 114));
        if ( !result )
        {
          result = <serde_json::ser::Compound<W,F> as serde::ser::SerializeStruct>::serialize_field(
                     &v3,
                     *(_QWORD *)(a1 + 80),
                     *(_QWORD *)(a1 + 88));
          if ( !result )
          {
            <serde_json::ser::Compound<W,F> as serde::ser::SerializeStruct>::serialize_field(
              &v3,
              *(unsigned __int8 *)(a1 + 121));
            <serde_json::ser::Compound<W,F> as serde::ser::SerializeStruct>::serialize_field(
              &v3,
              *(unsigned int *)(a1 + 120));
            <serde_json::ser::Compound<W,F> as serde::ser::SerializeStruct>::end(*v3, v4);
            return 0LL;
          }
        }
      }
    }
  }
  return result;
}