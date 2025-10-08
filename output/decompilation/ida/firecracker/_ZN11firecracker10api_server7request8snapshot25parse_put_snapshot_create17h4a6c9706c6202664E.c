__int64 __fastcall firecracker::api_server::request::snapshot::parse_put_snapshot_create(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rax
  __int64 result; // rax
  __int64 v5; // [rsp+0h] [rbp-F8h] BYREF
  __int64 v6; // [rsp+8h] [rbp-F0h]
  __int128 v7; // [rsp+10h] [rbp-E8h]
  __int128 v8; // [rsp+20h] [rbp-D8h]
  __int64 v9; // [rsp+30h] [rbp-C8h]
  __int64 v10; // [rsp+38h] [rbp-C0h] BYREF
  __int64 v11; // [rsp+40h] [rbp-B8h]
  __int64 v12; // [rsp+48h] [rbp-B0h]
  __int128 v13; // [rsp+50h] [rbp-A8h]
  __int128 v14; // [rsp+60h] [rbp-98h]
  __int64 v15; // [rsp+70h] [rbp-88h]

  v10 = a2;
  v11 = a3;
  v12 = 0LL;
  serde_json::de::from_trait(&v5, &v10);
  v3 = v6;
  if ( __OFSUB__(-v5, 1LL) )
  {
    *((_BYTE *)a1 + 8) = 4;
    a1[2] = v3;
    result = 1LL;
    *a1 = 1LL;
  }
  else
  {
    v15 = v9;
    v14 = v8;
    v13 = v7;
    v11 = v5;
    v12 = v6;
    v10 = 8LL;
    firecracker::api_server::parsed_request::ParsedRequest::new_sync(a1 + 1, &v10);
    result = 0LL;
    *a1 = 0LL;
  }
  return result;
}