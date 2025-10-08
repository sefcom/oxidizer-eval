long long uu_stat::print_str(unsigned long long a0, unsigned long long a1, unsigned int a2, unsigned long a3, unsigned long a4, unsigned long long a5)
{
    unsigned long long v1;  // 4096
    unsigned long long v2;  // 4096
    unsigned long long v3;  // rax
    unsigned long long v4;  // rdx

    v1 = a0;
    v2 = a1;
    if ((a5 < v2 & a4 == 2) == 1)
    {
        v3 = a5.get(a0, a1);
        if (!v3)
            core::str::slice_error_fail(a0, a1, 0, a5, &g_519bb0); /* do not return */
        v1 = v3;
        v2 = v4;
    }
    return uu_stat::pad_and_print(v1, v2, a2, a3, 1);
}
