void fish::builtins::math::parse_cmd_opts(unsigned long a0, unsigned long long a1[2305843009213693952], unsigned long long a2, unsigned long long a3, struct_0 *a4)
{
    unsigned int v0;  // [bp-0x16c]
    void* v1;  // [bp-0x168]
    void* v2;  // [bp-0x160], Other Possible Types: unsigned long long
    unsigned long long v3;  // [bp-0x158]
    void* v4;  // [bp-0x150], Other Possible Types: unsigned long long
    void* v5;  // [bp-0x148], Other Possible Types: char
    unsigned long long v6;  // [bp-0x140]
    void* v7;  // [bp-0x138]
    unsigned long long v8;  // [bp-0x128], Other Possible Types: char
    int v9;  // [bp-0x128]
    unsigned long long v10;  // [bp-0x120]
    void* v11;  // [bp-0x118], Other Possible Types: unsigned long long
    int v12;  // [bp-0x110]
    char v13;  // [bp-0x108]
    unsigned long long v14;  // [bp-0x100]
    unsigned long long v15;  // [bp-0xf8]
    unsigned int v16;  // [bp-0xe4]
    unsigned long long v17;  // [bp-0xd8]
    char v18;  // [bp-0xc8]
    void* v19;  // [bp-0xb8]
    unsigned long long v20;  // [bp-0xb0]
    void* v21;  // [bp-0xa8]
    unsigned long long v22[2305843009213693952];  // [bp-0xa0]
    unsigned long long v23;  // [bp-0x98]
    unsigned long long v24;  // [bp-0x90]
    unsigned long long v25;  // [bp-0x88]
    unsigned long long v26;  // [bp-0x80]
    unsigned long long v27;  // [bp-0x78]
    unsigned long long v28;  // [bp-0x70]
    int v29;  // [bp-0x68]
    unsigned long long v30;  // [bp-0x60]
    unsigned long long v31;  // [bp-0x58]
    void* v32;  // [bp-0x50]
    uint128_t v33;  // [bp-0x48]
    unsigned int v34;  // [bp-0x38]
    unsigned short v35;  // [bp-0x34]
    char v36;  // [bp-0x32]
    unsigned long long v38;  // r14
    unsigned long long v39;  // rbx
    unsigned int v40;  // ecx
    unsigned long v41;  // r12
    unsigned int v42;  // eax
    unsigned int v43;  // ecx
    unsigned long long v44;  // r15
    unsigned long long v45;  // rbp
    unsigned long long v46;  // rax
    unsigned int v47;  // ecx
    unsigned long long v48;  // r15
    unsigned long long v49;  // rbp
    unsigned long long v50;  // rax
    unsigned int v51;  // ecx
    unsigned long long v52;  // r14
    unsigned long long v54;  // rdx
    void* v55;  // rax
    void* v56;  // rdi
    unsigned long long v59;  // r14
    unsigned long long v61;  // rdx
    unsigned long long v62;  // r14
    unsigned long long v64;  // rdx
    unsigned long long v65;  // r14
    unsigned long long v67;  // rdx

    v22[0] = a1;
    v23 = a2;
    v24 = "+";
    v25 = 8;
    v26 = &g_14caae0;
    v27 = 4;
    v28 = 4;
    *((uint128_t *)&v29) = 0;
    v32 = 0;
    v34 = 63;
    v36 = 1;
    v35 = 0;
    v19 = 0;
    v33 = 0;
    v20 = 8;
    v21 = 0;
    v38 = 6;
    v39 = 10;
    *((unsigned int **)&v0) = &g_14caa04;
    v16 = 0;
    v40 = 0;
    while (true)
    {
        v41 = v40;
        v42 = v19.next_opt();
        if (v42 == 0x110000)
        {
            if (((char)v16 & 1) && v38 && v39 != 10)
            {
                v52 = a4->field_10;
                v2 = 0;
                v3 = 4;
                v4 = 0;
                v8 = 1;
                v10 = "m";
                v11 = 4;
                v13 = 0;
                v14 = "non-zero scale value only valid\n            for base 10src/builtins/math.rs";
                v15 = 55;
                fish_printf::printf_impl::sprintf_locale(&v5, &v2, g_14c7d28[0].localize(), v54, ".", &(unsigned long long)v9, 2);
                v5.unwrap(&g_14cac60);
                core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(&(unsigned long long)v9);
                *((int128_t *)&v9) = *((int128_t *)&v2);
                v11 = 0;
                v52.append(&(unsigned long long)v9);
                *((unsigned int *)v1) = 2;
                *((char *)&v1[17]) = 2;
                core::ptr::drop_in_place<fish::wgetopt::WGetopter>(&v19);
                return;
            }
            *((unsigned long long *)v1) = v38;
            *((unsigned long long *)&v1[8]) = v39;
            *((char *)&v1[16]) = v0;
            *((char *)&v1[17]) = v41;
            *((void* *)&v1[24]) = v32;
            core::ptr::drop_in_place<fish::wgetopt::WGetopter>(&v19);
            return;
        }
        switch (v42)
        {
        case 58:
            v56 = v32 - 1;
            if (v32 < 1)
            {
                core::panicking::panic_const::panic_const_sub_overflow(&g_14cabd0); /* do not return */
            }
            else if (v56 < a2)
            {
                fish::builtins::shared::builtin_missing_argument(a3, a4, "m", 4, *((long long *)((char *)a1 + 0x10 * v56)), *((long long *)(8 + (char *)a1 + 0x10 * v56)), 1);
                *((unsigned int *)v1) = 2;
                *((char *)&v1[17]) = 2;
                core::ptr::drop_in_place<fish::wgetopt::WGetopter>(&v19);
                return;
            }
            else
            {
                core::panicking::panic_bounds_check(v56, a2, &g_14cabe8); /* do not return */
            }
        case 59:
            v56 = v32 - 1;
            if (v32 < 1)
            {
                core::panicking::panic_const::panic_const_sub_overflow(&g_14cac00); /* do not return */
            }
            else if (v56 < a2)
            {
                fish::builtins::shared::builtin_unexpected_argument(a3, a4, "m", 4, *((long long *)((char *)a1 + 0x10 * v56)), *((long long *)(8 + (char *)a1 + 0x10 * v56)), 1);
                *((unsigned int *)v1) = 2;
                *((char *)&v1[17]) = 2;
                core::ptr::drop_in_place<fish::wgetopt::WGetopter>(&v19);
                return;
            }
            else
            {
                core::panicking::panic_bounds_check(v56, a2, &g_14cac18); /* do not return */
            }
        case 63:
            if (v32)
            {
                v55 = v32 - 1;
                *((unsigned long long *)v1) = v38;
                *((unsigned long long *)&v1[8]) = v39;
                *((char *)&v1[16]) = v0;
                *((char *)&v1[17]) = v41;
                *((void* *)&v1[24]) = v55;
                core::ptr::drop_in_place<fish::wgetopt::WGetopter>(&v19);
                return;
            }
            core::panicking::panic_const::panic_const_sub_overflow(&g_14cac30); /* do not return */
        case 98:
            v44 = v30;
            if (!v44)
                core::option::unwrap_failed(&g_14caba0); /* do not return */
            v17 = v31;
            v45 = v44 + v17 * 4;
            v39 = 16;
            v40 = v41;
            if (!v44.eq_by(v45, "hexoctal%", "octal%"))
            {
                v39 = 8;
                v40 = v41;
                if (!v44.eq_by(v45, "octal%", "%"))
                {
                    v46 = fish::wutil::wcstoi::fish_wcstoi(v44, v17);
                    v47 = -(0 < ((char)v46 & 1)) | (unsigned int)(v46 >> 32);
                    if (v47 != 16 && v47 != 8)
                    {
                        v62 = a4->field_10;
                        v5 = 0;
                        v6 = 4;
                        v7 = 0;
                        v3 = "%";
                        v4 = 29;
                        v2 = 0x8000000000000000;
                        v8 = 1;
                        v10 = "m";
                        v11 = 4;
                        v13 = 1;
                        v14 = v44;
                        v15 = v17;
                        fish_printf::printf_impl::sprintf_locale(&v18, &v5, v2.localize(), v64, ".", &(unsigned long long)v9, 2);
                        v18.unwrap(&g_14cabb8);
                        core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(&(unsigned long long)v9);
                        core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v2);
                        *((int128_t *)&v9) = *((int128_t *)&v5);
                        v11 = 0;
                        v62.append(&(unsigned long long)v9);
                        *((unsigned int *)v1) = 2;
                        *((char *)&v1[17]) = 2;
                        core::ptr::drop_in_place<fish::wgetopt::WGetopter>(&v19);
                        return;
                    }
                    v39 = v47;
                    v40 = v41;
                    break;
                }
            }
        case 104:
            break;
        case 109:
            if (!v30)
                core::option::unwrap_failed(&g_14cab70); /* do not return */
            v0 = 0;
            v40 = v41;
            if ((char)v30.equal(v31, "t", 8))
                continue;
            v0 = 0;
            v40 = v41;
            if ((char)v30.equal(v31, "t", 5))
                continue;
            v0 = v43 & 0xffffff00 | 1;
            v40 = v41;
            if ((char)v30.equal(v31, "r", 5))
                continue;
            v0 = v43 & 0xffffff00 | 2;
            v40 = v41;
            if ((char)v30.equal(v31, "f", 5))
                continue;
            v0 = v43 & 0xffffff00 | 3;
            v40 = v41;
            if ((char)v30.equal(v31, "c", 7))
                continue;
            v40 = v41;
            if ((char)v30.equal(v31, "c", 4))
                continue;
            v65 = a4->field_10;
            v5 = 0;
            v6 = 4;
            v7 = 0;
            v3 = "%";
            v4 = 23;
            v2 = 0x8000000000000000;
            v8 = 1;
            v10 = "m";
            v11 = 4;
            v13 = 1;
            v14 = v30;
            v15 = v31;
            fish_printf::printf_impl::sprintf_locale(&v18, &v5, v2.localize(), v67, ".", &v8, 2);
            v18.unwrap(&g_14cab88);
            core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(&v8);
            core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v2);
            *((int128_t *)&v9) = *((int128_t *)&v5);
            v11 = 0;
            v65.append(&v8);
            *((unsigned int *)v1) = 2;
            *((char *)&v1[17]) = 2;
            goto LABEL_13595e3__28;
        case 115:
            v48 = v30;
            if (!v48)
                core::option::unwrap_failed(&g_14cab40); /* do not return */
            v49 = v31;
            v38 = 15;
            v16 = v43 & 0xffffff00 | 1;
            v40 = v41;
            if (!v48.eq_by(v48 + v49 * 4, "max", &g_a05172))
            {
                v50 = fish::wutil::wcstoi::fish_wcstoi(v48, v49);
                v51 = -(0 < ((char)v50 & 1)) | (unsigned int)(v50 >> 32);
                if (v51 > 15)
                {
                    v59 = a4->field_10;
                    v5 = 0;
                    v6 = 4;
                    v7 = 0;
                    v3 = "%";
                    v4 = 24;
                    v2 = 0x8000000000000000;
                    v8 = 1;
                    v10 = "m";
                    v11 = 4;
                    v13 = 1;
                    v14 = v48;
                    v15 = v49;
                    fish_printf::printf_impl::sprintf_locale(&v18, &v5, v2.localize(), v61, ".", &(unsigned long long)v9, 2);
                    v18.unwrap(&g_14cab58);
                    core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(&(unsigned long long)v9);
                    core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v2);
                    *((int128_t *)&v9) = *((int128_t *)&v5);
                    v11 = 0;
                    v59.append(&(unsigned long long)v9);
                    *((unsigned int *)v1) = 2;
                    *((char *)&v1[17]) = 2;
                    core::ptr::drop_in_place<fish::wgetopt::WGetopter>(&v19);
                    return;
                }
                v38 = v51;
                v40 = v41;
                break;
            }
        default:
            v8 = &g_14c66f0;
            v10 = 1;
            v11 = 8;
            *((uint128_t *)&v12) = 0;
            core::panicking::panic_fmt(&v8, &g_14cac48); /* do not return */
        }
    }
LABEL_13595e3__28:
    core::ptr::drop_in_place<fish::wgetopt::WGetopter>(&v19);
    return;
}
