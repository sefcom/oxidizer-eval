long long uu_sort::FieldSelector::split_key_options(void* a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x58]
    unsigned long long v1;  // [bp-0x50]
    void* v2;  // [bp-0x48]
    int v3;  // [bp-0x40], Other Possible Types: char
    char v4;  // [bp-0x30]
    unsigned long long v6;  // rax
    unsigned int v7;  // edx
    unsigned long long v8;  // rax

    v2 = 0;
    v0 = a1;
    v1 = a1 + a2;
    v6 = v0.try_fold();
    if (v7 == 0x110000)
    {
        *((unsigned long long *)a0) = a1;
        *((unsigned long long *)&a0[8]) = a2;
        *((unsigned long long *)&a0[16]) = 1;
        *((unsigned long long *)&a0[24]) = 0;
        return v6;
    }
    v8 = ::0x4b2090::core::str::<impl str>::split_at_checked(&v3, a1, a2, v6);
    if (!*((long long *)&v3))
        core::str::slice_error_fail(a1, a2, 0, v6, &g_58d068); /* do not return */
    *((int128_t *)&a0[16]) = *((int128_t *)&v4);
    *(a0) = v3;
    return v8;
}
