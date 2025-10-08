void starship::modules::ruby::module(void* a0, unsigned long a1)
{
    unsigned long long v0;  // [bp-0x230]
    int v1;  // [bp-0x228], Other Possible Types: unsigned long long
    unsigned long long v2;  // [bp-0x220]
    int v3;  // [bp-0x218], Other Possible Types: unsigned long long
    unsigned long long v4;  // [bp-0x210]
    int v5;  // [bp-0x208]
    int v6;  // [bp-0x200]
    unsigned long long v7;  // [bp-0x1f0]
    char v8;  // [bp-0x1e8], Other Possible Types: unsigned long long
    int v9;  // [bp-0x1e8]
    unsigned long long v10;  // [bp-0x1e0]
    int v11;  // [bp-0x1d8], Other Possible Types: char *
    unsigned long long v12;  // [bp-0x1d0]
    void* v13;  // [bp-0x1c8], Other Possible Types: char
    int v14;  // [bp-0x1b8]
    unsigned long long v15;  // [bp-0x1a8]
    char v16;  // [bp-0x198]
    int v17;  // [bp-0x190], Other Possible Types: char
    unsigned long long v18;  // [bp-0x180]
    int v19;  // [bp-0x178]
    unsigned long long v20;  // [bp-0x168]
    char *v21;  // [bp-0x160]
    unsigned long long v22;  // [bp-0x158]
    int v23;  // [bp-0x150], Other Possible Types: char
    int v24;  // [bp-0x140]
    int v25;  // [bp-0x130]
    int v26;  // [bp-0x120]
    int v27;  // [bp-0x110]
    char v28;  // [bp-0x100]
    unsigned long long v29;  // [bp-0xf8]
    char v30;  // [bp-0xf0]
    int v31;  // [bp-0xe0]
    char *v32;  // [bp-0xd0]
    unsigned long v33;  // [bp-0xc8]
    char v34;  // [bp-0xc0]
    char v35;  // [bp-0xb8]
    char v36;  // [bp-0xa0]
    char v37;  // [bp-0x88]
    unsigned long long v38;  // [bp-0x70]
    unsigned long v39;  // [bp-0x68]
    unsigned long long v40;  // [bp-0x60]
    unsigned long long v41;  // [bp-0x58]
    char v42;  // [bp-0x50]
    int v43;  // [bp-0x40]
    char v44;  // [bp-0x30]
    int v46;  // xmm0
    int v47;  // xmm2
    char v48;  // al
    int v49;  // xmm0

    v23.new_module(a1, "rubyFishSUSEnone", 4);
    v34.try_load(v29);
    v8.try_begin_scan(a1);
    if (v8)
    {
        v46 = *((int128_t *)&v35);
        v47 = *((int128_t *)&v37);
        v0 = v8;
        *((int128_t *)&v1) = *((int128_t *)&v36);
        v3 = v47;
        v5 = v46;
        v48 = v0.is_match();
        *((unsigned long long *)&v9) = v38;
        v10 = v39 * 16 + v38;
        if ((v48 | (unsigned long long)v9.any()) != 1)
            goto LABEL_bb7af1;
        v0.new(v40, v41);
        memcpy(&v30, &v42, 16);
        v31 = v43;
        v32 = &v44;
        v33 = a1;
        if ((char)(((0 ^ v0) & (0 ^ -(v0))) >> 63))
        {
            v18 = v3;
            memcpy(&v17, &(char)v1, 16);
        }
        else
        {
            v15 = v7;
            v49 = *((int128_t *)&v0);
            v14 = v6;
            memcpy(&v13, &v3, 16);
            *((int128_t *)&v11) = (int128_t)(&v1)[8];
            v9 = v49;
            starship::modules::ruby::module::{{closure}}(&v16, &v30, &(unsigned long long)v9);
            if (*((int *)&v16) != 1)
            {
                v23.set_segments(&(char)v17);
                *((int128_t *)&a0[80]) = *((int128_t *)&v28);
                a0[64] = v27;
                a0[48] = v26;
                a0[32] = v25;
                a0[16] = v24;
                *(a0) = v23;
                core::ptr::drop_in_place<starship::configs::ruby::RubyConfig>(&v34);
                return;
            }
        }
        v20 = v18;
        v19 = v17;
        if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) >= 2)
        {
            v21 = &v19;
            v22 = <starship::formatter::string_formatter::StringFormatterError as core::fmt::Display>::fmt;
            v8 = &g_11f5e18;
            v10 = 1;
            v13 = 0;
            v11 = &v21;
            v12 = 1;
            v0 = "starship::modules::rubygemsetrvmError formatting `ruby` version:\n";
            v1 = 23;
            v2 = "starship::modules::rubygemsetrvmError formatting `ruby` version:\n";
            v3 = 23;
            v4 = log::__private_api::loc(&g_11f5e28);
            log::__private_api::log(&v8, 2, &v0);
        }
        *((unsigned long long *)a0) = 0x8000000000000000;
        core::ptr::drop_in_place<starship::formatter::string_formatter::StringFormatterError>(&v19);
    }
    else
    {
LABEL_bb7af1:
        *((unsigned long long *)a0) = 0x8000000000000000;
    }
    core::ptr::drop_in_place<starship::configs::ruby::RubyConfig>(&v34);
    core::ptr::drop_in_place<starship::module::Module>(&v23);
    return;
}
