long long uu_pr::file_last_modified_time::hf261d36156f738c2(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long a3, unsigned long a4, unsigned long a5)
{
    char v0;  // [sp-0xd0], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0xc8]
    char v2;  // [bp-0xb8]
    char v3;  // [bp-0xb0]
    unsigned long long v5;  // rdx
    unsigned long long v6;  // rcx
    unsigned long long v7;  // r8
    unsigned long long v8;  // r9

    std::fs::metadata::h6095ccabeafc16d6(&v2, a1, a2);
    if (*((int *)&v2) == 2)
    {
        v1 = *((long long *)&v3);
        v0 = 0x8000000000000000;
    }
    else
    {
        uu_pr::file_last_modified_time::_$u7b$$u7b$closure$u7d$$u7d$::hddb94a45d7e5f31f(&v0, &v2, v5, v6, v7, v8);
    }
    return core::result::Result$LT$T$C$E$GT$::unwrap_or_default::hebb6ec213332d780(a0, &v0);
}
