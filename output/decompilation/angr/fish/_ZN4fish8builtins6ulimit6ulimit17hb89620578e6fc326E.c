long long fish::builtins::ulimit::ulimit(unsigned long long a0, unsigned long long a1[3], void* a2, unsigned long long a3)
{
    unsigned int v0;  // [bp-0x164]
    unsigned long v1;  // [bp-0x160]
    unsigned long long v2;  // [bp-0x158]
    void* v3;  // [bp-0x150], Other Possible Types: unsigned long long
    unsigned long long v4;  // [bp-0x148]
    void* v5;  // [bp-0x140], Other Possible Types: unsigned long long
    void* v6;  // [bp-0x138], Other Possible Types: char
    unsigned long long v7;  // [bp-0x130]
    void* v8;  // [bp-0x128]
    unsigned long long v9;  // [bp-0x118], Other Possible Types: char
    int v10;  // [bp-0x118]
    unsigned long long v11;  // [bp-0x110], Other Possible Types: unsigned long
    void* v12;  // [bp-0x108], Other Possible Types: unsigned long long
    int v13;  // [bp-0x100]
    char v14;  // [bp-0xf8]
    int v15;  // [bp-0xf0]
    char v16;  // [bp-0xd8]
    void* v17;  // [bp-0xc8]
    unsigned long long v18;  // [bp-0xc0]
    void* v19;  // [bp-0xb8]
    unsigned long v20;  // [bp-0xa8]
    unsigned long long v21;  // [bp-0xa0]
    unsigned long long v22;  // [bp-0x98]
    unsigned long long v23;  // [bp-0x90]
    unsigned long long v24;  // [bp-0x88]
    unsigned long long v25;  // [bp-0x80]
    uint128_t v26;  // [bp-0x78]
    void* v27;  // [bp-0x60]
    uint128_t v28;  // [bp-0x58]
    unsigned int v29;  // [bp-0x48]
    unsigned short v30;  // [bp-0x44]
    char v31;  // [bp-0x42]
    char v32;  // [bp-0x40]
    char v33;  // [bp-0x38]
    unsigned int v35;  // r13d
    unsigned int v36;  // ecx
    char v37;  // bl
    unsigned long v38;  // r12
    unsigned int v39;  // eax
    unsigned long v40;  // rax
    void* v42;  // r12
    unsigned long long v43;  // rax
    unsigned long long v44;  // r14
    unsigned long v45;  // r12
    unsigned long long v47;  // rdx
    char v48;  // r15b
    unsigned int v49;  // ebp
    unsigned long long v50;  // cc_ndep
    unsigned long long v51;  // r12
    void* v52;  // rbx
    unsigned long v53;  // r12
    unsigned long long v54;  // rax
    unsigned long long v55;  // rdx
    unsigned long long v56;  // rax
    unsigned long long v57;  // rax
    unsigned long long v58;  // rdx
    unsigned long long v60;  // rcx
    char v61;  // al
    unsigned int v62;  // ebx
    unsigned long long v63;  // rdi
    unsigned long long v65;  // rdx
    unsigned long v67;  // rdi
    unsigned long long v68;  // rdx

    if (!a3)
        core::panicking::panic_bounds_check(0, 0, &g_14d5320); /* do not return */
    v1 = *((long long *)a2);
    v2 = (long long)a2[8];
    v35 = <fish::builtins::ulimit::Options as core::default::Default>::default();
    v21 = "H";
    v22 = 24;
    v23 = &g_14d50e0;
    v24 = 24;
    v25 = 4;
    v26 = 0;
    v27 = 0;
    v29 = 63;
    v31 = 1;
    v30 = 0;
    v17 = 0;
    v28 = 0;
    v18 = 8;
    v19 = 0;
    v0 = 0;
    v36 = 0;
    while (true)
    {
        v38 = v36;
        v39 = v17.next_opt();
        if (v39 != 0x110000)
        {
            v40 = v39 - 58;
            switch ((unsigned int)v40)
            {
            case 0:
                v67 = v27 - 1;
                if (v27 < 1)
                {
                    goto LABEL_0x1387fe4;
                }
                else if (v67 < v20)
                {
                    fish::builtins::shared::builtin_missing_argument(a0, a1, v1, v2, *((long long *)((char *)a2 + 16 * v67)), *((long long *)(8 + (char *)a2 + 16 * v67)), 1);
                    goto LABEL_1387f33;
                }
                else
                {
                    goto LABEL_0x1388020;
                }
            case 1:
                v67 = v27 - 1;
                if (v27 < 1)
                {
                    core::panicking::panic_const::panic_const_sub_overflow(v63); /* do not return */
                }
                else if (v67 < v20)
                {
                    fish::builtins::shared::builtin_unexpected_argument(a0, a1, v1, v2, *((long long *)((char *)a2 + 16 * v67)), *((long long *)(8 + (char *)a2 + 16 * v67)), 1);
                    goto LABEL_1387f33;
                }
                core::panicking::panic_bounds_check(v67, a3, v68); /* do not return */
            case 5:
                v67 = v27 - 1;
                if (v27 < 1)
                {
                    goto LABEL_0x1387fe4;
                }
                else if (v67 < v20)
                {
                    fish::builtins::shared::builtin_unknown_option(a0, a1, v1, v2, *((long long *)((char *)a2 + 16 * v67)), *((long long *)(8 + (char *)a2 + 16 * v67)), 1);
                    goto LABEL_1387f33;
                }
                else
                {
                    goto LABEL_0x1388020;
                }
            case 14:
                *((unsigned long *)&v0) = g_9f3b64[v40] + (char *)&g_9f3b64[0] & 0xffffffffffffff00 | 1;
                v36 = v38;
                continue;
            case 17:
                v35 = fish::libc::RLIMIT_KQUEUES();
                break;
            case 22:
                v35 = fish::libc::RLIMIT_NPTS();
                break;
            case 25:
                v37 = 1;
                v36 = v38;
                continue;
            case 26:
                v35 = fish::libc::RLIMIT_NTHR();
                break;
            case 39:
                continue;
            case 40:
                v35 = fish::libc::RLIMIT_SBSIZE();
                break;
            case 41:
                v35 = fish::libc::RLIMIT_CORE();
                break;
            case 42:
                v35 = fish::libc::RLIMIT_DATA();
                break;
            case 43:
                v35 = fish::libc::RLIMIT_NICE();
                break;
            case 44:
                v35 = fish::libc::RLIMIT_FSIZE();
                break;
            case 46:
                fish::builtins::shared::builtin_print_help(a0, a1, v1, v2);
LABEL_1387911:
                goto LABEL_0x1387f6a;
            case 47:
                v35 = fish::libc::RLIMIT_SIGPENDING();
                break;
            case 50:
                v35 = fish::libc::RLIMIT_MEMLOCK();
                break;
            case 51:
                v35 = fish::libc::RLIMIT_RSS();
                break;
            case 52:
                v35 = fish::libc::RLIMIT_NOFILE();
                break;
            case 55:
                v35 = fish::libc::RLIMIT_MSGQUEUE();
                break;
            case 56:
                v35 = fish::libc::RLIMIT_RTPRIO();
                break;
            case 57:
                v35 = fish::libc::RLIMIT_STACK();
                break;
            case 58:
                v35 = fish::libc::RLIMIT_CPU();
                break;
            case 59:
                v35 = fish::libc::RLIMIT_NPROC();
                break;
            case 60:
                v35 = fish::libc::RLIMIT_AS();
                break;
            case 61:
                v35 = fish::libc::RLIMIT_SWAP();
                break;
            case 63:
                v35 = fish::libc::RLIMIT_RTTIME();
                break;
            default:
                v9 = &g_14c60b8;
                v11 = 1;
                v12 = 8;
                *((uint128_t *)&v13) = 0;
                core::panicking::panic_fmt(&v9, &g_14d53c8); /* do not return */
            }
            v36 = v38;
        }
        else
        {
            if (((char)v38 & 1))
                fish::builtins::ulimit::print_all((char)v0, a1[1]);
            if (v35 == -1)
            {
                v45 = a1[2];
                v6 = 0;
                v7 = 4;
                v8 = 0;
                v4 = "%";
                v5 = 59;
                v3 = 0x8000000000000000;
                v9 = 1;
                v11 = v1;
                v12 = v2;
                fish_printf::printf_impl::sprintf_locale(&v16, &v6, v3.localize(), v65, ".", &(unsigned long long)v10, 1);
                v16.unwrap(&g_14d53e0);
                core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&(unsigned long long)v10);
                core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v3);
                *((int128_t *)&v10) = *((int128_t *)&v6);
                v12 = 0;
                v45.append(&(unsigned long long)v10);
                goto LABEL_1387c60;
            }
            v35 >> 31.unwrap(&g_14d53f8);
            v42 = v27;
            v43 = a3 - v42;
            if (a3 < v42)
                goto LABEL_0x1387fe4;
            if (v43 == 1)
            {
                v48 = v0;
                if (((v48 | v37) & 1))
                    v49 = v37;
                else
                    v49 = 1;
                v51 = v42 * 16;
                v44 = 0x100000000;
                if (!(char)fish::fallback::wcscasecmp(*((long long *)((char *)a2 + v51)), *((long long *)(8 + (char *)a2 + v51)), "u", 9))
                {
                    v60 = 18446744073709551615;
                    goto LABEL_1387f47;
                }
                v52 = a2 + v51;
                if (!(char)fish::fallback::wcscasecmp(*((long long *)v52), (long long)v52[8], "h", 4))
                {
                    v61 = fish::builtins::ulimit::get(v35, 1);
                    goto LABEL_1387df9;
                }
                if (!(char)fish::fallback::wcscasecmp(*((long long *)v52), (long long)v52[8], "s", 4))
                {
                    v61 = fish::builtins::ulimit::get(v35, v49);
LABEL_1387df9:
                    v62 = 1;
                    if (!(v61 & 1))
                        break;
                    goto LABEL_1387f47;
                }
                fish::wutil::wcstoi::fish_wcstol(&v32, *((long long *)v52), (long long)v52[8]);
                if (v32 == 1)
                {
                    v53 = a1[2];
                    v6 = 0;
                    v7 = 4;
                    v8 = 0;
                    v4 = "%";
                    v5 = 25;
                    v3 = 0x8000000000000000;
                    v54 = v3.localize();
                    v9 = 1;
                    v11 = v1;
                    v12 = v2;
                    v14 = 1;
                    *((int128_t *)&v15) = *((int128_t *)v52);
                    fish_printf::printf_impl::sprintf_locale(&v16, &v6, v54, v55, ".", &(unsigned long long)v10, 2);
                    v16.unwrap(&g_14d5440);
                    core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(&(unsigned long long)v10);
                    core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v3);
                    *((int128_t *)&v10) = *((int128_t *)&v6);
                    v12 = 0;
                    v53.append(&(unsigned long long)v10);
                    goto LABEL_1387f1b;
                }
                else
                {
                    v56 = fish::builtins::ulimit::get_multiplier(v35);
                    if ((char)_ccall(0, 48, v56, *((long long *)&v33), v50))
                    {
                        v53 = a1[2];
                        v6 = 0;
                        v7 = 4;
                        v8 = 0;
                        v4 = "%";
                        v5 = 25;
                        v3 = 0x8000000000000000;
                        v57 = v3.localize();
                        v9 = 1;
                        v11 = v1;
                        v12 = v2;
                        v14 = 1;
                        *((int128_t *)&v15) = *((int128_t *)v52);
                        fish_printf::printf_impl::sprintf_locale(&v16, &v6, v57, v58, ".", &(unsigned long long)v10, 2);
                        v16.unwrap(&g_14d5428);
                        core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(&(unsigned long long)v10);
                        core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v3);
                        *((int128_t *)&v10) = *((int128_t *)&v6);
                        v12 = 0;
                        v53.append(&(unsigned long long)v10);
LABEL_1387f1b:
                        fish::builtins::shared::builtin_print_error_trailer(a0, v53, v1, v2);
LABEL_1387f33:
                        v44 = 0x200000000;
                        v62 = 1;
                        break;
                    }
                    else
                    {
                        v60 = v56 * *((long long *)&v33);
LABEL_1387f47:
                        v62 = fish::builtins::ulimit::set_limit(v35, (~(v48 | v37) | (char)v0) & 1, v49, v60, a1);
                        break;
                    }
                }
            }
            else if (!v43)
            {
                fish::builtins::ulimit::print(v35, (char)v0, a1[1]);
                goto LABEL_1387911;
            }
            else
            {
                v45 = a1[2];
                v3 = 0;
                v4 = 4;
                v5 = 0;
                v9 = 1;
                v11 = v1;
                v12 = v2;
                fish_printf::printf_impl::sprintf_locale(&v6, &v3, g_14c6510[0].localize(), v47, ".", &(unsigned long long)v10, 1);
                v6.unwrap(&g_14d5458);
                core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&(unsigned long long)v10);
                *((int128_t *)&v10) = *((int128_t *)&v3);
                v12 = 0;
                v45.append(&(unsigned long long)v10);
LABEL_1387c60:
                fish::builtins::shared::builtin_print_error_trailer(a0, v45, v1, v2);
                v62 = 1;
                v44 = 0x200000000;
                break;
            }
        }
    }
    core::ptr::drop_in_place<fish::wgetopt::WGetopter>(&v17);
    return v62 & 1 | v44;
}
