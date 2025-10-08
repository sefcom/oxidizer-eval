__int64 __fastcall alacritty_terminal::term::cell::_::<impl serde::ser::Serialize for alacritty_terminal::term::cell::Cell>::serialize(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax
  _QWORD *v3; // [rsp+8h] [rbp-20h] BYREF
  unsigned int v4; // [rsp+10h] [rbp-18h]

  <&mut serde_json::ser::Serializer<W,F> as serde::ser::Serializer>::serialize_struct(&v3, a2, 5LL);
  result = (__int64)v3;
  if ( (_BYTE)v4 != 3 )
  {
    <serde_json::ser::Compound<W,F> as serde::ser::SerializeStruct>::serialize_field(&v3, *(unsigned int *)(a1 + 16));
    result = <serde_json::ser::Compound<W,F> as serde::ser::SerializeStruct>::serialize_field(&v3, &unk_F9FB4, a1 + 8);
    if ( !result )
    {
      result = <serde_json::ser::Compound<W,F> as serde::ser::SerializeStruct>::serialize_field(
                 &v3,
                 &unk_F9FB6,
                 a1 + 12);
      if ( !result )
      {
        result = <serde_json::ser::Compound<W,F> as serde::ser::SerializeStruct>::serialize_field(
                   &v3,
                   *(unsigned int *)(a1 + 20));
        if ( !result )
        {
          result = <serde_json::ser::Compound<W,F> as serde::ser::SerializeStruct>::serialize_field(&v3, *(_QWORD *)a1);
          if ( !result )
          {
            <serde_json::ser::Compound<W,F> as serde::ser::SerializeStruct>::end(*v3, v4);
            return 0LL;
          }
        }
      }
    }
  }
  return result;
}