long long uu_wc::files0_iter_file(unsigned long long a0[3], unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x68], Other Possible Types: unsigned int
    unsigned int v1;  // [bp-0x64]
    unsigned long long v2;  // [bp-0x60]
    char v3;  // [bp-0x58]
    unsigned long long v4;  // [bp-0x48]
    char v5;  // [bp-0x38]
    char v6;  // [bp-0x28]
    unsigned long long v8;  // rax

    v0.open(a1, a2);
    if (v0 != 1)
    {
        v5.to_vec(a1, a2);
        v4 = *((long long *)&v6);
        memcpy(&v3, &v5, 16);
        return uu_wc::files0_iter(a0, v1, &v3);
    }
    v8 = v2.map_err_context(a1, a2);
    a0[0] = 9223372036854775809;
    a0[1] = v8;
    a0[2] = &g_4f9240;
    return &g_4f9240;
}
