long long ruff_python_formatter::comments::map::MultiMap<K,V>::trailing(unsigned long long a0[6], unsigned long long a1)
{
    struct_0 *v1;  // rax
    unsigned long long v2;  // rax
    unsigned long long v3;  // rdx
    unsigned long v4;  // rdi

    v1 = a0 + 1.get_inner(a1);
    if (!v1)
    {
        return 4;
    }
    else if (v1->field_10)
    {
        v2 = v1->field_10.trailing_range();
        return v2.index(v3, a0[1], a0[2], &g_97cf40);
    }
    else
    {
        v4 = v1->field_18 + 2;
        if (v4 >= a0[5])
            core::panicking::panic_bounds_check(v4, a0[5], &g_97cf58); /* do not return */
        return *((long long *)(a0[4] + v4 * 24 + 8));
    }
}
