long long uu_dd::parseargs::parse_bytes_only(unsigned long long a0[2], unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    char v0;  // [bp-0x30]
    char v1;  // [bp-0x28]
    unsigned long long v3;  // rax
    unsigned long long v4;  // rax

    v3 = a3.get(a1, a2);
    if (!v3)
        core::str::slice_error_fail(a1, a2, 0, a3, &g_53d948); /* do not return */
    ::0x482380::core::num::<impl u64>::from_ascii_radix(&v0, v3, a2);
    if (v0)
    {
        a0[1].to_vec(a1, a2);
        v4 = 7;
    }
    else
    {
        a0[1] = *((long long *)&v1);
        v4 = 14;
    }
    a0[0] = v4;
    return v4;
}
