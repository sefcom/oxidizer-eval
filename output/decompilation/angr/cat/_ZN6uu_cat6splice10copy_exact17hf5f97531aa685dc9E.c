long long uu_cat::splice::copy_exact(unsigned long long a0, unsigned long a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x4068]
    char v1;  // [bp-0x4060], Other Possible Types: unsigned long
    unsigned int v2;  // [bp-0x405c]
    unsigned long long v3;  // [bp-0x4058]
    unsigned long long v4;  // [bp-0x4050]
    uint128_t v5;  // [bp-0x4048]
    void* v6;  // [bp-0x4030]
    void* v7;  // [bp-0x3030]
    void* v8;  // [bp-0x2030]
    void* v9;  // [bp-0x1030]
    unsigned long long v11;  // 4096
    unsigned long long v12;  // rbx
    unsigned long long v13;  // r13
    void* v14;  // rbp

    v9 = 0;
    v8 = 0;
    v7 = 0;
    v6 = 0;
    memset(&v6, 0, 0x4000);
    if (!a2)
        return 134;
    v11 = a2;
    do
    {
        v12 = v11;
        nix::unistd::read(&v1, a0, &v6);
        if ((v1 & 1))
            return v2;
        v13 = v3;
        v0 = v13;
        if (!v13)
        {
            v1 = &g_573208;
            v3 = 1;
            v4 = 8;
            v5 = 0;
            core::panicking::assert_failed(1, &v0, &g_42e258, &v1, &g_573248); /* do not return */
        }
        v14 = 0;
        do
        {
            nix::unistd::write(&v1, v14.index(v13, &v6), a2);
            if ((v1 & 1))
                return v2;
            if (!v3)
                uu_cat::splice::copy_exact::panic_cold_explicit(); /* do not return */
            v14 += v3;
        } while (v14 < v13);
        v11 = v12 - v13;
    } while (v12 != v13);
    return 134;
}
