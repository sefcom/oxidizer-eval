long long starship::config::parse_color_string(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0xcb]
    unsigned int v1;  // [bp-0xc8], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v2;  // [bp-0xc8]
    unsigned long long v3;  // [bp-0xc0]
    char *v4;  // [sp-0xb8], Other Possible Types: unsigned long
    unsigned long long v5;  // [sp-0xb0]
    char *v6;  // [sp-0xa8], Other Possible Types: void*
    unsigned long long v7;  // [bp-0xa0]
    unsigned long long v8;  // [bp-0x98]
    unsigned long long v9;  // [bp-0x88]
    unsigned long long v10;  // [bp-0x80]
    char *v11;  // [sp-0x78], Other Possible Types: unsigned long long
    unsigned long long v12;  // [sp-0x70]
    void* v13;  // [sp-0x68], Other Possible Types: unsigned long long
    char *v14;  // [sp-0x58], Other Possible Types: unsigned long long
    unsigned long long v15;  // [sp-0x50]
    char *v16;  // [sp-0x48], Other Possible Types: unsigned long long
    unsigned long long v17;  // [sp-0x40]
    unsigned long long v18;  // [bp-0x38]
    unsigned long v19;  // [bp-0x30]
    unsigned long long v21;  // 4096
    unsigned long long v22;  // 4096
    unsigned long long v26;  // rdx
    unsigned long long v27;  // r14
    unsigned long long v28;  // rax
    unsigned int v29;  // ebp
    unsigned long long v30;  // rax
    unsigned int v31;  // r15d
    unsigned long long v32;  // rax
    unsigned int v33;  // r14d
    unsigned int v34;  // ebx
    unsigned int v35;  // ebp
    unsigned long long v36;  // rdi
    unsigned long long v37;  // r15
    unsigned long long v38;  // r15
    unsigned long long v39[6];  // rax
    char v41;  // al

    v8 = a0;
    v21 = a1;
    v22 = a0;
    if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) >= 5)
    {
        v14 = &v8;
        v15 = <&T as core::fmt::Display>::fmt;
        v2 = &g_11f2778;
        v3 = 1;
        v6 = 0;
        v4 = &v14;
        v5 = 1;
        v9 = "starship::configstruct RedConfignot_found_symbolMatchRuleInvalidfloating point `";
        v10 = 16;
        v11 = "starship::configstruct RedConfignot_found_symbolMatchRuleInvalidfloating point `";
        v12 = 16;
        v13 = log::__private_api::loc(&g_11f2828);
        log::__private_api::log(&v2, 5, &v9);
        v21 = a1;
        v22 = v8;
    }
    v1 = 0;
    if ((char)core::slice::<impl [T]>::starts_with(v22, v21, ::0xa7eb90::core::char::methods::encode_utf8_raw(35, &v1, 4), v26))
    {
        if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) > 4)
        {
            v14 = &v8;
            v15 = <&T as core::fmt::Display>::fmt;
            v1 = &g_11f2788;
            v3 = 1;
            v6 = 0;
            v4 = &v14;
            v5 = 1;
            v9 = "starship::configstruct RedConfignot_found_symbolMatchRuleInvalidfloating point `";
            v10 = 16;
            v11 = "starship::configstruct RedConfignot_found_symbolMatchRuleInvalidfloating point `";
            v12 = 16;
            v13 = log::__private_api::loc(&g_11f28a0);
            log::__private_api::log(&v1, 5, &v9);
        }
        if (a1 == 7)
        {
            v27 = v8;
            v28 = 1.get(3, v27, 7);
            if (!v28)
                core::str::slice_error_fail(v27, 7, 1, 3, &g_11f28b8); /* do not return */
            if (((char)::0xa6d250::core::num::<impl u8>::from_ascii_radix(v28, v26, 16) & 1))
                return 21;
            v29 = v26;
            v30 = 3.get(5, v27, 7);
            if (!v30)
            {
                core::str::slice_error_fail(v27, 7, 3, 5, &g_11f28d0); /* do not return */
            }
            else if (!((char)::0xa6d250::core::num::<impl u8>::from_ascii_radix(v30, v26, 16) & 1))
            {
                v31 = v26;
                v32 = 5.get(7, v27, 7);
                if (!v32)
                {
                    core::str::slice_error_fail(v27, 7, 5, 7, &g_11f28e8); /* do not return */
                }
                else if (!((char)::0xa6d250::core::num::<impl u8>::from_ascii_radix(v32, v26, 16) & 1))
                {
                    v33 = v26;
                    v0 = v26;
                    if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) >= 5)
                    {
                        v1 = &(char)v26;
                        v3 = core::fmt::num::imp::<impl core::fmt::Display for u8>::fmt;
                        v4 = &(char)v26;
                        v5 = core::fmt::num::imp::<impl core::fmt::Display for u8>::fmt;
                        v6 = &v0;
                        v7 = core::fmt::num::imp::<impl core::fmt::Display for u8>::fmt;
                        v9 = &g_11f27a8;
                        v10 = 3;
                        v13 = 0;
                        v11 = &v1;
                        v12 = 3;
                        v14 = "starship::configstruct RedConfignot_found_symbolMatchRuleInvalidfloating point `";
                        v15 = 16;
                        v16 = "starship::configstruct RedConfignot_found_symbolMatchRuleInvalidfloating point `";
                        v17 = 16;
                        v18 = log::__private_api::loc(&g_11f2900);
                        log::__private_api::log(&v9, 5, &v14);
                        v29 = v26;
                        v31 = v26;
                        v33 = v0;
                    }
                    return 19 | (v33 * 0x10000 | v31 * 0x100 | v29) * 0x100;
                }
            }
            return 21;
        }
        v35 = 21;
        if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) > 3)
        {
            v14 = &v8;
            v15 = <&T as core::fmt::Display>::fmt;
            v1 = &g_11f2798;
            v3 = 1;
            v6 = 0;
            v4 = &v14;
            v5 = 1;
            v36 = &g_11f2918;
            goto LABEL_b6347a;
        }
    }
    else
    {
        v37 = v8;
        if (!((char)::0xa6d250::core::num::<impl u8>::from_ascii_radix(v37, a1, 10) & 1))
        {
            v34 = v26;
            v0 = v26;
            if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) >= 5)
            {
                v14 = &v0;
                v15 = core::fmt::num::imp::<impl core::fmt::Display for u8>::fmt;
                v1 = &g_11f27d8;
                v3 = 1;
                v6 = 0;
                v4 = &v14;
                v5 = 1;
                v9 = "starship::configstruct RedConfignot_found_symbolMatchRuleInvalidfloating point `";
                v10 = 16;
                v11 = "starship::configstruct RedConfignot_found_symbolMatchRuleInvalidfloating point `";
                v12 = 16;
                v13 = log::__private_api::loc(&g_11f2840);
                log::__private_api::log(&v1, 5, &v9);
                v34 = v0;
            }
            return 18 | v34 * 0x100;
        }
        v38 = v37;
        if (a2)
        {
            v39 = a2.get_inner(v37, a1);
            if (v39)
            {
                v19 = &v39[3];
                if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) > 4)
                {
                    v14 = &v8;
                    v15 = <&T as core::fmt::Display>::fmt;
                    v16 = &v19;
                    v17 = <&T as core::fmt::Display>::fmt;
                    v1 = &g_11f27e8;
                    v3 = 2;
                    v6 = 0;
                    v4 = &v14;
                    v5 = 2;
                    v9 = "starship::configstruct RedConfignot_found_symbolMatchRuleInvalidfloating point `";
                    v10 = 16;
                    v11 = "starship::configstruct RedConfignot_found_symbolMatchRuleInvalidfloating point `";
                    v12 = 16;
                    v13 = log::__private_api::loc(&g_11f2858);
                    log::__private_api::log(&v1, 5, &v9);
                }
                v35 = starship::config::parse_color_string(*((long long *)(v19 + 8)), *((long long *)(v19 + 16)), 0);
                return v35 | (v35 >> 8) * 0x100;
            }
            v38 = v8;
        }
        alloc::str::<impl str>::to_lowercase(&v1, v38, a1);
        v35 = 0;
        if (!(char)v3.equal(v4, "blackredgreenyellowpurplewhitebright-blackbright-redbright-greenbright-yellowbright-bluebright-purplebright-cyanbright-whiteRead predefined color: Could not parse color in string: Found color palette: Could not find color palette: No color palette specifie", 5))
        {
            v35 = 2;
            if (!(char)v3.equal(v4, "redgreenyellowpurplewhitebright-blackbright-redbright-greenbright-yellowbright-bluebright-purplebright-cyanbright-whiteRead predefined color: Could not parse color in string: Found color palette: Could not find color palette: No color palette specified, us", 3))
            {
                v35 = 4;
                if (!(char)v3.equal(v4, "greenyellowpurplewhitebright-blackbright-redbright-greenbright-yellowbright-bluebright-purplebright-cyanbright-whiteRead predefined color: Could not parse color in string: Found color palette: Could not find color palette: No color palette specified, using", 5))
                {
                    v35 = 6;
                    if (!(char)v3.equal(v4, "yellowpurplewhitebright-blackbright-redbright-greenbright-yellowbright-bluebright-purplebright-cyanbright-whiteRead predefined color: Could not parse color in string: Found color palette: Could not find color palette: No color palette specified, using defa", 6))
                    {
                        v35 = 8;
                        if (!(char)v3.equal(v4, "blue", 4))
                        {
                            v35 = 10;
                            if (!(char)v3.equal(v4, "purplewhitebright-blackbright-redbright-greenbright-yellowbright-bluebright-purplebright-cyanbright-whiteRead predefined color: Could not parse color in string: Found color palette: Could not find color palette: No color palette specified, using defaults", 6))
                            {
                                v35 = 14;
                                if (!(char)v3.equal(v4, "cyanbaseuser", 4))
                                {
                                    v35 = 16;
                                    if (!(char)v3.equal(v4, "whitebright-blackbright-redbright-greenbright-yellowbright-bluebright-purplebright-cyanbright-whiteRead predefined color: Could not parse color in string: Found color palette: Could not find color palette: No color palette specified, using defaults", 5))
                                    {
                                        v35 = 1;
                                        if (!(char)v3.equal(v4, "bright-blackbright-redbright-greenbright-yellowbright-bluebright-purplebright-cyanbright-whiteRead predefined color: Could not parse color in string: Found color palette: Could not find color palette: No color palette specified, using defaults", 12))
                                        {
                                            v35 = 3;
                                            if (!(char)v3.equal(v4, "bright-redbright-greenbright-yellowbright-bluebright-purplebright-cyanbright-whiteRead predefined color: Could not parse color in string: Found color palette: Could not find color palette: No color palette specified, using defaults", 10))
                                            {
                                                v35 = 5;
                                                if (!(char)v3.equal(v4, "bright-greenbright-yellowbright-bluebright-purplebright-cyanbright-whiteRead predefined color: Could not parse color in string: Found color palette: Could not find color palette: No color palette specified, using defaults", 12))
                                                {
                                                    v35 = 7;
                                                    if (!(char)v3.equal(v4, "bright-yellowbright-bluebright-purplebright-cyanbright-whiteRead predefined color: Could not parse color in string: Found color palette: Could not find color palette: No color palette specified, using defaults", 13))
                                                    {
                                                        v35 = 9;
                                                        if (!(char)v3.equal(v4, "bright-bluebright-purplebright-cyanbright-whiteRead predefined color: Could not parse color in string: Found color palette: Could not find color palette: No color palette specified, using defaults", 11))
                                                        {
                                                            v35 = 11;
                                                            if (!(char)v3.equal(v4, "bright-purplebright-cyanbright-whiteRead predefined color: Could not parse color in string: Found color palette: Could not find color palette: No color palette specified, using defaults", 13))
                                                            {
                                                                v35 = 15;
                                                                if (!(char)v3.equal(v4, "bright-cyanbright-whiteRead predefined color: Could not parse color in string: Found color palette: Could not find color palette: No color palette specified, using defaults", 11))
                                                                {
                                                                    v41 = v3.equal(v4, "bright-whiteRead predefined color: Could not parse color in string: Found color palette: Could not find color palette: No color palette specified, using defaults", 12);
                                                                    core::ptr::drop_in_place<alloc::string::String>(&v1);
                                                                    v35 = 17;
                                                                    if (v41)
                                                                    {
LABEL_b637c7:
                                                                        if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) > 4)
                                                                        {
                                                                            v14 = &v8;
                                                                            v15 = <&T as core::fmt::Display>::fmt;
                                                                            v1 = &g_11f2808;
                                                                            v3 = 1;
                                                                            v6 = 0;
                                                                            v4 = &v14;
                                                                            v5 = 1;
                                                                            v9 = "starship::configstruct RedConfignot_found_symbolMatchRuleInvalidfloating point `";
                                                                            v10 = 16;
                                                                            v11 = "starship::configstruct RedConfignot_found_symbolMatchRuleInvalidfloating point `";
                                                                            v12 = 16;
                                                                            v13 = log::__private_api::loc(&g_11f2870);
                                                                            log::__private_api::log(&v1, 5, &v9);
                                                                        }
                                                                    }
                                                                    else
                                                                    {
                                                                        v35 = 21;
                                                                        if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) > 3)
                                                                        {
                                                                            v14 = &v8;
                                                                            v15 = <&T as core::fmt::Display>::fmt;
                                                                            v1 = &g_11f2818;
                                                                            v3 = 1;
                                                                            v6 = 0;
                                                                            v4 = &v14;
                                                                            v5 = 1;
                                                                            v36 = &g_11f2888;
LABEL_b6347a:
                                                                            v9 = "starship::configstruct RedConfignot_found_symbolMatchRuleInvalidfloating point `";
                                                                            v10 = 16;
                                                                            v11 = "starship::configstruct RedConfignot_found_symbolMatchRuleInvalidfloating point `";
                                                                            v12 = 16;
                                                                            v13 = log::__private_api::loc(v36);
                                                                            log::__private_api::log(&v1, 4, &v9);
                                                                        }
                                                                    }
                                                                    return v35;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        core::ptr::drop_in_place<alloc::string::String>(&v1);
        goto LABEL_b637c7;
    }
}
