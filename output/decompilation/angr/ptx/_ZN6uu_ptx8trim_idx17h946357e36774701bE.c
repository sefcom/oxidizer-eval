long long uu_ptx::trim_idx(void* a0, unsigned long a1, unsigned long a2, unsigned long a3)
{
    unsigned long v1;  // 4096
    unsigned long v2;  // 4096
    unsigned long v3;  // r13
    unsigned int v4;  // edi
    unsigned long v6;  // 4096
    unsigned long v7;  // r14
    unsigned long v8;  // r14
    unsigned int v9;  // edi

    uu_ptx::assert_str_integrity(a1, a2, a3);
    v1 = a2;
    if (v1 < a3)
    {
        v2 = a2;
        while (true)
        {
            v3 = v2;
            if (v3 >= a1)
            {
                if (a2 <= a1)
                    v6 = a1;
                else
                    v6 = a2;
                core::panicking::panic_bounds_check(v6, a1, &g_6519a0); /* do not return */
            }
            v4 = *((int *)((char *)a0 + 4 * v3));
            if (v4 - 9 >= 5 && v4 != 32 && (v4 < 128 || !(char)::0x523980::core::unicode::unicode_data::white_space::lookup(v4)))
                break;
            v2 = v3 + 1;
            if (a3 == v2)
                return a3;
        }
        v1 = v3;
    }
    if (v1 >= a3)
        return v1;
    while (true)
    {
        v7 = a3;
        v8 = v7 - 1;
        if (v8 >= a1)
            core::panicking::panic_bounds_check(v7 - 1, a1, &g_6519b8); /* do not return */
        v9 = *((int *)((char *)a0 + 4 * v8));
        if (v9 - 9 >= 5 && v9 != 32 && (v9 < 128 || !(char)::0x523980::core::unicode::unicode_data::white_space::lookup(v9)))
            break;
        a3 = v8;
        if (v1 >= a3)
            return v1;
    }
    return v1;
}
