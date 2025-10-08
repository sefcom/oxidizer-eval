long long fish::builtins::abbr::abbr(unsigned long long a0, unsigned long long a1[3], unsigned long long a2[2305843009213693951], unsigned long long a3)
{
    char v0;  // [bp-0x238], Other Possible Types: unsigned long long
    int v1;  // [bp-0x238]
    int v2;  // [bp-0x238]
    int v3;  // [bp-0x238]
    int v4;  // [bp-0x238]
    char v5;  // [bp-0x238]
    int v6;  // [bp-0x238]
    unsigned long long v7;  // [bp-0x230]
    int v8;  // [bp-0x230]
    unsigned long v9;  // [bp-0x228], Other Possible Types: unsigned long long
    unsigned long long v10[3];  // [bp-0x218]
    unsigned long long v11[3];  // [bp-0x218]
    unsigned long long v12;  // [bp-0x210]
    void* v13;  // [bp-0x208], Other Possible Types: unsigned long long
    int v14;  // [bp-0x1f8], Other Possible Types: unsigned long long, char
    int v15;  // [bp-0x1f8]
    unsigned long long v16;  // [bp-0x1f8]
    unsigned long long v17;  // [bp-0x1f0]
    int v18;  // [bp-0x1e8], Other Possible Types: void*, unsigned long long
    int v19;  // [bp-0x1e0]
    char v20;  // [bp-0x1d8]
    unsigned long long v21;  // [bp-0x1d0]
    int v22;  // [bp-0x1d0]
    unsigned long long v23;  // [bp-0x1c8]
    unsigned long long v24;  // [bp-0x1a8]
    unsigned long v25;  // [bp-0x1a0]
    void* v26;  // [bp-0x190]
    unsigned long long v27;  // [bp-0x188]
    void* v28;  // [bp-0x180]
    unsigned long v29;  // [bp-0x178]
    unsigned long long v30;  // [bp-0x170]
    unsigned long long *v31;  // [bp-0x168]
    void* v32;  // [bp-0x160]
    void* v33;  // [bp-0x158]
    unsigned long long v34;  // [bp-0x150]
    int v35;  // [bp-0x148]
    unsigned long long v36;  // [bp-0x140]
    unsigned long long v37;  // [bp-0x138]
    void* v38;  // [bp-0x130]
    unsigned long long v39;  // [bp-0x128]
    char v40;  // [bp-0x120]
    unsigned long long v41;  // [bp-0x110]
    char v42;  // [bp-0x108]
    unsigned long long v43;  // [bp-0xf8]
    char v44;  // [bp-0xe0], Other Possible Types: unsigned int
    char v46;  // [bp-0xdf]
    char v48;  // [bp-0xde]
    char v50;  // [bp-0xdd]
    char v51;  // [bp-0xdc], Other Possible Types: unsigned short
    char v53;  // [bp-0xdb]
    char v54;  // [bp-0xda]
    void* v55;  // [bp-0xd8]
    unsigned long long v56;  // [bp-0xd0]
    void* v57;  // [bp-0xc8]
    unsigned long long v58[2305843009213693951];  // [bp-0xc0]
    unsigned long long v59;  // [bp-0xb8]
    unsigned long long v60;  // [bp-0xb0]
    unsigned long long v61;  // [bp-0xa8]
    unsigned long long v62;  // [bp-0xa0]
    unsigned long long v63;  // [bp-0x98]
    unsigned long long v64;  // [bp-0x90]
    int v65;  // [bp-0x88]
    unsigned long long v66;  // [bp-0x80]
    unsigned long long v68;  // [bp-0x78]
    void* v69;  // [bp-0x70]
    uint128_t v70;  // [bp-0x68]
    unsigned int v71;  // [bp-0x58]
    unsigned short v72;  // [bp-0x54]
    char v73;  // [bp-0x52]
    unsigned long long v74;  // [bp-0x50]
    char *v75;  // [bp-0x48]
    char v76;  // [bp-0x40]
    unsigned long v78;  // rbx
    unsigned int v79;  // eax
    unsigned long long v80;  // r14
    unsigned long long v81;  // r14
    unsigned long long v83;  // rsi
    unsigned long long v86;  // r14
    unsigned long long v87;  // rax
    unsigned long v88;  // rdi
    struct_0 *v89;  // rdx
    int v90;  // xmm0
    int v91;  // xmm2
    unsigned long long *v92;  // r13
    unsigned long v93;  // rbx
    unsigned long long v94;  // r15
    unsigned int v95;  // eax
    unsigned int v96;  // r14d
    void* v97;  // rbx
    unsigned long long v98;  // r15
    unsigned long v100;  // rdi
    unsigned long long v106;  // r12
    unsigned long long v107;  // rax

    v30 = a3.with_capacity_in(8, 16, &g_14c6710);
    v32 = 0;
    v30.spec_extend(a2, &a2[2 * a3]);
    if (!a3)
        core::panicking::panic_bounds_check(0, 0, &g_14c6728); /* do not return */
    v24 = a2[0];
    v25 = a2[1];
    v51 = 0;
    v44 = 0;
    v39 = 0x8000000000000000;
    v41 = 0x8000000000000000;
    v33 = 0;
    v34 = 8;
    *((uint128_t *)&v35) = 0;
    v54 = 2;
    v43 = 0x8000000000000000;
    v37 = 8;
    v38 = 0;
    v58[0] = a2;
    v59 = a3;
    v60 = "-";
    v61 = 14;
    v62 = &g_14c65a0;
    v63 = 14;
    v64 = 4;
    *((uint128_t *)&v65) = 0;
    v69 = 0;
    v71 = 63;
    v73 = 1;
    v72 = 0;
    v55 = 0;
    v70 = 0;
    v56 = 8;
    v57 = 0;
    v78 = a1[2];
    v75 = &v14;
    v29 = v78;
    while (true)
    {
        v79 = v55.next_opt();
        if (v79 != 0x110000)
        {
            switch (v79)
            {
            case 1:
                if (v66)
                {
                    v14.to_vec(v66, v68);
                    v9 = v18;
                    *((int128_t *)&v1) = *((int128_t *)&v16);
                    v36.push(&v0, &g_14c6740);
                }
                if (v38 <= 1 || v46 || v48 || v50 || v51 || v53)
                    continue;
                goto LABEL_1336da4;
            case 2:
                if (v43 == 0x8000000000000000)
                {
                    if (!v66)
                        v83 = "%";
                    else
                        v83 = v66;
                    if (!v66)
                        v68 = 1;
                    v14.to_vec(v83, v68);
                    v9 = v18;
                    *((int128_t *)&v3) = *((int128_t *)&v16);
                    v43.insert(&v0);
                    continue;
                }
                else
                {
                    *(v10) = 0;
                    v12 = 4;
                    v13 = 0;
                    v7 = "%";
                    v9 = 48;
                    v0 = 0x8000000000000000;
                    v14 = 1;
                    v17 = "a";
                    v18 = 4;
                    fish_printf::printf_impl::sprintf_locale(&v26, &v10, v0.localize(), v89, ".", &(unsigned long long)v15, 1);
                    v26.unwrap(&g_14c67d0);
                    core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&(unsigned long long)v15);
                    core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v0);
                    *((int128_t *)&v15) = *((int128_t *)&v10[0]);
                    v18 = 0;
                    v78.append(&(unsigned long long)v15);
                    goto LABEL_1337033;
                }
            case 3:
                v46 = 1;
                continue;
            case 58:
                v100 = v69 - 1;
                if (v69 < 1)
                {
                    core::panicking::panic_const::panic_const_sub_overflow(&g_14c6830); /* do not return */
                }
                else if (v100 < a3)
                {
                    fish::builtins::shared::builtin_missing_argument(a0, a1, v24, v25, a2[2 * v100], a2[1 + 2 * v100], 1);
                    goto LABEL_1337033;
                }
                else
                {
                    core::panicking::panic_bounds_check(v100, a3, &g_14c6848); /* do not return */
                }
            case 59:
                v100 = v69 - 1;
                if (v69 < 1)
                {
                    core::panicking::panic_const::panic_const_sub_overflow(&g_14c6860); /* do not return */
                }
                else if (v100 < a3)
                {
                    fish::builtins::shared::builtin_unexpected_argument(a0, a1, v24, v25, a2[2 * v100], a2[1 + 2 * v100], 1);
                    goto LABEL_1337033;
                }
                else
                {
                    core::panicking::panic_bounds_check(v100, a3, &g_14c6878); /* do not return */
                }
            case 63:
                v100 = v69 - 1;
                if (v69 < 1)
                {
                    core::panicking::panic_const::panic_const_sub_overflow(&g_14c6890); /* do not return */
                }
                else if (v100 < a3)
                {
                    fish::builtins::shared::builtin_unknown_option(a0, a1, v24, v25, a2[2 * v100], a2[1 + 2 * v100], 0);
                }
                else
                {
                    core::panicking::panic_bounds_check(v100, a3, &g_14c68a8); /* do not return */
                }
LABEL_1337033:
                v94 = 0x200000000;
LABEL_133703d:
                v96 = 1;
                goto LABEL_1337043;
            case 85:
                v26 = 0;
                v27 = 4;
                v28 = 0;
                v12 = "%";
                v13 = 57;
                *(v10) = 0x8000000000000000;
                v87 = v10.localize();
                v7 = v24;
                v9 = v25;
                v5 = 1;
                v88 = v69 - 1;
                if (v69 < 1)
                {
                    core::panicking::panic_const::panic_const_sub_overflow(&g_14c67e8); /* do not return */
                }
                else if (v88 < v32)
                {
                    v90 = *((int128_t *)&v89->padding_0[16 * v88]);
                    v91 = *((int128_t *)&v9);
                    *((int128_t *)&v14) = (int128_t)v4;
                    v18 = v91;
                    v20 = 1;
                    v22 = v90;
                    fish_printf::printf_impl::sprintf_locale(&v5, &v26, v87);
                    v5.unwrap(&g_14c6818);
                    core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(&v14);
                    core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v10);
                    *((int128_t *)&v14) = *((int128_t *)&v26);
                    v18 = 0;
                    v78.append(&v14);
                    fish::builtins::shared::builtin_print_error_trailer(a0, v78, v24, v25);
                    break;
                }
                else
                {
                    core::panicking::panic_bounds_check(v88, v32, &g_14c6800); /* do not return */
                }
            case 97:
                v44 = 1;
                continue;
            case 99:
                if (v66)
                {
                    v14.to_vec(v66, v68);
                    *((int128_t *)&v11) = *((int128_t *)&v17);
                    if (v16 == 0x8000000000000000)
                        core::option::unwrap_failed(&g_14c6758); /* do not return */
                    v0 = v16;
                    *((int128_t *)&v8) = *((int128_t *)&v10[0]);
                    v33.push(&v0, &g_14c6770);
                    break;
                }
                else
                {
                    core::option::unwrap_failed(&g_14c6758); /* do not return */
                }
            case 101:
                v51 = 1;
                continue;
            case 102:
                if (v66)
                {
                    v14.to_vec(v66, v68);
                    v86 = v16;
                    *((int128_t *)&v4) = *((int128_t *)&v17);
                }
                else
                {
                    *((int128_t *)&v4) = *((int128_t *)&v76);
                    v86 = 0x8000000000000000;
                }
                core::ptr::drop_in_place<core::option::Option<widestring::utfstring::Utf32String>>(&v39);
                v39 = v86;
                memcpy(&v40, &v4, 16);
                v78 = v29;
                continue;
            case 103:
                break;
            case 104:
                fish::builtins::shared::builtin_print_help(a0, a1, v24, v25);
                v94 = 0x200000000;
LABEL_1336f20:
                v97 = 0;
                v96 = 0;
                goto LABEL_1337045;
            case 108:
                v50 = 1;
                continue;
            case 112:
                if (v54 == 2)
                {
                    v81 = v66;
                    if (v81)
                    {
                        v74 = v68;
                        if ((char)v81.equal(v68, "c", 7))
                        {
                            v54 = 0;
                            continue;
                        }
                        else if ((char)v81.equal(v74, "a", 8))
                        {
                            v54 = 1;
                            continue;
                        }
                        else
                        {
                            v106 = v81;
                        }
                    }
                    else
                    {
                        v106 = 0;
                        v81 = 4;
                    }
                    *(v10) = 0;
                    v12 = 4;
                    v13 = 0;
                    v7 = "%";
                    v9 = 28;
                    v0 = 0x8000000000000000;
                    v107 = v0.localize();
                    if (v106)
                        v106 = v68;
                    v14 = 1;
                    v17 = "a";
                    v18 = 4;
                    v20 = 1;
                    v21 = v81;
                    v23 = v106;
                    fish_printf::printf_impl::sprintf_locale(&v26, &v10, v107);
                    v26.unwrap(&g_14c67a0);
                    core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(&(unsigned long long)v15);
                    core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v0);
                    *((int128_t *)&v15) = *((int128_t *)&v10[0]);
                    v18 = 0;
                    v78.append(&(unsigned long long)v15);
                    v78.append("P", 44);
                    goto LABEL_1337033;
                }
                else
                {
                    *(v10) = 0;
                    v12 = 4;
                    v13 = 0;
                    v7 = "%";
                    v9 = 39;
                    v0 = 0x8000000000000000;
                    v14 = 1;
                    v17 = "a";
                    v18 = 4;
                    fish_printf::printf_impl::sprintf_locale(&v26, &v10, v0.localize(), v89, ".", &(unsigned long long)v15, 1);
                    v26.unwrap(&g_14c6788);
                    core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&(unsigned long long)v15);
                    core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v0);
                    *((int128_t *)&v15) = *((int128_t *)&v10[0]);
                    v18 = 0;
                    v78.append(&(unsigned long long)v15);
                    goto LABEL_1337033;
                }
            case 113:
                v53 = 1;
                continue;
            case 114:
                if (v41 == 0x8000000000000000)
                {
                    if (v66)
                    {
                        v14.to_vec(v66, v68);
                        v80 = v16;
                        *((int128_t *)&v2) = *((int128_t *)&v17);
                    }
                    else
                    {
                        *((int128_t *)&v2) = *((int128_t *)&v76);
                        v80 = 0x8000000000000000;
                    }
                    core::ptr::drop_in_place<core::option::Option<widestring::utfstring::Utf32String>>(&v41);
                    v41 = v80;
                    memcpy(&v42, &v4, 16);
                    v78 = v29;
                    continue;
                }
                else
                {
                    *(v10) = 0;
                    v12 = 4;
                    v13 = 0;
                    v7 = "%";
                    v9 = 44;
                    v0 = 0x8000000000000000;
                    v14 = 1;
                    v17 = "a";
                    v18 = 4;
                    fish_printf::printf_impl::sprintf_locale(&v26, &v10, v0.localize(), v89, ".", &(unsigned long long)v15, 1);
                    v26.unwrap(&g_14c67b8);
                    core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&(unsigned long long)v15);
                    core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v0);
                    *((int128_t *)&v15) = *((int128_t *)&v10[0]);
                    v18 = 0;
                    v78.append(&(unsigned long long)v15);
                    goto LABEL_1337033;
                }
            case 115:
                v48 = 1;
                continue;
            default:
                v14 = &g_14c66f0;
                v17 = 1;
                v18 = 8;
                *((uint128_t *)&v19) = 0;
                core::panicking::panic_fmt(v75, &g_14c68c0); /* do not return */
            }
        }
        else
        {
LABEL_1336da4:
            if (v69 > v32)
                core::slice::index::slice_start_index_len_fail(v69, v32, &g_14c6908); /* do not return */
            if (v69 != v32)
            {
                v92 = v69 * 16;
                do
                {
                    v14.to_vec(*((long long *)(v31 + v92)), *((long long *)(v31 + v92 + 8)));
                    v9 = v18;
                    *((int128_t *)&v6) = *((int128_t *)&v16);
                    v36.push(&v0, &g_14c68f0);
                    v92 += 2;
                } while (v32 * 16 != v92);
            }
            v93 = v29;
            v94 = 0x200000000;
            if (!(char)v33.validate(v93))
                goto LABEL_133703d;
            if (v44)
            {
                v95 = fish::builtins::abbr::abbr_add(&v33, v93);
                goto LABEL_1336e6d;
            }
            if (v48)
            {
                fish::builtins::abbr::abbr_show(a1[1]);
                v94 = 0;
                goto LABEL_1336f20;
            }
            else if (v50)
            {
                v95 = fish::builtins::abbr::abbr_list(v37, v38, a1[1], v93);
LABEL_1336e6d:
                v96 = v95;
                goto LABEL_1337043;
            }
            else
            {
                if (v46)
                {
                    v97 = fish::builtins::abbr::abbr_rename(v37, v38, v93);
                    v98 = 0x300000000;
                }
                else if (v51)
                {
                    v97 = fish::builtins::abbr::abbr_erase(v37, v38, a0);
                    v98 = 0xffffffff00000000;
                }
                else
                {
                    if (!v53)
                    {
                        v14 = &g_14c6700;
                        v17 = 1;
                        v18 = 8;
                        *((uint128_t *)&v19) = 0;
                        core::panicking::panic_fmt(v75, &g_14c68d8); /* do not return */
                    }
                    v96 = fish::builtins::abbr::abbr_query(v37, v38);
                    v94 = 0x100000000;
LABEL_1337043:
                    v97 = 0;
                    break;
                }
                v94 = v98 & v97;
                v96 = (unsigned int)v97;
                break;
            }
        }
    }
LABEL_1337045:
    core::ptr::drop_in_place<fish::wgetopt::WGetopter>(&v55);
    core::ptr::drop_in_place<fish::builtins::abbr::Options>(&v33);
    core::ptr::drop_in_place<alloc::vec::Vec<(&fish::complete::CompletionEntryIndex,&fish::complete::CompletionEntry)>>(v30, v89);
    return v96 | (unsigned int)v97 & 0xffffff00 | v94;
}
