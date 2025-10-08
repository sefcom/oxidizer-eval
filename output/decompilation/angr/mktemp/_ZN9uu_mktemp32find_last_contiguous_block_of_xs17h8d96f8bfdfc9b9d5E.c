long long uu_mktemp::find_last_contiguous_block_of_xs(unsigned long long a0[3], unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x28]
    unsigned long long v2;  // rax
    unsigned long long v3;  // rdx
    unsigned long v4;  // r14
    unsigned long long v5;  // rax
    unsigned long long v6;  // rax

    v0 = v2;
    if (((char)core::str::<impl str>::rfind(a1, a2) & 1))
    {
        v4 = v3 + 3;
        v5 = v4.get(a1, a2);
        if (!v5)
            core::str::slice_error_fail(a1, a2, 0, v4, &g_4f8fb8); /* do not return */
        a0[1] = core::str::<impl str>::rfind(v5, v3).map_or(v3);
        a0[2] = v4;
        v6 = 1;
    }
    else
    {
        v6 = 0;
    }
    a0[0] = v6;
    return v6;
}
