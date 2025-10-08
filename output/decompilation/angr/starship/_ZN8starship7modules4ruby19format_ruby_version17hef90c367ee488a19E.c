long long starship::modules::ruby::format_ruby_version(void* a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4)
{
    void* v0;  // [bp-0x120], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x118]
    char *v2;  // [bp-0x110], Other Possible Types: char
    unsigned long long v3;  // [bp-0x108]
    void* v4;  // [bp-0x100]
    unsigned short v5;  // [bp-0xe0]
    void* v6;  // [bp-0xd8], Other Possible Types: char *, unsigned long long
    unsigned long long v7;  // [bp-0xd0]
    char v8;  // [bp-0xc8], Other Possible Types: unsigned long long
    unsigned long long v9;  // [bp-0xc0]
    unsigned long long v10;  // [bp-0xb8]
    unsigned short v11;  // [bp-0xa0]
    int v12;  // [bp-0x98]
    unsigned long long v13;  // [bp-0x88]
    unsigned long long v14;  // [bp-0x80]
    unsigned long long v15;  // [bp-0x78]
    char v16;  // [bp-0x70]
    int v17;  // [bp-0x68]
    unsigned long v18;  // [bp-0x58], Other Possible Types: unsigned long long
    char *v19;  // [bp-0x50]
    unsigned long long v20;  // [bp-0x48]
    int v21;  // [bp-0x40], Other Possible Types: char
    char v22;  // [bp-0x30]
    unsigned long long v24;  // rax
    unsigned long long v25;  // rdx
    unsigned long long v26;  // rax
    unsigned long long v27;  // rdx

    v8.into_searcher(a1, a2);
    v6 = 0;
    v7 = a2;
    v11 = 1;
    if (!v6.advance_by(1))
    {
        v24 = v6.try_fold();
        if (v24)
        {
            v2.into_searcher(112, v24, v25);
            v0 = 0;
            v1 = v25;
            v5 = 1;
            v26 = v0.next();
            if (v26)
            {
                v14 = v26;
                v15 = v25;
                v16.format_version(v26, a2, a3, a4);
                if (!(v16 & 1))
                {
                    *((unsigned long *)&a0[16]) = v18;
                    *(a0) = v17;
                    return v18;
                }
                v13 = v18;
                v12 = v17;
                if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) >= 2)
                {
                    v19 = &v12;
                    v20 = <starship::formatter::string_formatter::StringFormatterError as core::fmt::Display>::fmt;
                    v0 = &g_11f5e50;
                    v1 = 1;
                    v4 = 0;
                    v2 = &v19;
                    v3 = 1;
                    v6 = "starship::modules::rubygemsetrvmError formatting `ruby` version:\n";
                    v7 = 23;
                    v8 = "starship::modules::rubygemsetrvmError formatting `ruby` version:\n";
                    v9 = 23;
                    v10 = log::__private_api::loc(&g_11f5e60);
                    log::__private_api::log(&v0, 2, &v6);
                }
                v6 = &v14;
                v7 = <&T as core::fmt::Display>::fmt;
                v0 = &g_11f37f0;
                v1 = 1;
                v4 = 0;
                v2 = &v6;
                v3 = 1;
                v21.map_or_else(0, v27, &v0);
                *((long long *)&a0[16]) = *((long long *)&v22);
                *(a0) = v21;
                return (unsigned long long)core::ptr::drop_in_place<starship::formatter::string_formatter::StringFormatterError>(&v12);
            }
        }
    }
    *((unsigned long long *)a0) = 0x8000000000000000;
    return 0x8000000000000000;
}
