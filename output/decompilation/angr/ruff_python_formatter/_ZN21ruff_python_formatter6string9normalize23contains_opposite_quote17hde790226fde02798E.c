long long ruff_python_formatter::string::normalize::contains_opposite_quote(unsigned long long a0, unsigned long long a1, char a2)
{
    unsigned long long v0;  // [bp-0x48]
    unsigned long long v1;  // [sp-0x40]
    char v2;  // [sp-0x38]
    unsigned long long v4;  // 4096
    unsigned long long v5;  // rdx
    unsigned long long v6;  // r15
    unsigned long long v7;  // r12
    unsigned long long v8;  // r13
    unsigned long long v9;  // r14
    unsigned long long v10;  // r15
    unsigned long long v11;  // rax
    char v13;  // r12b
    unsigned long long v15;  // rax
    unsigned long long v16;  // 4096
    unsigned long v25;  // rdi

    if ((a2 & 2))
    {
        v25 = (!(a2 & 1) ? "\"\"\"width should be capped at a minimum of 1expected no existing code example" : "\'\'\'\"\"\"width should be capped at a minimum of 1expected no existing code example");
        return (!(a2 & 1) ? "\"\"\"width should be capped at a minimum of 1expected no existing code example" : "\'\'\'\"\"\"width should be capped at a minimum of 1expected no existing code example").is_contained_in(a0, a1);
    }
    if (a2 > 63)
        v7 = core::str::<impl str>::find(a0, a1, (a2 & 1) * 5 + 34);
    if (!(a2 & 1))
    {
        if (!((char)core::str::<impl str>::find(a0, a1, 34) & 1))
            goto LABEL_72992f;
        v4 = a1;
        while (true)
        {
            v8 = v4;
            v9 = a0;
            v10 = v6;
            v11 = v10.get(v9, v8);
            v0 = v11;
            v1 = v5 + v11;
            v2 = 0;
            v13 = !((char)v0.fold() & 1);
            v7 = v7 & 0xffffffffffffff00 | v13;
            v15 = v10 + 1.get(v9, v8);
            v6 = v5;
            a0 = v15;
            v4 = v5;
        }
    }
    if (((char)core::str::<impl str>::find(a0, a1, 39) & 1))
    {
        v16 = a1;
    }
    else
    {
LABEL_72992f:
        v7 = 0;
    }
}
