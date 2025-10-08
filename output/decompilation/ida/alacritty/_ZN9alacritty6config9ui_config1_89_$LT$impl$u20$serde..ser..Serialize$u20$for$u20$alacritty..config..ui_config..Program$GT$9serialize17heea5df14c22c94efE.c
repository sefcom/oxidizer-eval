__int64 __fastcall alacritty::config::ui_config::_::<impl serde::ser::Serialize for alacritty::config::ui_config::Program>::serialize(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 result; // rax
  _QWORD *v3; // [rsp+8h] [rbp-30h] BYREF
  unsigned int v4; // [rsp+10h] [rbp-28h]
  _QWORD *v5; // [rsp+18h] [rbp-20h] BYREF
  char v6; // [rsp+20h] [rbp-18h]

  if ( __OFSUB__(0LL, *a1) )
  {
    <&mut serde_json::ser::Serializer<W,F> as serde::ser::Serializer>::serialize_str(*a2, a1[2], a1[3]);
    return 0LL;
  }
  <&mut serde_json::ser::Serializer<W,F> as serde::ser::Serializer>::serialize_struct(&v5, a2, 2LL);
  result = (__int64)v5;
  if ( v6 != 3 )
  {
    v3 = v5;
    LOBYTE(v4) = v6;
    <serde_json::ser::Compound<W,F> as serde::ser::SerializeStruct>::serialize_field(&v3, aProgram, 7LL, a1[1], a1[2]);
    result = <serde_json::ser::Compound<W,F> as serde::ser::SerializeStruct>::serialize_field(
               &v3,
               "args\n```.inf(",
               4LL,
               a1[4],
               a1[5]);
    if ( !result )
    {
      <serde_json::ser::Compound<W,F> as serde::ser::SerializeStruct>::end(*v3, v4);
      return 0LL;
    }
  }
  return result;
}