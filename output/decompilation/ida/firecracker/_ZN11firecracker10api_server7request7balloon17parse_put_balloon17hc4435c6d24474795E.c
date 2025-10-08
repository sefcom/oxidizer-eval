__int64 __fastcall firecracker::api_server::request::balloon::parse_put_balloon(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 result; // rax
  int v5; // [rsp+8h] [rbp-D0h] BYREF
  _BYTE v6[12]; // [rsp+Ch] [rbp-CCh]
  __int64 v7; // [rsp+18h] [rbp-C0h] BYREF
  __int64 v8; // [rsp+20h] [rbp-B8h]
  __int64 v9; // [rsp+28h] [rbp-B0h]

  v7 = a2;
  v8 = a3;
  v9 = 0LL;
  serde_json::de::from_trait(&v5, &v7);
  if ( v5 == 1 )
  {
    v3 = *(_QWORD *)&v6[4];
    *((_BYTE *)a1 + 8) = 4;
    a1[2] = v3;
    result = 1LL;
    *a1 = 1LL;
  }
  else
  {
    v8 = *(_QWORD *)v6;
    v7 = 25LL;
    firecracker::api_server::parsed_request::ParsedRequest::new_sync(a1 + 1, &v7);
    result = 0LL;
    *a1 = 0LL;
  }
  return result;
}