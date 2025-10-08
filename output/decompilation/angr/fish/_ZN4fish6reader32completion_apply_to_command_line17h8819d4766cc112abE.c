long long fish::reader::completion_apply_to_command_line(struct_0 *a0, unsigned long long a1, unsigned long a2, unsigned long a3, unsigned int a4, unsigned long long a5, unsigned long long a6, void* a7, char a8, char a9)
{
    unsigned int v0;  // [bp-0xd8]
    unsigned long v1;  // [bp-0xd8]
    void* v2;  // [bp-0xd0], Other Possible Types: unsigned long
    unsigned int v3;  // [bp-0xc4]
    char *v4;  // [bp-0xc0], Other Possible Types: unsigned long long
    unsigned long long v5;  // [bp-0xb8]
    int v6;  // [bp-0xb8]
    unsigned long long v7;  // [bp-0xb0]
    unsigned long long v8;  // [bp-0xa8]
    unsigned int v9;  // [bp-0x94]
    unsigned int v10;  // [bp-0x90]
    unsigned int v11;  // [bp-0x8c]
    char v12;  // [bp-0x88], Other Possible Types: unsigned int, unsigned long long
    unsigned int v13;  // [bp-0x88]
    void* v14;  // [bp-0x88]
    unsigned long long v15;  // [bp-0x88]
    unsigned long long v16;  // [bp-0x80]
    char v17;  // [bp-0x78], Other Possible Types: unsigned long long
    unsigned long long v18;  // [bp-0x78]
    uint128_t v19;  // [bp-0x70]
    unsigned long long v20;  // [bp-0x58]
    struct_0 *v21;  // [bp-0x50]
    char v22;  // [bp-0x48]
    unsigned long long v23;  // [bp-0x40]
    char v24;  // [bp-0x38]
    unsigned long v25;  // r14
    unsigned long v26;  // rbx
    unsigned int v28;  // ecx
    unsigned long long v29;  // rax
    unsigned long long v30;  // rdx
    unsigned long v31;  // rdx
    unsigned long long v32;  // r13
    char v33;  // r13b
    unsigned int v34;  // eax
    void* v35;  // r12
    unsigned long v37;  // rbp
    unsigned long v38;  // rbp
    unsigned long long v39;  // r13
    unsigned long long v40;  // rdi
    unsigned long long v41;  // r13
    unsigned long v42;  // r13
    unsigned int v43;  // eax
    unsigned long v45;  // r13
    unsigned int v46;  // eax
    unsigned int v47;  // cc_dep2
    unsigned int v48;  // eax
    void* v51;  // rbp
    unsigned long long v52;  // rax
    unsigned long long v54;  // rdx
    unsigned long long v55;  // rbp
    unsigned long long v56;  // r13
    unsigned long long v57;  // rax
    unsigned long long v58;  // rbp
    unsigned long v59;  // rsi
    unsigned long long v60;  // rbp
    unsigned long long v62;  // rdi
    unsigned long long v63;  // r14
    unsigned long long v64;  // rdx
    unsigned long long v65;  // rax
    unsigned long long v66;  // rax

    v25 = a4;
    v2 = a2;
    v20 = a1;
    v10 = (((char)v25 & 1) ? 0x110000 : 32);
    v26 = *((long long *)a7);
    if (((unsigned short)a4 & 0x200) && (int)a5.char_at(a6, v26) == 47)
        core::panicking::panic("assertion failed: !is_variable_name || command_line.char_at(cursor_pos) != '/'assertion failed: !do_escapeshould not be called with TTY protocols active", 78, &g_14e0fa0); /* do not return */
    v9 = a5.char_at(a6, v26);
    if ((char)v25 >= 0)
    {
        v1 = a3;
        v21 = a0;
        if (!((char)v25 & 2))
        {
            if (!((char)v25 & 8))
            {
                fish::parse_util::parse_util_token_extent(&v12, a5, a6, v26);
                v4 = v15;
                v5 = v4;
                v7 = v16;
                if (v26 != v7 && !(char)v5.contains(v26))
                {
                    v28 = 0x110000;
LABEL_1408319:
                    v0 = v28;
                    fish::parse_util::parse_util_escape_string_with_quote((unsigned int)&v22, v2, v1, v28);
LABEL_1408342:
                    v2 = 0;
                    v37 = v26;
                }
                else
                {
                    v29 = v4.clone(v7);
                    if (v30 < v29 || v30 > a6)
                        core::option::expect_failed("index out of boundsEXPORTPATHVARLOCALGLOBALUNIVERSALUNPATHVAR/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/hashbrown-0.15.2/src/raw/mod.rsHash table capacity overflowLazy instance has previously been poisoned/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/once_cell-1.20.2/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/le.rs", 19, &g_14e0fb8); /* do not return */
                    v31 = v26;
                    v32 = v4;
                    if (v31 < v32)
                        core::panicking::panic_const::panic_const_sub_overflow(&g_14e0fd0); /* do not return */
                    v28 = fish::reader::get_quote(a5 + v29 * 4, v30 - v29, v31 - v32);
                    v33 = v32 < v7;
                    if (a8 || !v26 || v28 != 0x110000)
                        goto LABEL_1408319;
                    v34 = fish::reader::unescaped_quote(a5, a6, v26 - 1);
                    v35 = v34 != 0x110000;
                    v0 = v34;
                    fish::parse_util::parse_util_escape_string_with_quote((unsigned int)&v22, v2, v1, v34);
                    v2 = v35;
                    v37 = v26 - v35;
                }
                v38 = v37;
                v12.to_vec(a5, a6);
                v8 = v17;
                *((int128_t *)&v6) = *((int128_t *)&v15);
                v39 = *((long long *)&v24);
                (unsigned long long)v6.insert_slice(v38, v23, v39);
                v40 = &g_14e0fe8;
                v41 = v39 + v38;
                if (!((char)__CFADD__(v39, v38)))
                {
                    v42 = v41 + v2;
                    if (!((char)__CFADD__(v41, v2)))
                    {
                        if (((char)v25 & 1))
                        {
                            *((unsigned long *)a7) = v42;
                            v21->field_10 = v8;
                            v21->field_0 = *((int128_t *)&(unsigned long long)v6);
                            core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v22);
                            return v21;
                        }
                        v11 = 32;
                        v43 = 32;
                        if (((unsigned short)v25 & 0x200))
                        {
                            fish::parse_util::parse_util_token_extent(&v12, a5, a6, v26);
                            fish::reader::completion_apply_to_command_line::{{closure}}(v20, &v11, v7.index(v8, v15, v42, &g_14e1000), v30);
                            v43 = v11;
                        }
                        v45 = v42;
                        if (!v0 == 0x110000 && !v43 == 47)
                        {
                            v46 = fish::reader::unescaped_quote(a5, a6, v38);
                            v47 = 0x110000;
                            v48 = v46;
                            if (v48 != 0x110000)
                            {
                                v47 = v0;
                                v45 = v42;
                                v48 = v46;
                                if (v46 != v0)
                                    goto LABEL_140844c;
                                goto LABEL_1408474;
                            }
                            else
                            {
LABEL_140844c:
                                v12 = v0;
                                (unsigned long long)v6.insert_slice(v42, &v12, 1);
                                v45 = v42 + 1;
                                if (!((char)_ccall(4, 24, v42 + 1, 0, (unsigned long long)(char)(v48 < v47))))
                                    goto LABEL_1408474;
                                v40 = &g_14e1018;
                            }
                        }
                        else
                        {
LABEL_1408474:
                            if (v9 != 32)
                            {
                                v13 = v43;
                                (unsigned long long)v6.insert_slice(v45, &v13, 1);
                            }
                            if (!((char)_ccall(4, 24, v45 + 1, 0, (unsigned long long)(char)(v9 < 32))))
                            {
                                *((unsigned long *)a7) = v45 + 1;
                                v21->field_10 = v8;
                                v21->field_0 = *((int128_t *)&(unsigned long long)v6);
                                core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v22);
                                return v21;
                            }
                            v40 = &g_14e1030;
                        }
                    }
                }
                core::panicking::panic_const::panic_const_add_overflow(v40); /* do not return */
            }
            v22.to_vec(v2, v1);
            v0 = 0x110000;
            goto LABEL_1408342;
        }
        else
        {
            v3 = ((unsigned int)v25 >> 2 & 4) + (((char)v25 | a8 | ~(a9)) & 1) * 2;
            if (((unsigned short)v25 & 0x200))
            {
                if (((char)v25 & 8))
                {
                    if (!((char)v25 & 1))
                        fish::reader::completion_apply_to_command_line::{{closure}}(v20, &v10, v2, v1);
                }
                else
                {
                    core::panicking::panic("assertion failed: !do_escapeshould not be called with TTY protocols active", 28, &g_14e1120); /* do not return */
                }
            }
            fish::parse_util::parse_util_token_extent(&v12, a5, a6, v26);
            if (v12 > a6)
                core::option::expect_failed("index out of boundsEXPORTPATHVARLOCALGLOBALUNIVERSALUNPATHVAR/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/hashbrown-0.15.2/src/raw/mod.rsHash table capacity overflowLazy instance has previously been poisoned/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/once_cell-1.20.2/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/le.rs", 19, &g_14e1048); /* do not return */
            v4 = &(char)v6;
            (char)v6.to_vec(a5, v12);
            v20 = v16;
            if (!((unsigned short)v25 & 0x100))
            {
                v51 = 0;
            }
            else
            {
                v52 = v12.clone(v20);
                v55 = v54 - v52;
                if (v54 < v52)
                    core::option::expect_failed("index out of boundsEXPORTPATHVARLOCALGLOBALUNIVERSALUNPATHVAR/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/hashbrown-0.15.2/src/raw/mod.rsHash table capacity overflowLazy instance has previously been poisoned/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/once_cell-1.20.2/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/le.rs", 19, &g_14e1060); /* do not return */
                if (v54 <= a6)
                {
                    v56 = a5 + v52 * 4;
                    if (!((char)fish::tokenizer::variable_assignment_equals_pos(v56, v55) & 1))
                        core::option::unwrap_failed(&g_14e1078); /* do not return */
                    v14 = 0;
                    v16 = v54;
                    v17 = 0;
                    v57 = v14.get(v56, v55);
                    if (!v57)
                        core::option::expect_failed("index out of boundsEXPORTPATHVARLOCALGLOBALUNIVERSALUNPATHVAR/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/hashbrown-0.15.2/src/raw/mod.rsHash table capacity overflowLazy instance has previously been poisoned/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/once_cell-1.20.2/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/le.rs", 19, &g_14e1090); /* do not return */
                    (char)v6.spec_extend(v57, v57 + v51 * 4);
                }
                else
                {
                    core::option::expect_failed("index out of boundsEXPORTPATHVARLOCALGLOBALUNIVERSALUNPATHVAR/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/hashbrown-0.15.2/src/raw/mod.rsHash table capacity overflowLazy instance has previously been poisoned/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/once_cell-1.20.2/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/le.rs", 19, &g_14e1060); /* do not return */
                }
            }
            if (!((char)v25 & 8))
            {
                fish::common::escape_string(&v12, v2, v1, 0);
                (char)v6.spec_extend(v16, v16 + v18 * 4);
                v58 = v51 + v18;
                if ((char)__CFADD__(v51, v18))
                    core::panicking::panic_const::panic_const_add_overflow(&g_14e10c0); /* do not return */
                core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v12);
LABEL_14081e3:
                v59 = v10;
                v60 = v58;
                if ((unsigned int)v59 != 0x110000)
                {
                    if (v9 != 32)
                        (char)v6.push(v59);
                    v60 = v58 + 1;
                    if (!((char)_ccall(4, 24, v58 + 1, 0, (unsigned long long)(char)(v9 < 32))))
                        goto LABEL_1408209;
                    v62 = &g_14e10d8;
                }
                else
                {
LABEL_1408209:
                    if (a6 < v20)
                        core::option::expect_failed("index out of boundsEXPORTPATHVARLOCALGLOBALUNIVERSALUNPATHVAR/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/hashbrown-0.15.2/src/raw/mod.rsHash table capacity overflowLazy instance has previously been poisoned/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/once_cell-1.20.2/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/le.rs", 19, &g_14e10f0); /* do not return */
                    (char)v6.spec_extend(a5 + v20 * 4, a5 + a6 * 4);
                    if (!((char)__CFADD__(v12, v60)))
                    {
                        *((unsigned long long *)a7) = v12 + v60;
                        v21->field_10 = v8;
                        v21->field_0 = (int128_t)v6;
                        return v21;
                    }
                    v62 = &g_14e1108;
                }
            }
            else
            {
                (char)v6.spec_extend(v2, v2 + v1 * 4);
                v58 = v51 + v1;
                if (!((char)__CFADD__(v51, v1)))
                    goto LABEL_14081e3;
                v62 = &g_14e10a8;
            }
            core::panicking::panic_const::panic_const_add_overflow(v62); /* do not return */
        }
    }
    else if (((char)v25 & 8))
    {
        v63 = fish::parse_util::parse_util_cmdsubst_extent(a5, a6, v26);
        v65 = v63.clone(v64);
        if (v64 >= v65 && v64 <= a6)
        {
            v12 = 10;
            if (v12.slice_contains(a5 + v65 * 4, v64 - v65))
            {
                fish::reader::replace_line_at_cursor(a0, a5, a6, a7, v2, a3);
                return a0;
            }
            v66 = v63;
            if ((char)__CFADD__(v66, a3))
                core::panicking::panic_const::panic_const_add_overflow(&g_14e1150); /* do not return */
            *((unsigned long *)a7) = v66 + a3;
            if (v63 > a6)
                core::option::expect_failed("index out of boundsEXPORTPATHVARLOCALGLOBALUNIVERSALUNPATHVAR/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/hashbrown-0.15.2/src/raw/mod.rsHash table capacity overflowLazy instance has previously been poisoned/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/once_cell-1.20.2/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/le.rs", 19, &g_14e1168); /* do not return */
            v21 = a0;
            v12.to_vec(a5, v63);
            (char)v6.add(&v12, v2, a3);
            if (a6 < v64)
            {
                v4 = &(char)v6;
                core::option::expect_failed("index out of boundsEXPORTPATHVARLOCALGLOBALUNIVERSALUNPATHVAR/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/hashbrown-0.15.2/src/raw/mod.rsHash table capacity overflowLazy instance has previously been poisoned/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/once_cell-1.20.2/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/le.rs", 19, &g_14e1180); /* do not return */
            }
            v21.add(&(char)v6, a5 + v64 * 4, a6 - v64);
            return v21;
        }
        core::option::expect_failed("index out of boundsEXPORTPATHVARLOCALGLOBALUNIVERSALUNPATHVAR/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/hashbrown-0.15.2/src/raw/mod.rsHash table capacity overflowLazy instance has previously been poisoned/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/once_cell-1.20.2/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/le.rs", 19, &g_14e1138); /* do not return */
    }
    else
    {
        v12 = &g_14e0f90;
        v16 = 1;
        v17 = 8;
        v19 = 0;
        core::panicking::panic_fmt(&v12, &g_14e1198); /* do not return */
    }
}
