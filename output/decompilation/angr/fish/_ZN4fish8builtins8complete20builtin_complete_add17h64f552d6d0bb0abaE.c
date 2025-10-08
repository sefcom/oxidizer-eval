long long fish::builtins::complete::builtin_complete_add(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long long a4, unsigned long a5, unsigned long long *a6, unsigned long a7, unsigned long long *a8, unsigned long a9, unsigned int a10, unsigned long long a11, unsigned long long a12, unsigned long long a13, unsigned long long a14, unsigned long long a15, unsigned long long a16, unsigned short a17)
{
    unsigned long v0;  // rbx
    unsigned long long v1;  // r14
    unsigned long long v2;  // rax
    unsigned long long v3;  // r10
    unsigned long long v4;  // r11
    void* v5;  // r12
    void* v6;  // r13
    unsigned long long v7;  // rax
    unsigned long long v8;  // r10
    unsigned long long v9;  // r11

    v0 = a5;
    v1 = a4;
    v2 = a16;
    v3 = a15;
    v4 = a14;
    if (a1)
    {
        v5 = 0;
        do
        {
            fish::builtins::complete::builtin_complete_add2(*((long long *)(8 + a0 + (char *)v5)), *((long long *)(16 + a0 + (char *)v5)), 0, v1, v0, a6, a7, a8, a9, a10, a11, a12, a13, v4, v3, v2, a17);
            v4 = a14;
            v3 = a15;
            v2 = a16;
            v5 += 24;
        } while (a1 * 24 != v5);
    }
    if (!a3)
        return v2;
    v6 = 0;
    v7 = v2;
    v8 = v3;
    v9 = v4;
    do
    {
        fish::builtins::complete::builtin_complete_add2(*((long long *)(8 + a2 + (char *)v6)), *((long long *)(16 + a2 + (char *)v6)), 1, v1, v0, a6, a7, a8, a9, a10, a11, a12, a13, v9, v8, v7, a17);
        v6 += 24;
        v7 = a16;
        v8 = a15;
        v9 = a14;
    } while (a3 * 24 != v6);
    return a16;
}
