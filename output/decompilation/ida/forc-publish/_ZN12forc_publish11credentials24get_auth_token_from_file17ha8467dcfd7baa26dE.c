__int64 __fastcall forc_publish::credentials::get_auth_token_from_file(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  int v4; // ebp
  __int64 result; // rax
  __int64 v6; // rsi
  __int64 v7; // [rsp+8h] [rbp-F0h] BYREF
  __int128 v8; // [rsp+10h] [rbp-E8h]
  __int64 dest; // [rsp+20h] [rbp-D8h] BYREF
  __int128 v10; // [rsp+28h] [rbp-D0h]
  __int64 v11; // [rsp+38h] [rbp-C0h]

  v3 = *(_QWORD *)(a2 + 8);
  std::fs::metadata(&dest);
  v4 = dest;
  result = core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&dest, v3);
  if ( v4 == 2 )
    goto LABEL_2;
  std::fs::read_to_string(&dest, a2);
  result = dest;
  v6 = v10;
  if ( dest == 0x8000000000000000LL )
  {
    *(_BYTE *)a1 = 0;
    *(_QWORD *)(a1 + 8) = v6;
  }
  else
  {
    v7 = dest;
    v8 = v10;
    <toml::de::Deserializer as serde::de::Deserializer>::deserialize_struct(&dest);
    if ( (_DWORD)dest != 2 )
    {
      core::ptr::drop_in_place<alloc::string::String>(&v7, v6);
      result = core::ptr::drop_in_place<core::result::Result<forc_publish::credentials::Credentials,toml::de::Error>>(&dest);
LABEL_2:
      *(_QWORD *)(a1 + 8) = 0x8000000000000000LL;
      *(_BYTE *)a1 = 14;
      return result;
    }
    *(_QWORD *)(a1 + 24) = v11;
    *(_OWORD *)(a1 + 8) = v10;
    *(_BYTE *)a1 = 14;
    return core::ptr::drop_in_place<alloc::string::String>(&v7, v6);
  }
  return result;
}