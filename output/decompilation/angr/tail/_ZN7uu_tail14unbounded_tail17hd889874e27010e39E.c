void uu_tail::unbounded_tail(unsigned long a0, unsigned long long *a1)
{
    char v0;  // [bp-0x2088]
    unsigned long long v1;  // [bp-0x2048]
    void* v2;  // [bp-0x2030]
    void* v3;  // [bp-0x1030]
    unsigned long long v4;  // [bp-0x30]
    unsigned long long v5;  // [bp-0x28]
    unsigned long long v6;  // [bp-0x20]
    unsigned long long v7;  // [bp-0x18]
    unsigned long long v8;  // [bp-0x10]
    unsigned long long v10;  // r15
    unsigned long long v11;  // r14
    unsigned long long v12;  // r13
    unsigned long long v13;  // r12
    unsigned long long v14;  // rbx

    v8 = v10;
    v7 = v11;
    v6 = v12;
    v5 = v13;
    v4 = v14;
    v3 = 0;
    v2 = 0;
    v1 = std::io::stdio::stdout();
    v0.with_capacity(0x2000, v1.lock());
    goto (long long)(*((int *)(4321564 + 4 * *(a1))) + (char *)&g_41f11c[0]);
}
