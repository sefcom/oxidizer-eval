long long flealib::ftp::FTP::receive_file_from_ftp(struct_0 *a0, unsigned long long a1[3], unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5, unsigned long long a6, unsigned long long a7, unsigned long long a8, unsigned long long a9, unsigned long long a10, unsigned long long a11)
{
    char v0;  // [bp-0x158], Other Possible Types: unsigned long
    int v1;  // [bp-0x157]
    char v2;  // [bp-0x150], Other Possible Types: unsigned long long
    char *v3;  // [bp-0x148], Other Possible Types: unsigned long long
    unsigned long long v4;  // [bp-0x141]
    int v5;  // [bp-0x140], Other Possible Types: char, unsigned long long
    void* v6;  // [bp-0x138]
    unsigned long long v7;  // [bp-0x130]
    unsigned long long v8;  // [bp-0x128]
    unsigned long long v9;  // [bp-0x128]
    unsigned long long v10;  // [bp-0x128]
    int v11;  // [bp-0x128]
    unsigned long long v12;  // [bp-0x120]
    char v13;  // [bp-0x118], Other Possible Types: unsigned long long
    unsigned long long v14;  // [bp-0x110]
    unsigned long long v15;  // [bp-0x108]
    unsigned long long v16;  // [bp-0x100]
    char *v17;  // [bp-0xf8]
    unsigned long long v18;  // [bp-0xf0]
    int v19;  // [bp-0xe8], Other Possible Types: char
    int v20;  // [bp-0xd8]
    unsigned long long v21;  // [bp-0xc8]
    char v22;  // [bp-0xc0]
    char v23;  // [bp-0xb0]
    unsigned long long v24;  // [bp-0xa0]
    char v25;  // [bp-0x98]
    unsigned long long v26;  // [bp-0x80]
    unsigned long long v27;  // [bp-0x78]
    unsigned short v28;  // [bp-0x70]
    int v29;  // [bp-0x68]
    int v30;  // [bp-0x58]
    unsigned long long v31;  // [bp-0x48]
    char v32;  // [bp-0x38]
    unsigned long long v33;  // rax
    char v34;  // al
    char v35;  // al
    unsigned long long v36;  // rax
    unsigned long long v37;  // rcx
    int v38;  // xmm0
    unsigned long long v39;  // rax
    char v40;  // al
    unsigned long long v41;  // rax
    unsigned long long v42;  // rcx
    int v43;  // xmm0
    int v44;  // xmm0
    int v45;  // xmm0

    v26 = a2;
    v27 = a3;
    v28 = 21;
    v0.connect(&v26, a2);
    v33 = *((long long *)&v0);
    *((int128_t *)&v11) = *((int128_t *)&v2);
    memcpy(&v13, &v5, 16);
    if (!v33)
    {
        v45 = (int128_t)v11;
        *((int128_t *)&a0->field_10[0]) = *((int128_t *)&v13);
        *((void*)&a0->field_0) = v45;
        return a0;
    }
    memcpy(&v22, &v11, 16);
    memcpy(&v23, &v13, 16);
    v21 = v33;
    v24 = v7;
    v0.login(&v21, a4, a5, a6, a7);
    v34 = v0;
    if (v34 == 4)
    {
        if (::0x7a20f0::core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hec4bd8d019e67a03E) >= 4)
        {
            v0 = &g_b0ba30;
            v2 = 1;
            v3 = 8;
            *((uint128_t *)&v5) = 0;
            v8 = "flealib::ftpFile uploaded to FTP server.Couldn't upload the file to FTP server:";
            v12 = 12;
            v13 = "flealib::ftpFile uploaded to FTP server.Couldn't upload the file to FTP server:";
            v14 = 12;
            v15 = log::__private_api::loc(&g_b0ba70);
            log::__private_api::log(&v0, 4, &v8);
        }
        v0.cwd(&v21, a10, a11);
        v34 = v0;
        if (!(v34 == 4))
            goto LABEL_7a3df9;
        v26.simple_retr(&v21, a8, a9);
        if (((char)v26 & 1))
        {
            v20 = v29;
            memcpy(&v19, &v27, 16);
            if (::0x7a20f0::core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hec4bd8d019e67a03E))
            {
                v25.spec_to_string(&v19);
                v17 = &v25;
                v18 = <alloc::string::String as core::fmt::Display>::fmt;
                v0 = &g_b0ba60;
                v2 = 1;
                v6 = 0;
                v3 = &v17;
                v5 = 1;
                v9 = "flealib::ftpFile uploaded to FTP server.Couldn't upload the file to FTP server:";
                v12 = 12;
                v13 = "flealib::ftpFile uploaded to FTP server.Couldn't upload the file to FTP server:";
                v14 = 12;
                v15 = log::__private_api::loc(&g_b0bab8);
                log::__private_api::log(&v0, 1, &v9);
                ::0x7a1b50::core::ptr::drop_in_place<alloc::string::String>(&v25);
            }
            v0.quit(&v21);
            v35 = v0;
            if (v35 == 4)
            {
                (char)v8.spec_to_string(&v19);
                v4 = v13;
                memcpy(&(char)v1, &(char)v8, 16);
                a0->field_0 = 2;
                v36 = *((long long *)&(&v2)[7]);
                v37 = v4;
                *((int128_t *)&a0->field_1) = *((int128_t *)&v0);
                a0->field_10[0] = v36;
                a0->field_10[1] = v37;
            }
            else
            {
                v38 = (int128_t)v1;
                *((int128_t *)&a0->field_10[0]) = *((int128_t *)&(&v2)[8]);
                *((void*)&a0->field_1) = v38;
                a0->field_0 = v35;
            }
            ::0x7a1b20::core::ptr::drop_in_place<ftp::types::FtpError>(&v19);
        }
        else
        {
            v20 = v29;
            memcpy(&v19, &v27, 16);
            v32.join(a1[1], a1[2], a8, a9);
            v31 = (long long)v20;
            v30 = v19;
            v39 = v32.write_file(&v30);
            if (v39)
            {
                v16 = v39;
                if (::0x7a20f0::core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hec4bd8d019e67a03E))
                {
                    v25.spec_to_string(&v16);
                    v17 = &v25;
                    v18 = <alloc::string::String as core::fmt::Display>::fmt;
                    v0 = &g_b0ba50;
                    v2 = 1;
                    v6 = 0;
                    v3 = &v17;
                    v5 = 1;
                    v10 = "flealib::ftpFile uploaded to FTP server.Couldn't upload the file to FTP server:";
                    v12 = 12;
                    v13 = "flealib::ftpFile uploaded to FTP server.Couldn't upload the file to FTP server:";
                    v14 = 12;
                    v15 = log::__private_api::loc(&g_b0baa0);
                    log::__private_api::log(&v0, 1, &v10);
                    ::0x7a1b50::core::ptr::drop_in_place<alloc::string::String>(&v25);
                }
                v0.quit(&v21);
                v40 = v0;
                if (v40 == 4)
                {
                    (char)v8.spec_to_string(&v16);
                    v4 = v13;
                    memcpy(&(char)v1, &(char)v8, 16);
                    a0->field_0 = 2;
                    v41 = *((long long *)&(&v2)[7]);
                    v42 = v4;
                    *((int128_t *)&a0->field_1) = *((int128_t *)&v0);
                    a0->field_10[0] = v41;
                    a0->field_10[1] = v42;
                }
                else
                {
                    v43 = (int128_t)v1;
                    *((int128_t *)&a0->field_10[0]) = *((int128_t *)&(&v2)[8]);
                    *((void*)&a0->field_1) = v43;
                    a0->field_0 = v40;
                }
                ::0x7a1b60::core::ptr::drop_in_place<std::io::error::Error>(&v16);
            }
            else
            {
                if (::0x7a20f0::core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hec4bd8d019e67a03E) >= 4)
                {
                    v0 = &g_b0ba40;
                    v2 = 1;
                    v3 = 8;
                    *((uint128_t *)&v5) = 0;
                    v8 = "flealib::ftpFile uploaded to FTP server.Couldn't upload the file to FTP server:";
                    v12 = 12;
                    v13 = "flealib::ftpFile uploaded to FTP server.Couldn't upload the file to FTP server:";
                    v14 = 12;
                    v15 = log::__private_api::loc(&g_b0ba88);
                    log::__private_api::log(&v0, 4, &v8);
                }
                a0.quit(&v21);
            }
        }
    }
    else
    {
LABEL_7a3df9:
        v44 = (int128_t)v1;
        *((int128_t *)&a0->field_10[0]) = *((int128_t *)&(&v2)[8]);
        *((void*)&a0->field_1) = v44;
        a0->field_0 = v34;
    }
    ::0x7a1b10::core::ptr::drop_in_place<ftp::ftp::FtpStream>(&v21);
    return a0;
}
