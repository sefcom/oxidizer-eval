long long uu_more::Pager::page_down(unsigned long long a0[15])
{
    unsigned long long v1;  // rax
    unsigned long long v2;  // rcx
    unsigned long long v3;  // r8
    unsigned long long v4;  // r8
    unsigned long long v5;  // rax

    v1 = a0[10];
    v2 = a0[11];
    v3 = v2 * 2;
    v4 = v3 + v1;
    if ((char)__CFADD__(v3, v1))
        v4 = 18446744073709551615;
    if (v4 >= a0[14])
    {
        a0[10] = a0[14] - v2;
        return v1;
    }
    v5 = v1 + v2;
    if ((char)__CFADD__(v1, v2))
        v5 = 18446744073709551615;
    a0[10] = v5;
    return v5;
}
