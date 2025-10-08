void firecracker::api_server_adapter::ApiServerAdapter::handle_request(unsigned long long a0[4], unsigned long long a1)
{
    char v0;  // [bp-0x230]
    unsigned long long v2;  // rax
    unsigned long long v3;  // rbx

    v0.handle_request(a0 + 1, a1);
    v2 = v0.new();
    v3 = a0[2].send(a0[3], v2);
    if (v3)
        core::ptr::drop_in_place<std::sync::mpsc::SendError<alloc::boxed::Box<core::result::Result<vmm::rpc_interface::VmmData,vmm::rpc_interface::VmmActionError>>>>(v3);
    v3.expect();
    return;
}
