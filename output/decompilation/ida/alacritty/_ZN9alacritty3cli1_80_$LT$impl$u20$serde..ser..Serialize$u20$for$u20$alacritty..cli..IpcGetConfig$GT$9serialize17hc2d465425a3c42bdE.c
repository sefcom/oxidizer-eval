_QWORD *__fastcall alacritty::cli::_::<impl serde::ser::Serialize for alacritty::cli::IpcGetConfig>::serialize(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  _QWORD *result; // rax
  _QWORD *v8; // [rsp+8h] [rbp-30h] BYREF
  unsigned int v9; // [rsp+10h] [rbp-28h]

  <&mut serde_json::ser::Serializer<W,F> as serde::ser::Serializer>::serialize_struct(&v8, a5, 1LL);
  result = v8;
  if ( (_BYTE)v9 != 3 )
  {
    <serde_json::ser::Compound<W,F> as serde::ser::SerializeStruct>::serialize_field(&v8, a1, a2, a3, a4);
    <serde_json::ser::Compound<W,F> as serde::ser::SerializeStruct>::end(*v8, v9);
    return 0LL;
  }
  return result;
}