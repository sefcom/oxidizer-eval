__int64 __fastcall firecracker::api_server::request::entropy::parse_put_entropy(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 result; // rax
  __int64 v5; // [rsp+8h] [rbp-100h] BYREF
  __int64 v6; // [rsp+10h] [rbp-F8h]
  __int128 v7; // [rsp+18h] [rbp-F0h]
  __int128 v8; // [rsp+28h] [rbp-E0h]
  __int128 v9; // [rsp+38h] [rbp-D0h]
  __int64 v10; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v11; // [rsp+50h] [rbp-B8h]
  __int64 v12; // [rsp+58h] [rbp-B0h]
  __int128 v13; // [rsp+60h] [rbp-A8h]
  __int128 v14; // [rsp+70h] [rbp-98h]
  __int128 v15; // [rsp+80h] [rbp-88h]

  v10 = a2;
  v11 = a3;
  v12 = 0LL;
  serde_json::de::from_trait(&v5, &v10);
  v3 = v6;
  if ( v5 == 4 )
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
    v10 = 28LL;
    firecracker::api_server::parsed_request::ParsedRequest::new_sync(a1 + 1, &v10);
    result = 0LL;
    *a1 = 0LL;
  }
  return result;
}