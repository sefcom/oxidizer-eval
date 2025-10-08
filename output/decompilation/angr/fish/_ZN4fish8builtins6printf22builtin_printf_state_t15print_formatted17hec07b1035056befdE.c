long long fish::builtins::printf::builtin_printf_state_t::print_formatted(void* a0, unsigned long a1, unsigned long a2, void* a3, void* a4)
{
    unsigned long long v0;  // [bp-0x348]
    void* v1;  // [bp-0x228], Other Possible Types: unsigned int, unsigned long long
    unsigned int v2;  // [bp-0x228]
    void* v3;  // [bp-0x220]
    void* v4;  // [bp-0x218]
    unsigned long v5;  // [bp-0x210]
    void* v6;  // [bp-0x208], Other Possible Types: char
    unsigned long long v7;  // [bp-0x200]
    void* v8;  // [bp-0x1f8]
    void* v9;  // [bp-0x1f0], Other Possible Types: unsigned long
    unsigned long long v10[3];  // [bp-0x1e8]
    unsigned long long v11[3];  // [bp-0x1e8]
    unsigned long long v12[3];  // [bp-0x1e8]
    unsigned long long v13;  // [bp-0x1e0]
    unsigned long long v14;  // [bp-0x1d8]
    unsigned long long v15;  // [bp-0x1d0]
    unsigned long long v16;  // [bp-0x1c8]
    void* v17;  // [bp-0x1b8]
    unsigned int v18;  // [bp-0x1ac]
    char v19;  // [bp-0x1a8]
    int v20;  // [bp-0x1a8]
    void* v21;  // [bp-0x198]
    char v22;  // [bp-0x188]
    unsigned long v23;  // [bp-0x180]
    unsigned long v24;  // [bp-0x178]
    char *v25;  // [bp-0x160]
    char *v26;  // [bp-0x158]
    int v27;  // [bp-0x150]
    uint128_t v28;  // [bp-0x138]
    uint128_t v29;  // [bp-0x128]
    uint128_t v30;  // [bp-0x118]
    uint128_t v31;  // [bp-0x108]
    uint128_t v32;  // [bp-0xf8]
    uint128_t v33;  // [bp-0xe8]
    uint128_t v34;  // [bp-0xd8]
    uint128_t v35;  // [bp-0xc8]
    uint128_t v36;  // [bp-0xb8]
    uint128_t v37;  // [bp-0xa8]
    uint128_t v38;  // [bp-0x98]
    uint128_t v39;  // [bp-0x88]
    uint128_t v40;  // [bp-0x78]
    uint128_t v41;  // [bp-0x68]
    uint128_t v42;  // [bp-0x58]
    uint128_t v43;  // [bp-0x48]
    unsigned long v45;  // r13
    unsigned long v46;  // rbx
    char *v47;  // r12
    void* v48;  // r15
    unsigned long v49;  // r14
    unsigned long v50;  // rbp
    void* v51;  // r15
    unsigned int v52;  // eax
    unsigned long long v53;  // rax
    unsigned long v54;  // r14
    unsigned long long v57;  // r12
    unsigned long long v58;  // r12
    unsigned long v59;  // r13
    unsigned long long v60;  // rdx
    char *v61;  // rdi
    unsigned long long v62;  // rsi
    unsigned long v63;  // r13
    unsigned long v64;  // r12
    unsigned long v65;  // r13
    unsigned long v66;  // r12
    void* v67;  // rax
    unsigned long long v68;  // rax
    unsigned long long v69;  // rdx
    unsigned long v70;  // r13
    unsigned long v71;  // r12, Other Possible Types: unsigned long long
    unsigned long long v72;  // r12
    unsigned long v73;  // r13
    unsigned long v74;  // rax
    unsigned long long v75;  // rax
    unsigned long long v76;  // rax
    unsigned long long v77;  // rax
    unsigned long long v78;  // r12
    unsigned long v79;  // r13
    unsigned long v80;  // rax
    unsigned int v82;  // eax
    void* v83;  // rax
    unsigned int v84;  // eax
    unsigned long long v85;  // rax
    int v86;  // [bp-0x1a0], Other Possible Types: unsigned long

    v3 = a3;
    v45 = a2;
    v46 = a1;
    v43 = 0;
    v42 = 0;
    v41 = 0;
    v40 = 0;
    v39 = 0;
    v38 = 0;
    v37 = 0;
    v36 = 0;
    v35 = 0;
    v34 = 0;
    v33 = 0;
    v32 = 0;
    v31 = 0;
    v30 = 0;
    v29 = 0;
    v28 = 0;
    v16 = 0;
    v47 = &v10;
    v26 = &v6;
    v17 = 0;
    v48 = a4;
    v4 = a4;
    while (true)
    {
        v1 = v48;
        v49 = v45;
        v50 = v46;
        v51 = a0;
        if (!v49)
        {
            if (a4 >= v1)
                return a4 - v1;
            core::panicking::panic_const::panic_const_sub_overflow(&g_14cb358); /* do not return */
        }
        v52 = v50.char_at(v49, 0);
        switch (v52)
        {
        case 37:
            v45 = v49 - 1;
            v46 = v50 + 4;
            v52 = 37;
            if ((int)v46.char_at(v45, 0) == 37)
                goto LABEL_13602f6;
            if ((int)v46.char_at(v45, 0) == 98)
            {
                v48 = 0;
                continue;
            }
            v25 = v47;
            fish::builtins::printf::modify_allowed_format_specifiers(&v28, "aAcdeEfFgGiosuxXman/man1/nextd.1/", 16, 1);
            v57 = 1;
            while (true)
            {
                v58 = v57;
                v59 = v45;
                v46.char_at(v59, 0);
                switch ((int)v46.char_at(v59, 0))
                {
                case 39: case 73:
                    v60 = 9;
                    v61 = &v28;
                    v62 = "aAceEosxXcdisucs\"\\abcefnrtv";
                    goto LABEL_13604c5;
                case 48:
                    v60 = 2;
                    v61 = &v28;
                    v62 = "cs\"\\abcefnrtv";
                    goto LABEL_13604c5;
                case 35:
                    v60 = 5;
                    v61 = &v28;
                    v62 = "cdisucs\"\\abcefnrtv";
LABEL_13604c5:
                    fish::builtins::printf::modify_allowed_format_specifiers(v61, v62, v60, 0);
                case 32: case 43: case 45:
                    v63 = v59 - 1;
                    if (v59 < 1)
                        core::option::expect_failed("index out of boundsEXPORTPATHVARLOCALGLOBALUNIVERSALUNPATHVAR/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/hashbrown-0.15.2/src/raw/mod.rsHash table capacity overflowLazy instance has previously been poisoned/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/once_cell-1.20.2/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/le.rs", 19, &g_14cb538); /* do not return */
                    v64 = v58 + 1;
                    if ((char)_ccall(4, 24, v58 + 1, 0, (unsigned long long)(char)(v59 < 1)))
                        core::panicking::panic_const::panic_const_add_overflow(&g_14cb550); /* do not return */
                    v46 += 4;
                    v45 = v63;
                    v57 = v64;
                    break;
                default:
                    v18 = v46.char_at(v59, 0);
                    if (v18 == 42)
                    {
                        v65 = v59 - 1;
                        if (v59 < 1)
                            core::option::expect_failed("index out of boundsEXPORTPATHVARLOCALGLOBALUNIVERSALUNPATHVAR/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/hashbrown-0.15.2/src/raw/mod.rsHash table capacity overflowLazy instance has previously been poisoned/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/once_cell-1.20.2/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/le.rs", 19, &g_14cb388); /* do not return */
                        v66 = v58 + 1;
                        if ((char)_ccall(4, 24, v58 + 1, 0, (unsigned long long)(char)(v59 < 1)))
                            core::panicking::panic_const::panic_const_add_overflow(&g_14cb3a0); /* do not return */
                        v46 += 4;
                        if (!v1)
                        {
                            v17 = 0;
                            v1 = 0;
                            v70 = v65;
                            v71 = v66;
                            goto LABEL_13606a5;
                        }
                        else if (v4)
                        {
                            v67 = fish::builtins::printf::string_to_scalar_type(*((long long *)v3), (long long)v3[8], v51);
                            if ((v67 & 4294967295) == v67)
                            {
                                v17 = v67;
                            }
                            else
                            {
                                v6 = 0;
                                v7 = 4;
                                v8 = 0;
                                v13 = "i";
                                v14 = 24;
                                *(v11) = 0x8000000000000000;
                                v68 = v11.localize();
                                *((char *)&v20) = 1;
                                *((int128_t *)&v86) = *((int128_t *)v3);
                                fish_printf::printf_impl::sprintf_locale(&v27, &v6, v68, v69, ".", &(char)v20, 1);
                                v27.unwrap(&g_14cb3d0);
                                core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&(char)v20);
                                core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v11);
                                *((int128_t *)&v20) = *((int128_t *)&v6);
                                v21 = 0;
                                fish::builtins::printf::builtin_printf_state_t::fatal_error(v51, &(char)v20);
                            }
                            v1 -= 1;
                            v3 += 16;
                            v4 -= 1;
                            v70 = v65;
                            v71 = v66;
                            goto LABEL_13606a5;
                        }
                        else
                        {
                            core::panicking::panic_bounds_check(0, 0, &g_14cb3b8); /* do not return */
                        }
                    }
                    else
                    {
                        v70 = v59;
                        v71 = v58;
                        if ((int)v46.char_at(v70, 0) - 48 <= 9)
                        {
                            do
                            {
                                v72 = v58;
                                v73 = v59;
                                v70 = v73 - 1;
                                if (v73 < 1)
                                    core::option::expect_failed("index out of boundsEXPORTPATHVARLOCALGLOBALUNIVERSALUNPATHVAR/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/hashbrown-0.15.2/src/raw/mod.rsHash table capacity overflowLazy instance has previously been poisoned/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/once_cell-1.20.2/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/le.rs", 19, &g_14cb508); /* do not return */
                                v71 = v72 + 1;
                                if ((char)_ccall(4, 24, v72 + 1, 0, (unsigned long long)(char)(v73 < 1)))
                                    core::panicking::panic_const::panic_const_add_overflow(&g_14cb520); /* do not return */
                                v46 += 4;
                                v59 = v70;
                                v58 = v71;
                            } while ((int)v46.char_at(v59, 0) - 48 < 10);
                        }
                    }
                }
            }
LABEL_13606a5:
            v15 = 0;
            if ((int)v46.char_at(v70, 0) == 46)
            {
                v74 = v70;
                v5 = v74 - 1;
                if (v74 < 1)
                    core::option::expect_failed("index out of boundsEXPORTPATHVARLOCALGLOBALUNIVERSALUNPATHVAR/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/hashbrown-0.15.2/src/raw/mod.rsHash table capacity overflowLazy instance has previously been poisoned/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/once_cell-1.20.2/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/le.rs", 19, &g_14cb3e8); /* do not return */
                v71 += 1;
                if ((char)_ccall(4, 24, v71 + 1, 0, (unsigned long long)(char)(v74 < 1)))
                    core::panicking::panic_const::panic_const_add_overflow(&g_14cb400); /* do not return */
                v9 = v46 + 4;
                fish::builtins::printf::modify_allowed_format_specifiers(&v28, "c", 1, 0);
                v75 = v9.char_at(v5, 0);
                if ((unsigned int)v75 == 42)
                {
                    if (!v5)
                        core::option::expect_failed("index out of boundsEXPORTPATHVARLOCALGLOBALUNIVERSALUNPATHVAR/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/hashbrown-0.15.2/src/raw/mod.rsHash table capacity overflowLazy instance has previously been poisoned/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/once_cell-1.20.2/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/le.rs", 19, &g_14cb418); /* do not return */
                    v71 += 1;
                    if ((char)_ccall(4, 24, v71 + 1, 0, (unsigned long long)(char)(v5 < 0)))
                        core::panicking::panic_const::panic_const_add_overflow(&g_14cb430); /* do not return */
                    v70 -= 2;
                    v46 += 8;
                    v15 = v75 & 0xffffffffffffff00 | 1;
                    if (v1)
                    {
                        if (!v4)
                            core::panicking::panic_bounds_check(0, 0, &g_14cb448); /* do not return */
                        v76 = fish::builtins::printf::string_to_scalar_type(*((long long *)v3), (long long)v3[8], v51);
                        if (v76 < 0)
                        {
                            v76 = 4294967295;
                        }
                        else if (v76 > 2147483647)
                        {
                            v6 = 0;
                            v7 = 4;
                            v8 = 0;
                            v13 = "i";
                            v14 = 22;
                            *(v12) = 0x8000000000000000;
                            v77 = v12.localize();
                            *((char *)&v20) = 1;
                            *((int128_t *)&v86) = *((int128_t *)v3);
                            fish_printf::printf_impl::sprintf_locale(&v27, &v6, v77, v69, ".", &(char)v20, 1);
                            v27.unwrap(&g_14cb460);
                            core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&(char)v20);
                            core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v12);
                            *((int128_t *)&v20) = *((int128_t *)&v6);
                            v21 = 0;
                            fish::builtins::printf::builtin_printf_state_t::fatal_error(v51, &(char)v20);
                            goto LABEL_13608e0;
                        }
                        v16 = v76;
LABEL_13608e0:
                        v1 -= 1;
                        v3 += 16;
                        v4 -= 1;
                    }
                    else
                    {
                        v16 = 0;
                        v1 = 0;
                    }
                }
                else
                {
                    v46 = v9;
                    v70 = v5;
                    if ((int)v46.char_at(v70, 0) - 48 <= 9)
                    {
                        do
                        {
                            v78 = v71;
                            v79 = v70;
                            v70 = v79 - 1;
                            if (v79 < 1)
                                core::option::expect_failed("index out of boundsEXPORTPATHVARLOCALGLOBALUNIVERSALUNPATHVAR/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/hashbrown-0.15.2/src/raw/mod.rsHash table capacity overflowLazy instance has previously been poisoned/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/once_cell-1.20.2/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/le.rs", 19, &g_14cb478); /* do not return */
                            v71 = v78 + 1;
                            if ((char)_ccall(4, 24, v78 + 1, 0, (unsigned long long)(char)(v79 < 1)))
                                core::panicking::panic_const::panic_const_add_overflow(&g_14cb490); /* do not return */
                            v46 += 4;
                            v70 = v70;
                            v71 = v71;
                        } while ((int)v46.char_at(v70, 0) - 48 < 10);
                    }
                    v15 = 0;
                }
            }
            while (true)
            {
                v45 = v70;
                v80 = (int)v46.char_at(v45, 0) - 76;
                if ((unsigned int)v80 > 46)
                    break;
                v0 = 71473892950017;
                if (!(*((char *)&v0 + ((v80 & 63) >> 3)) >> ((char)v80 & 63 & 7) & 1))
                    break;
                v46 += 4;
                v70 = v45 - 1;
                if (!((char)__CFADD__(v45, -1)))
                    core::option::expect_failed("index out of boundsEXPORTPATHVARLOCALGLOBALUNIVERSALUNPATHVAR/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/hashbrown-0.15.2/src/raw/mod.rsHash table capacity overflowLazy instance has previously been poisoned/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/once_cell-1.20.2/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/le.rs", 19, &g_14cb4a8); /* do not return */
            }
            v82 = v46.char_at(v45, 0);
            if (v82 > 255 || *((char *)&v28 + v82) != 1)
            {
                v6 = 0;
                v7 = 4;
                v8 = 0;
                v13 = "%";
                v14 = 39;
                *(v10) = 0x8000000000000000;
                v25 = &v10;
                v85 = v10.localize();
                v1 = v69;
                v19 = 4;
                v86 = fish::wutil::wstr_offset_in(v46, v45, v50, v49) + 1;
                v22 = 1;
                v23 = v50;
                v24 = v49;
                v26 = &v6;
                fish_printf::printf_impl::sprintf_locale(&v27, &v6, v85, v1, ".", &v19, 2);
                v27.unwrap(&g_14cb4f0);
                core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(&v19);
                core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v10);
                memcpy(&v19, &v6, 16);
                v21 = 0;
                fish::builtins::printf::builtin_printf_state_t::fatal_error(v51, &v19);
                return 0;
            }
            if (!v1)
            {
                v5 = 4;
                v9 = 0;
                v48 = 0;
            }
            else if (v4)
            {
                v83 = v3;
                v5 = *((long long *)v83);
                v9 = (long long)v83[8];
                v48 = v1 - 1;
                v3 = v83 + 16;
                v4 -= 1;
            }
            else
            {
                core::panicking::panic_bounds_check(0, 0, &g_14cb4c0); /* do not return */
            }
            if (v71 > v49)
                core::option::expect_failed("index out of boundsEXPORTPATHVARLOCALGLOBALUNIVERSALUNPATHVAR/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/hashbrown-0.15.2/src/raw/mod.rsHash table capacity overflowLazy instance has previously been poisoned/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/once_cell-1.20.2/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/le.rs", 19, &g_14cb4d8); /* do not return */
            v1 = v18 == 42;
            v84 = v46.char_at(v45, 0);
            fish::builtins::printf::builtin_printf_state_t::print_direc(a0, v50, v71, v84, v2, (unsigned int)v17, v15, v16, v5, v9);
            v47 = &v10;
            break;
        case 92:
            v53 = fish::builtins::printf::builtin_printf_state_t::print_esc(v51, v50, v49, 0);
            v45 = v49 - v53;
            if (v49 < v53)
                core::option::expect_failed("index out of boundsEXPORTPATHVARLOCALGLOBALUNIVERSALUNPATHVAR/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/hashbrown-0.15.2/src/raw/mod.rsHash table capacity overflowLazy instance has previously been poisoned/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/once_cell-1.20.2/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/le.rs", 19, &g_14cb568); /* do not return */
            v46 = v53 * 4 + v50;
            goto LABEL_1360303;
        default:
            v45 = v49;
            v46 = v50;
LABEL_13602f6:
            fish::builtins::printf::builtin_printf_state_t::append_output(v51, v52);
            v45 = v45;
LABEL_1360303:
            if (v45)
            {
                v54 = v45;
                continue;
            }
            core::option::expect_failed("index out of boundsEXPORTPATHVARLOCALGLOBALUNIVERSALUNPATHVAR/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/hashbrown-0.15.2/src/raw/mod.rsHash table capacity overflowLazy instance has previously been poisoned/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/once_cell-1.20.2/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/le.rs", 19, &g_14cb340); /* do not return */
        }
    }
}
