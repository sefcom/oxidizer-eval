__int64 __fastcall firecracker::api_server::ApiServer::serve_vmm_action_request(
        void *dest,
        _QWORD *a2,
        __int64 a3,
        __int64 a4)
{
  void *v4; // rbp
  char *v5; // r14
  char v6; // bl
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  const void *v10; // r12
  __int64 v11; // rax
  __int64 v13; // [rsp+8h] [rbp-2F0h]
  __int64 updated; // [rsp+18h] [rbp-2E0h] BYREF
  _QWORD v16[2]; // [rsp+20h] [rbp-2D8h] BYREF
  _QWORD v17[4]; // [rsp+30h] [rbp-2C8h] BYREF
  _QWORD v18[5]; // [rsp+50h] [rbp-2A8h] BYREF
  _QWORD v19[6]; // [rsp+78h] [rbp-280h] BYREF
  _DWORD desta[148]; // [rsp+A8h] [rbp-250h] BYREF

  v5 = 0LL;
  v6 = 0;
  switch ( *(_QWORD *)a3 )
  {
    case 8LL:
      v4 = &unk_384F7;
      v5 = (char *)&vmm::logger::metrics::METRICS + 864;
      if ( *(_BYTE *)(a3 + 56) )
        v4 = &unk_3850B;
      else
        v5 = (char *)&vmm::logger::metrics::METRICS + 872;
      v6 = 1;
      v7 = 20LL;
      goto LABEL_9;
    case 0x13LL:
      v5 = (char *)&vmm::logger::metrics::METRICS + 880;
      v6 = 1;
      v4 = &unk_3851F;
      v7 = 13LL;
      goto LABEL_9;
    case 0x15LL:
      v5 = (char *)&vmm::logger::metrics::METRICS + 888;
      v6 = 1;
      v4 = &unk_31520;
      v7 = 8LL;
      goto LABEL_9;
    case 0x18LL:
      v5 = (char *)&vmm::logger::metrics::METRICS + 896;
      v6 = 1;
      v4 = &unk_3852C;
      v7 = 9LL;
LABEL_9:
      v13 = v7;
      break;
    default:
      break;
  }
  v8 = std::sync::mpmc::Sender<T>::send(*a2, a2[1]);
  core::result::Result<T,E>::expect(v8);
  v9 = vmm_sys_util::linux::eventfd::EventFd::write(a2 + 4, 1LL);
  core::result::Result<T,E>::expect(v9);
  v10 = (const void *)std::sync::mpmc::Receiver<T>::recv(a2[2], a2[3]);
  core::result::Result<T,E>::expect(v10);
  memcpy(desta, v10, 0x220uLL);
  __rustc::__rust_dealloc(v10, 544LL, 8LL);
  firecracker::api_server::parsed_request::ParsedRequest::convert_to_response(dest, (__int64)desta);
  if ( v6 )
  {
    if ( desta[0] != 13 )
    {
      v16[0] = v4;
      v16[1] = v13;
      updated = vmm::logger::update_metric_with_elapsed_time(v5, a4);
      if ( (unsigned __int64)core::sync::atomic::atomic_load(&log::MAX_LOG_LEVEL_FILTER, 0LL) > 2 )
      {
        v17[0] = v16;
        v17[1] = <&T as core::fmt::Display>::fmt;
        v17[2] = &updated;
        v17[3] = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
        v19[0] = &off_3A39F8;
        v19[1] = 3LL;
        v19[4] = 0LL;
        v19[2] = v17;
        v19[3] = 2LL;
        v11 = log::__private_api::loc(&off_3A3A70);
        v18[0] = aFirecrackerApi_0;
        v18[1] = 23LL;
        v18[2] = aFirecrackerApi_0;
        v18[3] = 23LL;
        v18[4] = v11;
        log::__private_api::log_impl(v19, 3LL, v18);
      }
    }
  }
  return core::ptr::drop_in_place<core::result::Result<vmm::rpc_interface::VmmData,vmm::rpc_interface::VmmActionError>>(desta);
}