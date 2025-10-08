long long starship::modules::rust::format_rustc_version(void* a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4)
{
    void* v0;  // [bp-0x100], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0xf8]
    char *v2;  // [bp-0xf0], Other Possible Types: char
    unsigned long long v3;  // [bp-0xe8]
    void* v4;  // [bp-0xe0]
    unsigned short v5;  // [bp-0xc8]
    char *v6;  // [bp-0xc0], Other Possible Types: unsigned long long
    unsigned long long v7;  // [bp-0xb8]
    unsigned long long v8;  // [bp-0xb0]
    unsigned long long v9;  // [bp-0xa8]
    unsigned long long v10;  // [bp-0xa0]
    int v11;  // [bp-0x98]
    unsigned long long v12;  // [bp-0x88]
    unsigned long long v13;  // [bp-0x78]
    unsigned long long v14;  // [bp-0x70]
    char v15;  // [bp-0x68]
    int v16;  // [bp-0x60]
    unsigned long v17;  // [bp-0x50], Other Possible Types: unsigned long long
    char *v18;  // [bp-0x48]
    unsigned long long v19;  // [bp-0x40]
    int v20;  // [bp-0x38], Other Possible Types: char
    char v21;  // [bp-0x28]
    unsigned long long v23;  // rax
    unsigned long long v24;  // rdx
    unsigned long long v25;  // rdx

    v2.into_searcher(a1, a2);
    v0 = 0;
    v1 = a2;
    v5 = 1;
    if (!v0.advance_by(1))
    {
        v23 = v0.try_fold();
        if (v23)
        {
            v13 = v23;
            v14 = v24;
            v15.format_version(v23, a2, a3, a4);
            if (!(v15 & 1))
            {
                *((unsigned long *)&a0[16]) = v17;
                *(a0) = v16;
                return v17;
            }
            v12 = v17;
            v11 = v16;
            if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) >= 2)
            {
                v18 = &v11;
                v19 = <starship::formatter::string_formatter::StringFormatterError as core::fmt::Display>::fmt;
                v0 = &g_11f6048;
                v1 = 1;
                v4 = 0;
                v2 = &v18;
                v3 = 1;
                v6 = "starship::modules::rustRustup rustc version is ";
                v7 = 23;
                v8 = "starship::modules::rustRustup rustc version is ";
                v9 = 23;
                v10 = log::__private_api::loc(&g_11f6058);
                log::__private_api::log(&v0, 2, &v6);
            }
            v6 = &v13;
            v7 = <&T as core::fmt::Display>::fmt;
            v0 = &g_11f37f0;
            v1 = 1;
            v4 = 0;
            v2 = &v6;
            v3 = 1;
            v20.map_or_else(0, v25, &v0);
            *((long long *)&a0[16]) = *((long long *)&v21);
            *(a0) = v20;
            return (unsigned long long)core::ptr::drop_in_place<starship::formatter::string_formatter::StringFormatterError>(&v11);
        }
    }
    *((unsigned long long *)a0) = 0x8000000000000000;
    return 0x8000000000000000;
}
