long long fish::builtins::status::status(unsigned long long a0, unsigned long a1, unsigned long long a2[2], unsigned long long a3)
{
    unsigned long v0;  // [bp-0x2a8]
    unsigned long v1;  // [bp-0x200]
    unsigned int v2;  // [bp-0x198]
    unsigned short v3;  // [bp-0x194]
    char v4;  // [bp-0x192]
    char v5;  // [bp-0x188]
    void* v6;  // [bp-0x170]
    unsigned long long v7;  // [bp-0x30]
    unsigned long long v8;  // [bp-0x28]
    unsigned long long v9;  // [bp-0x20]
    unsigned long long v10;  // [bp-0x18]
    unsigned long long v11;  // [bp-0x10]
    unsigned long long v13;  // r15
    unsigned long long v14;  // r14
    unsigned long long v15;  // r13
    unsigned long long v16;  // r12
    unsigned long long v17;  // rbx

    v11 = v13;
    v10 = v14;
    v9 = v15;
    v8 = v16;
    v7 = v17;
    if (!a3)
        core::panicking::panic_bounds_check(0, 0, &g_14cd4e0); /* do not return */
    v1 = a2[1];
    v2 = 1;
    v3 = 0x300;
    v4 = 0;
    v6 = 0;
    v0 = a1;
    if (!((char)fish::builtins::status::parse_cmd_opts(&v2, &v6, a2, a3, a0, a1) & 1))
    {
        if (v6 >= a3)
            goto LABEL_0x136eed4;
        v5.to_string(*((long long *)((char *)a2 + 0x10 * v6)), *((long long *)(8 + (char *)a2 + 0x10 * v6)));
    }
}
