__int64 __fastcall alacritty::config::ui_config::_::<impl serde::ser::Serialize for alacritty::config::ui_config::Hint>::serialize(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax
  _QWORD *v3; // [rsp+8h] [rbp-20h] BYREF
  unsigned int v4; // [rsp+10h] [rbp-18h]

  <&mut serde_json::ser::Serializer<W,F> as serde::ser::Serializer>::serialize_map(&v3, a2, 0LL);
  result = (__int64)v3;
  if ( (_BYTE)v4 != 3 )
  {
    alacritty::config::ui_config::_::<impl serde::ser::Serialize for alacritty::config::ui_config::HintContent>::serialize(
      *(_QWORD *)(a1 + 192),
      *(unsigned int *)(a1 + 200),
      &v3);
    result = alacritty::config::ui_config::_::<impl serde::ser::Serialize for alacritty::config::ui_config::HintAction>::serialize(
               a1,
               (__int64)&v3);
    if ( !result )
    {
      serde::ser::SerializeMap::serialize_entry(&v3, aPostProcessing, 15LL, *(unsigned int *)(a1 + 216));
      serde::ser::SerializeMap::serialize_entry(&v3, aPersist, 7LL, *(unsigned __int8 *)(a1 + 217));
      result = serde::ser::SerializeMap::serialize_entry(&v3, *(unsigned int *)(a1 + 212));
      if ( !result )
      {
        <serde_json::ser::Compound<W,F> as serde::ser::SerializeMap>::end(*v3, v4);
        return 0LL;
      }
    }
  }
  return result;
}