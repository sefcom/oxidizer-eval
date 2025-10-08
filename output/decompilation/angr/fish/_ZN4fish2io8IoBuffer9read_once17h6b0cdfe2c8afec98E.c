long long fish::io::IoBuffer::read_once(unsigned int a0, unsigned long long *a1)
{
    unsigned long v0;  // [bp-0x4038]
    unsigned int v1;  // [bp-0x4034]
    void* v2;  // [bp-0x4030], Other Possible Types: unsigned long long
    unsigned long long v3;  // [bp-0x4028]
    unsigned long long v4;  // [bp-0x4020]
    uint128_t v5;  // [bp-0x4018]
    void* v6;  // [bp-0x3030]
    void* v7;  // [bp-0x2030]
    void* v8;  // [bp-0x1030]
    unsigned long v10;  // rax
    unsigned long long v11;  // rax
    unsigned long long v12;  // rax
    unsigned long long v13;  // rdx

    v8 = 0;
    v7 = 0;
    v6 = 0;
    v2 = 0;
    v0 = v10;
    if (a0 < 0)
    {
        v2 = &g_14d8c18;
        v3 = 1;
        v4 = 8;
        v5 = 0;
        core::panicking::panic_fmt(&v2, &g_14db7b0); /* do not return */
    }
    errno::set_errno(0);
    memset(&v2, 0, 0x4000);
    while (true)
    {
        v11 = read(a0, &v2, 0x4000);
        if (v11 < 0)
        {
            if ((int)errno::errno() != 4)
            {
                v1 = errno::errno();
                if (v1.slice_contains(&g_54a328, 2))
                    return v11;
                fish::wutil::perror("readend\nfull", 4);
                return v11;
            }
        }
        else
        {
            if (v11)
            {
                0.unwrap(&g_14db7c8);
                v12 = 0.index(v11, &v2, 0x4000, &g_14db7e0);
                *(a1) + 8.append(v12, v13, 0);
                return v11;
            }
            return v11;
        }
    }
}
