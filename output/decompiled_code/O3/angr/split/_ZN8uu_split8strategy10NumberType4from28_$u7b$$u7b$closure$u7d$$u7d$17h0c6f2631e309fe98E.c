long long uu_split::strategy::NumberType::from::_$u7b$$u7b$closure$u7d$$u7d$::h0c6f2631e309fe98(struct_0 *a0, unsigned long long a1[2], unsigned long long a2[3], unsigned long a3, unsigned long a4, unsigned long a5)
{
    void* v0;  // [sp-0x68]
    unsigned long long v1;  // [sp-0x60]
    void* v2;  // [sp-0x58]
    void* v3;  // [sp-0x50]
    void* v4;  // [sp-0x40]
    unsigned long long v5;  // [sp-0x30]
    unsigned long long v6;  // [sp-0x28]
    unsigned long long v7;  // [sp-0x20]
    char v8;  // [sp-0x18]
    unsigned long long v10;  // rax

    v0 = 0;
    v1 = 1;
    v2 = 0;
    v7 = 32;
    v8 = 3;
    v3 = 0;
    v4 = 0;
    v5 = &v0;
    v6 = &g_50bfc8;
    if ((char)_$LT$str$u20$as$u20$core..fmt..Display$GT$::fmt::h5ee9ab008bf888ff(a1[0], a1[1], &v3))
        core::result::unwrap_failed::h39784290e544308e(); /* do not return */
    v10 = v2;
    *((unsigned long long *)((char *)&a0->field_8 + 8)) = v10;
    *((int128_t *)&(&a0->field_0)[1]) = *((int128_t *)&v0);
    a0->field_0 = 1;
    if (!a2[1])
        return v10;
    v10 = __rust_dealloc(a2[2]);
}
