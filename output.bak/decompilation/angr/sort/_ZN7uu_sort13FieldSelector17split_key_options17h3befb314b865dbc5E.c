long long uu_sort::FieldSelector::split_key_options::h3befb314b865dbc5(unsigned long long a0[3], unsigned long a1, unsigned long long a2)
{
    unsigned long v0;  // [sp-0x58], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0x50]
    void* v2;  // [sp-0x48]
    char v3;  // [bp-0x40]
    char v4;  // [bp-0x30]
    unsigned long long v6;  // r15
    unsigned long long v7;  // rax
    unsigned int v8;  // edx
    unsigned long long v9;  // rax
    int v11;  // xmm0

    v6 = a1;
    v2 = 0;
    v0 = a1;
    v1 = a1 + a2;
    v7 = core::iter::traits::iterator::Iterator::try_fold::h11c5615e8005357f(&v0);
    if (v8 == 0x110000)
    {
        a0[0] = v6;
        a0[1] = a2;
        a0[2] = 1;
        a0[1] = 0;
        v9 = v7;
        return v9;
    }
    else if (!*((long long *)&v3))
    {
        core::str::slice_error_fail::h5dbb61534404fe7e(v6, a2, 0, v7, &g_5ffa90); /* do not return */
    }
    else
    {
        v11 = *((int128_t *)&v3);
        *((int128_t *)&a0[2]) = *((int128_t *)&v4);
        *((void*)&a0[0]) = v11;
        v9 = ::0x51bb10::core::str::_$LT$impl$u20$str$GT$::split_at_checked::h90efbd1904036d35(&v3, v6, a2, v7);
        return v9;
    }
}
