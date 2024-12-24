long long uu_sort::month_compare::heb42ba4378398b6d(unsigned long long a0, unsigned long long a1, unsigned long a2)
{
    unsigned long long v0;  // [sp-0x18]
    unsigned long long v1;  // [sp-0x10]
    unsigned long v3;  // r14
    unsigned long v4;  // rbx
    unsigned long long v6;  // rcx
    unsigned int v7;  // rdx
    unsigned long long v9;  // rax

    v1 = v3;
    v0 = v4;
    v9 = ((char)uu_sort::month_parse::h1bc0fc1ced9b74fe(a0, a1, a2) <= (char)uu_sort::month_parse::h1bc0fc1ced9b74fe(a2, v6, v7) ? -((char)uu_sort::month_parse::h1bc0fc1ced9b74fe(a0, a1, a2) < (char)uu_sort::month_parse::h1bc0fc1ced9b74fe(a2, v6, v7)) : 1);
    return v9;
}
