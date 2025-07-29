long long flealib::ftp::FTP::send_file_to_ftp(struct_0 *a0, unsigned long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5, unsigned long long a6, unsigned long long a7, unsigned long long a8, unsigned long long a9, unsigned long long a10, unsigned long long a11)
{
    char v0;  // [bp-0xf8], Other Possible Types: unsigned long
    int v1;  // [bp-0xf7]
    char v2;  // [bp-0xf0], Other Possible Types: unsigned long long
    char *v3;  // [bp-0xe8], Other Possible Types: unsigned long long
    unsigned long long v4;  // [bp-0xe1]
    int v5;  // [bp-0xe0], Other Possible Types: char, unsigned long long
    void* v6;  // [bp-0xd8]
    unsigned long long v7;  // [bp-0xd0]
    unsigned long long v8;  // [bp-0xc8]
    unsigned long long v9;  // [bp-0xc8]
    int v10;  // [bp-0xc8]
    unsigned long long v11;  // [bp-0xc0]
    char v12;  // [bp-0xb8], Other Possible Types: unsigned long long
    unsigned long long v13;  // [bp-0xb0]
    unsigned long long v14;  // [bp-0xa8]
    unsigned long long v15;  // [bp-0xa0]
    unsigned long long v16;  // [bp-0x98]
    int v17;  // [bp-0x98]
    unsigned long long v18;  // [bp-0x90]
    unsigned long long v19;  // [bp-0x88], Other Possible Types: unsigned short
    void* v20;  // [bp-0x80]
    unsigned long long v21;  // [bp-0x70]
    char v22;  // [bp-0x68]
    char v23;  // [bp-0x58]
    unsigned long long v24;  // [bp-0x48]
    char v25;  // [bp-0x40], Other Possible Types: unsigned long long
    unsigned long long v26;  // [bp-0x38]
    unsigned long long v27;  // [bp-0x30]
    char *v28;  // [bp-0x28]
    unsigned long long v29;  // [bp-0x20]
    unsigned long long v30;  // rax
    char v31;  // al
    char v32;  // al
    unsigned long long v33;  // rax
    unsigned long long v34;  // rcx
    int v35;  // xmm0
    unsigned long long v36;  // rax
    char v37;  // al
    int v38;  // xmm0
    int v40;  // xmm0
    int v41;  // xmm0

    v16 = a2;
    v18 = a3;
    v19 = 21;
    v0.connect(&v16, a2);
    v30 = *((long long *)&v0);
    *((int128_t *)&v10) = *((int128_t *)&v2);
    memcpy(&v12, &v5, 16);
    if (!v30)
    {
        v41 = (int128_t)v10;
        *((int128_t *)&a0->field_10[0]) = *((int128_t *)&v12);
        *((void*)&a0->field_0) = v41;
        return a0;
    }
    memcpy(&v22, &v10, 16);
    memcpy(&v23, &v12, 16);
    v21 = v30;
    v24 = v7;
    v0.login(&v21, a4, a5, a6, a7);
    v31 = v0;
    if (v31 == 4)
    {
        if (::0x7a20f0::core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hec4bd8d019e67a03E) >= 4)
        {
            v0 = &g_b0ba30;
            v2 = 1;
            v3 = 8;
            *((uint128_t *)&v5) = 0;
            v8 = "flealib::ftpFile uploaded to FTP server.Couldn't upload the file to FTP server:";
            v11 = 12;
            v12 = "flealib::ftpFile uploaded to FTP server.Couldn't upload the file to FTP server:";
            v13 = 12;
            v14 = log::__private_api::loc(&g_b0baf0);
            log::__private_api::log(&v0, 4, &v8);
        }
        v0.cwd(&v21, a10, a11);
        v31 = v0;
        if (!(v31 == 4))
            goto LABEL_7a4412;
        v0.try_from(a8, a9);
        if ((int)v0 == 1)
            core::option::unwrap_failed(&g_b0bb08); /* do not return */
        v25.read_file_to_vec(v2, *((long long *)&(&v2)[8]));
        if ((char)(((0 ^ v25) & (0 ^ -(v25))) >> 63))
        {
            v15 = v26;
            if (::0x7a20f0::core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hec4bd8d019e67a03E))
            {
                v16.spec_to_string(&v15);
                v28 = &v16;
                v29 = <alloc::string::String as core::fmt::Display>::fmt;
                v0 = &g_b0bae0;
                v2 = 1;
                v6 = 0;
                v3 = &v28;
                v5 = 1;
                v9 = "flealib::ftpFile uploaded to FTP server.Couldn't upload the file to FTP server:";
                v11 = 12;
                v12 = "flealib::ftpFile uploaded to FTP server.Couldn't upload the file to FTP server:";
                v13 = 12;
                v14 = log::__private_api::loc(&g_b0bb68);
                log::__private_api::log(&v0, 1, &v9);
                ::0x7a1b50::core::ptr::drop_in_place<alloc::string::String>(&v16);
            }
            v0.quit(&v21);
            v32 = v0;
            if (v32 == 4)
            {
                (char)v8.spec_to_string(&v15);
                v4 = v12;
                memcpy(&(char)v1, &(char)v8, 16);
                a0->field_0 = 2;
                v33 = *((long long *)&(&v2)[7]);
                v34 = v4;
                *((int128_t *)&a0->field_1) = *((int128_t *)&v0);
                a0->field_10[0] = v33;
                a0->field_10[1] = v34;
            }
            else
            {
                v35 = (int128_t)v1;
                *((int128_t *)&a0->field_10[0]) = *((int128_t *)&(&v2)[8]);
                *((void*)&a0->field_1) = v35;
                a0->field_0 = v32;
            }
            ::0x7a1b60::core::ptr::drop_in_place<std::io::error::Error>(&v15);
        }
        else
        {
            v19 = v27;
            *((int128_t *)&v17) = *((int128_t *)&v25);
            v20 = 0;
            v36 = a8.file_name(a9);
            if (!v36)
                core::option::unwrap_failed(&g_b0bb20); /* do not return */
            (char)v8.try_from(v36, a2);
            if ((int)v10 == 1)
                core::option::unwrap_failed(&g_b0bb38); /* do not return */
            v0.put(&v21, v11, v12, &v16);
            v37 = v0;
            if (v37 == 4)
            {
                if (::0x7a20f0::core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hec4bd8d019e67a03E) >= 4)
                {
                    v0 = &g_b0bad0;
                    v2 = 1;
                    v3 = 8;
                    *((uint128_t *)&v5) = 0;
                    v8 = "flealib::ftpFile uploaded to FTP server.Couldn't upload the file to FTP server:";
                    v11 = 12;
                    v12 = "flealib::ftpFile uploaded to FTP server.Couldn't upload the file to FTP server:";
                    v13 = 12;
                    v14 = log::__private_api::loc(&g_b0bb50);
                    log::__private_api::log(&v0, 4, &v8);
                }
                core::ptr::drop_in_place<lettre::message::body::Body>(&v16);
                a0.quit(&v21);
            }
            else
            {
                v38 = (int128_t)v1;
                *((int128_t *)&a0->field_10[0]) = *((int128_t *)&(&v2)[8]);
                *((void*)&a0->field_1) = v38;
                a0->field_0 = v37;
                core::ptr::drop_in_place<lettre::message::body::Body>(&v16);
            }
        }
    }
    else
    {
LABEL_7a4412:
        v40 = (int128_t)v1;
        *((int128_t *)&a0->field_10[0]) = *((int128_t *)&(&v2)[8]);
        *((void*)&a0->field_1) = v40;
        a0->field_0 = v31;
    }
    ::0x7a1b10::core::ptr::drop_in_place<ftp::ftp::FtpStream>(&v21);
    return a0;
}
