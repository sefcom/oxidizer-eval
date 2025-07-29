long long uu_sort::tokenize_with_separator(unsigned long long a0, unsigned long long a1, unsigned int a2, unsigned long long a3)
{
    unsigned int v0;  // [bp-0x5c]
    unsigned long v1;  // [bp-0x58]
    unsigned long long v2;  // [bp-0x50]
    unsigned long long v3;  // [bp-0x48]
    void* v4;  // [bp-0x40]
    char *v5;  // [bp-0x38]
    unsigned long long v7;  // rax
    void* v8;  // r12
    unsigned long long v9;  // rdx
    unsigned long long v10;  // rbx
    unsigned long long v11;  // rbx
    unsigned long long v12;  // rax

    v0 = a2;
    v2 = a0;
    v3 = a0 + a1;
    v4 = 0;
    v5 = &v0;
    v7 = v2.try_fold(&v5);
    if (v7)
    {
        v8 = 0;
        do
        {
            v11 = v10;
            a3.push(v8, v11, &g_6706c8);
            v8 = v11 + 1;
            v12 = v2.try_fold(&v5);
            v10 = v9;
        } while (v12);
        if (v8 >= v1)
            return v12;
    }
    else
    {
        v8 = 0;
        if (0 >= v1)
            return v7;
    }
    return a3.push(v8, a1, &g_6706b0);
}
