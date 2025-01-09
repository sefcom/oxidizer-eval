long long uu_pr::file_last_modified_time::ha75c4cf04aa4487b(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [sp-0xd0], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0xc8]
    char v2;  // [bp-0xb8]
    char v3;  // [bp-0xb0]

    std::fs::metadata::hd60c15ad96e2cad2(&v2, a1, a2);
    if (*((int *)&v2) == 2)
    {
        v1 = *((long long *)&v3);
        v0 = 0x8000000000000000;
    }
    else
    {
        uu_pr::file_last_modified_time::_$u7b$$u7b$closure$u7d$$u7d$::h9ec467e0ee2775af(&v0, &v2);
    }
    return core::result::Result$LT$T$C$E$GT$::unwrap_or_default::h0934fd5d80f5f406(a0, &v0);
}
