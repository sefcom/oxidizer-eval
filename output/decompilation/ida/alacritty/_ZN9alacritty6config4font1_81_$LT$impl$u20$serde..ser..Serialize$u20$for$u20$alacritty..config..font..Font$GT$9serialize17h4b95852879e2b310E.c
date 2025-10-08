__int64 __fastcall alacritty::config::font::_::<impl serde::ser::Serialize for alacritty::config::font::Font>::serialize(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax
  _QWORD *v3; // [rsp+8h] [rbp-20h] BYREF
  unsigned int v4; // [rsp+10h] [rbp-18h]

  <&mut serde_json::ser::Serializer<W,F> as serde::ser::Serializer>::serialize_struct(&v3, a2, 9LL);
  result = (__int64)v3;
  if ( (_BYTE)v4 != 3 )
  {
    result = <serde_json::ser::Compound<W,F> as serde::ser::SerializeStruct>::serialize_field(
               &v3,
               aOffset_0,
               6LL,
               *(unsigned int *)(a1 + 196),
               *(unsigned __int8 *)(a1 + 197));
    if ( !result )
    {
      result = <serde_json::ser::Compound<W,F> as serde::ser::SerializeStruct>::serialize_field(
                 &v3,
                 aGlyphOffset,
                 12LL,
                 *(unsigned __int8 *)(a1 + 198),
                 *(unsigned __int8 *)(a1 + 199));
      if ( !result )
      {
        <serde_json::ser::Compound<W,F> as serde::ser::SerializeStruct>::serialize_field(
          &v3,
          aUseThinStrokes,
          16LL,
          *(unsigned int *)(a1 + 200));
        result = <serde_json::ser::Compound<W,F> as serde::ser::SerializeStruct>::serialize_field(&v3, a1);
        if ( !result )
        {
          result = <serde_json::ser::Compound<W,F> as serde::ser::SerializeStruct>::serialize_field(
                     &v3,
                     aBold_3,
                     4LL,
                     a1 + 48);
          if ( !result )
          {
            result = <serde_json::ser::Compound<W,F> as serde::ser::SerializeStruct>::serialize_field(
                       &v3,
                       aItalic_2,
                       6LL,
                       a1 + 96);
            if ( !result )
            {
              result = <serde_json::ser::Compound<W,F> as serde::ser::SerializeStruct>::serialize_field(
                         &v3,
                         aBoldItalic_1,
                         11LL,
                         a1 + 144);
              if ( !result )
              {
                <serde_json::ser::Compound<W,F> as serde::ser::SerializeStruct>::serialize_field(
                  &v3,
                  *(unsigned int *)(a1 + 192));
                <serde_json::ser::Compound<W,F> as serde::ser::SerializeStruct>::serialize_field(
                  &v3,
                  aBuiltinBoxDraw,
                  19LL,
                  *(unsigned __int8 *)(a1 + 201));
                <serde_json::ser::Compound<W,F> as serde::ser::SerializeStruct>::end(*v3, v4);
                return 0LL;
              }
            }
          }
        }
      }
    }
  }
  return result;
}