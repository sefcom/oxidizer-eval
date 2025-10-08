__int64 __fastcall forc_debug::server::handlers::<impl forc_debug::server::DapServer>::handle_launch(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 result; // rax
  __int128 v4; // [rsp+8h] [rbp-50h] BYREF
  __int64 v5; // [rsp+18h] [rbp-40h]
  _BYTE v6[56]; // [rsp+20h] [rbp-38h] BYREF

  *(_BYTE *)(a2 + 2428) = 0;
  if ( *(_BYTE *)(a3 + 32) == 6 )
    goto LABEL_4;
  <serde_json::value::Value as core::clone::Clone>::clone(v6, a3 + 32);
  serde_json::value::de::<impl serde::de::Deserializer for serde_json::value::Value>::deserialize_struct(&v4, v6);
  if ( __OFSUB__(0LL, (_QWORD)v4) )
  {
    result = core::ptr::drop_in_place<core::result::Result<forc_debug::server::AdditionalData,serde_json::error::Error>>(&v4);
LABEL_4:
    *(_BYTE *)(a1 + 16) = 43;
    *(_QWORD *)a1 = 1LL;
    *(_QWORD *)(a1 + 8) = 1LL;
    return result;
  }
  core::ptr::drop_in_place<std::path::PathBuf>(*(_QWORD *)(a2 + 1600), *(_QWORD *)(a2 + 1608));
  result = v5;
  *(_QWORD *)(a2 + 1616) = v5;
  *(_OWORD *)(a2 + 1600) = v4;
  *(_BYTE *)(a1 + 16) = 51;
  *(_QWORD *)(a1 + 24) = 0x800000000000000DLL;
  *(_QWORD *)a1 = 0LL;
  return result;
}