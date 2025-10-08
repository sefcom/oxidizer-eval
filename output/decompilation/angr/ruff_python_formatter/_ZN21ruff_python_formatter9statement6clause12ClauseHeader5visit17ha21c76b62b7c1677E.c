void ruff_python_formatter::statement::clause::ClauseHeader::visit(unsigned long a0, unsigned long a1, unsigned long a2)
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v1;  // [bp-0x10]
    unsigned long long v2;  // [bp-0x8]
    unsigned long long v4;  // r15
    unsigned long long v5;  // r14
    unsigned long long v6;  // rbx
    unsigned long long v7;  // rdi

    v2 = v4;
    v1 = v5;
    v0 = v6;
    v7 = a0 - 3;
    if (v7 >= 12)
        v7 = 12;
    goto (long long)(g_4879ac[v7] + (char *)&g_4879ac[0]);
}
