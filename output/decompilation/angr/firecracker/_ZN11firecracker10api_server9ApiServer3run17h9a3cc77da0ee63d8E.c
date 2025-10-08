void firecracker::api_server::ApiServer::run(unsigned long long a0, struct_0 *a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long a5)
{
    unsigned long long v0;  // [bp-0x318]
    int v1;  // [bp-0x318]
    unsigned long long v2;  // [bp-0x310]
    char *v3;  // [bp-0x308]
    int v4;  // [sp-0x308], Other Possible Types: unsigned long long
    unsigned long long v5;  // [bp-0x300]
    void* v6;  // [bp-0x2f8], Other Possible Types: unsigned long long
    unsigned long long v7;  // [bp-0x2e8]
    unsigned long long v8;  // [bp-0x2d8]
    char v9;  // [bp-0x2d0], Other Possible Types: unsigned long long
    unsigned long long v10;  // [bp-0x2d0]
    unsigned long long v11;  // [bp-0x2d0]
    unsigned long long v12;  // [bp-0x2c8]
    unsigned long long v14;  // [bp-0x2c0]
    unsigned long long v15;  // [bp-0x2b8]
    unsigned long long v16;  // [bp-0x2b0]
    unsigned long long v17;  // [bp-0x2a0]
    char *v18;  // [bp-0x290], Other Possible Types: unsigned long long
    unsigned long long v19;  // [sp-0x288]
    char *v20;  // [bp-0x280]
    unsigned long long v21;  // [bp-0x278]
    void* v22;  // [bp-0x270]
    unsigned long long v23;  // [bp-0x260]
    unsigned long long v24;  // [bp-0x258]
    unsigned long long v25;  // [bp-0x250]
    unsigned long long v26;  // [bp-0x248]
    unsigned long long v27;  // [bp-0x240]
    char *v28;  // [bp-0x238]
    unsigned long long v29;  // [bp-0x230]
    int v30;  // [bp-0x228], Other Possible Types: char, unsigned long long
    unsigned long long v31;  // [bp-0x228]
    unsigned long long v32;  // [bp-0x220]
    int v33;  // [bp-0x218], Other Possible Types: char *, unsigned long long
    int v34;  // [sp-0x210], Other Possible Types: unsigned long long
    void* v35;  // [bp-0x208]
    unsigned long long v36;  // [bp-0x1f8]
    unsigned long long v37;  // [bp-0x1a0]
    char *v38;  // [bp-0x198]
    unsigned long long v39;  // [bp-0x198]
    unsigned long long v40;  // [bp-0x190]
    unsigned long long v41;  // [bp-0x188]
    unsigned long long v43;  // [bp-0x180]
    unsigned long long v45;  // [bp-0x178]
    int v46;  // [bp-0x168]
    char v47;  // [bp-0x108]
    unsigned long long v48;  // [bp-0xf8]
    int v49;  // [bp-0xe8]
    int v50;  // [bp-0xc8]
    unsigned long long v51;  // [bp-0x38]
    unsigned long long v53;  // rdx
    char *v54;  // r12
    char *v55;  // r13
    unsigned long long v56;  // r15
    char *v57;  // r14
    int v58;  // xmm0
    char *v59;  // rdi
    char *v60;  // rsi
    unsigned long long v61;  // rbp
    char *v62;  // r15
    int v63;  // xmm0
    unsigned long long v64;  // [bp-0x218]

    a1->field_30 = a5;
    v0 = vmm::seccomp::apply_filter(a3, a4);
    v2 = v53;
    if (((char)v0 & 1))
    {
        v9 = v53;
        v38 = &v9;
        v40 = vmm::seccomp::_::<impl core::fmt::Display for vmm::seccomp::InstallationError>::fmt;
        v30 = &g_7a38b0;
        v32 = 1;
        v35 = 0;
        v33 = &v38;
        v34 = 1;
        core::panicking::panic_fmt(&v30, &g_7a3920); /* do not return */
    }
    core::ptr::drop_in_place<core::result::Result<(),vmm::seccomp::InstallationError>>(&v0);
    v54 = &v30;
    v30.start_server(a1);
    v30.expect("Cannot start HTTP server", 24, &g_7a3938);
    if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hba2cad573e31d8baE, 0) >= 3)
    {
        v31 = &g_7a38c0;
        v32 = 1;
        v64 = 8;
        *((uint128_t *)&v34) = 0;
        v39 = "firecracker::api_server'' API request took ";
        v40 = 23;
        v41 = "firecracker::api_server'' API request took ";
        v43 = 23;
        v45 = log::__private_api::loc(&g_7a3950);
        log::__private_api::log_impl(&v31, 3, &v39);
    }
    a2.report_start_time();
    a2.report_cpu_start_time();
    v55 = &v39;
    v56 = memcpy;
    v57 = &v9;
    while (true)
    {
        while (true)
        {
            v55.requests(a1);
            if (v39 != 28)
                break;
            v48 = v43;
            memcpy(&v47, &v40, 16);
            v49.into_iter(&v47);
            v59 = v55;
            v60 = &v49;
            while (true)
            {
                v59.next(v60);
                if (v39 == 0x8000000000000000)
                    break;
                memcpy(v54, v55, 144);
                v8 = utils::time::get_time_us(0);
                v61 = v56;
                v62 = v57;
                firecracker::api_server::ApiServer::run::{{closure}}(&v50, a0, &v8, v54);
                v51 = v37;
                v62.respond(a1, &v50);
                if ((int)v10 == 28)
                {
                    core::ptr::drop_in_place<core::result::Result<(),micro_http::common::ServerError>>(v62);
                    v57 = v62;
                    v56 = v61;
                }
                else
                {
                    v7 = v17;
                    v63 = *((int128_t *)&v10);
                    memcpy(&v6, &v16, 16);
                    *((int128_t *)&v4) = *((int128_t *)&v14);
                    v1 = v63;
                    if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hba2cad573e31d8baE, 0))
                    {
                        v28 = &v0;
                        v29 = <micro_http::common::ServerError as core::fmt::Display>::fmt;
                        v18 = &g_7a38f0;
                        v19 = 1;
                        v22 = 0;
                        v20 = &v28;
                        v21 = 1;
                        v23 = "firecracker::api_server'' API request took ";
                        v24 = 23;
                        v25 = "firecracker::api_server'' API request took ";
                        v26 = 23;
                        v27 = log::__private_api::loc(&g_7a3968);
                        log::__private_api::log_impl(&v18, 1, &v23);
                    }
                    core::ptr::drop_in_place<micro_http::common::ServerError>(&v0);
                    v56 = v61;
                    v54 = &v30;
                    v57 = &v9;
                }
                v23 = utils::time::get_time_us(0) - v8;
                if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hba2cad573e31d8baE, 0) >= 4)
                {
                    v18 = &v23;
                    v19 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
                    v0 = &g_7a3900;
                    v2 = 2;
                    v6 = 0;
                    v3 = &v18;
                    v5 = 1;
                    v11 = "firecracker::api_server'' API request took ";
                    v12 = 23;
                    v14 = "firecracker::api_server'' API request took ";
                    v14 = 23;
                    v16 = log::__private_api::loc(&g_7a3980);
                    log::__private_api::log_impl(&v0, 4, v57);
                }
                core::ptr::drop_in_place<micro_http::server::ServerRequest>(v54);
                v59 = v55;
                v60 = &v49;
            }
            core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<micro_http::server::ServerRequest>>(&v49);
        }
        if ((unsigned int)v39 == 26)
            break;
        v36 = (long long)v46;
        v58 = *((int128_t *)&v39);
        memcpy(&v34, &v45, 16);
        *((int128_t *)&v33) = *((int128_t *)&v41);
        v30 = v58;
        if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hba2cad573e31d8baE, 0))
        {
            v18 = v54;
            v19 = <micro_http::common::ServerError as core::fmt::Display>::fmt;
            v0 = &g_7a38e0;
            v2 = 1;
            v6 = 0;
            v3 = &v18;
            v5 = 1;
            v10 = "firecracker::api_server'' API request took ";
            v12 = 23;
            v14 = "firecracker::api_server'' API request took ";
            v15 = 23;
            v16 = log::__private_api::loc(&g_7a39b0);
            log::__private_api::log_impl(&v0, 1, v57);
        }
        core::ptr::drop_in_place<micro_http::common::ServerError>(v54);
    }
    a1.flush_outgoing_writes();
    if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hba2cad573e31d8baE, 0) > 3)
    {
        v30 = &g_7a38d0;
        v32 = 1;
        v33 = 8;
        *((uint128_t *)&v34) = 0;
        v0 = "firecracker::api_server'' API request took ";
        v2 = 23;
        v4 = "firecracker::api_server'' API request took ";
        v5 = 23;
        v6 = log::__private_api::loc(&g_7a3998);
        log::__private_api::log_impl(&v30, 4, &v0);
    }
    core::ptr::drop_in_place<micro_http::common::ServerError>(&v39);
    core::ptr::drop_in_place<micro_http::server::HttpServer>(a1);
    return;
}
