long long ruff_python_formatter::expression::binary_like::OperatorIndex::new(unsigned long a0)
{
    unsigned long v0;  // [bp-0x38]
    unsigned long long v1;  // [bp-0x30]
    unsigned long long v2;  // [bp-0x28]
    unsigned long long v3;  // [bp-0x20]
    uint128_t v4;  // [bp-0x18]

    v0 = (unsigned int)a0 & 1;
    if (!((char)a0 & 1))
    {
        v1 = &g_97d790;
        v2 = 1;
        v3 = 8;
        v4 = 0;
        core::panicking::assert_failed(0, &v0, &g_4862a0, &v1, &g_97d7a0); /* do not return */
    }
    return a0;
}
