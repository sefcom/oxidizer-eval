long long uu_df::Options::get_intersected_types(void* a0, unsigned long long a1, unsigned long a2, unsigned long long a3, unsigned long long a4)
{
    void* v0;  // [bp-0x70]
    unsigned long long v1;  // [bp-0x68]
    void* v2;  // [bp-0x60]
    int v3;  // [bp-0x58], Other Possible Types: void*
    unsigned long long v4;  // [bp-0x50]
    void* v5;  // [sp-0x48]
    void* v6;  // [bp-0x38]
    void* v7;  // [bp-0x38]
    unsigned long long v9;  // rbp
    unsigned long long v10;  // rbp
    unsigned long v11;  // rbp

    v0 = 0;
    v1 = 8;
    v2 = 0;
    if (a2)
    {
        v9 = a2 * 24;
        do
        {
            v10 = v9;
            if (a1.slice_contains(a3, a4))
            {
                v3.clone(a1);
                v0.push(&v3, &g_503110);
            }
            a1 += 24;
            v11 = v10 - 24;
            v9 = v11;
        } while (v10 != 24);
        v5 = v2;
        *((int128_t *)&v3) = *((int128_t *)&v0);
        v7 = v6;
        if (v2)
        {
            *((void* *)&v6[16]) = v2;
            *((int128_t *)v6) = *((int128_t *)&v0);
            return v2;
        }
    }
    else
    {
        v5 = v2;
        v3 = v0;
        v4 = 8;
        v7 = a0;
    }
    *((unsigned long long *)v7) = 0x8000000000000000;
    return (unsigned long long)core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v3);
}
