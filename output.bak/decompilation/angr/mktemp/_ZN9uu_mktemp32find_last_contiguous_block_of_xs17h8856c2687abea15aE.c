long long uu_mktemp::find_last_contiguous_block_of_xs::h8856c2687abea15a(unsigned long long a0[3], char *a1, unsigned long long a2)
{
    unsigned long long v0;  // [sp-0x28]
    unsigned long v2;  // rax
    unsigned long long v3;  // rax
    unsigned long long v4;  // rax
    unsigned long long v5;  // rdx
    char *v6;  // rdx
    unsigned long long v7;  // rax

    v0 = v2;
    v3 = core::str::_$LT$impl$u20$str$GT$::rfind::h6ddde4d1ca094418(a1, a2);
    if (!v3)
    {
        a0[0] = v3;
        return v4;
    }
    v6 = v5 + 3;
    if (v5 + 3)
    {
        if (v6 >= a2)
        {
            if (v6 != a2)
                core::str::slice_error_fail::h5dbb61534404fe7e(a1, a2, 0, v6, &g_536a28); /* do not return */
        }
        else
        {
            if (*((char *)(a1 + v6)) <= 191)
                core::str::slice_error_fail::h5dbb61534404fe7e(a1, a2, 0, v6, &g_536a28); /* do not return */
        }
    }
    v7 = core::option::Option$LT$T$GT$::map_or::h073759538f04d9ef(core::str::_$LT$impl$u20$str$GT$::rfind::h5f0bced45080d5d4(a1, v6), v5);
    a0[1] = v7;
    a0[2] = v6;
    a0[0] = v3;
    return v4;
}
