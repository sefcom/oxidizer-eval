long long fish::builtins::complete::builtin_complete_remove(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long long a4, unsigned int a5, unsigned long long a6[2], unsigned long long a7, unsigned long long a8[2], unsigned int a9)
{
    unsigned long long v0;  // [bp-0x38]
    unsigned long long v1[2];  // rax
    unsigned long long v2;  // r10
    void* v3;  // r12
    void* v4;  // r13
    unsigned long long v5[2];  // rax
    unsigned long long v6;  // r10

    v1 = a8;
    v2 = a7;
    if (a1)
    {
        v0 = a1 * 24;
        v3 = 0;
        do
        {
            fish::builtins::complete::builtin_complete_remove_cmd(*((long long *)(8 + a0 + (char *)v3)), *((long long *)(16 + a0 + (char *)v3)), 0, a4, a5, a6, v2, v1, a9);
            v2 = a7;
            v1 = a8;
            v3 += 24;
        } while (v0 != v3);
    }
    if (!a3)
        return v1;
    v4 = 0;
    v5 = v1;
    v6 = v2;
    do
    {
        fish::builtins::complete::builtin_complete_remove_cmd(*((long long *)(8 + a2 + (char *)v4)), *((long long *)(16 + a2 + (char *)v4)), 1, a4, a5, a6, v6, v5, a9);
        v4 += 24;
        v5 = a8;
        v6 = a7;
    } while (a3 * 24 != v4);
    return a8;
}
