__int64 __fastcall firecracker::api_server_adapter::ApiServerAdapter::handle_request(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rbx
  _BYTE src[560]; // [rsp+8h] [rbp-230h] BYREF

  vmm::rpc_interface::RuntimeApiController::handle_request(src, a1 + 32, a2);
  v2 = alloc::boxed::Box<T>::new(src);
  v3 = std::sync::mpmc::Sender<T>::send(*(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 24), v2);
  v4 = v3;
  if ( v3 )
    core::ptr::drop_in_place<std::sync::mpsc::SendError<alloc::boxed::Box<core::result::Result<vmm::rpc_interface::VmmData,vmm::rpc_interface::VmmActionError>>>>(v3);
  return core::result::Result<T,E>::expect(v4 != 0);
}