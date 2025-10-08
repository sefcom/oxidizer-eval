long long ruff_python_formatter::expression::binary_like::FlatBinaryExpressionSlice::last_operand(unsigned long a0, unsigned long a1)
{
    char v0;  // [bp-0x38]
    unsigned long long v1;  // [bp-0x30]
    unsigned long long v2;  // [bp-0x28]
    char *v3;  // [bp-0x20]
    uint128_t v4;  // [bp-0x18]

    if (a1 && *((int *)(a0 + a1 * 32 - 32)) != 3)
        return a0 + a1 * 32 - 32;
    v1 = &g_97d630;
    v2 = 1;
    v3 = &v0;
    v4 = 0;
    core::panicking::panic_fmt(&v1, &g_97d658); /* do not return */
}
