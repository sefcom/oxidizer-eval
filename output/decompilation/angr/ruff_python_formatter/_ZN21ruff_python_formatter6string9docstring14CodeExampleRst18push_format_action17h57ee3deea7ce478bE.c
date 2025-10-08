void ruff_python_formatter::string::docstring::CodeExampleRst::push_format_action(unsigned long long a0[3], unsigned long long a1)
{
    unsigned long v0;  // [bp-0x58]
    unsigned long long v1;  // [bp-0x50]
    char v2;  // [bp-0x48]
    char v3;  // [bp-0x30]
    unsigned long long v5;  // rdx

    v0 = a0[1];
    v1 = a0[2] * 56 + a0[1];
    v2.split_off(a0, v0.rposition().map_or(v5));
    a1.push_back(a0, &g_97f408);
    v3.into_iter(&v2);
    a1.spec_extend(&v3);
    return;
}
