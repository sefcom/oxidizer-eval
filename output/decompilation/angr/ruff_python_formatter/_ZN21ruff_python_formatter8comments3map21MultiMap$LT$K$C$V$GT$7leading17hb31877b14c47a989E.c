long long ruff_python_formatter::comments::map::MultiMap<K,V>::leading(unsigned long long a0[6], unsigned long long a1)
{
    struct_0 *v1;  // rax
    unsigned int v2;  // edi

    v1 = a0 + 1.get_inner(a1);
    if (!v1)
        return 4;
    v2 = v1->field_10;
    if (v1->field_10)
    {
        return v1->field_10 - 1.index(v1->field_14 - 1, a0[1], a0[2], &g_97cee0);
    }
    else if (v1->field_18 < a0[5])
    {
        return *((long long *)(a0[4] + v1->field_18 * 24 + 8));
    }
    else
    {
        core::panicking::panic_bounds_check(v1->field_18, a0[5], &g_97cef8); /* do not return */
    }
}
