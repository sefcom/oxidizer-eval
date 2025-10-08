long long fish::highlight::highlight::color_string_internal(unsigned int *a0, unsigned long long a1, unsigned int a2, unsigned int *a3, unsigned long long a4)
{
    unsigned int v3;  // [bp-0x9c]
    unsigned long long v7;  // [bp-0x98]
    unsigned int v10;  // [bp-0x8c]
    unsigned long long v13;  // [bp-0x80]
    unsigned long v17;  // [bp-0x68]
    unsigned long long v18;  // [bp-0x60]
    unsigned int v19;  // [bp-0x58], Other Possible Types: unsigned long long
    unsigned long long v20;  // [bp-0x50]
    uint128_t v21;  // [bp-0x48]
    unsigned long long v23;  // rax
    unsigned long long v24;  // rdx
    unsigned long long v25;  // r8
    unsigned long long v26;  // r13

    v3 = a2;
    v18 = 0x6000000050000;
    v19 = 0x20000;
    if (!(char)v3.slice_contains(&v18))
    {
        v18 = &g_14d9300;
        v19 = 1;
        v20 = 8;
        v21 = 0;
        core::panicking::panic_fmt(&v18, &g_14d9310); /* do not return */
    }
    a3.spec_fill(a4, a2);
    v23 = a0.equal(a1, "%", 5);
    if ((char)v23)
        return 0.index_mut(5, a3, a4, &g_14d95b0).spec_fill(v24, 0x90000);
    if (!a1)
        return v23;
    v25 = a4;
    v17 = a1 - 1;
    v13 = 0;
    v10 = 0;
    v26 = 0;
    v7 = a4;
}
