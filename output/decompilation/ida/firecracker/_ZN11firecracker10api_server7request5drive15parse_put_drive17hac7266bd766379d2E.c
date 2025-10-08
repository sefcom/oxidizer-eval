unsigned __int64 __fastcall firecracker::api_server::request::drive::parse_put_drive(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  unsigned __int64 result; // rax
  __int64 v9; // r14
  __int64 v10; // r15
  __int64 v11; // r12
  int v12; // ecx
  __int64 v13; // rcx
  __int128 v14; // xmm0
  __int64 v15; // r14
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // [rsp+8h] [rbp-240h]
  _OWORD v22[11]; // [rsp+18h] [rbp-230h] BYREF
  _BYTE v23[168]; // [rsp+D0h] [rbp-178h] BYREF
  __int128 v24; // [rsp+178h] [rbp-D0h] BYREF
  _QWORD src[19]; // [rsp+188h] [rbp-C0h] BYREF

  <vmm::logger::metrics::SharedIncMetric as vmm::logger::metrics::IncMetric>::add(
    (char *)&vmm::logger::metrics::METRICS + 320,
    1LL);
  if ( a4 )
  {
    firecracker::api_server::parsed_request::checked_id((__int64)v22, a4, a5);
    result = LOBYTE(v22[0]);
    if ( LOBYTE(v22[0]) == 5 )
    {
      v9 = *((_QWORD *)&v22[0] + 1);
      v10 = *(_QWORD *)&v22[1];
      v21 = a3;
      serde_json::de::from_trait(v22);
      result = core::result::Result<T,E>::inspect_err(&v24, v22);
      v11 = *((_QWORD *)&v24 + 1);
      if ( (_QWORD)v24 == 4LL )
      {
        *(_BYTE *)(a1 + 8) = 4;
        *(_QWORD *)(a1 + 16) = v11;
        *(_QWORD *)a1 = 1LL;
      }
      else
      {
        memcpy(&v23[16], src, 0x98uLL);
        *(_OWORD *)v23 = v24;
        if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                                v9,
                                v10,
                                *(_QWORD *)&v23[72],
                                *(_QWORD *)&v23[80]) )
        {
          memcpy((char *)v22 + 8, v23, 0xA8uLL);
          *(_QWORD *)&v22[0] = 17LL;
          result = firecracker::api_server::parsed_request::ParsedRequest::new_sync((_QWORD *)(a1 + 8), v22);
          v15 = 0LL;
        }
        else
        {
          v15 = 1LL;
          <vmm::logger::metrics::SharedIncMetric as vmm::logger::metrics::IncMetric>::add(
            (char *)&vmm::logger::metrics::METRICS + 336,
            1LL);
          <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v24);
          *(_QWORD *)((char *)&v22[1] + 6) = src[0];
          *(_OWORD *)((char *)v22 + 6) = v24;
          *(_WORD *)(a1 + 8) = 769;
          v16 = *(_QWORD *)((char *)v22 + 14);
          v17 = *(_QWORD *)((char *)&v22[1] + 6);
          *(_OWORD *)(a1 + 10) = v22[0];
          *(_QWORD *)(a1 + 24) = v16;
          *(_QWORD *)(a1 + 32) = v17;
          result = core::ptr::drop_in_place<vmm::vmm_config::drive::BlockDeviceConfig>(
                     v23,
                     aTheIdFromThePa,
                     v18,
                     v17,
                     v19,
                     v20,
                     a2,
                     v21,
                     0LL);
        }
        *(_QWORD *)a1 = v15;
      }
    }
    else
    {
      v12 = *(_DWORD *)((char *)v22 + 1);
      *(_DWORD *)(a1 + 12) = DWORD1(v22[0]);
      *(_DWORD *)(a1 + 9) = v12;
      v13 = *((_QWORD *)&v22[0] + 1);
      v14 = v22[1];
      *(_BYTE *)(a1 + 8) = result;
      *(_QWORD *)(a1 + 16) = v13;
      *(_OWORD *)(a1 + 24) = v14;
      *(_QWORD *)a1 = 1LL;
    }
  }
  else
  {
    result = <vmm::logger::metrics::SharedIncMetric as vmm::logger::metrics::IncMetric>::add(
               (char *)&vmm::logger::metrics::METRICS + 336,
               1LL);
    *(_BYTE *)(a1 + 8) = 0;
    *(_QWORD *)a1 = 1LL;
  }
  return result;
}