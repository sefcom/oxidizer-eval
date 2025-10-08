long long ruff_python_formatter::string::docstring::CodeExampleRst::push(unsigned long long a0, struct_0 *a1)
{
    int v0;  // [bp-0x38]
    int v1;  // [bp-0x28]
    unsigned long v2;  // [bp-0x18]
    int v3;  // [bp-0x10]

    v2 = a1->field_20;
    *((uint128_t *)&v1) = a1->field_10;
    *((uint128_t *)&v0) = a1->field_0;
    *((uint128_t *)&v3) = a1->field_0;
    return a0.push(&v0, &g_97f3d8);
}
