long long flealib::fleaserver::replay(unsigned long long a0, unsigned long long a1[3], unsigned long long a2[3], unsigned long long a3)
{
    unsigned long long v0[3];  // [bp-0x3b8]
    unsigned long long v1[3];  // [bp-0x3b0]
    char v2;  // [bp-0x3a8]
    unsigned long long v3;  // [bp-0x3a0]
    unsigned long long v4;  // [bp-0x3a0]
    unsigned long long v5;  // [bp-0x398]
    unsigned long long v6;  // [bp-0x398]
    unsigned long long v7[3];  // [bp-0x388], Other Possible Types: unsigned long long
    unsigned long long v8;  // [bp-0x380]
    unsigned long long v9[3];  // [bp-0x378], Other Possible Types: unsigned long long
    unsigned long long v10;  // [bp-0x370]
    unsigned long long v11;  // [bp-0x368]
    unsigned long long v12;  // [bp-0x360]
    unsigned long long v13;  // [bp-0x358]
    char *v14;  // [bp-0x350], Other Possible Types: unsigned long long
    int v15;  // [bp-0x348], Other Possible Types: unsigned long long
    void* v16;  // [bp-0x340], Other Possible Types: unsigned long long
    unsigned long long v17;  // [bp-0x330]
    unsigned long long v18;  // [bp-0x328]
    unsigned long v19;  // [bp-0x318]
    unsigned long long v20;  // [bp-0x310]
    unsigned long long v21;  // [bp-0x308]
    unsigned long long v22;  // [bp-0x300]
    char *v23;  // [bp-0x2f8]
    unsigned long long v24;  // [bp-0x2f0]
    void* v25;  // [bp-0x2e8]
    unsigned long long v27[3];  // r14
    unsigned int v28;  // ebx
    unsigned int v29;  // ebx
    unsigned long long v30;  // rbx
    unsigned long long v31;  // r12
    void* v32;  // r15
    unsigned long long v33;  // rax
    unsigned long long v34;  // rdx
    unsigned long long v35;  // rdx

    v27 = a1;
    v17 = a0;
    if (::0x79bea0::core::sync::atomic::atomic_load() >= 4)
    {
        v7[0] = a1;
        v8 = <alloc::string::String as core::fmt::Display>::fmt;
        v9[0] = a2;
        v10 = <alloc::string::String as core::fmt::Display>::fmt;
        v21 = &g_b0b200;
        v22 = 2;
        v25 = 0;
        v23 = &v7;
        v24 = 2;
        v12 = "flealib::fleaserverReceived command:An error occurred, terminating connection with \nError:Server listening on Error: ";
        v13 = 19;
        v14 = "flealib::fleaserverReceived command:An error occurred, terminating connection with \nError:Server listening on Error: ";
        v15 = 19;
        v16 = log::__private_api::loc(&g_b0b240);
        log::__private_api::log(&v21, 4, &v12);
    }
    v21.new();
    v2.process(&v21, a1[1], a1[2], a2[1], a2[2], a3);
    if (v5)
    {
        v29 = v28 & 0xffffff00 | 1;
        if (!(!(char)v3.equal(v5, "quitfilesize", 4)))
            goto LABEL_79d42c;
        v12 = v17.set_nonblocking(1);
        if (v12)
        {
            core::ptr::drop_in_place<core::option::Option<std::io::error::Error>>(&v12);
            if (::0x79bea0::core::sync::atomic::atomic_load())
            {
                v12 = &g_b0b220;
                v13 = 1;
                v14 = 8;
                *((uint128_t *)&v15) = 0;
                v7 = "flealib::fleaserverReceived command:An error occurred, terminating connection with \nError:Server listening on Error: ";
                v8 = 19;
                v9 = "flealib::fleaserverReceived command:An error occurred, terminating connection with \nError:Server listening on Error: ";
                v10 = 19;
                v11 = log::__private_api::loc(&g_b0b288);
                log::__private_api::log(&v12, 1, &v7);
            }
        }
        else
        {
            core::ptr::drop_in_place<core::option::Option<std::io::error::Error>>(&v12);
            v1[0] = a2;
            v0[0] = a1;
            v30 = v3;
            v31 = v5;
            v32 = 0;
            if (0.get(v30, v31))
            {
                v32 = 0;
                do
                {
                    v18 = v17.write(v33, v34);
                    if (v18)
                    {
                        if ((char)v35.kind() == 13)
                        {
                            std::thread::sleep(0, 0x5f5e100);
                            core::ptr::drop_in_place<core::result::Result<usize,std::io::error::Error>>(&v18);
                            v6 = v5;
                            v4 = v3;
                            continue;
                        }
                        else
                        {
                            if (::0x79bea0::core::sync::atomic::atomic_load())
                            {
                                v19 = &vvar_226{reg 32};
                                v20 = <std::io::error::Error as core::fmt::Display>::fmt;
                                v12 = &g_b0b230;
                                v13 = 1;
                                v16 = 0;
                                v14 = &v19;
                                v15 = 1;
                                v7 = "flealib::fleaserverReceived command:An error occurred, terminating connection with \nError:Server listening on Error: ";
                                v8 = 19;
                                v9 = "flealib::fleaserverReceived command:An error occurred, terminating connection with \nError:Server listening on Error: ";
                                v10 = 19;
                                v11 = log::__private_api::loc(&g_b0b270);
                                log::__private_api::log(&v12, 1, &v7);
                            }
                            ::0x79b760::core::ptr::drop_in_place<std::io::error::Error>(&vvar_226{reg 32});
                        }
                        goto LABEL_79d5fd;
                    }
                    else
                    {
                        v32 += v35;
                        if (v32 == v5)
                        {
LABEL_79d5fd:
                            ::0x79b740::core::ptr::drop_in_place<alloc::string::String>(&v2);
                            core::ptr::drop_in_place<flealib::commandprocessor::CommandProcessor>(&v21);
                            ::0x79b740::core::ptr::drop_in_place<alloc::string::String>(v1);
                            ::0x79b740::core::ptr::drop_in_place<alloc::string::String>(v0);
                            return 0;
                        }
                        v6 = v5;
                        v4 = v3;
                    }
                    v33 = v32.get(v4, v6);
                } while (v33);
            }
            core::str::slice_error_fail(v30, v31, v32, v31, &g_b0b258); /* do not return */
        }
    }
    v29 = 0;
LABEL_79d42c:
    ::0x79b740::core::ptr::drop_in_place<alloc::string::String>(&v2);
    core::ptr::drop_in_place<flealib::commandprocessor::CommandProcessor>(&v21);
    ::0x79b740::core::ptr::drop_in_place<alloc::string::String>(a2);
    ::0x79b740::core::ptr::drop_in_place<alloc::string::String>(v27);
    return v29;
}
