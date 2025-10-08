long long ruff_python_formatter::pattern::is_pattern_parenthesized(void* a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4)
{
    char v0;  // [bp-0x84]
    char v1;  // [bp-0x7c]
    char v2;  // [bp-0x78]
    char v3;  // [bp-0x70]
    unsigned long long v5;  // rax
    unsigned long long v6;  // rbp
    unsigned long long v7;  // rax

    v5 = *((long long *)a0) ^ 0x8000000000000000;
    if (8 <= v5)
        v5 = 3;
    ruff_python_trivia::tokenizer::first_non_trivia_token(&v2, *((int *)((char *)a0 + g_48d590[v5])), a3, a4);
    if (v3 != 6)
        return 0;
    v6 = 0x8000000000000000 ^ *((long long *)a0);
    if (v6 >= 8)
        v6 = 3;
    v2.up_to(*((int *)((char *)a0 + g_48d5d0[v6])), a3, a4, a1, a2);
    v7 = v0.try_fold(&v2);
    return v7 & 0xffffffffffffff00 | v1 == 5;
}
