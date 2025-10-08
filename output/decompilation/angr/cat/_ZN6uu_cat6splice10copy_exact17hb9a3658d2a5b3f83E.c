long long uu_cat::splice::copy_exact(unsigned int a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x4070]
    unsigned long long v1;  // [bp-0x4068]
    char v2;  // [bp-0x4060], Other Possible Types: unsigned long
    unsigned int v3;  // [bp-0x405c]
    unsigned long long v4;  // [bp-0x4058]
    unsigned long long v5;  // [bp-0x4050]
    uint128_t v6;  // [bp-0x4048]
    void* v7;  // [bp-0x4030]
    void* v8;  // [bp-0x3030]
    void* v9;  // [bp-0x2030]
    void* v10;  // [bp-0x1030]
    unsigned int v12;  // 4096
    unsigned long long v13;  // r13
    void* v14;  // rbp
    unsigned long long v16;  // rdx

    v10 = 0;
    v9 = 0;
    v8 = 0;
    v7 = 0;
    memset(&v7, 0, 0x4000);
    v12 = a0;
    while (true)
    {
LABEL_45d68b:
        nix::unistd::read(&v2, v12, &v7, 0x4000);
        if ((v2 & 1))
            break;
        v0 = a1;
        v13 = v4;
        v1 = v13;
        if (!v13)
        {
            v2 = &g_4eaa18;
            v4 = 1;
            v5 = 8;
            v6 = 0;
            core::panicking::assert_failed(1, &v1, &g_4196e0, &v2, &g_4eaa28); /* do not return */
        }
        v14 = 0;
        while (true)
        {
            nix::unistd::write(&v2, v14.index(v13, &v7, 0x4000, &g_4eaa40), v16);
            if (*((int *)&v2) == 1)
                break;
            if (!v4)
                uu_cat::splice::copy_exact::panic_cold_explicit(); /* do not return */
            v14 += v4;
            if (v14 >= v13)
            {
                a1 = v0 - v13;
                v12 = a0;
                if (v0 == v13)
                    return 134;
                goto LABEL_45d68b;
            }
        }
    }
    return v3;
}
