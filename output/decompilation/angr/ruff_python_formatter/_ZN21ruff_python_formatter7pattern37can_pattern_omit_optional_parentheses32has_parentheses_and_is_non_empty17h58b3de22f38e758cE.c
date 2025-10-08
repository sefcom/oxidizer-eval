void ruff_python_formatter::pattern::can_pattern_omit_optional_parentheses::has_parentheses_and_is_non_empty(unsigned long long *a0)
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v1;  // [bp-0x10]
    unsigned long long v2;  // [bp-0x8]
    unsigned long long v4;  // r14
    unsigned long long v5;  // rbx
    unsigned long long v6;  // rax
    unsigned long long v7;  // rax

    v2 = v4;
    v1 = v5;
    v0 = v6;
    v7 = 0x8000000000000000 ^ *(a0);
    if (v7 >= 8)
        v7 = 3;
    goto (long long)(g_487938[v7] + (char *)&g_487938[0]);
}
