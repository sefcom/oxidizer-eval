long long fish::builtins::path::find_extension(unsigned long long a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x30]
    unsigned long long v1;  // [bp-0x28]
    unsigned long long v3;  // r15
    unsigned long v4;  // rdx
    unsigned long long v5;  // r12

    v3 = fish::wutil::wbasename(a0, a1);
    v5 = v3 + v4 * 4;
    if (!v3.eq_by(v5, "...", "..") && !v3.eq_by(v5, "..", &g_9f9ac9))
    {
        v0 = v3;
        v1 = v5;
        if ((v4 & (char)v0.rposition()) == 1)
        {
            if ((char)__CFADD__(v4, a1))
            {
                core::panicking::panic_const::panic_const_add_overflow(&g_14cb188); /* do not return */
            }
            else if (v4 + a1 >= v4)
            {
                return 1;
            }
            else
            {
                core::panicking::panic_const::panic_const_sub_overflow(&g_14cb188); /* do not return */
            }
        }
    }
    return 0;
}
