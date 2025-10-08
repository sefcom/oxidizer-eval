long long fish::wcstringutil::truncate(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, char a4)
{
    int v0;  // [bp-0x40], Other Possible Types: char
    char v1;  // [bp-0x30]
    unsigned long v3;  // rax
    unsigned long long v4;  // rax
    unsigned long v5;  // rdx
    unsigned long long v6;  // rcx

    if (a2 <= a3)
    {
        a0.to_vec(a1, a2);
        return a0;
    }
    v3 = (a4 != 3 ? a4 : 1);
    if (!(char)v3)
    {
        a0.to_vec(a1, a3);
        return a0;
    }
    if ((unsigned int)v3 == 1)
    {
        v4 = fish::common::get_ellipsis_str();
        v6 = a3 - v5;
        if (a3 < v5)
            core::panicking::panic_const::panic_const_sub_overflow(&g_14e4938); /* do not return */
        if (v6 <= a2)
        {
            v0.to_vec(a1, v6);
            v0.spec_extend(v4, v4 + v5 * 4);
        }
        else
        {
            core::option::expect_failed("index out of boundsEXPORTPATHVARLOCALGLOBALUNIVERSALUNPATHVAR/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/hashbrown-0.15.2/src/raw/mod.rsHash table capacity overflowLazy instance has previously been poisoned/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/once_cell-1.20.2/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/le.rs", 19, &g_14e4950); /* do not return */
        }
    }
    else if (a3)
    {
        v0.to_vec(a1, a3 - 1);
        v0.push((unsigned int)fish::common::get_ellipsis_char());
    }
    else
    {
        core::panicking::panic_const::panic_const_sub_overflow(&g_14e4968); /* do not return */
    }
    a0->field_10 = *((long long *)&v1);
    *((void*)&a0->field_0) = v0;
    return a0;
}
