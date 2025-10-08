void ruff_python_formatter::pattern::CanOmitOptionalParenthesesVisitor::visit_pattern(unsigned long a0, unsigned long long *a1)
{
    unsigned long long v0;  // [bp-0x28]
    unsigned long long v1;  // [bp-0x20]
    unsigned long long v2;  // [bp-0x18]
    unsigned long long v3;  // [bp-0x10]
    unsigned long long v4;  // [bp-0x8]
    unsigned long long v6;  // r15
    unsigned long long v7;  // r14
    unsigned long long v8;  // r12
    unsigned long long v9;  // rbx
    unsigned long long v10;  // rax
    unsigned long long v11;  // rax

    v4 = v6;
    v3 = v7;
    v2 = v8;
    v1 = v9;
    v0 = v10;
    v11 = 0x8000000000000000 ^ *(a1);
    if (v11 >= 8)
        v11 = 3;
    goto (long long)(g_487958[v11] + (char *)&g_487958[0]);
}
