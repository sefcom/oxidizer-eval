long long ruff_python_formatter::comments::placement::are_parameters_parenthesized(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    unsigned long v0;  // [bp-0x38]
    unsigned int v1;  // [bp-0x34]
    unsigned long v3;  // rax
    unsigned long long v4;  // rax
    unsigned long long v5;  // rdx
    unsigned long long v6;  // rax

    v0 = v3;
    v4 = a0.from(a1);
    v6 = v4.get(v5, a2, a3);
    if (!v6)
        core::str::slice_error_fail(a2, a3, v4, v5, &g_97d420); /* do not return */
    v1 = 0;
    return core::slice::<impl [T]>::starts_with(v6, v5, ::0x6e6590::core::char::methods::encode_utf8_raw(40, &v1), v5);
}
