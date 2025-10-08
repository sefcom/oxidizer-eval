long long starship::modules::env_var::module(void* a0, unsigned long long a1, unsigned long long a2)
{
    char *v0;  // [bp-0x288]
    int v1;  // [bp-0x288], Other Possible Types: unsigned long long
    unsigned long long v2;  // [bp-0x280]
    char *v3;  // [bp-0x278], Other Possible Types: int
    unsigned long long v4;  // [bp-0x270]
    int v5;  // [bp-0x268], Other Possible Types: void*
    int v6;  // [bp-0x258], Other Possible Types: char
    unsigned long long v7;  // [sp-0x248]
    unsigned long long v8;  // [bp-0x238]
    unsigned long long v9;  // [bp-0x238]
    unsigned long long v10;  // [bp-0x230]
    char *v11;  // [bp-0x228]
    unsigned long long v12;  // [bp-0x228]
    unsigned long long v13;  // [bp-0x220]
    void* v14;  // [bp-0x218]
    char v15;  // [bp-0x210], Other Possible Types: unsigned long long
    unsigned long long v16;  // [bp-0x208]
    char v17;  // [bp-0x200], Other Possible Types: unsigned long long
    unsigned long long v18;  // [bp-0x1f8]
    unsigned long long v19;  // [bp-0x1f0]
    char v20;  // [bp-0x1e8]
    char v21;  // [bp-0x1e0]
    char v22;  // [bp-0x1d8]
    char v23;  // [bp-0x1d0], Other Possible Types: unsigned long
    char v24;  // [bp-0x1c8]
    char v25;  // [bp-0x1c0]
    int v26;  // [bp-0x1b8]
    char *v27;  // [bp-0x1a8], Other Possible Types: unsigned long long
    unsigned long long v28;  // [bp-0x1a0]
    unsigned long long v29;  // [bp-0x1a0]
    unsigned long long v30;  // [bp-0x198]
    unsigned long long v31;  // [bp-0x198]
    char v32;  // [bp-0x190], Other Possible Types: unsigned long long
    unsigned long long v33;  // [bp-0x188]
    char v34;  // [bp-0x180], Other Possible Types: unsigned long long
    int v35;  // [bp-0x170]
    unsigned long long v36;  // [bp-0x160]
    char v37;  // [bp-0x158]
    int v38;  // [bp-0x158]
    char v39;  // [bp-0x148]
    int v40;  // [bp-0x148]
    char v41;  // [bp-0x138]
    int v42;  // [bp-0x138]
    char v43;  // [bp-0x128]
    unsigned long long v45;  // [bp-0x118]
    int v46;  // [bp-0x108]
    char v47;  // [bp-0xf8]
    int v48;  // [bp-0xf0], Other Possible Types: char
    unsigned long long v49;  // [bp-0xe0]
    int v50;  // [bp-0xd8]
    unsigned long long v51;  // [bp-0xc8]
    unsigned long v52;  // [bp-0xc0]
    unsigned long v53;  // [bp-0xb8]
    char *v54;  // [bp-0xb0]
    unsigned long long v55;  // [bp-0xa8]
    unsigned long long v56;  // [bp-0xa0]
    unsigned long long v57;  // [bp-0xa0]
    unsigned long long v58;  // [bp-0x98]
    char v59;  // [bp-0x88]
    int v60;  // [bp-0x78]
    int v61;  // [bp-0x68]
    unsigned long long v62;  // [bp-0x58]
    char v63;  // [bp-0x50]
    char *v64;  // [bp-0x40]
    char *v65;  // [bp-0x38]
    unsigned long long v66;  // [bp-0x30]
    unsigned long long v68;  // r15
    unsigned long long v69;  // r12
    unsigned long long v70;  // rcx
    unsigned long v71;  // rdi
    unsigned long long v72;  // rax
    unsigned long long v73;  // rax
    unsigned long long v74;  // rax
    unsigned long long v75;  // rsi
    char v76[8];  // rdx
    char v77[8];  // rdx
    int v78;  // xmm0
    int v79;  // [bp-0x128]

    v68 = a2;
    v69 = a1;
    v71 = v70 + 488;
    if (a1)
    {
        v8 = "env_varfg:bg:underlineitalicdimmedblinkhiddenstrikethroughprev_fgprev_bgParsing color_string: Attempting to read hexadecimal color string: Could not parse hexadecimal string: Read RGB color string: Read ANSI color string:  defined as ";
        v10 = 7;
        v12 = a1;
        v13 = a2;
        v72 = v71.get_config(&v8, 2);
        if (v72)
        {
            v58 = v72;
            v73 = 9223372036854775814;
        }
        else
        {
            v73 = 9223372036854775815;
        }
        v57 = v73;
        v29 = a1;
        v31 = a2;
        v0 = &v29;
        v2 = <&T as core::fmt::Display>::fmt;
        v9 = &g_11f45b0;
        v10 = 1;
        v14 = 0;
        v11 = &v0;
        v13 = 1;
        v37.map_or_else(0, a2, &v9);
        v26 = v38;
        v27 = *((long long *)&v39);
        v56 = v57;
        if (v56 == 9223372036854775814)
            goto LABEL_b934c2;
LABEL_b9340c:
        v57 = v56;
        v75 = (v57 == 9223372036854775815 ? 0 : &v57);
        goto LABEL_b934ca;
    }
    else
    {
        v74 = v71.get_module_config("env_varfg:bg:underlineitalicdimmedblinkhiddenstrikethroughprev_fgprev_bgParsing color_string: Attempting to read hexadecimal color string: Could not parse hexadecimal string: Read RGB color string: Read ANSI color string:  defined as ", 7);
        if (v74)
        {
            starship::modules::env_var::filter_config(&(char)v9, v74);
            v74 = v9;
            if (v74 != 9223372036854775814)
            {
                v45 = v19;
                memcpy(&v43, &v17, 16);
                memcpy(&v41, &v15, 16);
                memcpy(&v39, &v13, 16);
                memcpy(&v37, &v10, 16);
                if (v74 != 9223372036854775815)
                {
                    v7 = v45;
                    memcpy(&v6, &v43, 16);
                    v5 = v42;
                    v3 = v40;
                    v1 = v38;
                    if (v74 != 9223372036854775816)
                    {
                        v62 = v7;
                        v61 = v6;
                        v60 = v5;
                        memcpy(&v59, &v3, 16);
                        memcpy(&v58, &v1, 16);
                        v57 = v74;
                        (char)v9.to_vec("env_varfg:bg:underlineitalicdimmedblinkhiddenstrikethroughprev_fgprev_bgParsing color_string: Attempting to read hexadecimal color string: Could not parse hexadecimal string: Read RGB color string: Read ANSI color string:  defined as ", 7);
                        v27 = v11;
                        memcpy(&v26, &v9, 16);
                        v56 = v57;
                        if (v56 != 9223372036854775814)
                            goto LABEL_b9340c;
LABEL_b934c2:
                        v75 = v58;
LABEL_b934ca:
                        v9.try_load(v75);
                        v37.new(&v26, v16, v17);
                        if (v22)
                        {
LABEL_b9360a:
                            *((unsigned long long *)a0) = 0x8000000000000000;
                            goto LABEL_b93780;
                        }
                        if (v18)
                            v69 = v18;
                        if (!v69)
                            goto LABEL_b9360a;
                        if (v18)
                            v68 = v19;
                        v23.get_env(v69, v68);
                        v76 = &v20;
                        if (v23 != 0x8000000000000000)
                            v76 = &v24;
                        if (*(v76))
                        {
                            v77 = &v25;
                            if (v23 == 0x8000000000000000)
                                v77 = &v21;
                            *((char [8])&v52) = *(v76);
                            *((char [8])&v53) = *(v77);
                            v29.new(v14, v15);
                            memcpy(&v63, &v9, 16);
                            v64 = &v11;
                            v65 = &v52;
                            v66 = v70;
                            if (v29 == 0x8000000000000000)
                            {
                                v49 = v33;
                                memcpy(&v48, &v31, 16);
LABEL_b93680:
                                v51 = v49;
                                v50 = v48;
                                if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) >= 2)
                                {
                                    v54 = &v50;
                                    v55 = <starship::formatter::string_formatter::StringFormatterError as core::fmt::Display>::fmt;
                                    v1 = &g_11f45c0;
                                    v2 = 1;
                                    v5 = 0;
                                    v3 = &v54;
                                    v4 = 1;
                                    v28 = "starship::modules::env_varenv_valueFiltered top-level env_var config: Error in module `erlang`:\nsrc/modules/erlang.rs";
                                    v30 = 26;
                                    v32 = "starship::modules::env_varenv_valueFiltered top-level env_var config: Error in module `erlang`:\nsrc/modules/erlang.rs";
                                    v33 = 26;
                                    v34 = log::__private_api::loc(&g_11f45d0);
                                    log::__private_api::log(&v1, 2, &v28);
                                }
                                *((unsigned long long *)a0) = 0x8000000000000000;
                                core::ptr::drop_in_place<starship::formatter::string_formatter::StringFormatterError>(&v50);
LABEL_b93773:
                                core::ptr::drop_in_place<regex::error::Error>(&v23);
LABEL_b93780:
                                core::ptr::drop_in_place<starship::module::Module>(&v37);
                            }
                            else
                            {
                                v7 = v36;
                                v78 = *((int128_t *)&v29);
                                v6 = v35;
                                memcpy(&v5, &v34, 16);
                                *((int128_t *)&v3) = *((int128_t *)&v32);
                                v1 = v78;
                                starship::modules::env_var::module::{{closure}}(&v47, &v63, &v0);
                                if ((v47 & 1))
                                    goto LABEL_b93680;
                                v37.set_segments(&v48);
                                a0[80] = v46;
                                *((int128_t *)&a0[64]) = *((int128_t *)&v45);
                                a0[48] = v79;
                                a0[32] = v42;
                                a0[16] = v40;
                                *(a0) = v38;
                                core::ptr::drop_in_place<regex::error::Error>(&v23);
                            }
                        }
                        else
                        {
                            *((unsigned long long *)a0) = 0x8000000000000000;
                            goto LABEL_b93773;
                        }
                        return core::ptr::drop_in_place<core::option::Option<alloc::borrow::Cow<toml::value::Value>>>(&v57);
                    }
                }
            }
        }
        *((unsigned long long *)a0) = 0x8000000000000000;
        return v74;
    }
}
