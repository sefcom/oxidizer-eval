long long fish::builtins::argparse::parse_cmd_opts(struct_1 *a0, unsigned long long *a1, unsigned long a2, unsigned long long a3[2305843009213693951], void* a4, unsigned long long a5, struct_0 *a6)
{
    char v0;  // [bp-0x1d0]
    unsigned long long v1[3];  // [bp-0x1c8]
    unsigned long long v2[3];  // [bp-0x1c8]
    unsigned long long v3;  // [bp-0x1c0]
    void* v4;  // [bp-0x1b8], Other Possible Types: unsigned long long
    int v5;  // [bp-0x1a8], Other Possible Types: void*
    unsigned long long v6;  // [bp-0x1a0]
    void* v7;  // [bp-0x198], Other Possible Types: unsigned long long
    unsigned long v8;  // [bp-0x188]
    unsigned long v9;  // [bp-0x180]
    unsigned long long v10;  // [bp-0x178], Other Possible Types: char
    int v11;  // [bp-0x178]
    unsigned long long v12;  // [bp-0x178]
    unsigned long long v13;  // [bp-0x170], Other Possible Types: unsigned long
    void* v14;  // [bp-0x168], Other Possible Types: unsigned long long, unsigned long
    int v15;  // [bp-0x160]
    char v16;  // [bp-0x158]
    unsigned long long v17;  // [bp-0x150]
    unsigned long long v18;  // [bp-0x148]
    char v19;  // [bp-0x138]
    unsigned long long v20;  // [bp-0x130]
    unsigned long long v21;  // [bp-0x128]
    unsigned long long v22;  // [sp-0x108]
    unsigned long long v23;  // [sp-0x100]
    char v24;  // [bp-0xf8]
    unsigned long long v25;  // [bp-0xe8]
    void* v26;  // [bp-0xd8]
    unsigned long v27;  // [bp-0xd0]
    unsigned long v28;  // [bp-0xc8]
    void* v29;  // [bp-0xb8]
    unsigned long long v30;  // [bp-0xb0]
    void* v31;  // [bp-0xa8]
    unsigned long long v32[2305843009213693951];  // [bp-0xa0]
    void* v33;  // [bp-0x98]
    unsigned long long v34;  // [bp-0x90]
    unsigned long long v35;  // [bp-0x88]
    unsigned long long v36;  // [bp-0x80]
    unsigned long long v37;  // [bp-0x78]
    unsigned long long v38;  // [bp-0x70]
    int v39;  // [bp-0x68]
    unsigned long long v40;  // [bp-0x60]
    unsigned long long v41;  // [bp-0x58]
    void* v42;  // [sp-0x50]
    uint128_t v43;  // [bp-0x48]
    unsigned int v44;  // [bp-0x38]
    unsigned short v45;  // [bp-0x34]
    char v46;  // [bp-0x32]
    char v47;  // bpl
    unsigned int v48;  // eax
    char v49;  // cl
    unsigned long long v50;  // r13
    unsigned long long v51;  // r13
    void* v56;  // r13
    void* v57;  // rbx
    void* v58;  // rbx
    unsigned long long v59[2305843009213693952];  // rdx, Other Possible Types: unsigned long long
    unsigned long v60;  // rdx
    unsigned long long v61;  // rbx
    unsigned long long v62;  // rax
    int v63;  // xmm0
    unsigned long long v64;  // rax
    unsigned long long v67;  // rbx
    unsigned long long v68;  // rax
    unsigned long long v69;  // rbx
    unsigned long long v70;  // rax
    unsigned long long v71;  // rbx
    unsigned long long v72;  // rax
    unsigned long long v73;  // rbx
    unsigned long long v74;  // rax

    v8 = a3[0];
    v9 = a3[1];
    v25 = a4.with_capacity_in(8, 16, &g_14c6ca0);
    v26 = 0;
    v25.spec_extend(a3, 0x10 * a4 + (char *)a3);
    v32[0] = a3;
    v33 = a4;
    v34 = "+";
    v35 = 16;
    v36 = &g_14c6ba0;
    v37 = 10;
    v38 = 4;
    *((uint128_t *)&v39) = 0;
    v42 = 0;
    v44 = 63;
    v46 = 1;
    v45 = 0;
    v29 = 0;
    v43 = 0;
    v30 = 8;
    v31 = 0;
    v28 = &a0->padding_18;
    while (true)
    {
        v48 = v29.next_opt();
        if (v48 == 0x110000)
            break;
        switch (v48)
        {
        case 58:
            v58 = v42 - 1;
            if (v42 < 1)
            {
                core::panicking::panic_const::panic_const_sub_overflow(&g_14c6df0); /* do not return */
            }
            else if (v58 < a4)
            {
                fish::builtins::shared::builtin_missing_argument(a5, a6, v8, v9, *((long long *)((char *)a3 + 0x10 * v58)), *((long long *)(8 + (char *)a3 + 0x10 * v58)), 0);
                core::ptr::drop_in_place<fish::wgetopt::WGetopter>(&v29);
                core::ptr::drop_in_place<alloc::vec::Vec<(&fish::complete::CompletionEntryIndex,&fish::complete::CompletionEntry)>>(v25, v59);
                return 8589934593;
            }
            else
            {
                v26 = a4;
                core::panicking::panic_bounds_check(v58, v26, &g_14c6e08); /* do not return */
            }
        case 59:
            v58 = v42 - 1;
            if (v42 < 1)
            {
                core::panicking::panic_const::panic_const_sub_overflow(&g_14c6e20); /* do not return */
            }
            else if (v58 < a4)
            {
                fish::builtins::shared::builtin_unexpected_argument(a5, a6, v8, v9, *((long long *)((char *)a3 + 0x10 * v58)), *((long long *)(8 + (char *)a3 + 0x10 * v58)), 0);
                core::ptr::drop_in_place<fish::wgetopt::WGetopter>(&v29);
                core::ptr::drop_in_place<alloc::vec::Vec<(&fish::complete::CompletionEntryIndex,&fish::complete::CompletionEntry)>>(v25, v59);
                return 8589934593;
            }
            else
            {
                v26 = a4;
                core::panicking::panic_bounds_check(v58, v26, &g_14c6e38); /* do not return */
            }
        case 63:
            v58 = v42 - 1;
            if (v42 < 1)
            {
                core::panicking::panic_const::panic_const_sub_overflow(&g_14c6e50); /* do not return */
            }
            else if (v58 < a4)
            {
                fish::builtins::shared::builtin_unknown_option(a5, a6, v8, v9, *((long long *)((char *)a3 + 0x10 * v58)), *((long long *)(8 + (char *)a3 + 0x10 * v58)), 0);
                core::ptr::drop_in_place<fish::wgetopt::WGetopter>(&v29);
                core::ptr::drop_in_place<alloc::vec::Vec<(&fish::complete::CompletionEntryIndex,&fish::complete::CompletionEntry)>>(v25, v59);
                return 8589934593;
            }
            else
            {
                v26 = a4;
                core::panicking::panic_bounds_check(v58, v26, &g_14c6e68); /* do not return */
            }
        case 78:
            if (v40)
            {
                v23 = v40;
                v22 = v41;
                fish::wutil::wcstoi::fish_wcstol(&v12, v40, v41);
                v50 = 18446744073709551615;
                if (!v10)
                    v50 = v13;
                if (v50 < 0)
                {
                    v71 = a6->field_10;
                    v5 = 0;
                    v6 = 4;
                    v7 = 0;
                    v3 = "%";
                    v4 = 36;
                    *(v1) = 0x8000000000000000;
                    v72 = v1.localize();
                    v10 = 1;
                    v13 = v8;
                    v14 = v9;
                    v16 = 1;
                    v17 = v23;
                    v18 = v22;
                    fish_printf::printf_impl::sprintf_locale(&v24, &v5, v72, v59, ".", &(unsigned long long)v11, 2, *((long long *)&v0));
                    v24.unwrap(&g_14c6d90);
                    core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(&(unsigned long long)v11);
                    core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v1);
                    *((int128_t *)&v11) = *((int128_t *)&v5);
                    v14 = 0;
                    v71.append(&(unsigned long long)v11);
                    core::ptr::drop_in_place<fish::wgetopt::WGetopter>(&v29);
                    core::ptr::drop_in_place<alloc::vec::Vec<(&fish::complete::CompletionEntryIndex,&fish::complete::CompletionEntry)>>(v25, v59);
                    return 8589934593;
                }
                0.unwrap(&g_14c6d78);
                a0->field_d8 = v50;
                break;
            }
            else
            {
                core::option::unwrap_failed(&g_14c6d60); /* do not return */
            }
        case 83:
            a0->field_ec = 1;
            break;
        case 85:
            if (v40)
            {
                v49 = 2;
                if (!(char)v40.equal(v41, "o", 8))
                {
                    v49 = 1;
                    if (!(char)v40.equal(v41, "r", 8) && !(char)v40.equal(v41, "n", 4))
                    {
                        v73 = a6->field_10;
                        v5 = 0;
                        v6 = 4;
                        v7 = 0;
                        v3 = "%";
                        v4 = 45;
                        *(v1) = 0x8000000000000000;
                        v74 = v1.localize();
                        v10 = 1;
                        v13 = v8;
                        v14 = v9;
                        v16 = 1;
                        v17 = v40;
                        v18 = v41;
                        fish_printf::printf_impl::sprintf_locale(&v24, &v5, v74, v59, ".", &v10, 2, *((long long *)&v0));
                        v24.unwrap(&g_14c6d18);
                        core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(&v10);
                        core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v1);
                        *((int128_t *)&v11) = *((int128_t *)&v5);
                        v14 = 0;
                        v73.append(&v10);
                        core::ptr::drop_in_place<fish::wgetopt::WGetopter>(&v29);
                        core::ptr::drop_in_place<alloc::vec::Vec<(&fish::complete::CompletionEntryIndex,&fish::complete::CompletionEntry)>>(v25, v59);
                        return 8589934593;
                    }
                }
                a0->field_f0 = v49;
                v47 = 1;
                break;
            }
            else
            {
                core::option::unwrap_failed(&g_14c6d00); /* do not return */
            }
        case 88:
            if (v40)
            {
                v23 = v40;
                v22 = v41;
                fish::wutil::wcstoi::fish_wcstol(&v12, v40, v41);
                v51 = 18446744073709551615;
                if (!v10)
                    v51 = v13;
                if (v51 < 0)
                {
                    v69 = a6->field_10;
                    v5 = 0;
                    v6 = 4;
                    v7 = 0;
                    v3 = "%";
                    v4 = 36;
                    *(v1) = 0x8000000000000000;
                    v70 = v1.localize();
                    v10 = 1;
                    v13 = v8;
                    v14 = v9;
                    v16 = 1;
                    v17 = v23;
                    v18 = v22;
                    fish_printf::printf_impl::sprintf_locale(&v24, &v5, v70, v59, ".", &(unsigned long long)v11, 2, *((long long *)&v0));
                    v24.unwrap(&g_14c6dd8);
                    core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(&(unsigned long long)v11);
                    core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v1);
                    *((int128_t *)&v11) = *((int128_t *)&v5);
                    v14 = 0;
                    v69.append(&(unsigned long long)v11);
                    core::ptr::drop_in_place<fish::wgetopt::WGetopter>(&v29);
                    core::ptr::drop_in_place<alloc::vec::Vec<(&fish::complete::CompletionEntryIndex,&fish::complete::CompletionEntry)>>(v25, v59);
                    return 8589934593;
                }
                0.unwrap(&g_14c6dc0);
                a0->field_e0 = v51;
                break;
            }
            else
            {
                core::option::unwrap_failed(&g_14c6da8); /* do not return */
            }
        case 104:
            a0->field_ed = 1;
            break;
        case 105: case 117:
            if (!a0->field_ef)
            {
                a0->field_ef = 2 - (v48 == 105);
                break;
            }
            else
            {
                v67 = a6->field_10;
                *(v1) = 0;
                v3 = 4;
                v4 = 0;
                v68 = g_14c6cd0[0].localize();
                v10 = 1;
                v13 = v8;
                v14 = v9;
                v16 = 0;
                v17 = &g_5488f0;
                v18 = 16;
                v19 = 0;
                v20 = "--move-unknown";
                v21 = 14;
                fish_printf::printf_impl::sprintf_locale(&(char)v5, &v1, v68, v59, ".", &(unsigned long long)v11, 3, *((long long *)&v0));
                (char)v5.unwrap(&g_14c6ce8);
                core::ptr::drop_in_place<[fish_printf::arg::Arg; 3]>(&(unsigned long long)v11);
                *((int128_t *)&v11) = *((int128_t *)&v1[0]);
                v14 = 0;
                v67.append(&(unsigned long long)v11);
                core::ptr::drop_in_place<fish::wgetopt::WGetopter>(&v29);
                core::ptr::drop_in_place<alloc::vec::Vec<(&fish::complete::CompletionEntryIndex,&fish::complete::CompletionEntry)>>(v25, v59);
                return 8589934593;
            }
        case 110:
            if (v40)
            {
                v12.to_vec(v40, v41);
                v4 = v14;
                *((int128_t *)&v2) = *((int128_t *)&v12);
                core::ptr::drop_in_place<widestring::utfstring::Utf32String>(a0);
                a0->field_10 = v4;
                a0->field_0 = *((int128_t *)&v1[0]);
                break;
            }
            else
            {
                core::option::unwrap_failed(&g_14c6cb8); /* do not return */
            }
        case 115:
            a0->field_ee = 1;
            break;
        case 120:
            if (v40)
            {
                v28.push(v40, v41, &g_14c6d48);
                break;
            }
            else
            {
                core::option::unwrap_failed(&g_14c6d30); /* do not return */
            }
        default:
            v10 = &g_14c6c90;
            v13 = 1;
            v14 = 8;
            *((uint128_t *)&v15) = 0;
            core::panicking::panic_fmt(&v10, &g_14c6e80); /* do not return */
        }
    }
    if ((!a0->field_ef & v47))
        a0->field_ef = 2;
    if (a0->field_ed)
    {
        core::ptr::drop_in_place<fish::wgetopt::WGetopter>(&v29);
        core::ptr::drop_in_place<alloc::vec::Vec<(&fish::complete::CompletionEntryIndex,&fish::complete::CompletionEntry)>>(v25, v59);
        return 0;
    }
    v56 = v42;
    v57 = v56;
    v58 = v57 - 1;
    if (v57 < 1)
    {
        core::panicking::panic_const::panic_const_sub_overflow(&g_14c6e98); /* do not return */
    }
    else if (v58 >= v26)
    {
        v26 = v26;
        core::panicking::panic_bounds_check(v58, v26, &g_14c6eb0); /* do not return */
    }
    else if (*((long long *)((char *)v59 + 0x10 * v58)).eq_by(*((long long *)((char *)v59 + 0x10 * v58)) + *((long long *)(8 + (char *)v59 + 0x10 * v58)) * 4))
    {
        v42 = v58;
        v56 = v58;
    }
    v60 = a2;
    if (v27 == v56)
    {
        v61 = a6->field_10;
        v5 = 0;
        v6 = 4;
        v7 = 0;
        v3 = "%";
        v4 = 26;
        *(v1) = 0x8000000000000000;
        v62 = v1.localize();
        v10 = 1;
        v13 = v8;
        v14 = v9;
        fish_printf::printf_impl::sprintf_locale(&v24, &v5, v62, v59, ".", &(unsigned long long)v11, 1, *((long long *)&v0));
        v24.unwrap(&g_14c6ec8);
        core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&(unsigned long long)v11);
        core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v1);
        *((int128_t *)&v11) = *((int128_t *)&v5);
        v14 = 0;
        v61.append(&(unsigned long long)v11);
        core::ptr::drop_in_place<fish::wgetopt::WGetopter>(&v29);
        core::ptr::drop_in_place<alloc::vec::Vec<(&fish::complete::CompletionEntryIndex,&fish::complete::CompletionEntry)>>(v25, v59);
        return 8589934593;
    }
    if (!a0->field_10)
    {
        v1.get_function_name(a5, 1);
        if ((char)(((0 ^ v1) & (0 ^ -(v1))) >> 63))
        {
            v12.to_vec("a", 8);
            v7 = v14;
            v63 = *((int128_t *)&v12);
        }
        else
        {
            v7 = v4;
            v63 = *((int128_t *)&v2[0]);
        }
        v5 = v63;
        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(a0);
        a0->field_10 = v7;
        a0->field_0 = (int128_t)v5;
        v60 = a2;
    }
    *(a1) = v56;
    v64 = fish::builtins::argparse::collect_option_specs(a0, a1, v60, a3, a4, a6->field_10);
    core::ptr::drop_in_place<fish::wgetopt::WGetopter>(&v29);
    core::ptr::drop_in_place<alloc::vec::Vec<(&fish::complete::CompletionEntryIndex,&fish::complete::CompletionEntry)>>(v25, v59);
    return 0x300000000 & v64 | (unsigned int)v64 & 0xffff0000 | (unsigned int)v64 & 0xff00 | v64 & 4294967295;
}
