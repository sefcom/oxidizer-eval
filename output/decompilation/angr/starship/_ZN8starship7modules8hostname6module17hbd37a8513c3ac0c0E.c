void starship::modules::hostname::module(void* a0)
{
    unsigned long long v0;  // [bp-0x290]
    int v1;  // [bp-0x288]
    unsigned long long v2;  // [bp-0x280]
    char v3;  // [bp-0x278], Other Possible Types: unsigned long long
    char v4;  // [bp-0x270], Other Possible Types: unsigned long long
    int v5;  // [bp-0x268], Other Possible Types: unsigned long long
    unsigned long long v6;  // [bp-0x260]
    char v7;  // [bp-0x258], Other Possible Types: unsigned long long
    int v8;  // [bp-0x248]
    unsigned long long v9;  // [bp-0x238]
    unsigned long long v10;  // [bp-0x230]
    int v11;  // [bp-0x228], Other Possible Types: unsigned long long
    unsigned long long v12;  // [bp-0x220]
    int v13;  // [bp-0x218], Other Possible Types: unsigned long long
    unsigned long long v14;  // [bp-0x210]
    int v15;  // [bp-0x208], Other Possible Types: char *
    unsigned long long v16;  // [bp-0x200]
    void* v17;  // [bp-0x1f8], Other Possible Types: char
    int v18;  // [bp-0x1e8]
    unsigned long long v19;  // [bp-0x1d8]
    char v20;  // [bp-0x1c8]
    int v21;  // [bp-0x1c0], Other Possible Types: char
    unsigned long long v22;  // [bp-0x1b0]
    int v23;  // [bp-0x1a8]
    unsigned long long v24;  // [bp-0x198]
    char v25;  // [bp-0x190]
    char *v26;  // [bp-0x178]
    unsigned long long v27;  // [bp-0x170]
    char *v28;  // [bp-0x168]
    int v29;  // [bp-0x160]
    char *v30;  // [bp-0x150]
    char *v31;  // [bp-0x148]
    unsigned long v32;  // [bp-0x140]
    int v33;  // [bp-0x138], Other Possible Types: char
    int v34;  // [bp-0x128]
    int v35;  // [bp-0x118]
    int v36;  // [bp-0x108]
    int v37;  // [bp-0xf8]
    char v38;  // [bp-0xe8]
    unsigned long long v39;  // [bp-0xe0]
    unsigned long long v40[1];  // [bp-0xd8]
    unsigned long long v41;  // [bp-0xd0]
    unsigned long v42;  // [bp-0xc8]
    char v43;  // [bp-0xc0]
    int v44;  // [bp-0x78]
    unsigned long long v45;  // [bp-0x68]
    unsigned long long v46;  // [bp-0x60]
    unsigned long long v47;  // [bp-0x58]
    unsigned long long v48;  // [bp-0x50]
    char v49;  // [bp-0x48]
    char v50;  // [bp-0x38]
    unsigned long v52;  // rsi
    unsigned long long v53;  // r13
    unsigned long long v54;  // r12
    unsigned long long v55;  // rdx
    unsigned long long v56;  // rsi
    uint128_t *v57;  // rax
    int v58;  // xmm0

    v33.new_module(v52, "hostname.haxelibClient: a structENOTSOCKpathspeciso88598upstreamGurmukhiTai_Thamlocation.xonshrcbuf.yamlOS_CLOUDWorktreesafecrlfiso88596", 8);
    v40.try_load(v39);
    v25.get_env("SSH_CONNECTIONError in module `hostname`:\nsrc/modules/hostname.rs", 14);
    if ((v50 != 1 || *((long long *)&v25) != 0x8000000000000000) && (char)a0.detect_env_vars(v41, v42))
    {
        (char)v13.hostname();
        v3.inspect_err(&(char)v13);
        if (v3 == 0x8000000000000000)
        {
            core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::io::error::Error>>(&v3);
        }
        else
        {
            *((int128_t *)&v1) = *((int128_t *)&v4);
            v0 = v3;
            if (v46)
            {
                v53 = (long long)v1;
                v54 = v2;
                if (((char)core::str::<impl str>::find(v53, v2, v45, v46) & 1))
                {
                    v10 = v53;
                    ::0xa7cbe0::core::str::<impl str>::split_at_checked(&(char)v13, v53, v2, v55);
                    v56 = v13;
                    if (!v13)
                        core::str::slice_error_fail(v10, v2, 0, v55, &g_11f3e60); /* do not return */
                    v54 = v14;
                }
                else
                {
                    v56 = v53;
                }
            }
            else
            {
                v56 = (long long)v1;
                v54 = v2;
            }
            v11 = v56;
            v12 = v54;
            v57 = v43.get(v56, v54, v46);
            if (v57)
                *((uint128_t *)&v11) = *(v57);
            v3.new(v47, v48);
            v28 = &v25;
            v29 = v44;
            v30 = &v49;
            v31 = &v11;
            v32 = v52;
            if (v3 == 0x8000000000000000)
            {
                v22 = v6;
                memcpy(&v21, &v4, 16);
            }
            else
            {
                v19 = v9;
                v58 = *((int128_t *)&v3);
                v18 = v8;
                memcpy(&v17, &v7, 16);
                *((int128_t *)&v15) = (int128_t)v5;
                v13 = v58;
                starship::modules::hostname::module::{{closure}}(&v20, &v28, &(char)v13);
                if (!(v20 & 1))
                {
                    v33.set_segments(&v21);
                    *((int128_t *)&a0[80]) = *((int128_t *)&v38);
                    a0[64] = v37;
                    a0[48] = v36;
                    a0[32] = v35;
                    a0[16] = v34;
                    *(a0) = v33;
                    core::ptr::drop_in_place<alloc::string::String>(&v0);
                    core::ptr::drop_in_place<regex::error::Error>(&v25);
                    core::ptr::drop_in_place<starship::configs::hostname::HostnameConfig>(&v40);
                    return;
                }
            }
            v24 = v22;
            v23 = v21;
            if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) >= 2)
            {
                v26 = &v23;
                v27 = <starship::formatter::string_formatter::StringFormatterError as core::fmt::Display>::fmt;
                v13 = &g_11f4fa0;
                v14 = 1;
                v17 = 0;
                v15 = &v26;
                v16 = 1;
                v3 = "starship::modules::hostnameFailed to get hostname: ";
                v4 = 27;
                v5 = "starship::modules::hostnameFailed to get hostname: ";
                v6 = 27;
                v7 = log::__private_api::loc(&g_11f4fb0);
                log::__private_api::log(&v13, 2, &v3);
            }
            *((unsigned long long *)a0) = 0x8000000000000000;
            core::ptr::drop_in_place<starship::formatter::string_formatter::StringFormatterError>(&v23);
            core::ptr::drop_in_place<alloc::string::String>(&v0);
LABEL_ba2df1:
            core::ptr::drop_in_place<regex::error::Error>(&v25);
            core::ptr::drop_in_place<starship::configs::hostname::HostnameConfig>(&v40);
            core::ptr::drop_in_place<starship::module::Module>(&v33);
            return;
        }
    }
    *((unsigned long long *)a0) = 0x8000000000000000;
    goto LABEL_ba2df1;
}
