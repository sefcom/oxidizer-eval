long long fish::builtins::function::parse_cmd_opts(void* a0, unsigned long long *a1, unsigned long long a2[2305843009213693952], unsigned long long a3, struct_0 *a4, struct_1 *a5)
{
    unsigned long long v0[3];  // [bp-0x1c8]
    unsigned long long v1;  // [sp-0x1c0]
    void* v2;  // [sp-0x1b8], Other Possible Types: unsigned long, unsigned long long
    void* v3;  // [sp-0x1a8], Other Possible Types: unsigned int
    unsigned long long v4;  // [bp-0x1a8]
    unsigned long long v5;  // [sp-0x1a0]
    void* v6;  // [sp-0x198], Other Possible Types: unsigned long
    unsigned long v7;  // [sp-0x188], Other Possible Types: char
    int v8;  // [bp-0x188]
    unsigned int v9;  // [bp-0x188]
    unsigned int v10;  // [bp-0x188]
    unsigned int v11;  // [bp-0x188]
    unsigned int v12;  // [bp-0x188]
    unsigned long long v13;  // [bp-0x180]
    int v14;  // [bp-0x180]
    int v15;  // [bp-0x180]
    void* v16;  // [sp-0x178], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v17;  // [bp-0x170], Other Possible Types: unsigned long
    void* v18;  // [sp-0x168], Other Possible Types: char
    int v19;  // [bp-0x160], Other Possible Types: unsigned long long
    unsigned long v20;  // [bp-0x158]
    char v21;  // [bp-0x138]
    unsigned long v22;  // [bp-0x120]
    unsigned long long v23;  // [bp-0x118]
    unsigned long v24;  // [bp-0x110]
    int v25;  // [bp-0x108]
    unsigned long long v26;  // [bp-0x100]
    unsigned long v27;  // [bp-0xf8]
    void* v28;  // [bp-0xf0]
    unsigned long long v29;  // [bp-0xe8]
    void* v30;  // [bp-0xe0]
    unsigned long long v31[2305843009213693952];  // [bp-0xd8]
    unsigned long long v32;  // [bp-0xd0]
    unsigned long long v33;  // [bp-0xc8]
    unsigned long long v34;  // [bp-0xc0]
    unsigned long long v35;  // [bp-0xb8]
    unsigned long long v36;  // [bp-0xb0]
    unsigned long long v37;  // [bp-0xa8]
    int v38;  // [bp-0xa0]
    unsigned long long v39;  // [bp-0x98]
    unsigned long v40;  // [bp-0x90]
    void* v41;  // [bp-0x88]
    uint128_t v42;  // [bp-0x80]
    unsigned int v43;  // [bp-0x70]
    unsigned short v44;  // [bp-0x6c]
    char v45;  // [bp-0x6a]
    int v46;  // [bp-0x68]
    unsigned long long v47;  // [bp-0x60]
    unsigned long v48;  // [bp-0x58]
    char *v49;  // [bp-0x50]
    unsigned long v50;  // [bp-0x48]
    unsigned long v51;  // [bp-0x40]
    char *v53;  // rdi
    unsigned long long v54;  // rcx
    char v55;  // r14b
    char *v56;  // rbp
    unsigned long long v57;  // r15
    unsigned int v58;  // eax
    unsigned long long v59;  // r14
    unsigned long v60;  // r13
    void* v61;  // rdx
    unsigned int v62;  // r14d
    unsigned long long v63;  // rcx
    unsigned long long v64;  // rcx
    unsigned int v65;  // eax
    unsigned long long v66;  // rcx
    unsigned long long v67;  // r14
    unsigned long v68;  // r13
    unsigned int v69;  // eax
    unsigned long v71;  // rdi
    unsigned long long v74;  // rbx
    unsigned long long v76;  // rdx
    unsigned long long v78;  // rbx
    unsigned long long v79;  // rax
    unsigned long long v80;  // rdx
    unsigned long long v81;  // rbx
    unsigned long long v83;  // rdx
    unsigned long long v85;  // rbx
    unsigned long long v87;  // rdx
    unsigned long long v88;  // rbx
    unsigned long long v90;  // rdx
    unsigned long long v91;  // rbx
    unsigned long long v93;  // rdx
    unsigned long long v94;  // rbx
    unsigned long long v96;  // rdx
    unsigned long long v98;  // rbx
    unsigned long long v100;  // rdx

    v31[0] = a2;
    v32 = a3;
    v33 = "-";
    v34 = 21;
    v35 = &g_14c9ba8;
    v36 = 11;
    v37 = 4;
    *((uint128_t *)&v38) = 0;
    v41 = 0;
    v43 = 63;
    v45 = 1;
    v44 = 0;
    v28 = 0;
    v42 = 0;
    v29 = 8;
    v30 = 0;
    v50 = a0 + 72;
    v51 = a0 + 96;
    v22 = a0 + 24;
    v24 = a0 + 48;
    v53 = &v28;
    v54 = fish::wgetopt::WGetopter::next_opt;
    v49 = &v7;
    v23 = &v0;
    while (true)
    {
        v56 = v53;
        v57 = v54;
        v58 = v53.next_opt();
        if (v58 == 0x110000)
        {
            *(a1) = v41;
            core::ptr::drop_in_place<fish::wgetopt::WGetopter>(&v28);
            return 0;
        }
        switch (v58)
        {
        case 1:
            if (v39)
            {
                v7.to_vec(v39, v40);
                v27 = v16;
                *((int128_t *)&v25) = *((int128_t *)&v9);
                if (!(v55 & 1))
                {
                    v78 = a5->field_10;
                    v3 = 0;
                    v5 = 4;
                    v6 = 0;
                    v1 = "%";
                    v2 = 40;
                    *(v0) = 0x8000000000000000;
                    v79 = v0.localize();
                    v7 = 1;
                    v13 = "f";
                    v16 = 8;
                    v18 = 1;
                    *((int128_t *)&v19) = *((int128_t *)&v26);
                    fish_printf::printf_impl::sprintf_locale(&v21, &v3, v79, v80, ".", &(unsigned int)v8, 2);
                    v21.unwrap(&g_14c9d08);
                    core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(&(unsigned int)v8);
                    core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v0);
                    *((int128_t *)&v8) = *((int128_t *)&v3);
                    v16 = 0;
                    v78.append(&(unsigned int)v8);
                    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&(char)v25);
                    core::ptr::drop_in_place<fish::wgetopt::WGetopter>(&v28);
                    return 2;
                }
                else if (!(char)fish::env::var::is_read_only(v26, v27))
                {
                    v55 = 1;
                    v24.push(&(char)v25, &g_14c9cc0);
                    v53 = v56;
                    v54 = v57;
                    break;
                }
                else
                {
                    v81 = a5->field_10;
                    v3 = 0;
                    v5 = 4;
                    v6 = 0;
                    v1 = "%";
                    v2 = 33;
                    *(v0) = 0x8000000000000000;
                    v7 = 1;
                    v13 = "f";
                    v16 = 8;
                    v18 = 1;
                    v19 = v26;
                    v20 = v27;
                    fish_printf::printf_impl::sprintf_locale(&v21, &v3, v0.localize(), v83, ".", &v7, 2);
                    v21.unwrap(&g_14c9cd8);
                    core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(&v7);
                    core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v0);
                    *((int128_t *)&v8) = *((int128_t *)&v3);
                    v16 = 0;
                    v81.append(&v7);
                    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&(char)v25);
                    core::ptr::drop_in_place<fish::wgetopt::WGetopter>(&v28);
                    return 2;
                }
            }
            else
            {
                core::option::unwrap_failed(&g_14c9cf0); /* do not return */
            }
        case 58:
            v71 = v41 - 1;
            if (v41 < 1)
            {
                core::panicking::panic_const::panic_const_sub_overflow(&g_14c9f30); /* do not return */
            }
            else if (v71 < a3)
            {
                fish::builtins::shared::builtin_missing_argument(a4, a5, "f", 8, a2[2 * v71], a2[1 + 2 * v71], 0);
                core::ptr::drop_in_place<fish::wgetopt::WGetopter>(&v28);
                return 2;
            }
            else
            {
                core::panicking::panic_bounds_check(v71, a3, &g_14c9f48); /* do not return */
            }
        case 59:
            v71 = v41 - 1;
            if (v41 < 1)
            {
                core::panicking::panic_const::panic_const_sub_overflow(&g_14c9f60); /* do not return */
            }
            else if (v71 < a3)
            {
                fish::builtins::shared::builtin_unexpected_argument(a4, a5, "f", 8, a2[2 * v71], a2[1 + 2 * v71], 0);
                core::ptr::drop_in_place<fish::wgetopt::WGetopter>(&v28);
                return 2;
            }
            else
            {
                core::panicking::panic_bounds_check(v71, a3, &g_14c9f78); /* do not return */
            }
        case 63:
            v71 = v41 - 1;
            if (v41 < 1)
            {
                core::panicking::panic_const::panic_const_sub_overflow(&g_14c9f90); /* do not return */
            }
            else if (v71 < a3)
            {
                fish::builtins::shared::builtin_unknown_option(a4, a5, "f", 8, a2[2 * v71], a2[1 + 2 * v71], 0);
                core::ptr::drop_in_place<fish::wgetopt::WGetopter>(&v28);
                return 2;
            }
            else
            {
                core::panicking::panic_bounds_check(v71, a3, &g_14c9fa8); /* do not return */
            }
        case 83:
            *((char *)&a0[121]) = 0;
            goto LABEL_1352681;
        case 86:
            if (!v39)
            {
                core::option::unwrap_failed(&g_14c9ee8); /* do not return */
            }
            else if ((char)fish::common::valid_var_name(v39, v40))
            {
                v7.to_vec(v39, v40);
                v2 = v16;
                *((int128_t *)&v0) = *((int128_t *)&v10);
                v50.push(&v0, &g_14c9f18);
                goto LABEL_1352681;
            }
            else
            {
                v88 = a5->field_10;
                *(v0) = 0;
                v1 = 4;
                v2 = 0;
                v7 = 1;
                v13 = "f";
                v16 = 8;
                v18 = 1;
                v19 = v39;
                v20 = v40;
                fish_printf::printf_impl::sprintf_locale(&v4, &v0, g_14c9d98[0].localize(), v90, ".", &v7, 2);
                v4.unwrap(&g_14c9f00);
                core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(&v7);
                *((int128_t *)&v8) = *((int128_t *)&v0[0]);
                v16 = 0;
                v88.append(&v7);
                core::ptr::drop_in_place<fish::wgetopt::WGetopter>(&v28);
                return 2;
            }
        case 97:
            if (v39)
            {
                v7.to_vec(v39, v40);
                v48 = v16;
                *((int128_t *)&v46) = *((int128_t *)&v9);
                if ((char)fish::env::var::is_read_only(v47, v48))
                {
                    v74 = a5->field_10;
                    v3 = 0;
                    v5 = 4;
                    v6 = 0;
                    v1 = "%";
                    v2 = 33;
                    *(v0) = 0x8000000000000000;
                    v7 = 1;
                    v13 = "f";
                    v16 = 8;
                    v18 = 1;
                    v19 = v47;
                    v20 = v48;
                    fish_printf::printf_impl::sprintf_locale(&v21, &v3, v0.localize(), v76, ".", &v7, 2);
                    v21.unwrap(&g_14c9ea0);
                    core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(&v7);
                    core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v0);
                    *((int128_t *)&v8) = *((int128_t *)&v3);
                    v16 = 0;
                    v74.append(&v7);
                    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&(char)v46);
                    core::ptr::drop_in_place<fish::wgetopt::WGetopter>(&v28);
                    return 2;
                }
                v55 = 1;
                v24.push(&(char)v46, &g_14c9e88);
                v53 = v56;
                v54 = v57;
                break;
            }
            else
            {
                core::option::unwrap_failed(&g_14c9e70); /* do not return */
            }
        case 100:
            if (v39)
            {
                v7.to_vec(v39, v40);
                v2 = v16;
                *((int128_t *)&v0) = *((int128_t *)&v9);
                core::ptr::drop_in_place<widestring::utfstring::Utf32String>(a0);
                *((unsigned long *)&a0[16]) = v2;
                *((int128_t *)a0) = *((int128_t *)&v0[0]);
                goto LABEL_1352681;
            }
            else
            {
                core::option::unwrap_failed(&g_14c9d20); /* do not return */
            }
        case 101:
            if (v39)
            {
                v0.to_vec(v39, v40);
                v17 = v2;
                *((int128_t *)&v15) = *((int128_t *)&v0[0]);
                v11 = 6;
                v22.push(&v11, &g_14c9df8);
                goto LABEL_1352681;
            }
            else
            {
                core::option::unwrap_failed(&g_14c9de0); /* do not return */
            }
        case 104:
            *((char *)&a0[120]) = 1;
            goto LABEL_1352681;
        case 106: case 112:
            v59 = v39;
            if (!v59)
                core::option::unwrap_failed(&g_14c9e10); /* do not return */
            v60 = v40;
            switch (v58)
            {
            case 112:
                if (v59.eq_by(v59 + v60 * 4, "%self", &g_a03dc9))
                {
                    v65 = fish::nix::getpid();
                    if (v65 < 0)
                    {
                        v7 = &g_14c74d8;
                        v23 = 8;
                        v13 = 1;
                        v18 = 0;
                        v16 = 8;
                        v17 = 0;
                        core::panicking::panic_fmt(v49, &g_14c74e8); /* do not return */
                    }
                    v64 = v65;
                }
                else
                {
                    v66 = fish::wutil::wcstoi::fish_wcstoi(v59, v60);
                    if (v66 < 0 || ((char)v66 & 1))
                    {
LABEL_1352af0:
                        v85 = a5->field_10;
                        v3 = 0;
                        v5 = 4;
                        v6 = 0;
                        v1 = "%";
                        v2 = 28;
                        *(v0) = 0x8000000000000000;
                        v7 = 1;
                        v13 = "f";
                        v16 = 8;
                        v18 = 1;
                        v19 = v59;
                        v20 = v60;
                        fish_printf::printf_impl::sprintf_locale(&v21, &v3, v0.localize(), v87, ".", &(unsigned int)v8, 2);
                        v21.unwrap(&g_14c9e58);
                        core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(&(unsigned int)v8);
                        core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v0);
                        *((int128_t *)&v8) = *((int128_t *)&v3);
                        v16 = 0;
                        v85.append(&(unsigned int)v8);
                        core::ptr::drop_in_place<fish::wgetopt::WGetopter>(&v28);
                        return 2;
                    }
                    v64 = v66 >> 32;
                    if (!v66 >> 32)
                        v64 = 0;
                }
                v62 = 3;
                break;
            case 106:
                if (v59.eq_by(v59 + v60 * 4, "caller", &g_a03d12))
                {
                    if (a4->field_58 == 1)
                    {
                        v61 = a4->field_50;
                        v62 = 5;
                        if (v61)
                            break;
                    }
                    v98 = a5->field_10;
                    v3 = 0;
                    v5 = 4;
                    v6 = 0;
                    v1 = "%";
                    v2 = 44;
                    *(v0) = 0x8000000000000000;
                    v7 = 1;
                    v13 = "f";
                    v16 = 8;
                    fish_printf::printf_impl::sprintf_locale(&v21, &v3, v0.localize(), v100, ".", &(unsigned int)v8, 1);
                    v21.unwrap(&g_14c9e28);
                    core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&(unsigned int)v8);
                    core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v0);
                    *((int128_t *)&v8) = *((int128_t *)&v3);
                    v16 = 0;
                    v98.append(&(unsigned int)v8);
                    core::ptr::drop_in_place<fish::wgetopt::WGetopter>(&v28);
                    return 2;
                }
                break;
            default:
                v63 = fish::wutil::wcstoi::fish_wcstoi(v59, v60);
                if (v63 < 0 || ((char)v63 & 1))
                    goto LABEL_1352af0;
                v61 = 0;
                v64 = v63 >> 32;
                if (!v63 >> 32)
                    v64 = 0;
                v62 = 4;
                if ((unsigned int)v64)
                {
                    v64 = v64;
                    if (!((char)fish::builtins::function::job_id_for_pid(v64, a4) & 1))
                    {
                        v61 = 0;
                        break;
                    }
                }
            }
            v9 = v62;
            v9 = v64;
            v13 = v61;
            v22.push(&v9, &g_14c9e40);
