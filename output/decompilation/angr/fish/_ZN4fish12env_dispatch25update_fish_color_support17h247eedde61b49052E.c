long long fish::env_dispatch::update_fish_color_support(unsigned long long a0)
{
    void* v0;  // [bp-0x220]
    unsigned long long v1;  // [bp-0x218]
    void* v2;  // [bp-0x210]
    char v3;  // [bp-0x208]
    char v4;  // [bp-0x208]
    unsigned long long v5;  // [bp-0x200]
    char v6;  // [bp-0x1f8]
    int v7;  // [bp-0x1e8], Other Possible Types: char
    unsigned long long v8;  // [bp-0x1d8]
    int v9;  // [bp-0x1d0], Other Possible Types: char
    int v10;  // [bp-0x1b8]
    unsigned long long v11;  // [bp-0x1b0]
    unsigned long long v12;  // [bp-0x1a8]
    int v13;  // [bp-0x198], Other Possible Types: char, unsigned long, unsigned long long
    unsigned long long v14;  // [bp-0x188]
    char v15;  // [bp-0x178]
    char v16;  // [bp-0x160]
    char v17;  // [bp-0x148]
    char v18;  // [bp-0x130]
    char v19;  // [bp-0x118]
    char v20;  // [bp-0x100]
    char v21;  // [bp-0xe8]
    char v22;  // [bp-0xd0]
    char v23;  // [bp-0xb8]
    char v24;  // [bp-0xa0]
    char v25;  // [bp-0x88]
    char v26;  // [bp-0x70]
    char v27;  // [bp-0x58]
    char v28;  // [bp-0x40]
    char *v30;  // rbx
    unsigned long long v31;  // rax
    unsigned long v32;  // rdx
    char v33;  // bpl
    char v34;  // bl
    char v35;  // bl
    char v36;  // bpl
    char v37;  // bpl
    unsigned long v38;  // rax
    unsigned long v39;  // rsi

    v30 = &v15;
    v15.getf_unless_empty(a0, "T", 4, 0);
    if (!*((long long *)&v15))
        v30 = 0;
    v31 = v30.map_or();
    v33 = v31.eq_by(v31 + v32 * 4, "xterm-16color256-color support determined by $fish_term256:$fish_term24bit preference: 24-bit colorenabledTrue-color support: disabled for screentruecolor24bitTrue-color supportper $COLORTERMansi-mlinux-mxterm-mono", "256-color support determined by $fish_term256:$fish_term24bit preference: 24-bit colorenabledTrue-color support: disabled for screentruecolor24bitTrue-color supportper $COLORTERMansi-mlinux-mxterm-mono");
    v7.getf(a0, "f", 12, 0);
    if (*((long long *)&v7))
    {
        v12 = v8;
        v10 = v7;
        v4.as_string(&v7);
        v34 = fish::wcstringutil::bool_from_string(v5, *((long long *)&v6));
        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v4);
        if ((char)core::sync::atomic::atomic_load(&g_15a9980, 0))
        {
            v0 = 0;
            v1 = 1;
            v2 = 0;
            v9.to_flog_str(&g_15a9970);
            v4.into_iter(&v9);
            v0.spec_extend(&v4);
            v0.push(58, &g_14d6fd8);
            v0.push(32, &g_14d6fd8);
            v19.to_vec("256-color support determined by $fish_term256:$fish_term24bit preference: 24-bit colorenabledTrue-color support: disabled for screentruecolor24bitTrue-color supportper $COLORTERMansi-mlinux-mxterm-mono", 46);
            v4.into_iter(&v19);
            v0.spec_extend(&v4);
            v0.push(32, &g_14d6fd8);
            v20.to_vec((v34 ? "truePATHYankkMSGsmsckentsnlqkundkendkRESmsgrkNXTkprtkrescwin." : "falsefgfish_key_readerforfunctionshistoryifnotorprintfpwdrandomreturnsetset_colorsourcestatusswitchulimitwhileP"), v34 ^ 5);
            v4.into_iter(&v20);
            v0.spec_extend(&v4);
            v0.push(10, &g_14d6fd8);
            fish::flog::flog_impl(v1, 0);
            core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v0, v1);
        }
        core::ptr::drop_in_place<fish::env::var::EnvVar>(&v7);
    }
    else
    {
        v35 = v33 ^ 1;
    }
    v16.getf(a0, "f", 14, 0);
    if (*((long long *)&v16))
    {
        fish::env_dispatch::init_locale::{{closure}}(&v3, &v16);
        v14 = *((long long *)&v6);
        memcpy(&v13, &v3, 16);
        if (v13 == 0x8000000000000000)
            goto LABEL_139c395;
        v10 = v13;
        v12 = v14;
        v36 = fish::wcstringutil::bool_from_string(v11, v14);
        if ((char)core::sync::atomic::atomic_load(&g_15a9980, 0))
        {
            v0 = 0;
            v1 = 1;
            v2 = 0;
            v9.to_flog_str(&g_15a9970);
            v3.into_iter(&v9);
            v0.spec_extend(&v3);
            v0.push(58, &g_14d6ff0);
            v0.push(32, &g_14d6ff0);
            v21.to_vec("$fish_term24bit preference: 24-bit colorenabledTrue-color support: disabled for screentruecolor24bitTrue-color supportper $COLORTERMansi-mlinux-mxterm-mono", 40);
            v3.into_iter(&v21);
            v0.spec_extend(&v3);
            v0.push(32, &g_14d6ff0);
            v22.to_vec((v36 ? "enabledTrue-color support: disabled for screentruecolor24bitTrue-color supportper $COLORTERMansi-mlinux-mxterm-mono" : "disabled&"), 8 - v36);
            v3.into_iter(&v22);
            v0.spec_extend(&v3);
            v0.push(10, &g_14d6ff0);
            fish::flog::flog_impl(v1, 0);
            core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v0, v1);
        }
        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v13);
    }
    else
    {
        v13 = 0x8000000000000000;
LABEL_139c395:
        v3.getf(a0, "S", 3, 0);
        core::ptr::drop_in_place<core::option::Option<fish::env::var::EnvVar>>(&v3);
        if (!*((long long *)&v4))
        {
            v17.getf(a0, "C", 9, 0);
            if (*((long long *)&v17))
            {
                fish::env_dispatch::init_locale::{{closure}}(&v3, &v17);
                v8 = *((long long *)&v6);
                memcpy(&v7, &v3, 16);
                if (*((long long *)&v7) == 0x8000000000000000)
                    goto LABEL_139c52b;
                v10 = v7;
                v12 = v8;
                v37 = 1;
                if (!v11.eq(v12, "truecolor24bitTrue-color supportper $COLORTERMansi-mlinux-mxterm-mono", 9))
                    v11.eq(v12, "24bitTrue-color supportper $COLORTERMansi-mlinux-mxterm-mono", 5);
                if ((char)core::sync::atomic::atomic_load(&g_15a9980, 0))
                {
                    v0 = 0;
                    v1 = 1;
                    v2 = 0;
                    v9.to_flog_str(&g_15a9970);
                    v3.into_iter(&v9);
                    v0.spec_extend(&v3);
                    v0.push(58, &g_14d7020);
                    v0.push(32, &g_14d7020);
                    v24.to_vec("True-color supportper $COLORTERMansi-mlinux-mxterm-mono", 18);
                    v3.into_iter(&v24);
                    v0.spec_extend(&v3);
                    v0.push(32, &g_14d7020);
                    v25.to_vec((1 ? "enabledTrue-color support: disabled for screentruecolor24bitTrue-color supportper $COLORTERMansi-mlinux-mxterm-mono" : "disabled&"), 7);
                    v3.into_iter(&v25);
                    v0.spec_extend(&v3);
                    v0.push(32, &g_14d7020);
                    v26.to_vec("per $COLORTERMansi-mlinux-mxterm-mono", 14);
                    v3.into_iter(&v26);
                    v0.spec_extend(&v3);
                    v0.push(32, &g_14d7020);
                    v9.to_flog_str(&v7);
                    v3.into_iter(&v9);
                    v0.spec_extend(&v3);
                    v0.push(10, &g_14d7020);
                    fish::flog::flog_impl(v1, 0);
                    core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v0, v1);
                }
                core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v7);
            }
            else
            {
LABEL_139c52b:
                if (!v33)
                {
                    v18.getf_unless_empty(a0, "T", 12, 0);
                    if (*((long long *)&v18))
                        v37 = (char)fish::env_dispatch::update_fish_color_support::{{closure}}(&v18) ^ 1;
                    else
                        v37 = 1;
                }
                if ((char)core::sync::atomic::atomic_load(&g_15a9980, 0))
                {
                    v0 = 0;
                    v1 = 1;
                    v2 = 0;
                    v9.to_flog_str(&g_15a9970);
                    v3.into_iter(&v9);
                    v0.spec_extend(&v3);
                    v0.push(58, &g_14d7038);
                    v0.push(32, &g_14d7038);
                    v27.to_vec("True-color supportper $COLORTERMansi-mlinux-mxterm-mono", 18);
                    v3.into_iter(&v27);
                    v0.spec_extend(&v3);
                    v0.push(32, &g_14d7038);
                    v38 = v37;
                    v39 = ((v38 & 255) ? "enabledTrue-color support: disabled for screentruecolor24bitTrue-color supportper $COLORTERMansi-mlinux-mxterm-mono" : "disabled&");
                    v28.to_vec(((v38 & 255) ? "enabledTrue-color support: disabled for screentruecolor24bitTrue-color supportper $COLORTERMansi-mlinux-mxterm-mono" : "disabled&"), 8 - v38);
                    v3.into_iter(&v28);
                    v0.spec_extend(&v3);
                    v0.push(10, &g_14d7038);
                    fish::flog::flog_impl(v1, 0);
                    core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v0, v1);
                }
            }
        }
        else if ((char)core::sync::atomic::atomic_load(&g_15a9980, 0))
        {
            v0 = 0;
            v1 = 1;
            v2 = 0;
            v9.to_flog_str(&g_15a9970);
            v3.into_iter(&v9);
            v0.spec_extend(&v3);
            v0.push(58, &g_14d7008);
            v0.push(32, &g_14d7008);
            v23.to_vec("True-color support: disabled for screentruecolor24bitTrue-color supportper $COLORTERMansi-mlinux-mxterm-mono", 39);
            v3.into_iter(&v23);
            v0.spec_extend(&v3);
            v0.push(10, &g_14d7008);
            fish::flog::flog_impl(v1, 0);
            core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v0, v1);
        }
    }
    v4 = 0;
    v4.set(1, v35);
    v4.set(2, v37);
    fish::terminal::set_color_support(v4);
    return core::ptr::drop_in_place<core::option::Option<fish::env::var::EnvVar>>(&v15);
}
