__int64 __fastcall firecracker::api_server::request::snapshot::parse_patch_vm_state(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 result; // rax
  _QWORD *v6; // rdi
  _BYTE v7[8]; // [rsp+8h] [rbp-D0h] BYREF
  __int64 v8; // [rsp+10h] [rbp-C8h]
  _QWORD v9[24]; // [rsp+18h] [rbp-C0h] BYREF

  v9[0] = a2;
  v9[1] = a3;
  v9[2] = 0LL;
  serde_json::de::from_trait(v7, v9);
  if ( v7[0] == 1 )
  {
    v4 = v8;
    *((_BYTE *)a1 + 8) = 4;
    a1[2] = v4;
    result = 1LL;
    *a1 = 1LL;
  }
  else
  {
    v6 = a1 + 1;
    if ( v7[1] == 1 )
      v9[0] = 24LL;
    else
      v9[0] = 21LL;
    firecracker::api_server::parsed_request::ParsedRequest::new_sync(v6, v9);
    result = 0LL;
    *a1 = 0LL;
  }
  return result;
}