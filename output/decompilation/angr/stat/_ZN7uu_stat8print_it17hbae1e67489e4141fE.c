void uu_stat::print_it(unsigned long long *a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4)
{
    unsigned int v0;  // [bp-0x50]
    unsigned short v1;  // [bp-0x4c]
    unsigned long long v2;  // [bp-0x18]
    unsigned long long v3;  // [bp-0x10]
    unsigned long long v4;  // [bp-0x8]
    unsigned long long v6;  // r15
    unsigned long long v7;  // r14
    unsigned long long v8;  // rbx

    v4 = v6;
    v3 = v7;
    v2 = v8;
    v0 = a1;
    v1 = a1 >> 32;
    goto (long long)(g_41beec[(*(a0) < 9223372036854775814 ? *(a0) + 9223372036854775809 : 0)] + (char *)&g_41beec[0]);
}
