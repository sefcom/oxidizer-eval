long long fish::parse_util::parse_util_get_offset(unsigned long long a0, unsigned int a1, unsigned int a2, unsigned long long a3)
{
    char v1;  // al
    unsigned long v2;  // cc_dep1
    unsigned long v3;  // cc_ndep
    char v4;  // al
    unsigned long long v5;  // rbx
    unsigned long long v6;  // rdx
    unsigned long long v7;  // rdx
    unsigned long long v8;  // rbx
    unsigned long long v9;  // 4096

    v1 = fish::parse_util::parse_util_get_offset_from_line(a0, a1, a2);
    v2 = v1 & 1;
    if (!(v1 & 1))
    {
        return 0;
    }
    else if (!((char)_ccall(0, 23, (unsigned long long)(a2 + 1), 0, _ccall(17, v2, 0, v3))))
    {
        v4 = fish::parse_util::parse_util_get_offset_from_line(a0, a1, a2 + 1);
        v5 = a1 + 1;
        if ((char)_ccall(4, 24, a1 + 1, 0, _ccall(23, (unsigned long long)(a2 + 1), 0, _ccall(17, v2, 0, v3))))
            core::panicking::panic_const::panic_const_add_overflow(&g_14dd9c0); /* do not return */
        if ((v4 & 1))
            v7 = v6;
        else
            v7 = v5;
        if (v7 >= v6 && v7 != v6)
        {
            v8 = v7 + ~(v6);
            if (a3 < v8)
                v9 = a3;
            else
                v9 = v8;
            if ((char)__CFADD__(v9, v6))
                core::panicking::panic_const::panic_const_add_overflow(&g_14dd9f0); /* do not return */
            return 1;
        }
        core::panicking::panic_const::panic_const_sub_overflow(&g_14dd9d8); /* do not return */
    }
    else
    {
        core::panicking::panic_const::panic_const_add_overflow(&g_14dd9a8); /* do not return */
    }
}
