long long fish::builtins::jobs::jobs(unsigned long long a0, struct_2 *a1, struct_4 *a2)
{
    char v0;  // [bp-0x179]
    unsigned long long v1;  // [bp-0x178]
    char v2;  // [bp-0x170], Other Possible Types: unsigned long long
    char v3;  // [bp-0x170]
    unsigned long v4;  // [bp-0x168]
    void* v5;  // [bp-0x160]
    unsigned long long v6;  // [bp-0x158]
    void* v7;  // [sp-0x150]
    unsigned long long v8;  // [bp-0x148]
    unsigned long long v9;  // [sp-0x140]
    unsigned long long v10;  // [sp-0x138]
    struct_4 *v11;  // [sp-0x130], Other Possible Types: unsigned long
    char v12;  // [bp-0x128], Other Possible Types: unsigned long long
    int v13;  // [bp-0x128], Other Possible Types: char
    int v14;  // [bp-0x128]
    int v15;  // [bp-0x120], Other Possible Types: unsigned long long
    void* v16;  // [sp-0x118], Other Possible Types: unsigned long
    char v17;  // [sp-0x108]
    int v18;  // [sp-0x100]
    char v19;  // [bp-0xe0]
    unsigned int v20;  // [bp-0xcc]
    struct_3 *v21;  // [bp-0xc8]
    unsigned long long v22;  // [bp-0xc0]
    void* v23;  // [bp-0xb8]
    unsigned long long v24;  // [bp-0xb0]
    void* v25;  // [bp-0xa8]
    unsigned long long v26;  // [bp-0x98]
    unsigned long long v27;  // [bp-0x90]
    unsigned long long v28;  // [bp-0x88]
    unsigned long long v29;  // [bp-0x80]
    unsigned long long v30;  // [bp-0x78]
    unsigned long long v31;  // [bp-0x70]
    uint128_t v32;  // [bp-0x68]
    void* v33;  // [bp-0x50]
    uint128_t v34;  // [bp-0x48]
    unsigned int v35;  // [bp-0x38]
    unsigned short v36;  // [bp-0x34]
    char v37;  // [bp-0x32]
    unsigned long long v39;  // rcx
    char v40;  // bl
    char v41;  // r13b
    unsigned int v42;  // eax
    unsigned int v43;  // eax
    unsigned long v44;  // r14
    unsigned long long v45;  // r13
    unsigned long long v46;  // rax
    unsigned int v47;  // edx
    unsigned long long v48;  // rax
    unsigned long long v49;  // rax
    unsigned long long v50;  // r12
    unsigned long long v51;  // rbx
    unsigned long long v52;  // rax
    unsigned long long v53;  // rdx
    unsigned long long v54;  // rbx
    unsigned long long v55;  // rax
    unsigned long long v56;  // rdx
    unsigned long long v57;  // rbx
    unsigned long long v58;  // rax
    unsigned long long v59;  // rdx
    unsigned long long v62[3];  // rax
    unsigned long long v63;  // rdx, Other Possible Types: unsigned long
    unsigned long long *v64;  // rbp
    char v65;  // r15b
    unsigned long v66;  // rbx
    unsigned long long v67;  // rax
    unsigned long v68;  // rdi
    struct_0 *v71;  // rax
    unsigned long long *v72;  // rcx
    unsigned long long v73;  // rbx
    unsigned long long *v74;  // rcx
    unsigned long long *v75;  // r12
    unsigned long long v79;  // rdx

    v2 = a0;
    if (!v39)
        return 8589934593;
    v1 = a2->field_0[0];
    v4 = a2->field_0[1];
    v11 = a2;
    v27 = "c";
    v28 = 6;
    v29 = &g_14ca8d0;
    v30 = 7;
    v31 = 4;
    v32 = 0;
    v33 = 0;
    v35 = 63;
    v37 = 1;
    v36 = 0;
    v23 = 0;
    v34 = 0;
    v24 = 8;
    v25 = 0;
    while (true)
    {
        v0 = v40;
        v42 = v23.next_opt();
        if (v42 != 0x110000)
        {
            switch (v42)
            {
            case 58:
LABEL_1358907:
                v68 = v33 - 1;
                if (v33 < 1)
                    core::panicking::panic_const::panic_const_sub_overflow(&g_14ca978); /* do not return */
                if (v68 < v39)
                {
                    fish::builtins::shared::builtin_missing_argument(v2, a1, v1, v4, (&v11->field_0)[v68], (&v11->field_0)[v68 + 1], 1);
                    core::ptr::drop_in_place<fish::wgetopt::WGetopter>(&v23);
                    return 8589934593;
                }
                core::panicking::panic_bounds_check(v68, v39, &g_14ca990); /* do not return */
            case 59:
LABEL_1358988:
                v68 = v33 - 1;
                if (v33 < 1)
                    core::panicking::panic_const::panic_const_sub_overflow(&g_14ca9a8); /* do not return */
                if (v68 < v39)
                {
                    fish::builtins::shared::builtin_unexpected_argument(v2, a1, v1, v4, (&v11->field_0)[v68], (&v11->field_0)[v68 + 1], 1);
                    core::ptr::drop_in_place<fish::wgetopt::WGetopter>(&v23);
                    return 8589934593;
                }
                core::panicking::panic_bounds_check(v68, v39, &g_14ca9c0); /* do not return */
            case 63:
LABEL_13589e9:
                v68 = v33 - 1;
                if (v33 < 1)
                    core::panicking::panic_const::panic_const_sub_overflow(&g_14ca9d8); /* do not return */
                if (v68 < v39)
                {
                    fish::builtins::shared::builtin_unknown_option(v2, a1, v1, v4, (&v11->field_0)[v68], (&v11->field_0)[v68 + 1], 1);
                    core::ptr::drop_in_place<fish::wgetopt::WGetopter>(&v23);
                    return 8589934593;
                }
                core::panicking::panic_bounds_check(v68, v39, &g_14ca9f0); /* do not return */
            case 99:
LABEL_13585e2:
                v40 = 2;
                continue;
            case 103:
LABEL_135861c:
                v40 = 3;
                break;
            case 104:
LABEL_1358968:
                fish::builtins::shared::builtin_print_help(v2, a1, v1, v4);
                v50 = 0;
LABEL_1358e9c:
                core::ptr::drop_in_place<fish::wgetopt::WGetopter>(&v23);
                return 0x200000000 | v50;
            case 108:
LABEL_13585e6:
                v43 = v23.next_opt();
                switch (v43)
                {
                case 99:
                    v41 = 1;
                    goto LABEL_13585e2;
                case 103:
                    v41 = 1;
                    goto LABEL_135861c;
                case 112:
                    v41 = 1;
                    goto LABEL_1358615;
                case 113:
                    v41 = 1;
                    continue;
                case 58:
                    goto LABEL_1358907;
                case 59:
                    goto LABEL_1358988;
                case 60: case 61: case 62: case 64: case 65: case 66: case 67: case 68: case 69: case 70: case 71: case 72: case 73: case 74: case 75: case 76: case 77: case 78: case 79: case 80: case 81: case 82: case 83: case 84: case 85: case 86: case 87: case 88: case 89: case 90: case 91: case 92: case 93: case 94: case 95: case 96: case 97: case 98: case 100: case 101: case 102: case 105: case 106: case 107: case 109: case 110: case 111:
                    break;
                case 63:
                    goto LABEL_13589e9;
                case 104:
                    goto LABEL_1358968;
                case 108:
                    goto LABEL_13585e6;
                default:
                    if (v43 == 0x110000)
                        goto LABEL_135862a;
                    break;
                }
            case 112:
LABEL_1358615:
                v40 = 1;
                continue;
            case 113:
                break;
            default:
                v12 = &g_14c60b8;
                v21 = &v12;
                v21->field_8 = 1;
                v21->field_10 = 8;
                *((uint128_t *)&(&v21->field_10)[1]) = 0;
                core::panicking::panic_fmt(v21, &g_14caa08); /* do not return */
            }
        }
        else if ((v41 & 1))
        {
LABEL_135862a:
            v71 = v2.jobs();
            v72 = v71->field_8;
            v73 = &v71->field_8[v71->field_10];
            do
            {
                v74 = v72;
                if (v74 == v73)
                {
                    core::ptr::drop_in_place<core::cell::Ref<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(v79);
                    core::ptr::drop_in_place<fish::wgetopt::WGetopter>(&v23);
                    return 4294967297;
                }
                v72 = &v74[v74 != v73];
            } while (!(char)*(v74) + 16.is_visible());
            fish::builtins::jobs::builtin_jobs_print(*(v75) + 16, v0, a1->field_27 ^ 1, a1->field_8);
            core::ptr::drop_in_place<core::cell::Ref<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(v79);
            goto LABEL_13588fc;
        }
        else if (v33 < v39)
        {
            if (v33 > v26)
                core::slice::index::slice_start_index_len_fail(v33, v26, &g_14caac8); /* do not return */
            if (v33 == v26)
                goto LABEL_1358a52;
            v11 = a1->field_8;
            v44 = v33 * 16;
            v20 = v0;
            v21 = &v12;
            while (true)
            {
                if ((int)*((long long *)((char *)a2 + v44)).char_at(*((long long *)(8 + (char *)a2 + v44)), 0) == 37)
                {
                    if (!*((long long *)(8 + (char *)a2 + v44)))
                        core::option::expect_failed("index out of boundsEXPORTPATHVARLOCALGLOBALUNIVERSALUNPATHVAR/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/hashbrown-0.15.2/src/raw/mod.rsHash table capacity overflowLazy instance has previously been poisoned/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/once_cell-1.20.2/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/le.rs", 19, &g_14caa38); /* do not return */
                    v46 = fish::wutil::wcstoi::fish_wcstoi(*((long long *)((char *)a2 + v44)) + 4, *((long long *)(8 + (char *)a2 + v44)) - 1);
                    if (((char)~((char)v46) & 1.filter(v46 >> 32) & 1))
                    {
                        if (v47)
                        {
                            v47 >> 31.unwrap(&g_14caa68);
                            v47.unwrap(&g_14caa80);
                        }
                        v48 = v2.job_with_id(v47);
                    }
                    else
                    {
                        v57 = a1->field_10;
                        v5 = 0;
                        v6 = 4;
                        v7 = 0;
                        v9 = "%";
                        v10 = 33;
                        v8 = 0x8000000000000000;
                        v58 = v8.localize();
                        v13 = 1;
                        v15 = v1;
                        v16 = v4;
                        v17 = 1;
                        *((int128_t *)&v18) = *((int128_t *)((char *)a2 + v44));
                        fish_printf::printf_impl::sprintf_locale(&v19, &v5, v58, v59, ".", &v13, 2);
                        v19.unwrap(&g_14caa50);
                        core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(&v13);
                        core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v8);
                        *((int128_t *)&v14) = *((int128_t *)&v5);
                        v16 = 0;
                        v57.append(&v13);
LABEL_1358e96:
                        v50 = 1;
                        break;
                    }
                }
                else
                {
                    v49 = fish::wutil::wcstoi::fish_wcstoi(*((long long *)((char *)a2 + v44)), *((long long *)(8 + (char *)a2 + v44)));
                    if (!((char)v49 & 1))
                    {
                        if (v49 < 0)
                        {
                            v12 = &g_14c74d8;
                            v21->field_8 = 1;
                            v21->field_10 = 8;
                            *((uint128_t *)&(&v21->field_10)[1]) = 0;
                            core::panicking::panic_fmt(v21, &g_14c74e8); /* do not return */
                        }
                        if (!v49 >> 32)
                            goto LABEL_1358b81;
                        v48 = v2.job_get_from_pid(v49 >> 32);
                    }
                    else
                    {
LABEL_1358b81:
                        v51 = a1->field_10;
                        v5 = 0;
                        v6 = 4;
                        v7 = 0;
                        v9 = "%";
                        v10 = 37;
                        v8 = 0x8000000000000000;
                        v52 = v8.localize();
                        v13 = 1;
                        v15 = v1;
                        v16 = v4;
                        v17 = 1;
                        *((int128_t *)&v18) = *((int128_t *)((char *)a2 + v44));
                        fish_printf::printf_impl::sprintf_locale(&v19, &v5, v52, v53, ".", &v13, 2);
                        v19.unwrap(&g_14caa98);
                        core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(&v13);
                        core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v8);
                        *((int128_t *)&v14) = *((int128_t *)&v5);
                        v16 = 0;
                        v51.append(&v13);
                        goto LABEL_1358e96;
                    }
                }
                v22 = v48.filter();
                if (v22)
                {
                    v12 = v22;
                    fish::builtins::jobs::builtin_jobs_print(v22 + 16, v20, 0, v11);
                    core::ptr::drop_in_place<alloc::rc::Rc<fish::proc::Job>>(&v12);
                    v44 += 16;
                    if (v26 * 16 == v44)
                    {
                        core::ptr::drop_in_place<fish::wgetopt::WGetopter>(&v23);
                        return 0;
                    }
                }
                else
                {
                    if (v0 != 4)
                    {
                        v54 = a1->field_10;
                        v5 = 0;
                        v6 = 4;
                        v7 = 0;
                        v9 = "%";
                        v10 = 26;
                        v8 = 0x8000000000000000;
                        v55 = v8.localize();
                        v13 = 1;
                        v15 = v1;
                        v16 = v4;
                        v17 = 1;
                        *((int128_t *)&v18) = *((int128_t *)((char *)a2 + v44));
                        fish_printf::printf_impl::sprintf_locale(&v19, &v5, v55, v56, ".", &v13, 2);
                        v19.unwrap(&g_14caab0);
                        core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(&v13);
                        core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v8);
                        *((int128_t *)&v14) = *((int128_t *)&v5);
                        v16 = 0;
                        v54.append(&v13);
                    }
                    core::ptr::drop_in_place<core::option::Option<alloc::rc::Rc<fish::proc::Job>>>(&v22);
                    core::ptr::drop_in_place<fish::wgetopt::WGetopter>(&v23);
                    return 4294967297;
                }
            }
            goto LABEL_1358e9c;
        }
        else
        {
            v62 = v2.jobs();
            if (v62[2])
            {
                v1 = v63;
                v2 = a1->field_27;
                v4 = a1->field_8;
                v64 = 0;
                do
                {
                    if ((char)*((long long *)(v62[1] + (char *)v64)) + 16.is_visible())
                    {
                        fish::builtins::jobs::builtin_jobs_print(*((long long *)(v62[1] + (char *)v64)) + 16, v0, ~(v65 | v3) & 1, v4);
                        v65 = 1;
                    }
                    v64 += 1;
                } while (v62[2] * 8 != v64);
                core::ptr::drop_in_place<core::cell::Ref<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(v1);
                if (!(v65 & 1))
                    goto LABEL_1358a52;
LABEL_13588fc:
                v45 = 0;
                v50 = 0;
                break;
            }
            else
            {
                core::ptr::drop_in_place<core::cell::Ref<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(v63);
LABEL_1358a52:
                v45 = 0x100000000;
                v50 = 1;
                if (v0 != 4 && !a1->field_27)
                {
                    v66 = a1->field_8;
                    v5 = 0;
                    v6 = 4;
                    v7 = 0;
                    v9 = "%";
                    v10 = 23;
                    v8 = 0x8000000000000000;
                    v67 = v8.localize();
                    v12 = 1;
                    *((unsigned long long [2])&v15) = v11->field_0;
                    fish_printf::printf_impl::sprintf_locale(&v19, &v5, v67, v63, ".", &(unsigned long long)v13, 1);
                    v19.unwrap(&g_14caa20);
                    core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&(unsigned long long)v13);
                    core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v8);
                    *((int128_t *)&v13) = *((int128_t *)&v5);
                    v16 = 0;
                    v66.append(&(unsigned long long)v13);
                    break;
                }
            }
        }
    }
    core::ptr::drop_in_place<fish::wgetopt::WGetopter>(&v23);
    return v45 | v50;
}
