long long fd::extract_time_constraints(void* a0, unsigned long long a1[41])
{
    unsigned long v0;  // [bp-0xd8]
    void* v1;  // [bp-0xd0]
    unsigned long long v2;  // [bp-0xc8]
    void* v3;  // [bp-0xc0]
    char *v4;  // [bp-0xb8]
    unsigned long long v5;  // [bp-0xb0]
    unsigned long long v6;  // [bp-0xa8]
    unsigned long long v7;  // [bp-0xa0]
    char *v8;  // [bp-0x98]
    unsigned long long v9;  // [bp-0x90]
    void* v10;  // [bp-0x88]
    char v11;  // [bp-0x78]
    char v12;  // [bp-0x60]
    char v13;  // [bp-0x48]
    char v14;  // [bp-0x30]
    unsigned long long v16;  // rdx
    void* v17;  // rdi
    unsigned long long v18;  // rdx

    v1 = 0;
    v2 = 8;
    v3 = 0;
    if (!((char)(((0 ^ a1[35]) & (0 ^ -(a1[35]))) >> 63)))
    {
        v0 = &a1[35];
        v11.after(a1[36], a1[37]);
        if (*((int *)&v11) == 2)
        {
            v4 = &v0;
            v5 = <&T as core::fmt::Display>::fmt;
            v6 = &g_802900;
            v7 = 2;
            v10 = 0;
            v8 = &v4;
            v9 = 1;
            v13.map_or_else(0, v16, &v6);
            *((long long *)&a0[8]) = v13.msg();
            *((unsigned long long *)a0) = 0x8000000000000000;
            v17 = 0;
            return core::ptr::drop_in_place<alloc::vec::Vec<fd::filter::time::TimeFilter>>(0, 8);
        }
        v1.push(&v11, &g_802920);
    }
    if (a1[38] == 0x8000000000000000)
    {
        *((unsigned long long *)&a0[16]) = 0;
        *((int128_t *)a0) = *((int128_t *)&v1);
        return 0;
    }
    v0 = &a1[38];
    v12.before(a1[39], a1[40]);
    if (*((int *)&v12) != 2)
    {
        v1.push(&v12, &g_802938);
        *((unsigned long long *)&a0[16]) = 0;
        *((int128_t *)a0) = *((int128_t *)&v1);
        return 0;
    }
    v4 = &v0;
    v5 = <&T as core::fmt::Display>::fmt;
    v6 = &g_802900;
    v7 = 2;
    v10 = 0;
    v8 = &v4;
    v9 = 1;
    v14.map_or_else(0, v18, &v6);
    *((long long *)&a0[8]) = v14.msg();
    *((unsigned long long *)a0) = 0x8000000000000000;
    return core::ptr::drop_in_place<alloc::vec::Vec<fd::filter::time::TimeFilter>>(0, 8);
}
