__int64 __fastcall fuel_core_keygen::serialize_option_to_string(__int64 a1, _DWORD *a2)
{
  _BYTE v3[8]; // [rsp+8h] [rbp-20h] BYREF
  __int64 v4; // [rsp+10h] [rbp-18h]
  __int64 v5; // [rsp+18h] [rbp-10h]

  if ( *a2 != 1 )
    return <serde_json::value::ser::Serializer as serde::ser::Serializer>::serialize_none();
  <T as alloc::string::ToString>::to_string(v3, a2 + 2);
  <serde_json::value::ser::Serializer as serde::ser::Serializer>::serialize_str(a1, v4, v5);
  return core::ptr::drop_in_place<alloc::string::String>(v3);
}