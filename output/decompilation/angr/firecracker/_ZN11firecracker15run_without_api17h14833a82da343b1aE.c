void firecracker::run_without_api(char *a0, unsigned long long a1, unsigned long long *a2, unsigned long long a3, char a4, char a5, unsigned long long a6, unsigned long long a7, unsigned long long a8)
{
    void* v0;  // [bp-0x480]
    int v1;  // [bp-0x478], Other Possible Types: char, unsigned long long
    unsigned long v2;  // [bp-0x478]
    int v3;  // [bp-0x468], Other Possible Types: char
    int v4;  // [bp-0x458]
    char v5;  // [bp-0x448]
    unsigned long long v6;  // [bp-0x430]
    int v7;  // [bp-0x428]
    int v8;  // [bp-0x418]
    int v9;  // [bp-0x408]
    char v10;  // [bp-0x3f8]
    char v11;  // [bp-0x3e8], Other Possible Types: unsigned long long
    unsigned long long v12;  // [bp-0x3e0]
    void* v13;  // [bp-0x3d8]
    unsigned int v14;  // [bp-0x3d0]
    int v15;  // [bp-0x3c0]
    char v16;  // [bp-0x3b0]
    char v17;  // [bp-0x3a0]
    char v18;  // [bp-0x268]
    unsigned long long v19;  // [bp-0x1b0]
    int v20;  // [bp-0x1a8]
    int v21;  // [bp-0x198]
    int v22;  // [bp-0x188]
    char v23;  // [bp-0x178]
    char v24;  // [bp-0x168]
    unsigned long long v25;  // [bp-0x38]
    char v26;  // [bp-0x30]
    unsigned long long v27;  // rax
    char v28;  // dl
    struct_0 *v29;  // rax
    char v30;  // dl
    unsigned long v31;  // rcx

    v11.new_with_capacity();
    v18.expect(&v11, &g_7a4160);
    v11 = 1;
    v12 = 1;
    v13 = 0;
    v14 = firecracker::metrics::PeriodicMetrics::new();
    *((double *)&v6) = v11.new();
    if (!((char)_ccall(14, 24, (unsigned long long)atomic_fetch_add(v6) + 1, 0, (unsigned long long)(char)(&v26 < 1112))))
    {
        v18.add_subscriber(v6, &g_7a3cc0);
        if ((char)(((0 ^ *(a2)) & (0 ^ -(*(a2)))) >> 63))
            core::option::unwrap_failed(&g_7a4178); /* do not return */
        firecracker::build_microvm_from_json(&v11, a1, &v18, a2, a3, a4, a5, a6, a7, a8);
        memcpy(&v1, &v12, 16);
        memcpy(&v3, &v14, 16);
        v4 = v15;
        memcpy(&v5, &v16, 16);
        if (v11 == 0x8000000000000000)
        {
            v7 = v1;
            v8 = v3;
            v9 = v4;
            memcpy(&v10, &v5, 16);
            *((int128_t *)&v0[48]) = *((int128_t *)&v5);
            v0[32] = v4;
            v0[16] = v3;
            *(v0) = v1;
        }
        else
        {
            memcpy(&v24, &v17, 312);
            memcpy(&v10, &v5, 16);
            v9 = v4;
            v8 = v3;
            v7 = v1;
            v20 = v7;
            v21 = v8;
            v22 = v9;
            memcpy(&v23, &v5, 16);
            v19 = v11;
            v1 = v25;
            core::ptr::drop_in_place<vmm::resources::VmResources>(&v19);
            v11.lock(v6 + 16);
            v27 = v11.expect(&g_7a4190);
            v27 + 8.start();
            core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<firecracker::metrics::PeriodicMetrics>>(v27, v28 & 1);
            while (true)
            {
                v11.run_with_timeout(&v18);
                v11.expect("Failed to start the event manager", 33, &g_7a41a8);
                v11.lock(v2 + 16);
                v29 = v11.unwrap(&g_7a41c0);
                v30 = v28 & 1;
                if (v29->field_214 != 158)
                    break;
                core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<firecracker::metrics::PeriodicMetrics>>(v29, v30);
            }
            if (!(unsigned int)v31)
            {
                core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<firecracker::metrics::PeriodicMetrics>>(v29, v30);
                *(a0) = 29;
            }
            else
            {
                *((char *)v0) = 28;
                *((char *)&v0[1]) = v31;
                core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<firecracker::metrics::PeriodicMetrics>>(v29, v30);
            }
            v1.drop_in_place<alloc::sync::Arc<std::sync::poison::mutex::Mutex<vmm::Vmm>>>();
        }
        core::ptr::drop_in_place<alloc::sync::Arc<std::sync::poison::mutex::Mutex<firecracker::metrics::PeriodicMetrics>>>(&v6);
        v18.drop_in_place<event_manager::manager::EventManager<alloc::sync::Arc<std::sync::poison::mutex::Mutex<dyn event_manager::MutEventSubscriber>>>>();
        return;
    }
    [D] Unsupported jumpkind Ijk_NoDecode at address 5621798()
}
