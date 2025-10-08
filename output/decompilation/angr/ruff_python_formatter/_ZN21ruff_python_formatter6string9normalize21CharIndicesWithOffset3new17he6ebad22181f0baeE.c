long long ruff_python_formatter::string::normalize::CharIndicesWithOffset::new(unsigned long long a0[3], unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    unsigned long long v0;  // [bp-0x28]
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax
    unsigned long v4;  // rdx

    v0 = v2;
    v3 = a3.get(a1, a2);
    if (!v3)
        core::str::slice_error_fail(a1, a2, a3, a2, &g_97f7a8); /* do not return */
    a0[0] = v3;
    a0[1] = v4 + v3;
    a0[2] = a3;
    return v3;
}
