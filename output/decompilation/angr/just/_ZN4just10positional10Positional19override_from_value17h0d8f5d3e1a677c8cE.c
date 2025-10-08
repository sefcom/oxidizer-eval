long long just::positional::Positional::override_from_value(void* a0, unsigned long long a1, unsigned long long a2)
{
    int v0;  // [bp-0x98], Other Possible Types: char
    unsigned long v1;  // [bp-0x90]
    unsigned long long v2;  // [bp-0x88]
    unsigned long long v3;  // [bp-0x80]
    unsigned long v4;  // [bp-0x78]
    unsigned long long v5;  // [bp-0x70]
    int v6;  // [bp-0x60], Other Possible Types: char
    unsigned long long v7;  // [bp-0x50]
    char v8;  // [bp-0x48]
    char v9;  // [bp-0x38]
    unsigned long long v11;  // rdx
    unsigned long long v12;  // r14
    unsigned long long v13;  // rax

    if (((char)core::str::<impl str>::find(a1, a2, 61) & 1))
    {
        ::0x5f9850::core::str::<impl str>::split_at_checked(&v0, a1, a2, v11);
        v12 = *((long long *)&v0);
        if (!v12)
            core::str::slice_error_fail(a1, a2, 0, v11, &g_830a50); /* do not return */
        v13 = 1.get(v2, v3);
        if (!v13)
        {
            core::str::slice_error_fail(v2, v3, 1, v3, &g_830ab0); /* do not return */
        }
        else if ((char)v12.is_identifier(v1))
        {
            v6.to_vec(v12, v1);
            v8.to_vec(v13, v11);
            v5 = *((long long *)&v9);
            memcpy(&v3, &v8, 16);
            v2 = v7;
            v0 = v6;
            *((unsigned long *)&a0[32]) = v4;
            *((unsigned long long *)&a0[40]) = v5;
            *((unsigned long long *)&a0[16]) = v2;
            *((unsigned long long *)&a0[24]) = v3;
            *(a0) = v6;
            return v3;
        }
    }
    *((unsigned long long *)a0) = 0x8000000000000000;
    return 0x8000000000000000;
}
