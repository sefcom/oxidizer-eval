void bat::config::generate_config_file(void* a0)
{
    void* v0;  // [bp-0xa8], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0xa0]
    void* v2;  // [bp-0x98], Other Possible Types: char *, unsigned long long
    unsigned long long v3;  // [bp-0x91]
    int v4;  // [bp-0x90], Other Possible Types: unsigned long long
    void* v5;  // [bp-0x88]
    char *v6;  // [bp-0x78]
    unsigned long long v7;  // [bp-0x70]
    int v8;  // [bp-0x68], Other Possible Types: char, unsigned long long
    int v9;  // [bp-0x68]
    int v10;  // [bp-0x68]
    char v11;  // [bp-0x50]
    unsigned long long v12;  // [bp-0x48]
    unsigned long long v13;  // [bp-0x40]
    char v14;  // [bp-0x38]
    char v15;  // [bp-0x28]
    unsigned long long v17;  // r15
    unsigned long long v18;  // r14
    void* v19;  // rax
    void* v20;  // rdx
    unsigned long long v21;  // rdx
    unsigned long long v23;  // rax
    unsigned long long v24;  // rdx
    unsigned long long v26;  // rax
    unsigned long long v27;  // rax
    unsigned long long v28;  // rcx

    bat::config::config_file(&v11);
    v17 = v12;
    v18 = v13;
    if ((char)v17.is_file(v18))
    {
        v8.from_utf8_lossy(v17, v18);
        v6 = &v8;
        v7 = <alloc::borrow::Cow<B> as core::fmt::Display>::fmt;
        v0 = &g_ac85d0;
        v1 = 2;
        v5 = 0;
        v2 = &v6;
        v4 = 1;
        std::io::stdio::_print(&v0);
        core::ptr::drop_in_place<regex::error::Error>(&v8);
        v0 = &g_ac85f0;
        v1 = 1;
        v2 = 8;
        *((uint128_t *)&v4) = 0;
        std::io::stdio::_print(&v0);
        v0 = std::io::stdio::stdout();
        v19 = v0.flush();
        if (v19)
            goto LABEL_7acc43;
        v0 = 0;
        v1 = 1;
        v2 = 0;
        v8 = std::io::stdio::stdin();
        if (((char)v8.read_line(&v0) & 1))
        {
            *((char *)a0) = 0;
            *((void* *)&a0[8]) = v20;
            goto LABEL_7acde2;
        }
        else if ((char)::0x7986d0::core::slice::ascii::<impl [u8]>::eq_ignore_ascii_case(core::str::<impl str>::trim_matches(v1, v2), v21))
        {
            core::ptr::drop_in_place<alloc::string::String>(&v0);
LABEL_7acd20:
            v26 = std::fs::write(&v11);
            v8 = v9;
            if (v26)
            {
                bat::config::generate_config_file::{{closure}}(&v0, v17, v18, v26);
                memcpy(&v8, &v1, 16);
                if ((char)(((0 ^ v0) & (0 ^ -(v0))) >> 63))
                {
                    v17 = v12;
                    v18 = v13;
                    v8 = v10;
                    goto LABEL_7acd60;
                }
                else
                {
                    a0[16] = v10;
                    *((char *)a0) = 11;
                    *((void* *)&a0[8]) = v0;
                }
            }
            else
            {
LABEL_7acd60:
                v8.from_utf8_lossy(v17, v18);
                v6 = &v8;
                v7 = <alloc::borrow::Cow<B> as core::fmt::Display>::fmt;
                v0 = &g_ac8610;
                v1 = 2;
                v5 = 0;
                v2 = &v6;
                v4 = 1;
                std::io::stdio::_print(&v0);
                core::ptr::drop_in_place<regex::error::Error>(&v8);
                *((char *)a0) = 13;
            }
        }
        else
        {
            *((char *)a0) = 13;
LABEL_7acde2:
            core::ptr::drop_in_place<alloc::string::String>(&v0);
        }
    }
    else
    {
        v23 = v17.parent(v18);
        if (v23)
        {
            v19 = std::fs::create_dir_all(v23, v24);
            if (!v19)
                goto LABEL_7acd20;
LABEL_7acc43:
            *((char *)a0) = 0;
            *((void* *)&a0[8]) = v19;
        }
        else
        {
            v8.from_utf8_lossy(v17, v18);
            v6 = &v8;
            v7 = <alloc::borrow::Cow<B> as core::fmt::Display>::fmt;
            v0 = &g_ac8600;
            v1 = 1;
            v5 = 0;
            v2 = &v6;
            v4 = 1;
            v14.map_or_else(0, &v0);
            core::ptr::drop_in_place<regex::error::Error>(&v8);
            memcpy(&(char)v0, &v14, 16);
            v3 = *((long long *)&v15);
            *((char *)a0) = 11;
            v27 = *((long long *)((char *)&v1 + 7));
            v28 = v3;
            *((int128_t *)&a0[1]) = *((int128_t *)&v0);
            *((unsigned long long *)&a0[16]) = v27;
            *((unsigned long long *)&a0[24]) = v28;
        }
    }
    core::ptr::drop_in_place<std::path::PathBuf>(&v11);
    return;
}
