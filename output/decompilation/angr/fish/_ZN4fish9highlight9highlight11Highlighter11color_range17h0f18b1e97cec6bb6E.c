long long fish::highlight::highlight::Highlighter::color_range(unsigned long long a0, unsigned long long a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
    unsigned long long v0;  // [bp-0x60]
    unsigned long long v1;  // [bp-0x58]
    unsigned long long v2;  // [bp-0x50]
    uint128_t v3;  // [bp-0x48]
    unsigned long long v5;  // rax
    unsigned long long v6;  // rdx

    if (a2.end(a3) > a1)
    {
        v0 = &g_14d9768;
        v1 = 1;
        v2 = 8;
        v3 = 0;
        core::panicking::panic_fmt(&v0, &g_14d9778); /* do not return */
    }
    v5 = a2.start();
    return v5.index_mut(a2.end(a3), a0, a1, &g_14d9790).spec_fill(v6, a4);
}
