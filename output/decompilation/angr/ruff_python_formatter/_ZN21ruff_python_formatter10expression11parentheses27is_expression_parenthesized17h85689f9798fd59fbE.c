long long ruff_python_formatter::expression::parentheses::is_expression_parenthesized(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5)
{
    unsigned long long v0;  // [bp-0x90]
    unsigned long long v1;  // [bp-0x88]
    char v2;  // [bp-0x7c]
    char v3;  // [bp-0x74]
    char v4;  // [bp-0x70]
    char v5;  // [bp-0x68]
    unsigned int v7;  // edx
    unsigned long long v9;  // rax

    v0 = a0;
    v1 = a1;
    v0.range();
    ruff_python_trivia::tokenizer::first_non_trivia_token(&v4, v7, a4, a5);
    if (v5 != 6)
        return 0;
    v4.up_to((unsigned int)v0.range(), a4, a5, a2, a3);
    v9 = v2.try_fold(&v4);
    return v9 & 0xffffffffffffff00 | v3 == 5;
}
