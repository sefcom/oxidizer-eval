long long fish::io::FdOutputStream::new(struct_0 *a0, unsigned int a1)
{
    unsigned long long v0;  // [bp-0x40]
    unsigned long long v1;  // [bp-0x38]
    unsigned long long v2;  // [bp-0x30]
    uint128_t v3;  // [bp-0x28]
    unsigned long long v5;  // rax
    char v6;  // dl

    if (a1 < 0)
    {
        v0 = &g_14d8c18;
        v1 = 1;
        v2 = 8;
        v3 = 0;
        core::panicking::panic_fmt(&v0, &g_14db9c8); /* do not return */
    }
    v5 = 0.new();
    a0->field_10 = a1;
    a0->field_0 = v5;
    a0->field_8 = v6;
    a0->field_14 = 0;
    return a0;
}
