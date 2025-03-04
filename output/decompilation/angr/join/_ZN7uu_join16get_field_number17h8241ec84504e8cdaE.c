long long uu_join::get_field_number::h8241ec84504e8cda(unsigned long long a0[2], unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4)
{
    unsigned long v0;  // [sp-0x90]
    unsigned long v1;  // [sp-0x88]
    char *v2;  // [sp-0x80]
    unsigned long long v3;  // [sp-0x78]
    char *v4;  // [sp-0x70]
    unsigned long long v5;  // [sp-0x68]
    unsigned long v6;  // [sp-0x60]
    unsigned long long v7;  // [sp-0x58]
    struct struct_0 **v8;  // [sp-0x50]
    unsigned long long v9;  // [sp-0x48]
    void* v10;  // [sp-0x40]
    char v11;  // [bp-0x30]
    unsigned int v12;  // [sp-0x18]
    unsigned long long v13;  // [sp-0x10]
    unsigned long long v14;  // [sp-0x8]
    unsigned long v17;  // rax
    unsigned long v18;  // r14
    unsigned long v19;  // rbx
    unsigned long v20;  // rax

    if (a1 != 1)
    {
        *((int *)&a0[1]) = (!a3 ? a3 : a4);
        a0[0] = 0;
        return v17;
    }
    if (!(a3 == 1 && a2 != a4))
    {
        a0[1] = a2;
        a0[0] = 0;
        return v20;
    }
    v14 = v18;
    v13 = v19;
    v0 = a2 + 1;
    v1 = a4 + 1;
    v2 = &v0;
    v3 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
    v4 = &v1;
    v5 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
    v6 = &g_535490;
    v7 = 2;
    v10 = 0;
    v8 = &v2;
    v9 = 2;
    ::0x4c2990::core::option::Option$LT$T$GT$::map_or_else::h84da32fb4d9c85b4(&v11, &v6);
    v12 = 1;
    *((double *)&a0[0]) = alloc::boxed::Box$LT$T$GT$::new::h7aaaeb17d3fe937d(&v11);
    a0[1] = &g_5352b8;
    return &g_5352b8;
}
