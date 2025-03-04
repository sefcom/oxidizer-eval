long long uu_cat::splice::copy_exact::h7c8774a5e534cde3(unsigned int a0, unsigned long long a1, unsigned long a2)
{
    unsigned int v0;  // [sp-0x406c]
    unsigned long v1;  // [sp-0x4068]
    char v2;  // [sp-0x4060], Other Possible Types: unsigned long
    char v3;  // [bp-0x405c]
    unsigned long long v4;  // [sp-0x4058], Other Possible Types: unsigned long
    unsigned long long v5;  // [sp-0x4050]
    int v6;  // [sp-0x4048]
    void* v7;  // [sp-0x4030]
    unsigned long long v12;  // rbx
    unsigned long long v14;  // rbx
    void* v15;  // rbp
    unsigned long long v16;  // rdx
    unsigned long long v17;  // rax

    do
    {
        v14 = v12;
        nix::unistd::read::hcf76a36f5eebd624(&v2, v0, &v7, 0x4000);
        if (*((int *)&v2))
        {
LABEL_4b4b9f:
            return *((int *)&v3);
        }
        v1 = v4;
        if (!v1)
        {
            v2 = &g_518990;
            v4 = 1;
            v5 = 8;
            *((uint128_t *)&v6) = 0;
            core::panicking::assert_failed::hb6f5ab042e2fb42a(&v1, &v2, &g_5189a0); /* do not return */
        }
        v15 = 0;
        nix::unistd::write::h6382312308a73468(&v2, a1, ::0x4b3030::_$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h2183ab5a6b7a9c40(v15, v1, &v7), v16);
        if (!(!*((int *)&v2)))
            goto LABEL_4b4b9f;
        v17 = v4;
        if (!v17)
            uu_cat::splice::copy_exact::panic_cold_explicit::ha5b0297eb3513873(); /* do not return */
        v15 += v17;
        if (v15 < v1)
            continue;
        v12 = v14 - v1;
    } while (v14 != v1);
    return 134;
}
