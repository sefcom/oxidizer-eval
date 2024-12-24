long long uu_dd::parseargs::parse_bytes_only::h286fb3faf532f666(unsigned long long a0[2], char *a1, unsigned long long a2, char *a3)
{
    char v0;  // [bp-0x28]
    char v1;  // [bp-0x20]
    unsigned long long v3;  // rax

    if (a3)
    {
        if (a3 >= a2)
        {
            if (a3 != a2)
                core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
        }
        else
        {
            if (*((char *)(a1 + a3)) <= 191)
                core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
        }
    }
    core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$u64$GT$::from_str::h29411471c0770b67(&v0, a1, a3);
    if (!v0)
    {
        a0[1] = *((long long *)&v1);
        v3 = 14;
    }
    else
    {
        ::0x4d2700::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h27500e3762b1ee82(&a0[1], a1, a2);
        v3 = 7;
    }
    a0[0] = v3;
    return v3;
}
