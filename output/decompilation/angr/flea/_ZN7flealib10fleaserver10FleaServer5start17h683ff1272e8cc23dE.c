long long flealib::fleaserver::FleaServer::start(unsigned long a0, unsigned long long a1, unsigned long long a2, struct_1 **a3)
{
    unsigned int v0;  // [bp-0x120]
    unsigned int v1;  // [bp-0x11c]
    char v2[8];  // [bp-0x118]
    char v3;  // [bp-0x110], Other Possible Types: unsigned long
    int v4;  // [bp-0x10d]
    unsigned long long v5;  // [bp-0x108]
    unsigned long v6;  // [bp-0x100]
    unsigned long long v7;  // [bp-0xfd]
    unsigned long long v8;  // [bp-0xf8]
    unsigned long long v9;  // [bp-0xf0]
    char v10;  // [bp-0xe8], Other Possible Types: unsigned long long
    unsigned long long v11;  // [bp-0xe0]
    unsigned int v12;  // [bp-0xd8]
    char *v13;  // [bp-0xd8], Other Possible Types: unsigned long long
    char *v14;  // [bp-0xd8]
    char v15;  // [bp-0xd4]
    int v16;  // [bp-0xd3]
    unsigned long long v17;  // [bp-0xd0]
    void* v18;  // [bp-0xc8], Other Possible Types: unsigned long long
    char v19;  // [bp-0xc0], Other Possible Types: unsigned long long
    int v20;  // [bp-0xb8]
    unsigned int v21;  // [bp-0xb4]
    unsigned long long v22;  // [bp-0xb0]
    char *v23;  // [bp-0xa8], Other Possible Types: unsigned long long
    unsigned long long v24;  // [bp-0xa0]
    char v25[8];  // [bp-0x98]
    unsigned long long *v26;  // [bp-0x90], Other Possible Types: unsigned long long
    unsigned int v27;  // [bp-0x88]
    unsigned long v28;  // [bp-0x78]
    char *v29;  // [bp-0x70]
    unsigned long long v30;  // [bp-0x68]
    unsigned long long v31;  // [bp-0x60]
    int v32;  // [bp-0x58]
    int v33;  // [bp-0x48], Other Possible Types: char
    char v34;  // [bp-0x38]
    unsigned long long v37;  // rax
    unsigned long long *v38;  // r15
    unsigned long long v39;  // cc_ndep
    unsigned long long v40;  // rax
    unsigned long long v41;  // rax
    unsigned long long v42;  // rax
    unsigned long v43;  // 4097
    unsigned long v44;  // 4097

    v30 = a1;
    v31 = a2;
    v10.bind(a1, a2);
    v0 = v10.unwrap();
    v0.set_nonblocking(1).expect();
    v33.new();
    v7 = *((long long *)&v34);
    v4 = v33;
    v10 = 1;
    v11 = 1;
    v12 = 0;
    v15 = 0;
    *((int128_t *)&v16) = *((int128_t *)&v3);
    v18 = *((long long *)&(&v3)[11]);
    v19 = v7;
    *((double *)&v2[0]) = v10.new();
    if (::0x79bea0::core::sync::atomic::atomic_load() >= 4)
    {
        *((unsigned long long **)&v25[0]) = &v30;
        v26 = <&T as core::fmt::Display>::fmt;
        v10 = &g_b0b3c0;
        v11 = 1;
        v18 = 0;
        v13 = &v25;
        v17 = 1;
        v37 = log::__private_api::loc(&g_b0b420);
        v3 = "flealib::fleaserverReceived command:An error occurred, terminating connection with \nError:Server listening on Error: ";
        v5 = 19;
        v6 = "flealib::fleaserverReceived command:An error occurred, terminating connection with \nError:Server listening on Error: ";
        v8 = 19;
        v9 = v37;
        log::__private_api::log(&v10, 4, &(char)v3);
    }
    v29 = &v0;
    v38 = *(a3);
    v28 = v38 + 2;
    while (true)
    {
        v32.next(&v29);
        if ((int)v32 == 2)
            break;
        v20 = v32;
        if (!(int)v20)
        {
            v1 = v21;
            v41 = ::0x79bea0::core::sync::atomic::atomic_load();
            if (v41 >= 4)
            {
                v10.peer_addr(&v1);
                v25.unwrap(&v10, &g_b0b438);
                v23 = &v25;
                v24 = <core::net::socket_addr::SocketAddr as core::fmt::Display>::fmt;
                v10 = &g_b0b3d0;
                v11 = 1;
                v18 = 0;
                v14 = &v23;
                v17 = 1;
                v42 = log::__private_api::loc(&g_b0b450);
                v3 = "flealib::fleaserverReceived command:An error occurred, terminating connection with \nError:Server listening on Error: ";
                v5 = 19;
                v6 = "flealib::fleaserverReceived command:An error occurred, terminating connection with \nError:Server listening on Error: ";
                v8 = 19;
                v9 = v42;
                log::__private_api::log(&v10, 4, &(char)v3);
            }
            v43 = *(v2);
            vvar_405 = CAS(vvar_351{stack -280}, (vvar_404 + 0x1<64>), vvar_404)
            if (CasCmpNE(vvar_405, v43))
                goto LABEL_0x79e17b;
            if ((char)amd64g_calculate_condition(14, 24, v43 + 1, 0, amd64g_calculate_rflags_c(8, v41, 4, v39)))
                [D] Unsupported jumpkind Ijk_NoDecode at address 7987809()
            v44 = *(v38);
            vvar_407 = CAS(vvar_123{reg 136}, (vvar_406 + 0x1<64>), vvar_406)
            if (CasCmpNE(vvar_407, v44))
                goto LABEL_0x79e18a;
            if ((char)amd64g_calculate_condition(14, 24, v44 + 1, 0, amd64g_calculate_rflags_c(8, v41, 4, v39)))
                [D] Unsupported jumpkind Ijk_NoDecode at address 7987809()
            v27 = v1;
            *((char *[8])&v25[0]) = v2;
            v26 = v38;
            v13 = 0x8000000000000000;
            v10 = 0;
            v19 = 0;
            (char)v3.spawn_unchecked(&v10, &v25);
            v10.expect(&(char)v3);
            ::0x79bab0::core::ptr::drop_in_place<std::thread::JoinHandle<()>>(&v10);
        }
        else if ((char)v22.kind() != 13)
        {
            v23 = v22;
            if (::0x79bea0::core::sync::atomic::atomic_load())
            {
                *((unsigned long long **)&v25[0]) = &v23;
                v26 = <std::io::error::Error as core::fmt::Display>::fmt;
                v10 = &g_b0b3e0;
                v11 = 1;
                v18 = 0;
                v13 = &v25;
                v17 = 1;
                v40 = log::__private_api::loc(&g_b0b480);
                v3 = "flealib::fleaserverReceived command:An error occurred, terminating connection with \nError:Server listening on Error: ";
                v5 = 19;
                v6 = "flealib::fleaserverReceived command:An error occurred, terminating connection with \nError:Server listening on Error: ";
                v8 = 19;
                v9 = v40;
                log::__private_api::log(&v10, 1, &(char)v3);
            }
            ::0x79b760::core::ptr::drop_in_place<std::io::error::Error>(&v23);
        }
        else if ((char)::0x79be10::core::sync::atomic::atomic_load(v28, 4))
        {
            std::thread::sleep(0, 0x5f5e100);
            ::0x79b760::core::ptr::drop_in_place<std::io::error::Error>(&v22);
        }
        else
        {
            ::0x79b760::core::ptr::drop_in_place<std::io::error::Error>(&v22);
            break;
        }
    }
    ::0x79b790::core::ptr::drop_in_place<std::net::tcp::TcpStream>(v0);
    return ::0x79b600::core::ptr::drop_in_place<alloc::sync::Arc<std::sync::mutex::Mutex<flealib::fileserver::FileServer>>>(&v2);
}
