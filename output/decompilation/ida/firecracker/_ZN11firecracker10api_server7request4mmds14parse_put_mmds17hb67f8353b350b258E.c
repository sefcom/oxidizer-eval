unsigned __int64 __fastcall firecracker::api_server::request::mmds::parse_put_mmds(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5)
{
  unsigned __int64 result; // rax
  __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  __int64 v11; // [rsp+8h] [rbp-150h] BYREF
  unsigned __int64 v12; // [rsp+10h] [rbp-148h]
  __int128 v13; // [rsp+18h] [rbp-140h]
  _QWORD v14[3]; // [rsp+28h] [rbp-130h] BYREF
  _QWORD v15[4]; // [rsp+40h] [rbp-118h] BYREF
  __int128 v16; // [rsp+60h] [rbp-F8h] BYREF
  __int64 v17; // [rsp+70h] [rbp-E8h]
  _BYTE v18[200]; // [rsp+78h] [rbp-E0h] BYREF

  <vmm::logger::metrics::SharedIncMetric as vmm::logger::metrics::IncMetric>::add(
    (char *)&vmm::logger::metrics::METRICS + 512,
    1LL);
  if ( a4 )
  {
    if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a4, a5, aConfig_0, 6LL) )
    {
      return firecracker::api_server::request::mmds::parse_put_mmds_config(a1, a2, a3);
    }
    else
    {
      v11 = a4;
      v12 = a5;
      <vmm::logger::metrics::SharedIncMetric as vmm::logger::metrics::IncMetric>::add(
        (char *)&vmm::logger::metrics::METRICS + 528,
        1LL);
      v15[0] = &v11;
      v15[1] = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)v18 = &off_3A3850;
      *(_QWORD *)&v18[8] = 2LL;
      *(_QWORD *)&v18[16] = v15;
      *(_OWORD *)&v18[24] = 1uLL;
      core::option::Option<T>::map_or_else(&v16, 0LL, v9, v18);
      *(_OWORD *)&v18[6] = v16;
      *(_QWORD *)&v18[22] = v17;
      *(_WORD *)(a1 + 8) = 769;
      v10 = *(_QWORD *)&v18[22];
      result = *(_QWORD *)&v18[14];
      *(_OWORD *)(a1 + 10) = *(_OWORD *)v18;
      *(_OWORD *)(a1 + 24) = __PAIR128__(v10, result);
      *(_QWORD *)a1 = 1LL;
    }
  }
  else
  {
    v14[0] = a2;
    v14[1] = a3;
    v14[2] = 0LL;
    serde_json::de::from_trait(v15, v14);
    core::result::Result<T,E>::inspect_err(&v11, v15);
    if ( (_BYTE)v11 == 6 )
    {
      result = v12;
      *(_BYTE *)(a1 + 8) = 4;
      *(_QWORD *)(a1 + 16) = result;
      *(_QWORD *)a1 = 1LL;
    }
    else
    {
      *(_DWORD *)&v18[12] = HIDWORD(v11);
      *(_DWORD *)&v18[9] = *(_DWORD *)((char *)&v11 + 1);
      *(_OWORD *)&v18[24] = v13;
      v18[8] = v11;
      *(_QWORD *)&v18[16] = v12;
      *(_QWORD *)v18 = 22LL;
      result = firecracker::api_server::parsed_request::ParsedRequest::new_sync((_QWORD *)(a1 + 8), v18);
      *(_QWORD *)a1 = 0LL;
    }
  }
  return result;
}