long long fish::complete::complete(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned int a3, unsigned long long a4)
{
    char v0;  // [bp-0xb8]
    void* v1;  // [bp-0xa0], Other Possible Types: char
    unsigned long long v2;  // [bp-0x98]
    void* v3;  // [bp-0x90], Other Possible Types: unsigned long
    void* v4;  // [bp-0x80], Other Possible Types: char
    unsigned long long v5;  // [bp-0x78]
    void* v6;  // [bp-0x70], Other Possible Types: unsigned long
    unsigned long long v8;  // rax
    unsigned long v9;  // rdx

    v8 = fish::parse_util::parse_util_cmdsubst_extent(a1, a2, a2);
    if (v9 >= v8 && v9 <= a2)
    {
        v0.to_vec(a1 + v8 * 4, v9 - v8);
        v1.new(a4, a3);
        v1.perform_for_commandline(&v0);
        a0->field_10 = v3;
        a0->field_0 = *((int128_t *)&v1);
        v1 = 0;
        v2 = 8;
        v3 = 0;
        *((unsigned long *)((char *)&a0->field_18 + 8)) = v6;
        *((int128_t *)&(&a0->field_10)[1]) = *((int128_t *)&v4);
        v4 = 0;
        v5 = 8;
        v6 = 0;
        core::ptr::drop_in_place<fish::complete::Completer>(&v1);
        return a0;
    }
    core::option::expect_failed("index out of boundsEXPORTPATHVARLOCALGLOBALUNIVERSALUNPATHVAR/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/hashbrown-0.15.2/src/raw/mod.rsHash table capacity overflowLazy instance has previously been poisoned/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/once_cell-1.20.2/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/le.rs", 19, &g_14d6308); /* do not return */
}
