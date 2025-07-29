int flealib::fleaserver::handle_client(unsigned int a0, unsigned long long a1, unsigned long long *a2)
{
    unsigned int v0;  // [bp-0x530]
    char v1;  // [bp-0x529]
    int v2;  // [bp-0x528], Other Possible Types: unsigned long long
    unsigned long long v3;  // [bp-0x528]
    unsigned long long v4;  // [bp-0x520]
    int v5;  // [bp-0x518], Other Possible Types: char *
    char *v6;  // [bp-0x518]
    unsigned long long v7;  // [bp-0x510]
    int v8;  // [bp-0x508], Other Possible Types: void*
    char *v9;  // [bp-0x4f8], Other Possible Types: unsigned long long
    int v10;  // [bp-0x4f8]
    int v11;  // [bp-0x4f8]
    unsigned long long v12;  // [bp-0x4f0]
    unsigned long long v13;  // [bp-0x4e8]
    int v14;  // [bp-0x4e8]
    unsigned long long v15;  // [bp-0x4e0]
    unsigned long long v16;  // [bp-0x4d8]
    unsigned long long v17;  // [bp-0x4d0]
    unsigned long long v18;  // [bp-0x4c8]
    unsigned long long v19;  // [bp-0x4c0]
    int v20;  // [bp-0x4b8]
    unsigned long long v21;  // [bp-0x4b0]
    char *v22;  // [bp-0x4a8], Other Possible Types: unsigned long long
    unsigned long long v23[3];  // [bp-0x498]
    unsigned long long v25;  // [sp-0x490]
    unsigned long long v26;  // [bp-0x488]
    char *v27;  // [bp-0x488]
    unsigned long long v28;  // [bp-0x480]
    unsigned long long v29;  // [bp-0x478]
    unsigned long long v30[3];  // [bp-0x468]
    unsigned long long v31[3];  // [bp-0x468]
    unsigned long long v32;  // [bp-0x460]
    unsigned long long v33;  // [bp-0x458]
    unsigned long long v34;  // [bp-0x450]
    unsigned long long v35;  // [bp-0x448]
    unsigned long v36;  // [bp-0x440]
    char v37;  // [bp-0x430]
    char *v39;  // rdx
    int v42;  // xmm0
    unsigned long long v43;  // rcx
    int v44;  // xmm0
    int v45;  // xmm2
    char v46;  // r14b
    char v47;  // al

    v0 = a0;
    ::libc.so.0::memset(&v37, 0, 0x400);
    v36 = *(a2) + 16;
    while (true)
    {
        v29 = v0.recv(&v37, 0x400);
        if (v29)
        {
            if ((char)v39.kind() == 13)
            {
                std::thread::sleep(0, 0x5f5e100);
                if (((char)v29 & 1))
                {
                    ::0x79b760::core::ptr::drop_in_place<std::io::error::Error>(&vvar_126{reg 32});
                    continue;
                }
            }
            else
            {
                *((int *)&v9) = vvar_126{reg 32};
                if (::0x79bea0::core::sync::atomic::atomic_load())
                {
                    v3.peer_addr(&v0);
                    v30.unwrap(&v3, &g_b0b378);
                    (char)v20.spec_to_string(&v9);
                    *(v23) = &v30;
                    v25 = <core::net::socket_addr::SocketAddr as core::fmt::Display>::fmt;
                    v27 = &(char)v20;
                    v28 = <alloc::string::String as core::fmt::Display>::fmt;
                    v2 = &g_b0b2b0;
                    v4 = 2;
                    v8 = 0;
                    v5 = &v23[0];
                    v7 = 2;
                    v13 = "flealib::fleaserverReceived command:An error occurred, terminating connection with \nError:Server listening on Error: ";
                    v15 = 19;
                    v16 = "flealib::fleaserverReceived command:An error occurred, terminating connection with \nError:Server listening on Error: ";
                    v17 = 19;
                    v18 = log::__private_api::loc(&g_b0b390);
                    log::__private_api::log(&v2, 1, &v13);
                    ::0x79b740::core::ptr::drop_in_place<alloc::string::String>(&(char)v20);
                }
                v0.shutdown(2).unwrap(&g_b0b3a8);
                ::0x79b760::core::ptr::drop_in_place<std::io::error::Error>(&v9);
                break;
            }
        }
        v3.to_vec(1, 0);
        v22 = v6;
        *((int128_t *)&v20) = *((int128_t *)&v3);
        if (v39 + 1023 <= -1023)
        {
            v0.shutdown(2).unwrap(&g_b0b360);
            goto LABEL_79d84e;
        }
        else
        {
            *((char *)(&v37 + v39)) = 0;
            core::str::converts::from_utf8(&(unsigned long long)v23, &v37, 0x400);
            if (((char)(unsigned long long)v23 & 1))
            {
                v0.shutdown(2).unwrap(&g_b0b348);
LABEL_79d84e:
                goto LABEL_79d851;
            }
            else
            {
                *((int128_t *)&v10) = *((int128_t *)&v26);
                if (::0x79bea0::core::sync::atomic::atomic_load() >= 4)
                {
                    *(v30) = &v9;
                    v32 = <&T as core::fmt::Display>::fmt;
                    v3 = &g_b0b2a0;
                    v4 = 1;
                    v8 = 0;
                    v6 = &v30[0];
                    v7 = 1;
                    v13 = "flealib::fleaserverReceived command:An error occurred, terminating connection with \nError:Server listening on Error: ";
                    v15 = 19;
                    v16 = "flealib::fleaserverReceived command:An error occurred, terminating connection with \nError:Server listening on Error: ";
                    v17 = 19;
                    v18 = log::__private_api::loc(&g_b0b2d0);
                    log::__private_api::log(&v3, 4, &v13);
                }
                flealib::fleaserver::remove_newline_characters(&v3, v9, v12);
                (unsigned long long)v31.to_vec(v4, v6);
                ::0x79b7a0::core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v3);
                v16 = v33;
                v42 = *((int128_t *)&v31[0]);
                *((int128_t *)&v14) = *((int128_t *)&(unsigned long long)v31);
                v3.from_utf8(&(unsigned long long)v14);
                (unsigned long long)v14.unwrap(&v3);
                ::0x79b740::core::ptr::drop_in_place<alloc::string::String>(&(char)v20);
                v22 = v16;
                memcpy(&(char)v20, &(unsigned long long)v14, 16);
                (unsigned long long)v14.get_command(&v1, v21, v43);
                if (!((char)(((0 ^ v13) & (0 ^ -(v13))) >> 63)))
                {
                    v44 = (int128_t)v14;
                    v45 = *((int128_t *)&v18);
                    *((int128_t *)&v5) = *((int128_t *)&v16);
                    v8 = v45;
                    v2 = v44;
                    v46 = !v6;
                    if (v6)
                    {
                        v26 = v16;
                        *((int128_t *)&v23[0]) = *((int128_t *)&(unsigned long long)v14);
                        v33 = v19;
                        *((int128_t *)&v31[0]) = *((int128_t *)&v17);
                        v47 = flealib::fleaserver::replay(&v0, &(unsigned long long)v23, &(unsigned long long)v31, a1);
                        v0.shutdown(2).unwrap(&g_b0b300);
                        if ((v47 & 1))
                            ::0x79beb0::core::sync::atomic::atomic_store(v36);
                    }
                    else
                    {
                        ::0x79b740::core::ptr::drop_in_place<alloc::string::String>(&v3);
                        ::0x79b740::core::ptr::drop_in_place<alloc::string::String>(&v7);
                    }
                }
                else
                {
                    *((int128_t *)&v11) = *((int128_t *)&v15);
                    v0.shutdown(2).unwrap(&g_b0b318);
                    if (::0x79bea0::core::sync::atomic::atomic_load())
                    {
                        *(v23) = &v9;
                        v25 = <&T as core::fmt::Display>::fmt;
                        v2 = &g_44fb30;
                        v4 = 1;
                        v8 = 0;
                        v5 = &v23[0];
                        v7 = 1;
                        *(v30) = "flealib::fleaserverReceived command:An error occurred, terminating connection with \nError:Server listening on Error: ";
                        v32 = 19;
                        v33 = "flealib::fleaserverReceived command:An error occurred, terminating connection with \nError:Server listening on Error: ";
                        v34 = 19;
                        v35 = log::__private_api::loc(&g_b0b330);
                        log::__private_api::log(&v2, 1, &v30);
                    }
                    ::0x79b740::core::ptr::drop_in_place<alloc::string::String>(&(char)v20);
                    break;
                }
LABEL_79d851:
                ::0x79b740::core::ptr::drop_in_place<alloc::string::String>(&(char)v20);
                if (!v46)
                    break;
            }
        }
    }
    return ::0x79b790::core::ptr::drop_in_place<std::net::tcp::TcpStream>(v0);
}
