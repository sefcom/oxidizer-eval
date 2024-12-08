long long uu_join::get_field_number::hb005de35c76fcfae(unsigned long long a0[2], unsigned long a1, unsigned long a2, unsigned long a3, unsigned long long a4)
{
    unsigned long v0;  // [sp-0x90], Other Possible Types: unsigned long long
    unsigned long v1;  // [sp-0x88], Other Possible Types: unsigned long long
    unsigned long v2;  // [sp-0x80], Other Possible Types: unsigned long long
    unsigned long long v3;  // [sp-0x78]
    unsigned long long v4;  // [sp-0x70]
    unsigned long long v5;  // [sp-0x68]
    unsigned long v6;  // [sp-0x60], Other Possible Types: unsigned long long
    unsigned long long v7;  // [sp-0x58]
    unsigned long long v8;  // [sp-0x50]
    unsigned long long v9;  // [sp-0x48]
    void* v10;  // [sp-0x40]
    char v11;  // [bp-0x30]
    unsigned int v12;  // [sp-0x18]
    unsigned long long v13;  // [sp-0x10]
    unsigned long long v14;  // [sp-0x8]
    unsigned long v16;  // r14
    unsigned long v17;  // rbx
    unsigned long v18;  // rax
    unsigned long v19;  // rax

    if (a1 != 1)
    {
        a0[1] = a4;
        a0[0] = 0;
        return v19;
    }
    if (!(a4 == 1 && a2 != a4))
    {
        a0[1] = a2;
        a0[0] = 0;
        return v18;
    }
    v14 = v16;
    v13 = v17;
    v0 = a2 + 1;
    v1 = a4 + 1;
    v2 = &v0;
    v3 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
    v4 = &v1;
    v5 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
    v6 = &g_536030;
    v7 = 2;
    v10 = 0;
    v8 = &v2;
    v9 = 2;
    ::0x4c29f0::core::option::Option$LT$T$GT$::map_or_else::h194c0e6a97f2c7f4(&v11, &v6);
    v12 = 1;
    *((double *)&a0[0]) = alloc::boxed::Box$LT$T$GT$::new::h30919857a4b52c57(&v11);
    a0[1] = &g_535e48;
    return &g_535e48;
}
