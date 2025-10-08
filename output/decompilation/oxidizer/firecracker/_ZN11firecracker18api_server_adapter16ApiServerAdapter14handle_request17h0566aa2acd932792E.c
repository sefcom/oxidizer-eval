fn firecracker::api_server_adapter::ApiServerAdapter::handle_request(a0: i64, a1: &u64) -> void {
    let v0: u8;  // [bp-0x230]
    let v2: u64;  // rax
    let v3: u64;  // rbx

    vmm::rpc_interface::RuntimeApiController::handle_request(&v0, a0 + 32, a1);
    v2 = alloc::boxed::Box<T>::new(&v0);
    v3 = std::sync::mpmc::Sender<T>::send(*((a0 + 16) as &i64), *((a0 + 24) as &i64), v2);
    core::result::Result<T,E>::expect(v3);
    return;
}
