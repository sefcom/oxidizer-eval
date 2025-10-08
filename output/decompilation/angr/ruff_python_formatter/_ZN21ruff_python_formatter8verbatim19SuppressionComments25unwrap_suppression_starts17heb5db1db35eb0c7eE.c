long long ruff_python_formatter::verbatim::SuppressionComments::unwrap_suppression_starts(struct_1 *a0, struct_0 *a1)
{
    unsigned long long v0;  // [bp-0x30]
    unsigned long long v1;  // [bp-0x28]
    unsigned long long v2;  // [bp-0x20]
    uint128_t v3;  // [bp-0x18]
    unsigned long long v5;  // rax

    if (a1->field_0)
    {
        v0 = &g_97f9b0;
        v1 = 1;
        v2 = 8;
        v3 = 0;
        core::panicking::panic_fmt(&v0, &g_97f9c0); /* do not return */
    }
    v5 = *((long long *)((char *)&a1->field_8 + 8));
    a0->field_0 = *((int128_t *)&(&a1->field_0)[1]);
    a0->field_10 = v5;
    return v5;
}
