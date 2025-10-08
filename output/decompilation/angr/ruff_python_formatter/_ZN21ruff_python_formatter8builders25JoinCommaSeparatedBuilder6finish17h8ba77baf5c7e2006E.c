long long ruff_python_formatter::builders::JoinCommaSeparatedBuilder::finish(struct_1 *a0, struct_0 *a1)
{
    unsigned long v0;  // [bp-0x20]
    struct_0 *v1;  // [bp-0x18]
    unsigned long v2;  // [bp-0x10]
    unsigned long v3;  // [bp-0x8]
    unsigned long v5;  // rax

    v0 = *((long long *)&a1->field_1c);
    v1 = a1;
    v2 = &a1->field_20;
    v3 = (char *)&a1->field_20 + 4;
    if (a1->field_8 != 4)
    {
        a0->field_0 = a1->field_8;
        *((int128_t *)&(&a0->field_0)[1]) = *((int128_t *)&(&a1->field_8)[1]);
        v5 = *((int *)((char *)&a1->field_c + 12));
        *((unsigned int *)((char *)&a0->field_4 + 4)) = v5;
        return v5;
    }
    return ruff_python_formatter::builders::JoinCommaSeparatedBuilder::finish::{{closure}}(a0, &v0);
}
