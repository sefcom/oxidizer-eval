long long bat::less::parse_less_version(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0x30]
    unsigned long long v1;  // [bp-0x28]
    char v2;  // [bp-0x20]
    unsigned long long v4;  // r15
    unsigned long long v5;  // rdx
    unsigned long long v6;  // rax

    if (!(char)core::slice::<impl [T]>::starts_with(a0, a1, "less src/less.rs", 5))
    {
        return 2;
    }
    else if (a1 >= 5)
    {
        core::str::converts::from_utf8(&v0, a0 + 5, a1 - 5);
        if ((v0 & 1))
            return 2;
        v4 = *((long long *)&v2);
        if (!((char)core::str::<impl str>::find(v1, v4) & 1))
            return 2;
        v6 = v5.get(v1, v4);
        if (!v6)
            core::str::slice_error_fail(v1, v4, 0, v5, &g_ace750); /* do not return */
        ::0x805c00::core::num::<impl usize>::from_ascii_radix(&v0, v6, v5);
        return v0 * 2;
    }
    else
    {
        core::slice::index::slice_start_index_len_fail(5, a1, &g_ace768); /* do not return */
    }
}
