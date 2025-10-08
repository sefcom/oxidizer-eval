unsigned __int64 __fastcall firecracker::api_server::request::actions::parse_put_actions(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v5; // r12
  unsigned __int64 result; // rax
  _QWORD *v7; // rdi
  char v8; // [rsp+0h] [rbp-F8h] BYREF
  char v9; // [rsp+1h] [rbp-F7h]
  unsigned __int64 v10; // [rsp+8h] [rbp-F0h]
  _BYTE v11[16]; // [rsp+10h] [rbp-E8h] BYREF
  _QWORD v12[27]; // [rsp+20h] [rbp-D8h] BYREF

  v5 = 1LL;
  <vmm::logger::metrics::SharedIncMetric as vmm::logger::metrics::IncMetric>::add(
    (char *)&vmm::logger::metrics::METRICS + 256,
    1LL);
  v12[0] = a2;
  v12[1] = a3;
  v12[2] = 0LL;
  serde_json::de::from_trait(v11, v12);
  core::result::Result<T,E>::inspect_err(&v8, v11);
  if ( v8 == 1 )
  {
    result = v10;
    *((_BYTE *)a1 + 8) = 4;
    a1[2] = result;
  }
  else
  {
    v7 = a1 + 1;
    if ( v9 )
    {
      if ( v9 == 1 )
        v12[0] = 29LL;
      else
        v12[0] = 30LL;
    }
    else
    {
      v12[0] = 16LL;
    }
    result = firecracker::api_server::parsed_request::ParsedRequest::new_sync(v7, v12);
    v5 = 0LL;
  }
  *a1 = v5;
  return result;
}