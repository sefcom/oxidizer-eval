long long uu_sort::FieldSelector::split_key_options::h3befb314b865dbc5(unsigned long long a0[3], unsigned long long a1, unsigned long long a2)
{
    unsigned long v0;  // [sp-0x58]
    unsigned long long v1;  // [sp-0x50]
    void* v2;  // [sp-0x48]
    char v3;  // [bp-0x40]
    char v4;  // [bp-0x30]
    unsigned long long v6;  // rax
    unsigned int v7;  // edx
    unsigned long long v8;  // rax
    int v10;  // xmm0

    v2 = 0;
    v0 = a1;
    v1 = a1 + a2;
    v6 = core::iter::traits::iterator::Iterator::try_fold::h11c5615e8005357f(&v0);
    if (v7 == 0x110000)
    {
        a0[0] = a1;
        a0[1] = a2;
        a0[2] = 1;
        a0[1] = 0;
        v8 = v6;
        return v8;
    }
    else if (!*((long long *)&v3))
    {
        core::str::slice_error_fail::h5dbb61534404fe7e(a1, a2, 0, v6, &g_5ffa90); /* do not return */
    }
    else
    {
        v10 = *((int128_t *)&v3);
        *((int128_t *)&a0[2]) = *((int128_t *)&v4);
        *((void*)&a0[0]) = v10;
        v8 = ::0x51bb10::core::str::_$LT$impl$u20$str$GT$::split_at_checked::h90efbd1904036d35(&v3, a1, a2, v6);
        return v8;
    }
}
