long long fish::reader::Reader::compute_and_apply_completions(void* a0, unsigned long a1, unsigned int a2)
{
    unsigned int v0;  // [bp-0x128]
    void* v1;  // [bp-0x120]
    unsigned long long v2;  // [bp-0x118]
    void* v3;  // [bp-0x110]
    char v4;  // [bp-0x108]
    unsigned long long v5;  // [bp-0xf8]
    char v6;  // [bp-0xd8], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v7;  // [bp-0xd0]
    unsigned long long v8;  // [bp-0xc8]
    uint128_t v9;  // [bp-0xc0]
    unsigned long v10;  // [bp-0x70]
    unsigned long long v11;  // [bp-0x30]
    unsigned long long v12;  // [bp-0x28]
    unsigned long long v13;  // [bp-0x20]
    unsigned long long v14;  // [bp-0x18]
    unsigned long long v15;  // [bp-0x10]
    unsigned long long v17;  // r15
    unsigned long long v18;  // r14
    unsigned long long v19;  // r13
    unsigned long long v20;  // r12
    unsigned long long v21;  // rbx
    unsigned long v22;  // r13
    unsigned long long v23;  // rax
    unsigned long long v24;  // r14
    unsigned long long v25;  // rbp
    unsigned long long v26;  // rdx
    unsigned long long v27;  // rax
    unsigned long long v28;  // rax

    v15 = v17;
    v14 = v18;
    v13 = v19;
    v12 = v20;
    v11 = v21;
    v22 = a2;
    if ((v22 - 27 & 255) >= 2)
    {
        core::panicking::panic("assertion failed: matches!(c, ReadlineCmd::Complete | ReadlineCmd::CompleteAndSearch)src/reader_history_search.rs", 85, &g_14e1280); /* do not return */
    }
    else if (!fish::tty_handoff::get_tty_protocols_active())
    {
        if ((char)fish::reader::is_backslashed((long long)a0[40], (long long)a0[48], (long long)a0[120]))
            a0.delete_char(1);
        v23 = fish::parse_util::parse_util_cmdsubst_extent((long long)a0[40], (long long)a0[48], (long long)a0[120]);
        v24 = (long long)a0[120] - v23;
        if ((long long)a0[120] < v23)
            core::panicking::panic_const::panic_const_sub_overflow(&g_14e11c0); /* do not return */
        v25 = v23;
        v27 = v23.clone(v26);
        if (v26 >= v27 && v26 <= (long long)a0[48])
        {
            v10 = v22;
            fish::parse_util::parse_util_token_extent(&v6, v27 * 4 + (long long)a0[40], v26 - v27, v24);
            if (v24 < v6)
                core::panicking::panic_const::panic_const_sub_overflow(&g_14e11f0); /* do not return */
            if (v7 > v25.len(v26))
                v7 = v25.len(v26);
            if ((char)__CFADD__(v6, v25))
            {
                core::panicking::panic_const::panic_const_add_overflow(&g_14e1208); /* do not return */
            }
            else if (!((char)__CFADD__(v7, v25)))
            {
                v1 = 0;
                v2 = 4;
                v3 = 0;
                v28 = v6 + v25.clone(v7 + v25);
                if (v26 >= v28 && v26 <= (long long)a0[48])
                {
                    v6.to_vec(v28 * 4 + (long long)a0[40], v26 - v28);
                    v5 = v8;
                    memcpy(&v4, &v6, 16);
                    goto (long long)(g_9f5810[(int)fish::reader::try_expand_wildcard(v0, &v4, v24 - v6, &v1)] + (char *)&g_9f5810[0]);
                }
                core::option::expect_failed("index out of boundsEXPORTPATHVARLOCALGLOBALUNIVERSALUNPATHVAR/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/hashbrown-0.15.2/src/raw/mod.rsHash table capacity overflowLazy instance has previously been poisoned/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/once_cell-1.20.2/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/le.rs", 19, &g_14e1238); /* do not return */
            }
            else
            {
                core::panicking::panic_const::panic_const_add_overflow(&g_14e1220); /* do not return */
            }
        }
        core::option::expect_failed("index out of boundsEXPORTPATHVARLOCALGLOBALUNIVERSALUNPATHVAR/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/hashbrown-0.15.2/src/raw/mod.rsHash table capacity overflowLazy instance has previously been poisoned/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/once_cell-1.20.2/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/le.rs", 19, &g_14e11d8); /* do not return */
    }
    else
    {
        v6 = &g_14e11b0;
        v7 = 1;
        v8 = 8;
        v9 = 0;
        core::panicking::panic_fmt(&v6, &g_14e1268); /* do not return */
    }
}
