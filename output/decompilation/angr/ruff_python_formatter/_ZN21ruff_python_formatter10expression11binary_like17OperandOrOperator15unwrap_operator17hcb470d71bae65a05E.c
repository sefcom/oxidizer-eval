long long ruff_python_formatter::expression::binary_like::OperandOrOperator::unwrap_operator(unsigned int *a0)
{
    unsigned int *v0;  // [bp-0x48]
    char *v1;  // [bp-0x40]
    unsigned long long v2;  // [bp-0x38]
    unsigned long long v3;  // [bp-0x30]
    unsigned long long v4;  // [bp-0x28]
    char *v5;  // [bp-0x20]
    unsigned long long v6;  // [bp-0x18]
    void* v7;  // [bp-0x10]

    if (*(a0) != 3)
    {
        v0 = a0;
        v1 = &v0;
        v2 = <&T as core::fmt::Debug>::fmt;
        v3 = &g_97d6c0;
        v4 = 2;
        v7 = 0;
        v5 = &v1;
        v6 = 1;
        core::panicking::panic_fmt(&v3, &g_97d6e0); /* do not return */
    }
    return a0 + 2;
}
