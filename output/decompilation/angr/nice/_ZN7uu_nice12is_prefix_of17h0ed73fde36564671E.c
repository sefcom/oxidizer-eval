long long uu_nice::is_prefix_of(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long a4)
{
    unsigned long long v0;  // [bp-0x28]
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax
    unsigned long long v4;  // rdx

    v0 = v2;
    if (a1 <= a3 != 1 || a1 < a4)
        return 0;
    v3 = a1.get(a2, a3);
    if (!v3)
        core::str::slice_error_fail(a2, a3, 0, a1, &g_4dba80); /* do not return */
    return v3.equal(v4, a0, a1);
}
