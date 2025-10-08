long long firecracker::api_server::ApiServer::serve_vmm_action_request(void* a0, unsigned long long a1[4], struct_0 *a2, unsigned long long a3)
{
    unsigned long long v0;  // [bp-0x2f0]
    unsigned long long v1;  // [bp-0x2e0]
    unsigned long long v2;  // [bp-0x2d8]
    unsigned long long v3;  // [bp-0x2d0]
    char *v4;  // [bp-0x2c8]
    unsigned long long v5;  // [bp-0x2c0]
    char *v6;  // [bp-0x2b8]
    unsigned long long v7;  // [bp-0x2b0]
    unsigned long long v8;  // [bp-0x2a8]
    unsigned long long v9;  // [bp-0x2a0]
    unsigned long long v10;  // [bp-0x298]
    unsigned long long v11;  // [bp-0x290]
    unsigned long long v12;  // [bp-0x288]
    unsigned long long v13;  // [bp-0x280]
    unsigned long long v14;  // [bp-0x278]
    char *v15;  // [bp-0x270]
    unsigned long long v16;  // [bp-0x268]
    void* v17;  // [bp-0x260]
    char v18;  // [bp-0x250]
    void* v20;  // r14
    unsigned long long v21;  // rbp
    char v22;  // bl
    unsigned long long v23;  // rax
    void* v26;  // r12

    v20 = 0;
    switch (a2->field_0)
    {
    case 8:
        v20 = &g_7c4990;
        if (a2->field_38)
        {
            v21 = "create full snapshot";
            if (a2->field_38)
                goto LABEL_55781f;
LABEL_55781e:
            v20 = &g_7c4998;
        }
        else
        {
            v21 = "create diff snapshot";
            if (!a2->field_38)
                goto LABEL_55781e;
LABEL_55781f:
        }
        v22 = 1;
        v23 = 20;
        goto LABEL_55787f;
    case 19:
        v20 = &g_7c49a0;
        v22 = 1;
        v21 = "load snapshot";
        v23 = 13;
        goto LABEL_55787f;
    case 21:
        v20 = &g_7c49a8;
        v22 = 1;
        v21 = "pause vm";
        v23 = 8;
        goto LABEL_55787f;
    case 24:
        v20 = &g_7c49b0;
        v22 = 1;
        v21 = "resume vm";
        v23 = 9;
LABEL_55787f:
        v0 = v23;
        break;
    }
    a1[0].send(a1[1], a2).expect();
    a1 + 1.write(1).expect();
    v26 = a1[2].recv(a1[3]);
    v26.expect();
    memcpy(&v18, v26, 544);
    v26.__rust_dealloc();
    a0.convert_to_response(&v18);
    if (!v22 || (int)*((long long *)&v18) == 13)
        return core::ptr::drop_in_place<core::result::Result<vmm::rpc_interface::VmmData,vmm::rpc_interface::VmmActionError>>(&v18);
    v2 = v21;
    v3 = v0;
    v1 = vmm::logger::update_metric_with_elapsed_time(v20, a3);
    if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hba2cad573e31d8baE, 0) > 2)
    {
        v4 = &v2;
        v5 = <&T as core::fmt::Display>::fmt;
        v6 = &v1;
        v7 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
        v13 = &g_7a39f8;
        v14 = 3;
        v17 = 0;
        v15 = &v4;
        v16 = 2;
        v8 = "firecracker::api_server'' API request took ";
        v9 = 23;
        v10 = "firecracker::api_server'' API request took ";
        v11 = 23;
        v12 = log::__private_api::loc(&g_7a3a70);
        log::__private_api::log_impl(&v13, 3, &v8);
    }
    return core::ptr::drop_in_place<core::result::Result<vmm::rpc_interface::VmmData,vmm::rpc_interface::VmmActionError>>(&v18);
}
