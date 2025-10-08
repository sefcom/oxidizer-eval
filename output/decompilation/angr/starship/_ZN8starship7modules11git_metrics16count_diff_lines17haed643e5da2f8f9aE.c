long long starship::modules::git_metrics::count_diff_lines(unsigned int a0[3], char a1[162])
{
    char v0;  // [bp-0x90]
    unsigned long long v1;  // [bp-0x88]
    unsigned long long v2;  // [bp-0x80]
    char *v3;  // [bp-0x78]
    uint128_t v4;  // [bp-0x70]
    unsigned long v6;  // rax
    unsigned int v7;  // edx

    v6 = a1[160];
    if (!(unsigned int)v6)
    {
        (char)v1.interned_input(a1);
        a0[1] = imara_diff::diff(a1[161], &(char)v1);
        a0[2] = v7;
        a0[0] = 1;
        return (unsigned long long)core::ptr::drop_in_place<imara_diff::intern::InternedInput<&[u8]>>(&(char)v1);
    }
    else if ((unsigned int)v6 == 2)
    {
        a0[0] = 0;
        return v6;
    }
    else
    {
        v1 = &g_11f4890;
        v2 = 1;
        v3 = &v0;
        v4 = 0;
        core::panicking::panic_fmt(&v1, &g_11f48a0); /* do not return */
    }
}
