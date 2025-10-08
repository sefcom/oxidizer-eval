void uu_ls::TimeStyler::new(unsigned long a0, unsigned long long *a1)
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v1;  // [bp-0x10]
    unsigned long long v2;  // [bp-0x8]
    unsigned long long v4;  // r15
    unsigned long long v5;  // r14
    unsigned long long v6;  // rbx
    unsigned long long v7;  // rax

    v2 = v4;
    v1 = v5;
    v0 = v6;
    v7 = *(a1) ^ 0x8000000000000000;
    if (v7 >= 4)
        v7 = 4;
    goto (long long)(g_4d108c[v7] + (char *)&g_4d108c[0]);
}
