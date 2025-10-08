long long just::justfile::Justfile::invocation(struct_0 *a0, unsigned long long a1[86], unsigned long long a2, unsigned long long a3, unsigned long a4, unsigned long long a5, unsigned long long a6)
{
    unsigned long long v0;  // [bp-0x38]
    unsigned long long v1;  // rax
    unsigned long v2;  // rbp
    unsigned long long v3;  // rax
    unsigned long long v4;  // rax

    v0 = v1;
    v0 = a3;
    v2 = a4 + a6 * 24 + 16;
    while (a5 - 1 != a6)
    {
        if (a6 < a5)
        {
            v2 += 24;
            a6 += 1;
            if (!a1[84].get(a1[85], *((long long *)(v2 - 8)), *((long long *)v2)))
                core::option::unwrap_failed(&g_830220); /* do not return */
        }
        else
        {
            core::panicking::panic_bounds_check(a6, a5, &g_830208); /* do not return */
        }
    }
    if (a6 >= a5)
        core::panicking::panic_bounds_check(a6, a5, &g_830238); /* do not return */
    v3 = a1.get_recipe(*((long long *)(v2 - 8)), *((long long *)v2));
    if (!v3)
        core::option::unwrap_failed(&g_830250); /* do not return */
    v4 = a0->padding_1[7].to_vec(a2, v0);
    a0->field_20 = v3;
    a0->field_0 = 56;
    return v4;
}
