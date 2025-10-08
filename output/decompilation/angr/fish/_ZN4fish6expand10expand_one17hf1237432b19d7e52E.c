long long fish::expand::expand_one(unsigned long long a0[3], unsigned int a1, void* a2, unsigned long long a3)
{
    void* v0;  // [bp-0x58]
    unsigned long long v1;  // [bp-0x50]
    void* v2;  // [bp-0x48]
    void* v3;  // [bp-0x40]
    unsigned long long v4;  // [bp-0x38]
    void* v5;  // [bp-0x30]
    unsigned long v7;  // rbp
    unsigned int v8;  // r12d
    unsigned int v9;  // r12d

    v7 = a1;
    v0 = 0;
    v1 = 8;
    v2 = 0;
    if (!((char)v7 & 8) && (char)fish::expand::expand_is_clean(a0[1], a0[2]))
    {
        core::ptr::drop_in_place<alloc::vec::Vec<fish::complete::Completion>>(&v0);
        return v8 & 0xffffff00 | 1;
    }
    v3 = 0;
    v4 = 4;
    v5 = 0;
    core::intrinsics::typed_swap_nonoverlapping(a0, &v3);
    fish::expand::expand_string(&v3, &v0, v7, a2, a3);
    v9 = 0;
    core::ptr::drop_in_place<alloc::vec::Vec<fish::complete::Completion>>(&v0);
    return v9;
}
