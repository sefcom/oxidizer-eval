int server::main(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5)
{
    unsigned int v0;  // [bp-0xc4]
    unsigned int v1;  // [bp-0xc0]
    unsigned int v2;  // [bp-0xbc]
    char *v3;  // [bp-0xb8]
    char v4;  // [bp-0xb0], Other Possible Types: unsigned long long
    unsigned long long v5;  // [bp-0xa8]
    char *v6;  // [bp-0xa0], Other Possible Types: unsigned long long
    int v7;  // [bp-0x98], Other Possible Types: unsigned long long
    void* v8;  // [bp-0x90]
    char *v9;  // [bp-0x80]
    unsigned long long v10;  // [bp-0x78]
    char *v11;  // [bp-0x70]
    unsigned long long v12;  // [bp-0x68]
    int v13;  // [bp-0x60]
    char v14;  // [bp-0x50]

    v4.bind("192.168.0.9:8080{invalid syntax}Cannot bind to port 8080, some application is using itListening on port 8080...\n", 16, a3, a4, a5);
    v0 = v4.expect();
    v4 = &g_46b688;
    v5 = 1;
    v6 = "/rustc/3b1717c052de4a2dbdd3badb0e7a885f40a8ad9e/library/core/src/char/methods.rscalled `Result::unwrap()` on an `Err` value/bin/bash-isrc/main.rs";
    *((uint128_t *)&v7) = 0;
    std::io::stdio::_print(&v4);
    v2 = 0;
    v3 = &v0;
    while (true)
    {
        v13.next(&v3);
        if ((int)v13 == 2)
            break;
        v1 = v13.expect();
        v4.peer_addr(&v1);
        v14.unwrap(&v4);
        v9 = &v14;
        v10 = <core::net::socket_addr::SocketAddr as core::fmt::Display>::fmt;
        v11 = &v2;
        v12 = core::fmt::num::imp::<impl core::fmt::Display for i32>::fmt;
        v4 = &g_46b6b0;
        v5 = 3;
        v8 = 0;
        v6 = &v9;
        v7 = 2;
        std::io::stdio::_print(&v4);
        std::thread::spawn(&v4, v1);
        core::ptr::drop_in_place<std::thread::JoinHandle<()>>(&v4);
        v2 += 1;
    }
    return ::0x40d400::core::ptr::drop_in_place<std::net::tcp::TcpStream>(v0);
}
