void ruff_python_formatter::statement::clause::ClauseHeader::first_keyword_range(unsigned long a0, unsigned long a1)
{
    unsigned long long v0;  // [bp-0x20]
    unsigned long long v1;  // [bp-0x18]
    unsigned long long v2;  // [bp-0x10]
    unsigned long long v3;  // [bp-0x8]
    unsigned long long v5;  // r15
    unsigned long long v6;  // r14
    unsigned long long v7;  // r12
    unsigned long long v8;  // rbx
    unsigned long long v9;  // rax

    v3 = v5;
    v2 = v6;
    v1 = v7;
    v0 = v8;
    v9 = a1 - 3;
    if (v9 >= 12)
        v9 = 12;
    goto (long long)(*((int *)(4749908 + 4 * v9)) + (char *)&g_487a54[0]);
}
