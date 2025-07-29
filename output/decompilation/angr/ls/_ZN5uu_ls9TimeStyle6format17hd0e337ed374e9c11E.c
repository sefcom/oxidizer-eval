void uu_ls::TimeStyle::format(unsigned long long *a0, unsigned int a1[3], unsigned long long a2, unsigned int a3, unsigned int a4)
{
    char v0;  // [bp-0x99]
    unsigned long long v1;  // [bp-0x98]
    char v2;  // [bp-0x90]
    unsigned long long v3;  // [bp-0x20]
    unsigned long long v4;  // [bp-0x18]
    unsigned long long v5;  // [bp-0x10]
    unsigned long long v7;  // r15
    unsigned long long v8;  // r14
    unsigned long long v9;  // rbx
    unsigned long long v10;  // rax

    v5 = v7;
    v4 = v8;
    v3 = v9;
    uu_ls::is_recent(*((long long *)&a1[0]), a1[2], a3, a4);
    v2.from(a1);
    v1 = a2;
    v10 = 0x8000000000000000 ^ *(a0);
    if (v10 >= 4)
        v10 = 4;
    v0 = 1;
    goto (long long)(g_427b20[v10] + (char *)&g_427b20[0]);
}
