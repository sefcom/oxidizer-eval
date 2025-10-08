long long starship::modules::username::module(void* a0, unsigned long a1)
{
    char v0;  // [bp-0x279]
    int v1;  // [bp-0x278]
    unsigned long long v2;  // [bp-0x270]
    unsigned long long v3;  // [bp-0x268]
    char v4;  // [bp-0x258], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v5;  // [bp-0x250]
    char *v6;  // [bp-0x248], Other Possible Types: unsigned long long
    unsigned long long v7;  // [bp-0x240]
    void* v8;  // [bp-0x238]
    int v9;  // [bp-0x228], Other Possible Types: unsigned long long
    unsigned long long v10;  // [bp-0x220]
    unsigned long long v11;  // [bp-0x218]
    unsigned long long v12;  // [bp-0x210]
    unsigned long long v13;  // [bp-0x208]
    char v14;  // [bp-0x1f8]
    int v15;  // [bp-0x1f0], Other Possible Types: char
    unsigned long long v16;  // [bp-0x1e0]
    int v17;  // [bp-0x1d8]
    unsigned long long v18;  // [bp-0x1c8]
    char *v19;  // [bp-0x1b8]
    unsigned long long v20;  // [bp-0x1b0]
    char v21;  // [bp-0x1a8]
    int v22;  // [bp-0x1a8]
    int v23;  // [bp-0x198], Other Possible Types: char
    int v24;  // [bp-0x188]
    int v25;  // [bp-0x178]
    int v26;  // [bp-0x168]
    char v27;  // [bp-0x158]
    unsigned long long v28;  // [bp-0x150]
    char v29;  // [bp-0x148], Other Possible Types: unsigned long long
    char v30;  // [bp-0x140]
    char *v31;  // [bp-0x130]
    char *v32;  // [bp-0x128]
    char *v33;  // [bp-0x120]
    char *v34;  // [bp-0x118]
    unsigned long v35;  // [bp-0x110]
    int v36;  // [bp-0x108], Other Possible Types: unsigned long long
    unsigned long long v37;  // [bp-0x100]
    unsigned long long v38;  // [bp-0xf8]
    char v39;  // [bp-0xf0]
    unsigned long long v40;  // [bp-0xa8]
    unsigned long long v41;  // [bp-0xa0]
    char v42;  // [bp-0x98]
    char v43;  // [bp-0x88]
    char v44;  // [bp-0x78]
    char v45;  // [bp-0x70], Other Possible Types: unsigned long
    char v46;  // [bp-0x68]
    char v47;  // [bp-0x58]
    unsigned long long v49;  // rax
    char v50;  // bpl
    unsigned long long v52[2];  // rax

    v29.username();
    if ((char)(((0 ^ v29) & (0 ^ -(v29))) >> 63))
    {
        v37 = *((long long *)&v30);
        v36 = 0x8000000000000000;
    }
    else
    {
        whoami::conversions::string_from_os(&(char)v36, &v29);
    }
    (char)v22.inspect_err(&v36);
    if (*((long long *)&v21) == 0x8000000000000000)
    {
        v36 = 0x8000000000000000;
        core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::io::error::Error>>(&(char)v22);
    }
    else
    {
        v38 = *((long long *)&v23);
        v36 = v22;
    }
    v49 = v4.or_else(&v36);
    if (v4 == 0x8000000000000000)
    {
        *((unsigned long long *)a0) = 0x8000000000000000;
        return v49;
    }
    v3 = v6;
    *((int128_t *)&v1) = *((int128_t *)&v4);
    (char)v22.new_module(a1, "usernamebold redstderr: ", 8);
    v36.try_load(v28);
    v50 = a0.detect_env_vars2(v37, v38);
    v0 = starship::modules::username::is_root_user();
    if (!v0 && !v44 && (char)starship::modules::username::is_login_user(v2, v3))
    {
        if (v50 == 1 || !v50 == 2 && !starship::modules::username::is_ssh_session())
            goto LABEL_bc0360;
LABEL_bc0272:
        v52 = v39.get(&(char)v1);
        if (v52)
        {
            v4.to_vec(v52[0], v52[1]);
            v11 = v6;
            *((int128_t *)&v9) = *((int128_t *)&v4);
            core::ptr::drop_in_place<alloc::string::String>(&(char)v1);
            v3 = v11;
            *((int128_t *)&v1) = (int128_t)v9;
        }
        v45.new(v40, v41);
        v31 = &v0;
        v32 = &v42;
        v33 = &v43;
        v34 = &(char)v1;
        v35 = a1;
        if (v45 == 0x8000000000000000)
        {
            v16 = *((long long *)&v47);
            memcpy(&v15, &v46, 16);
LABEL_bc0393:
            v18 = v16;
            v17 = v15;
            if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) >= 2)
            {
                v19 = &v17;
                v20 = <starship::formatter::string_formatter::StringFormatterError as core::fmt::Display>::fmt;
                v4 = &g_11f6408;
                v5 = 1;
                v8 = 0;
                v6 = &v19;
                v7 = 1;
                v9 = "starship::modules::usernameFailed to get username ";
                v10 = 27;
                v11 = "starship::modules::usernameFailed to get username ";
                v12 = 27;
                v13 = log::__private_api::loc(&g_11f6418);
                log::__private_api::log(&v4, 2, &v9);
            }
            *((unsigned long long *)a0) = 0x8000000000000000;
            core::ptr::drop_in_place<starship::formatter::string_formatter::StringFormatterError>(&v17);
LABEL_bc047a:
            core::ptr::drop_in_place<starship::configs::username::UsernameConfig>(&v36);
            core::ptr::drop_in_place<starship::module::Module>(&(char)v22);
        }
        else
        {
            starship::modules::username::module::{{closure}}(&v14, &v31, &v45);
            if ((v14 & 1))
                goto LABEL_bc0393;
            (char)v22.set_segments(&v15);
            *((int128_t *)&a0[80]) = *((int128_t *)&v27);
            a0[64] = v26;
            a0[48] = v25;
            a0[32] = v24;
            a0[16] = v23;
            *(a0) = v22;
            core::ptr::drop_in_place<starship::configs::username::UsernameConfig>(&v36);
        }
    }
    else
    {
        if (v50 != 1)
            goto LABEL_bc0272;
LABEL_bc0360:
        *((unsigned long long *)a0) = 0x8000000000000000;
        goto LABEL_bc047a;
    }
    return (unsigned long long)core::ptr::drop_in_place<alloc::string::String>(&(char)v1);
}
