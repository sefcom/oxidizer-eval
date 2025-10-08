__int64 __fastcall alacritty::cli::_::<impl serde::ser::Serialize for alacritty::cli::TerminalOptions>::serialize(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax
  _QWORD *v3; // [rsp+8h] [rbp-20h] BYREF
  unsigned int v4; // [rsp+10h] [rbp-18h]

  <&mut serde_json::ser::Serializer<W,F> as serde::ser::Serializer>::serialize_struct(&v3, a2, 3LL);
  result = (__int64)v3;
  if ( (_BYTE)v4 != 3 )
  {
    result = <serde_json::ser::Compound<W,F> as serde::ser::SerializeStruct>::serialize_field(&v3, a1 + 24);
    if ( !result )
    {
      <serde_json::ser::Compound<W,F> as serde::ser::SerializeStruct>::serialize_field(
        &v3,
        "holdcopy\x1B[1mbool[",
        4LL,
        *(unsigned int *)(a1 + 48));
      result = <serde_json::ser::Compound<W,F> as serde::ser::SerializeStruct>::serialize_field(
                 &v3,
                 aCommand,
                 7LL,
                 *(_QWORD *)(a1 + 8),
                 *(_QWORD *)(a1 + 16));
      if ( !result )
      {
        <serde_json::ser::Compound<W,F> as serde::ser::SerializeStruct>::end(*v3, v4);
        return 0LL;
      }
    }
  }
  return result;
}