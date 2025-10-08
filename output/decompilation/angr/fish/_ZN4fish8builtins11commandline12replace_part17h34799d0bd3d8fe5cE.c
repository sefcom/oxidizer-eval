long long fish::builtins::commandline::replace_part(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5, unsigned long long a6, unsigned long long a7, unsigned long long a8, char a9)
{
    char v0;  // [bp-0x88]
    unsigned long long v1;  // [bp-0x78]
    char v2;  // [bp-0x70], Other Possible Types: unsigned long long
    unsigned long long v3;  // [bp-0x70]
    unsigned long long v4;  // [bp-0x68]
    unsigned long long v5;  // [bp-0x60]
    unsigned long long v6;  // [bp-0x58]
    int v7;  // [bp-0x50], Other Possible Types: unsigned long long
    unsigned long long v8;  // [bp-0x48]
    unsigned long long v9;  // r14
    unsigned long long v10;  // rcx
    unsigned long long v11;  // rbx
    unsigned long long v12;  // r13
    unsigned long long v17;  // rax
    unsigned long v18;  // rdx

    if (a1 > a7)
        core::option::expect_failed("index out of boundsEXPORTPATHVARLOCALGLOBALUNIVERSALUNPATHVAR/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/hashbrown-0.15.2/src/raw/mod.rsHash table capacity overflowLazy instance has previously been poisoned/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/once_cell-1.20.2/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/le.rs", 19, &g_14c7f68); /* do not return */
    v9 = a8;
    v0.to_vec(a6, a1);
    if (a5 - 1 < 2)
    {
        v10 = a8;
        if (v10 < a1)
            core::panicking::panic("assertion failed: cursor_pos >= range.startassertion failed: cursor_pos <= range.end", 43, &g_14c7f80); /* do not return */
        if (a8 <= a2)
        {
            if (a8 <= a7)
            {
                v11 = a6 + a1 * 4;
                fish::builtins::commandline::strip_dollar_prefixes(&v2, a5, v11, v10 - a1, a3, a4);
                if ((char)(((0 ^ v3) & (0 ^ -(v3))) >> 63))
                {
                    v4 = a3;
                    v5 = a4;
                    v2 = 0x8000000000000000;
                    v8 = a4;
                    v6 = 0x8000000000000000;
                    v7 = v4;
                }
                else
                {
                    *((int128_t *)&v7) = *((int128_t *)&v4);
                    v4 = a3;
                    v5 = a4;
                    v2 = 0x8000000000000000;
                    v6 = v3;
                    core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v2);
                }
                v12 = a6 + a8 * 4;
                v0.spec_extend(v11, v12);
                v0.spec_extend(v7, v7 + v8 * 4);
                if (a2 > a7)
                    core::option::expect_failed("index out of boundsEXPORTPATHVARLOCALGLOBALUNIVERSALUNPATHVAR/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/hashbrown-0.15.2/src/raw/mod.rsHash table capacity overflowLazy instance has previously been poisoned/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/once_cell-1.20.2/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/le.rs", 19, &g_14c7fc8); /* do not return */
                v0.spec_extend(v12, a6 + a2 * 4);
                v9 = a8 + v8;
                if ((char)__CFADD__(a8, v8))
                    core::panicking::panic_const::panic_const_add_overflow(&g_14c7fe0); /* do not return */
                core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v6);
            }
            else
            {
                core::option::expect_failed("index out of boundsEXPORTPATHVARLOCALGLOBALUNIVERSALUNPATHVAR/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/hashbrown-0.15.2/src/raw/mod.rsHash table capacity overflowLazy instance has previously been poisoned/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/once_cell-1.20.2/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/le.rs", 19, &g_14c7fb0); /* do not return */
            }
        }
        else
        {
            core::panicking::panic("assertion failed: cursor_pos <= range.end", 41, &g_14c7f98); /* do not return */
        }
    }
    else if (!a5)
    {
        v0.spec_extend(a3, a4 * 4 + a3);
        v9 = v1;
    }
    else
    {
        v17 = a1.clone(a2);
        if (v18 < v17)
        {
            core::option::expect_failed("index out of boundsEXPORTPATHVARLOCALGLOBALUNIVERSALUNPATHVAR/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/hashbrown-0.15.2/src/raw/mod.rsHash table capacity overflowLazy instance has previously been poisoned/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/once_cell-1.20.2/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/le.rs", 19, &g_14c7ff8); /* do not return */
        }
        else if (v18 <= a7)
        {
            v0.spec_extend(a6 + v17 * 4, a6 + v18 * 4);
            v0.spec_extend(a3, a4 * 4 + a3);
        }
        else
        {
            core::option::expect_failed("index out of boundsEXPORTPATHVARLOCALGLOBALUNIVERSALUNPATHVAR/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/hashbrown-0.15.2/src/raw/mod.rsHash table capacity overflowLazy instance has previously been poisoned/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/once_cell-1.20.2/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/le.rs", 19, &g_14c7ff8); /* do not return */
        }
    }
    if (a7 < a2)
        core::option::expect_failed("index out of boundsEXPORTPATHVARLOCALGLOBALUNIVERSALUNPATHVAR/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/hashbrown-0.15.2/src/raw/mod.rsHash table capacity overflowLazy instance has previously been poisoned/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/once_cell-1.20.2/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/le.rs", 19, &g_14c8010); /* do not return */
    v0.spec_extend(a6 + a2 * 4, a6 + a7 * 4);
    return (!a9 ? fish::reader::commandline_set_buffer(a0, &v0, 1, v9) : fish::reader::commandline_set_search_field(a0, &v0, 1, v9));
}
