long long fish::builtins::string::match::RegexMatcher::report_match(void* a0, char a1[32], unsigned long long a2, unsigned long long a3, void* a4, unsigned long long a5)
{
    char v0;  // [bp-0x128]
    unsigned int v1;  // [bp-0x127]
    unsigned short v2;  // [bp-0x123]
    char v3;  // [bp-0x121]
    unsigned long v4;  // [bp-0x120]
    int v5;  // [bp-0x118]
    char v6;  // [bp-0x108]
    int v7;  // [bp-0x108], Other Possible Types: void*
    unsigned int v8;  // [bp-0x107]
    unsigned short v9;  // [bp-0x103]
    char v10;  // [bp-0x101]
    unsigned long v11;  // [bp-0x100], Other Possible Types: unsigned long long
    void* v12;  // [bp-0xf8]
    int v13;  // [bp-0xf8]
    unsigned long long v14;  // [bp-0xf0]
    char v15;  // [bp-0xe8]
    unsigned long long v16;  // [bp-0xe0]
    void* v17;  // [bp-0xc8]
    unsigned long long v18;  // [bp-0xc0]
    void* v19;  // [bp-0xb8]
    int v20;  // [bp-0xa8], Other Possible Types: char
    unsigned long long v21;  // [bp-0xa0]
    int v22;  // [bp-0x98], Other Possible Types: void*
    int v23;  // [bp-0x88]
    int v24;  // [bp-0x78]
    int v25;  // [bp-0x68]
    int v26;  // [bp-0x58]
    char *v27;  // [bp-0x48]
    unsigned long long v28;  // [bp-0x40]
    unsigned long v29;  // [bp-0x38]
    unsigned long long v31;  // rax
    int v32;  // xmm0
    int v33;  // xmm1
    int v34;  // xmm2
    int v35;  // xmm0
    int v36;  // xmm1
    int v37;  // xmm2
    unsigned long v38;  // rax
    char v39;  // cl
    unsigned long long v40;  // rax
    void* v41;  // rdx
    unsigned long long v43;  // rdx
    int v44;  // xmm0

    if (*((int *)a4) == 2)
    {
        if (a1[28] && !a1[29])
        {
            if (a1[31])
            {
                v7 = 0;
                v11 = 4;
                v12 = 0;
                v20 = 4;
                v21 = a3;
                fish_printf::printf_impl::sprintf_locale(&v0, &(char)v7, "1 %lu\nsrc/builtins/string/pad.rs", 6, &v20, 1);
                v0.unwrap(&g_14d3530);
                core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v20);
                memcpy(&v20, &(char)v7, 16);
                v22 = 0;
                v31 = (unsigned long long)a5.append(&v20);
            }
            else
            {
                v31 = (unsigned long long)a5.appendln(a2, a3);
                if (!a1[28])
                {
                    *((unsigned long long *)a0) = 3;
                    return v31;
                }
                *((unsigned long long *)a0) = 2;
                return v31;
            }
        }
        if (!a1[28])
        {
            *((unsigned long long *)a0) = 3;
            return v31;
        }
        *((unsigned long long *)a0) = 2;
        return v31;
    }
    else
    {
        *((int128_t *)&v26) = (int128_t)a4[80];
        *((int128_t *)&v25) = (int128_t)a4[64];
        v32 = *((int128_t *)a4);
        v33 = (int128_t)a4[16];
        v34 = (int128_t)a4[32];
        *((int128_t *)&v24) = (int128_t)a4[48];
        v23 = v34;
        v22 = v33;
        v20 = v32;
        if (a1[28])
        {
            *((unsigned long long *)a0) = 3;
            return core::ptr::drop_in_place<pcre2::regex_impl::Captures<pcre2::ffi::CodeUnitWidth32>>(a4);
        }
        else if (a1[29])
        {
            *((int128_t *)&a0[80]) = (int128_t)a4[80];
            *((int128_t *)&a0[64]) = (int128_t)a4[64];
            v35 = *((int128_t *)a4);
            v36 = (int128_t)a4[16];
            v37 = (int128_t)a4[32];
            *((int128_t *)&a0[48]) = (int128_t)a4[48];
            a0[32] = v37;
            a0[16] = v36;
            *(a0) = v35;
            return v38;
        }
        else
        {
            v39 = a1[25];
            if (a1[25])
            {
                a5.appendln(a2, a3);
                v39 = a1[25];
            }
            v40 = 1;
            if (!(v39 & 1))
                v40 = a1[26];
            v27 = &(char)v20;
            v28 = v40;
            v29 = (int)(&v24)[8];
            while (true)
            {
                while (true)
                {
                    v6.try_fold(&v28, &v27);
                    if (!*((long long *)&v6))
                    {
                        a0[80] = v26;
                        a0[64] = v25;
                        v44 = (int128_t)v20;
                        *((int128_t *)&a0[48]) = (int128_t)v24;
                        a0[32] = v23;
                        a0[16] = v22;
                        *(a0) = v44;
                        return a0;
                    }
                    if (!a1[31])
                        break;
                    v17 = 0;
                    v18 = 4;
                    v19 = 0;
                    v41 = v12;
                    if ((char)_ccall(4, 24, v41 + 1, 0, (unsigned long long)(char)(a1[31] < 0)))
                        core::panicking::panic_const::panic_const_add_overflow(&g_14d34e8); /* do not return */
                    v4 = v41 + 1;
                    v0 = 4;
                    if (v43 < v41)
                        core::panicking::panic_const::panic_const_sub_overflow(&g_14d3500); /* do not return */
                    v13 = v5;
                    *((char *)&v7) = v0;
                    v8 = v1;
                    v9 = v2;
                    v10 = v3;
                    v11 = v4;
                    v15 = 4;
                    v16 = v43 - v41;
                    fish_printf::printf_impl::sprintf_locale(&v0, &v17, "%lu %lu\n_history", 8, &(char)v7, 2);
                    v0.unwrap(&g_14d3518);
                    core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(&(char)v7);
                    *((int128_t *)&v7) = *((int128_t *)&v17);
                    v12 = 0;
                    a5.append(&(char)v7);
                }
                v43 = v14;
                if (v43 < v41 || v14 > a3)
                    break;
                a5.appendln(a2 + v41 * 4, v43 - v41);
            }
            core::option::expect_failed("index out of boundsEXPORTPATHVARLOCALGLOBALUNIVERSALUNPATHVAR/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/hashbrown-0.15.2/src/raw/mod.rsHash table capacity overflowLazy instance has previously been poisoned/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/once_cell-1.20.2/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/le.rs", 19, &g_14d34d0); /* do not return */
        }
    }
}
