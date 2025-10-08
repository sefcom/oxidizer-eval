long long firecracker::api_server_adapter::ApiServerAdapter::run_microvm(char a0[2], unsigned int a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5, void* a6, unsigned long long a7, unsigned long long a8)
{
    unsigned long long v0;  // [bp-0x1f0]
    unsigned long long v1;  // [bp-0x1e8]
    unsigned int v2;  // [bp-0x1e0]
    char v3;  // [bp-0x1dc]
    unsigned long long v4;  // [bp-0x1d8]
    unsigned long long v5;  // [bp-0x1d0]
    unsigned long long v6;  // [bp-0x1c8]
    unsigned long long v7;  // [bp-0x1c0]
    char v8;  // [bp-0x1b8]
    unsigned long long v9;  // [bp-0x40]
    unsigned int v10;  // [bp-0x38]
    char v11;  // [bp-0x30]
    struct_0 *v13;  // rax
    char v14;  // dl
    char v15;  // dl
    unsigned long v16;  // rcx

    if (!((char)_ccall(14, 24, (unsigned long long)atomic_fetch_add(a7) + 1, 0, (unsigned long long)(char)(&v11 < 456))))
    {
        v0 = 1;
        v1 = 1;
        v2 = 0;
        v3 = 0;
        v4 = a2;
        v5 = a3;
        v6 = a4;
        v7 = a5;
        memcpy(&v8, a6, 376);
        v9 = a7;
        v10 = a1;
        a8.add_subscriber(v0.new(), &g_7a3aa0);
        while (true)
        {
            v0.run_with_timeout(a8);
            v0.expect("EventManager events driver fatal errorsrc/firecracker/src/api_server_adapter.rs", 38, &g_7a3ac8);
            v0.lock(a7 + 16);
            v13 = v0.unwrap(&g_7a3ae0);
            v15 = v14 & 1;
            if (v13->field_214 != 158)
                break;
            core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<firecracker::metrics::PeriodicMetrics>>(v13, v15);
        }
        if (!(unsigned int)v16)
        {
            core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<firecracker::metrics::PeriodicMetrics>>(v13, v15);
            a0[0] = 32;
        }
        else
        {
            a0[0] = 29;
            a0[1] = v16;
            core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<firecracker::metrics::PeriodicMetrics>>(v13, v15);
        }
        return vvar_7.drop_in_place<alloc::sync::Arc<std::sync::poison::mutex::Mutex<vmm::Vmm>>>();
    }
    [D] Unsupported jumpkind Ijk_NoDecode at address 5602512()
}
