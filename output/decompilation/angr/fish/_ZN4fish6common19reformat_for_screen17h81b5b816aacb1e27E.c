long long fish::common::reformat_for_screen(unsigned long a0, unsigned long long a1, unsigned long long a2, unsigned long long *a3)
{
    char v0;  // [bp-0xc1]
    void* v1;  // [bp-0xc0]
    unsigned long long v2;  // [bp-0xb8]
    void* v3;  // [bp-0xb0]
    unsigned long long v4;  // [bp-0xa8]
    void* v5;  // [bp-0xa0]
    unsigned int v6;  // [bp-0x98]
    char v7;  // [bp-0x98]
    int v8;  // [bp-0x98]
    unsigned long long v9;  // [bp-0x90]
    void* v10;  // [bp-0x88]
    unsigned long v11;  // [bp-0x70]
    void* v12;  // [bp-0x68]
    unsigned long long v13;  // [bp-0x60]
    void* v14;  // [bp-0x58]
    struct_0 *v15;  // [bp-0x50]
    unsigned long v16;  // [bp-0x48]
    char v17;  // [bp-0x40]
    unsigned long v20;  // cc_ndep
    unsigned long long v21;  // cc_ndep
    void* v22;  // r12
    void* v23;  // r13
    unsigned long long v24;  // cc_op
    void* v25;  // cc_dep1
    void* v26;  // cc_dep2
    void* v27;  // rbx
    void* v28;  // r13
    unsigned long long v29;  // rax
    void* v30;  // r13
    void* v33;  // rax
    unsigned long v34;  // rbx
    unsigned long long v35;  // rax
    unsigned long long v36;  // rbx
    unsigned long long v37;  // rax
    unsigned long v38;  // rdx
    unsigned long long v39;  // rdx

    v3 = 0;
    v4 = 4;
    v5 = 0;
    v11 = *(a3);
    if (!*(a3))
    {
        v3.spec_extend(a1, a1 + a2 * 4);
    }
    else if (a2)
    {
        v21 = _ccall(20, a2, 0, v20);
        v16 = v11 - 1;
        v0 = _ccall(0, 28, v11 - 1, 0, _ccall(20, a2, 0, v20));
        v22 = 0;
        v2 = &g_14c0f38;
        v1 = 0;
        while (true)
        {
            if (v0)
            {
                v6 = a1.char_at(a2, v22);
                if (!v6.slice_contains(" ", 4))
                {
                    fish::fallback::fish_wcwidth((unsigned int)a1.char_at(a2, v22));
                    core::panicking::panic_const::panic_const_sub_overflow(&g_14c0f50); /* do not return */
                }
                v23 = 0;
                v24 = 8;
                v25 = v22;
                v26 = v22;
                if (v22 != v22)
                {
                    if ((char)_ccall(2, 8, v22, v22, v21))
                        core::option::expect_failed("index out of boundsEXPORTPATHVARLOCALGLOBALUNIVERSALUNPATHVAR/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/hashbrown-0.15.2/src/raw/mod.rsHash table capacity overflowLazy instance has previously been poisoned/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/once_cell-1.20.2/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/le.rs", 19, v39); /* do not return */
LABEL_12e7211:
                    if (v22 > a2)
                        core::option::expect_failed("index out of boundsEXPORTPATHVARLOCALGLOBALUNIVERSALUNPATHVAR/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/hashbrown-0.15.2/src/raw/mod.rsHash table capacity overflowLazy instance has previously been poisoned/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/once_cell-1.20.2/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/le.rs", 19, v39); /* do not return */
                    v33 = v1;
                    v34 = v33;
                    v35 = v33 + v34;
                    if ((char)_ccall(0, 4, v33, v34, v21))
                    {
                        v2 = &g_14c0f80;
                        core::panicking::panic_const::panic_const_add_overflow(v2); /* do not return */
                    }
                    if ((char)_ccall(0, 4, v35, v23, v21))
                    {
                        v2 = &g_14c0f98;
                        core::panicking::panic_const::panic_const_add_overflow(v2); /* do not return */
                    }
                    if (v35 + v23 > v11)
                    {
                        v3.push(10);
                    }
                    else if (v1)
                    {
                        v3.spec_extend(" ", "%");
                        goto LABEL_12e7299;
                    }
                    v1 = 0;
LABEL_12e7299:
                    v3.spec_extend(a1 + v22 * 4, a1 + v22 * 4);
                    v36 = v34 + v23;
                    if ((char)_ccall(0, 4, v34, v23, v21))
                    {
                        v2 = &g_14c0fb0;
                        core::panicking::panic_const::panic_const_add_overflow(v2); /* do not return */
                    }
                    v1 += v36;
                    if ((char)_ccall(0, 4, v1, v36, v21))
                    {
                        v2 = &g_14c0fc8;
                        core::panicking::panic_const::panic_const_add_overflow(v2); /* do not return */
                    }
                }
            }
            else
            {
                v27 = 0;
                v28 = 0;
                v22 += v27;
                v6 = a1.char_at(a2, v22);
                if (!v6.slice_contains(" ", 4))
                {
                    v29 = fish::fallback::fish_wcwidth((unsigned int)a1.char_at(a2, v22));
                    v30 = v28 + v29;
                    if ((char)_ccall(0, 4, v28, v29, v21))
                    {
                        v2 = &g_14c0f38;
                        core::panicking::panic_const::panic_const_add_overflow(&g_14c0f38); /* do not return */
                    }
                    if (v30 <= v16)
                    {
                        v21 = v30 < v16;
                        v28 = v30;
                        v27 += 1;
                        goto LABEL_12e71fc;
                    }
                    else
                    {
                        v24 = 20;
                        v25 = v27;
                        v26 = 0;
                        if (v27)
                        {
                            if (v22 >= v22)
                            {
                                if (v1)
                                    v3.push(10);
                                v12 = 0;
                                v13 = 4;
                                v14 = 0;
                                v7 = 1;
                                v9 = a1 + v22 * 4;
                                v10 = v27;
                                fish_printf::printf_impl::sprintf_locale(&v17, &v12, "%ls-\nmicrosoft-standardMicrosoftFISH_NO_WSL_CHECKThis version of WSL has known bugs that prevent fish from working.\nPlease upgrade to Windows 10 1809 (17763) or higher to use fish! (deleted)uv", 5, &v7, 1);
                                v17.unwrap(&g_14c0ff8);
                                core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v7);
                                v10 = v14;
                                *((int128_t *)&v8) = *((int128_t *)&v12);
                                v37 = v9.index(v14, &g_14c1010);
                                v3.spec_extend(v37, v37 + v38 * 4);
                                core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v7);
                                v1 = 0;
                                goto LABEL_12e7120;
                            }
                            else
                            {
                                core::option::expect_failed("index out of boundsEXPORTPATHVARLOCALGLOBALUNIVERSALUNPATHVAR/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/hashbrown-0.15.2/src/raw/mod.rsHash table capacity overflowLazy instance has previously been poisoned/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/once_cell-1.20.2/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/le.rs", 19, &g_14c0fe0); /* do not return */
                            }
                        }
                    }
                }
                else
                {
LABEL_12e71fc:
                    v22 += v27;
                    v24 = 8;
                    v25 = v22;
                    v26 = v22;
                    if (v22 == v22)
                        goto LABEL_12e73a0;
                    if ((char)_ccall(2, 8, v22, v22, v21))
                        core::option::expect_failed("index out of boundsEXPORTPATHVARLOCALGLOBALUNIVERSALUNPATHVAR/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/hashbrown-0.15.2/src/raw/mod.rsHash table capacity overflowLazy instance has previously been poisoned/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/once_cell-1.20.2/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/le.rs", 19, v39); /* do not return */
                    goto LABEL_12e7211;
                }
            }
LABEL_12e73a0:
            v21 = _ccall(v24, v25, v26, v21);
            if ((char)_ccall(4, 24, v22 + 1, 0, _ccall(v24, v25, v26, v21)))
            {
                v2 = &g_14c1028;
                core::panicking::panic_const::panic_const_add_overflow(v2); /* do not return */
            }
            v22 += 1;
LABEL_12e7120:
            if (v22 >= a2)
                break;
        }
    }
    v3.push(10);
    v15->field_10 = 0;
    v15->field_0 = *((int128_t *)&v3);
    return v15;
}
