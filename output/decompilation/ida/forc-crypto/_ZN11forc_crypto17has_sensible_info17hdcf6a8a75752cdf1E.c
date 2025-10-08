__int64 __fastcall forc_crypto::has_sensible_info(__int64 a1)
{
  __int64 v1; // rbx
  _BYTE v3[8]; // [rsp+0h] [rbp-48h] BYREF
  __int128 v4; // [rsp+8h] [rbp-40h]
  __int64 v5; // [rsp+18h] [rbp-30h]
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+30h] [rbp-18h]

  serde_json::value::to_value(v3, a1);
  LODWORD(v1) = 0;
  if ( v3[0] == 6 )
    goto LABEL_5;
  if ( v3[0] == 5 )
  {
    v6 = v4;
    v7 = v5;
    v1 = alloc::collections::btree::map::BTreeMap<K,V,A>::get(v4, *((_QWORD *)&v4 + 1));
    core::ptr::drop_in_place<serde_json::map::Map<alloc::string::String,serde_json::value::Value>>(&v6);
    LOBYTE(v1) = v1 != 0;
    if ( v3[0] == 5 )
      return (unsigned int)v1;
    if ( v3[0] == 6 )
    {
LABEL_5:
      core::ptr::drop_in_place<core::result::Result<serde_json::value::Value,serde_json::error::Error>>(v3);
      return (unsigned int)v1;
    }
  }
  core::ptr::drop_in_place<serde_json::value::Value>(v3);
  return (unsigned int)v1;
}