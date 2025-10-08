long long fish::parse_constants::ParseError::describe_with_prefix(unsigned long long a0, struct_0 *a1, unsigned int *a2, unsigned long long a3, unsigned long long a4, unsigned long long a5, char a6, char a7)
{
    void* v0;  // [bp-0xa8]
    int v1;  // [bp-0xa0], Other Possible Types: char
    unsigned long v2;  // [bp-0x90]
    struct_1 *v3;  // [bp-0x88]
    char v4;  // [bp-0x80], Other Possible Types: unsigned long long
    unsigned long long v5;  // [bp-0x78]
    unsigned long v6;  // [bp-0x70], Other Possible Types: unsigned long long
    int v7;  // [bp-0x68]
    void* v8;  // [bp-0x68]
    unsigned long long v9;  // [bp-0x60]
    unsigned long long v10;  // [bp-0x58]
    void* v11;  // [bp-0x48]
    unsigned long long v12;  // [bp-0x40]
    void* v13;  // [bp-0x38]
    unsigned long long v14;  // rbx
    char *v15;  // rdi
    unsigned long long v16;  // rax
    void* v17;  // rdx
    unsigned long long v18;  // rax
    unsigned long long v20;  // r13
    unsigned long long v21;  // rcx
    unsigned long long v22;  // rdi
    unsigned long v23;  // rdx
    unsigned long long v24;  // rbp
    void* v25;  // rbp
    unsigned long long v26;  // r13
    unsigned long long v27;  // rbx
    void* v28;  // 4097
    unsigned long v29;  // cc_ndep
    unsigned long long v32;  // rbx
    unsigned long long v33;  // 4096
    unsigned long long v35;  // r12
    unsigned long long v36;  // rbx
    unsigned long long v37;  // rax
    unsigned int v38;  // edi
    unsigned long long v39;  // rsi
    unsigned long long v40;  // rdx
    unsigned long long v41;  // rax
    unsigned long long v42;  // rsi
    unsigned long long v43;  // rax

    v1.to_vec(a4, a5);
    if (a7 && !a1->field_10)
    {
        v4.to_vec(4, 0);
        v14 = a0;
        v3->field_10 = v6;
        v3->field_0 = *((int128_t *)&v4);
        v15 = &v1;
        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(v15);
        return v14;
    }
    v1.spec_extend(a1->field_8, a1->field_8 + a1->field_10 * 4);
    v16 = a1->field_18;
    if (a3 > v16)
    {
        v17 = a1->field_20;
        v18 = v16;
        goto LABEL_13da6c9;
    }
    if (a3)
    {
        v17 = 0;
        v18 = a3 - 1;
LABEL_13da6c9:
        v20 = v18;
        v21 = v20;
        v0 = v17;
        if ((char)__CFADD__(v21, v17))
            core::panicking::panic_const::panic_const_add_overflow(&g_14dca40); /* do not return */
        if (v21 + v17 > a3)
        {
            v0 = a3 - v16;
            if (a3 >= v16)
                goto LABEL_13da6ee;
            v22 = &g_14dca58;
        }
        else
        {
LABEL_13da6ee:
            if (a7)
            {
LABEL_13da7d3:
                v3->field_10 = v2;
                *((void*)&v3->field_0) = v1;
                return v3;
            }
            if (v20)
            {
                v4 = 0.index(v20, a2, a3, &g_14dca70);
                v5 = v4 + v23 * 4;
                v8 = 0;
                if (!((char)v4.try_rfold(&v8) & 1))
                    goto LABEL_13da755;
                v24 = v20;
                v25 = v24 - v23;
                if (v24 >= v23)
                {
                    v26 = v20;
                    if (v0)
                        goto LABEL_13da761;
                    goto LABEL_13da777;
                }
                else
                {
                    v22 = &g_14dca88;
                }
            }
            else
            {
LABEL_13da755:
                v25 = 0;
                v26 = v20;
                if (!v0)
                    goto LABEL_13da777;
LABEL_13da761:
                v27 = v20;
                v28 = v0;
                if ((char)__CFADD__(v27, v28))
                    core::panicking::panic_const::panic_const_add_overflow(&g_14dcaa0); /* do not return */
                if (!((char)_ccall(4, 4, v27, v28, v29)))
                {
                    v26 = v27 + v28 - 1;
LABEL_13da777:
                    v32 = v26;
                    if (v32 > a3)
                        core::slice::index::slice_start_index_len_fail(v32, a3, &g_14dcb60); /* do not return */
                    v4 = &a2[v32];
                    v5 = &a2[a3];
                    v33 = a3;
                    if (((char)v4.position() & 1))
                    {
                        if (!((char)__CFADD__(v23, v32)))
                            v33 = v23 + v32;
                        else
                            core::panicking::panic_const::panic_const_add_overflow(&g_14dcab8); /* do not return */
                    }
                    v35 = v33;
                    if (v35 < v25)
                        core::panicking::panic("assertion failed: line_end >= line_startassertion failed: start >= line_startkeyword: '%ls'a %lsa", 40, &g_14dcad0); /* do not return */
                    v36 = v20;
                    if (v36 < v25)
                    {
                        core::panicking::panic("assertion failed: start >= line_startkeyword: '%ls'a %lsa", 37, &g_14dcae8); /* do not return */
                    }
                    else if (!(!v20 & a6))
                    {
                        if (v2)
                            v1.extend("\n%s: %s\nInvalid working directory, it must start and end with /", "%s: %s\nInvalid working directory, it must start and end with /");
                        v37 = v25.index(v35, a2, a3, &g_14dcb00);
                        v1.spec_extend(v37, v37 + v23 * 4);
                        v11 = 0;
                        v12 = 4;
                        v13 = 0;
                        v11.reserve(v36 - v25);
                        if (v20 > v25)
                        {
                            do
                            {
                                if (v25 >= a3)
                                    core::panicking::panic_bounds_check(v25, a3, &g_14dcb48); /* do not return */
                                v38 = *((int *)((char *)a2 + 0x4 * v25));
                                v39 = "\t%s\n";
                                v40 = "%s\n";
                                if (v38 == 9)
                                {
LABEL_13da88e:
                                    v11.extend(v39, v40);
                                }
                                else if (v38 == 10)
                                {
                                    v39 = " +-/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/fish-shell/crates/printf/src/printf_impl.rs0X0xassertion failed: c == '0' || c == ' '";
                                    v40 = "+-/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/fish-shell/crates/printf/src/printf_impl.rs0X0xassertion failed: c == '0' || c == ' '";
                                    goto LABEL_13da88e;
                                }
                                else
                                {
                                    v41 = fish::fallback::fish_wcwidth(v38);
                                    if (v41 > 0)
                                    {
                                        alloc::slice::<impl [T]>::repeat(&v4, " +-/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/fish-shell/crates/printf/src/printf_impl.rs0X0xassertion failed: c == '0' || c == ' '", 1, v41);
                                        v10 = v6;
                                        *((int128_t *)&v7) = *((int128_t *)&v4);
                                        v11.extend(v9, v6 + v9);
                                        core::ptr::drop_in_place<alloc::string::String>(&v8);
                                    }
                                }
                                v25 += 1;
                            } while (v20 != v25);
                        }
                        v1.extend("\n%s: %s\nInvalid working directory, it must start and end with /", "%s: %s\nInvalid working directory, it must start and end with /");
                        v1.spec_extend(4, 4);
                        v1.extend("^%ls: %*ls\n", "%ls: %*ls\n");
                        if (v0 >= 2)
                        {
                            v42 = v0 + v20;
                            if ((char)__CFADD__(v0, v20))
                            {
                                core::panicking::panic_const::panic_const_add_overflow(&g_14dcb18); /* do not return */
                            }
                            else if (v42 <= a3)
                            {
                                v43 = fish::fallback::fish_wcswidth(&a2[v20], v42 - v20);
                                if (v43 >= 2)
                                {
                                    alloc::slice::<impl [T]>::repeat(&v4, "~src/fallback.rs", 1, v43 - 2);
                                    v10 = v6;
                                    memcpy(&v8, &v4, 16);
                                    v1.extend(v9, v6 + v9);
                                    core::ptr::drop_in_place<alloc::string::String>(&v8);
                                    v1.extend("^%ls: %*ls\n", "%ls: %*ls\n");
                                }
                            }
                            else
                            {
                                core::option::expect_failed("index out of boundsEXPORTPATHVARLOCALGLOBALUNIVERSALUNPATHVAR/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/hashbrown-0.15.2/src/raw/mod.rsHash table capacity overflowLazy instance has previously been poisoned/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/once_cell-1.20.2/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/le.rs", 19, &g_14dcb30); /* do not return */
                            }
                        }
                        v3->field_10 = v2;
                        *((void*)&v3->field_0) = v1;
                        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v11);
                        return a0;
                    }
                    goto LABEL_13da7d3;
                }
                else
                {
                    v22 = &g_14dcaa0;
                }
            }
        }
    }
    else
    {
        v22 = &g_14dca28;
    }
    core::panicking::panic_const::panic_const_sub_overflow(v22); /* do not return */
}
