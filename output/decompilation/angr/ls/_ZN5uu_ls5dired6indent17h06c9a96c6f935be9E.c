long long uu_ls::dired::indent(unsigned long long a0)
{
    unsigned long long v0;  // [bp-0x30]
    unsigned long long v1;  // [bp-0x28]
    unsigned long long v2;  // [bp-0x20]
    uint128_t v3;  // [bp-0x18]
    unsigned long long v5;  // rax

    v0 = &g_6a1710;
    v1 = 1;
    v2 = 8;
    v3 = 0;
    v5 = a0.write_fmt(&v0);
    if (!v5)
        return 0;
    return v5.from();
}
