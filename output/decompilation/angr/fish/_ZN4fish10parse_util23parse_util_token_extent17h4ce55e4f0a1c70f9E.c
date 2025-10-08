long long fish::parse_util::parse_util_token_extent(unsigned long a0, unsigned long long a1, unsigned long long a2, unsigned int a3)
{
    unsigned long long v0;  // [bp-0xa8]
    unsigned long long v1;  // [bp-0x98]
    char v2;  // [bp-0x8c]
    char v3;  // [bp-0x7b]
    char v4;  // [bp-0x7a]
    unsigned long long v5[4];  // [bp-0x78]
    void* v6;  // [bp-0x70]
    unsigned long long v7;  // [bp-0x60]
    unsigned long long v8;  // [bp-0x58]
    void* v9;  // [bp-0x50]
    char v10;  // [bp-0x48]
    void* v11;  // [bp-0x40]
    unsigned short v12;  // [bp-0x38]
    unsigned int v13;  // [bp-0x36]
    unsigned long long v15;  // rax
    unsigned long long v16;  // rbp
    unsigned long long v17;  // rcx
    unsigned long v18;  // rdx
    unsigned long long v19;  // rdx
    unsigned long long v20;  // r13
    unsigned long long v21;  // rdx
    unsigned long long v22;  // rdx
    unsigned long long v23;  // rax
    unsigned long long v24;  // rbx
    unsigned long long v25;  // r13
    unsigned long long v26;  // r12
    unsigned long long v27;  // rax
    unsigned long long v28;  // rdx
    unsigned long long v30;  // r12

    v15 = fish::parse_util::parse_util_cmdsubst_extent(a1, a2, a3);
    v16 = a3 - v15;
    if (a3 < v15)
        core::panicking::panic_const::panic_const_sub_overflow(&g_14dd828); /* do not return */
    v17 = v15;
    v0 = v17 + v16;
    if ((char)__CFADD__(v17, v16))
    {
        core::panicking::panic_const::panic_const_add_overflow(&g_14dd840); /* do not return */
    }
    else if (v15 > a2)
    {
        core::panicking::panic("assertion failed: cmdsubst_begin <= buff.len()assertion failed: cmdsubst_range.end <= buff.len()assertion failed: prev_begin <= buff.len()assertion failed: prev_end >= prev_beginassertion failed: prev_end <= buff.len()\\*\\?$", 46, &g_14dd858); /* do not return */
    }
    else if (v18 > a2)
    {
        core::panicking::panic("assertion failed: cmdsubst_range.end <= buff.len()assertion failed: prev_begin <= buff.len()assertion failed: prev_end >= prev_beginassertion failed: prev_end <= buff.len()\\*\\?$", 50, &g_14dd870); /* do not return */
    }
    else if (v18 >= v15)
    {
        v1 = v15;
        v6 = 0;
        v7 = a1 + v15 * 4;
        v8 = v18 - v15;
        v9 = 0;
        v10 = 1;
        v11 = 0;
        v12 = 257;
        v13 = 0;
        v2.next(&v6);
        if (v4 == 2)
        {
            v19 = v0;
            v20 = v19;
            v21 = v19;
            v22 = v19;
            if (v20 > a2)
                core::panicking::panic("assertion failed: prev_begin <= buff.len()assertion failed: prev_end >= prev_beginassertion failed: prev_end <= buff.len()\\*\\?$", 42, &g_14dd900); /* do not return */
        }
        else
        {
            v20 = v0;
            while (true)
            {
                v23 = v2.offset();
                v24 = v23;
                if (v3 == 1)
                    v23 = v2.length() + v24;
                if (v24 > v16)
                {
LABEL_13e3fe8:
                    v22 = v0;
                    if (v20 > a2)
                        core::panicking::panic("assertion failed: prev_begin <= buff.len()assertion failed: prev_end >= prev_beginassertion failed: prev_end <= buff.len()\\*\\?$", 42, &g_14dd900); /* do not return */
                    goto LABEL_13e3ff6;
                }
                if (v3 == 1 && v23 >= v16)
                    break;
                if (v3 == 1)
                {
                    v25 = v2.offset();
                    v20 = v25 + v1;
                    if ((char)__CFADD__(v25, v1))
                        core::panicking::panic_const::panic_const_add_overflow(&g_14dd8d0); /* do not return */
                    v26 = v2.length();
                    v21 = v26 + v20;
                    if ((char)__CFADD__(v26, v20))
                        core::panicking::panic_const::panic_const_add_overflow(&g_14dd8e8); /* do not return */
                }
                v2.next(&v6);
                if (v4 == 2)
                    goto LABEL_13e3fe8;
            }
            v27 = v2.offset();
            v19 = v1 + v27;
            if ((char)__CFADD__(v1, v27))
                core::panicking::panic_const::panic_const_add_overflow(&g_14dd8a0); /* do not return */
            v28 = v2.length();
            v22 = v28 + v19;
            if ((char)__CFADD__(v28, v19))
            {
                core::panicking::panic_const::panic_const_add_overflow(&g_14dd8b8); /* do not return */
            }
            else if (v20 > a2)
            {
                core::panicking::panic("assertion failed: prev_begin <= buff.len()assertion failed: prev_end >= prev_beginassertion failed: prev_end <= buff.len()\\*\\?$", 42, &g_14dd900); /* do not return */
            }
        }
LABEL_13e3ff6:
        v30 = v21;
        if (v30 < v20)
        {
            core::panicking::panic("assertion failed: prev_end >= prev_beginassertion failed: prev_end <= buff.len()\\*\\?$", 40, &g_14dd918); /* do not return */
        }
        else if (v30 <= a2)
        {
            v5[0] = v19;
            v5[1] = v22;
            v5[2] = v20;
            v5[3] = v30;
            return v5;
        }
        else
        {
            core::panicking::panic("assertion failed: prev_end <= buff.len()\\*\\?$", 40, &g_14dd930); /* do not return */
        }
    }
    else
    {
        core::option::expect_failed("index out of boundsEXPORTPATHVARLOCALGLOBALUNIVERSALUNPATHVAR/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/hashbrown-0.15.2/src/raw/mod.rsHash table capacity overflowLazy instance has previously been poisoned/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/once_cell-1.20.2/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/le.rs", 19, &g_14dd888); /* do not return */
    }
}
