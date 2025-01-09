long long uu_cat::splice::copy_exact::h7c8774a5e534cde3(unsigned int a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long v0;  // [sp-0x4068], Other Possible Types: unsigned long long
    char v1;  // [bp-0x4060], Other Possible Types: unsigned long long
    char v2;  // [bp-0x405c]
    unsigned long long v3;  // [sp-0x4058], Other Possible Types: unsigned long
    unsigned long long v4;  // [sp-0x4050]
    int v5;  // [sp-0x4048]
    void* v6;  // [sp-0x4030]
    unsigned int v11;  // 4096
    unsigned long long v12;  // rbx
    void* v13;  // rbp
    unsigned long long v14;  // rdx
    unsigned long long v15;  // rax

    do
    {
        v12 = a2;
        nix::unistd::read::hcf76a36f5eebd624(&v1, v11, &v6, 0x4000);
        if (*((int *)&v1))
        {
LABEL_4b4b9f:
            return *((int *)&v2);
        }
        v0 = v3;
        if (!v0)
        {
            v1 = &g_518990;
            v3 = 1;
            v4 = 8;
            *((int128_t *)&v5) = 0;
            core::panicking::assert_failed::hb6f5ab042e2fb42a(&v0, &v1, &g_5189a0); /* do not return */
        }
        v13 = 0;
        nix::unistd::write::h6382312308a73468(&v1, a1, ::0x4b3030::_$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h2183ab5a6b7a9c40(v13, v0, &v6), v14);
        if (!(!*((int *)&v1)))
            goto LABEL_4b4b9f;
        v15 = v3;
        if (!v15)
            uu_cat::splice::copy_exact::panic_cold_explicit::ha5b0297eb3513873(); /* do not return */
        v13 += v15;
        if (v13 < v0)
            continue;
        a2 = v12 - v0;
    } while (v12 != v0);
    return 134;
}
