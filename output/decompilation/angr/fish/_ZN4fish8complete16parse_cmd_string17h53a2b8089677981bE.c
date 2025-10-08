long long fish::complete::parse_cmd_string(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4)
{
    int v0;  // [bp-0x78]
    unsigned int *v1;  // [bp-0x70]
    unsigned long long v2;  // [bp-0x68]
    int v3;  // [bp-0x60], Other Possible Types: char
    unsigned long long v4;  // [bp-0x50]
    unsigned long long v5;  // [bp-0x48]
    unsigned long long v6;  // [bp-0x40]
    int v7;  // [bp-0x38], Other Possible Types: char
    unsigned long long v8;  // [bp-0x28]
    char v9;  // [bp-0x20]
    unsigned long long v11;  // r14
    unsigned long long v12;  // r15
    unsigned long v13;  // 4127
    char v14;  // al
    unsigned long v15;  // rdx
    unsigned long v16;  // rdx
    unsigned long v17;  // cc_ndep

    v11 = a2;
    v12 = a1;
    fish::path::path_try_get_path(&v7, a1, a2, a3, a4);
    v13 = *((int *)&v9);
    v2 = v8;
    v0 = v7;
    if (!(unsigned int)v13 && v2 && *(v1) != 47)
    {
        fish::wutil::wrealpath(&v3, v1, v2);
        if (!((char)(((0 ^ *((long long *)&v3)) & (0 ^ -(*((long long *)&v3)))) >> 63)))
        {
            v2 = v4;
            v0 = v3;
            core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v7);
        }
    }
    v5 = a1;
    v6 = a1 + a2 * 4;
    v14 = v5.rposition();
    if ((v14 & 1))
    {
        v16 = v15 + 1;
        if ((char)_ccall(4, 24, v15 + 1, 0, _ccall(17, (unsigned long long)(v14 & 1), 0, v17)))
            core::panicking::panic_const::panic_const_add_overflow(&g_14d6218); /* do not return */
        v11 = a2 - v16;
        if (a2 < v16)
            core::option::expect_failed("index out of boundsEXPORTPATHVARLOCALGLOBALUNIVERSALUNPATHVAR/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/hashbrown-0.15.2/src/raw/mod.rsHash table capacity overflowLazy instance has previously been poisoned/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/once_cell-1.20.2/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/le.rs", 19, &g_14d6230); /* do not return */
        v12 = a1 + v16 * 4;
    }
    v3.to_vec(v12, v11);
    a0->field_10 = v4;
    *((void*)&a0->field_0) = v3;
    *((unsigned long long *)((char *)&a0->field_18 + 8)) = v2;
    *((int128_t *)&(&a0->field_10)[1]) = (int128_t)v0;
    return v2;
}
