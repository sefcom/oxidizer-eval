__int64 __fastcall alacritty::cli::_::<impl serde::ser::Serialize for alacritty::cli::WindowOptions>::serialize(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax
  _QWORD *v3; // [rsp+8h] [rbp-20h] BYREF
  unsigned int v4; // [rsp+10h] [rbp-18h]

  <&mut serde_json::ser::Serializer<W,F> as serde::ser::Serializer>::serialize_struct(&v3, a2, 4LL);
  result = (__int64)v3;
  if ( (_BYTE)v4 != 3 )
  {
    result = <serde_json::ser::Compound<W,F> as serde::ser::SerializeStruct>::serialize_field(&v3, a1);
    if ( !result )
    {
      result = <serde_json::ser::Compound<W,F> as serde::ser::SerializeStruct>::serialize_field(&v3, a1 + 80);
      if ( !result )
      {
        <serde_json::ser::Compound<W,F> as serde::ser::SerializeStruct>::serialize_field(
          &v3,
          aActivationToke,
          16LL,
          a1 + 152);
        result = <serde_json::ser::Compound<W,F> as serde::ser::SerializeStruct>::serialize_field(
                   &v3,
                   aOption,
                   6LL,
                   *(_QWORD *)(a1 + 64),
                   *(_QWORD *)(a1 + 72));
        if ( !result )
        {
          <serde_json::ser::Compound<W,F> as serde::ser::SerializeStruct>::end(*v3, v4);
          return 0LL;
        }
      }
    }
  }
  return result;
}