LABEL_1352681:
            v53 = v56;
            v54 = v57;
            break;
        case 115:
            v67 = v39;
            if (!v67)
                core::option::unwrap_failed(&g_14c9d38); /* do not return */
            v68 = v40;
            v69 = v67.parse(v68);
            if (!v69)
            {
                v91 = a5->field_10;
                v3 = 0;
                v5 = 4;
                v6 = 0;
                v1 = "%";
                v2 = 25;
                *(v0) = 0x8000000000000000;
                v7 = 1;
                v13 = "f";
                v16 = 8;
                v18 = 1;
                v19 = v67;
                v20 = v68;
                fish_printf::printf_impl::sprintf_locale(&v21, &v3, v0.localize(), v93, ".", &(unsigned int)v8, 2);
                v21.unwrap(&g_14c9d68);
                core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(&(unsigned int)v8);
                core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v0);
                *((int128_t *)&v8) = *((int128_t *)&v3);
                v16 = 0;
                v91.append(&(unsigned int)v8);
                core::ptr::drop_in_place<fish::wgetopt::WGetopter>(&v28);
                return 2;
            }
            v9 = v69;
            v12 = 1;
            v22.push(&v12, &g_14c9d50);
            goto LABEL_1352681;
        case 118:
            if (v39)
            {
                v7.to_vec(v39, v40);
                v6 = v16;
                memcpy(&v4, &v7, 16);
                if (!(char)fish::common::valid_var_name(v5, v6))
                {
                    v94 = a5->field_10;
                    *(v0) = 0;
                    v1 = 4;
                    v2 = 0;
                    v7 = 1;
                    v13 = "f";
                    v16 = 8;
                    v18 = 1;
                    v19 = v5;
                    v20 = v6;
                    fish_printf::printf_impl::sprintf_locale(&v21, &v0, g_14c9d98[0].localize(), v96, ".", &v7, 2);
                    v21.unwrap(&g_14c9db0);
                    core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(&v7);
                    *((int128_t *)&v8) = *((int128_t *)&v0[0]);
                    v16 = 0;
                    v94.append(&v7);
                    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v4);
                    core::ptr::drop_in_place<fish::wgetopt::WGetopter>(&v28);
                    return 2;
                }
                v17 = v6;
                *((int128_t *)&v14) = *((int128_t *)&v4);
                v10 = 2;
                v22.push(&v10, &g_14c9dc8);
                goto LABEL_1352681;
            }
            else
            {
                core::option::unwrap_failed(&g_14c9d80); /* do not return */
            }
        case 119:
            if (v39)
            {
                v7.to_vec(v39, v40);
                v2 = v16;
                *((int128_t *)&v0) = *((int128_t *)&v10);
                v51.push(&v0, &g_14c9ed0);
                goto LABEL_1352681;
            }
            else
            {
                core::option::unwrap_failed(&g_14c9eb8); /* do not return */
            }
        default:
            v3 = v58;
            *(v0) = &v3;
            v1 = <char as core::fmt::Display>::fmt;
            v7 = &g_14c9cb0;
            v13 = 1;
            v18 = 0;
            v16 = v23;
            v17 = 1;
            core::panicking::panic_fmt(v49, &g_14c9fc0); /* do not return */
        }
    }
}
