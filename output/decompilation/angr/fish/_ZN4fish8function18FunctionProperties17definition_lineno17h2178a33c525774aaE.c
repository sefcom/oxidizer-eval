long long fish::function::FunctionProperties::definition_lineno(struct_0 *a0)
{
    char v0;  // [bp-0x38], Other Possible Types: unsigned long
    unsigned int v1;  // [bp-0x34]
    unsigned long long v2;  // [bp-0x30]
    unsigned long long v3;  // [bp-0x28]
    uint128_t v4;  // [bp-0x20]
    unsigned long v6;  // rdx
    unsigned long long v7;  // rax
    unsigned long v8;  // rdx
    unsigned int v9;  // eax

    v0.try_source_range(a0->field_38);
    if (*((int *)&v0) != 1)
    {
        v0 = &g_14d8f70;
        v2 = 1;
        v3 = 8;
        v4 = 0;
        core::panicking::panic_fmt(&v0, &g_14d8fc0); /* do not return */
    }
    v6 = v1;
    if (a0->field_30->field_20 < v6)
    {
        v0 = &g_14d8f80;
        v2 = 1;
        v3 = 8;
        v4 = 0;
        core::panicking::panic_fmt(&v0, &g_14d8f90); /* do not return */
    }
    v7 = a0->field_30->field_18.slice_to(a0->field_30->field_20, v6);
    v9 = v7.fold(v7 + v8 * 4);
    if ((char)_ccall(0, 23, (unsigned long long)(v9 + 1), 0, (unsigned long long)(char)(a0->field_30->field_20 < v6)))
        core::panicking::panic_const::panic_const_add_overflow(&g_14d8fa8); /* do not return */
    return v9 + 1;
}
