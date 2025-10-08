long long starship::context::Context::detect_env_vars2(unsigned long a0, unsigned long long a1, unsigned int a2)
{
    void* v0;  // [bp-0x30]
    unsigned long long v1;  // [bp-0x20]
    unsigned long long v2;  // [bp-0x18]
    unsigned long long v3;  // [bp-0x10]
    unsigned long long v4;  // [bp-0x8]
    unsigned long long v6;  // r14
    unsigned long long v7;  // rbx
    unsigned long long v8;  // rax
    unsigned long long v9;  // rax

    if (!a2)
        return 0;
    v4 = v6;
    v3 = v7;
    v8 = a1.has_negated_env_var(a2);
    if ((char)v8)
        return v8 & 0xffffffffffffff00 | 1;
    v1 = a1;
    v2 = a2 * 16 + a1;
    v0 = 0;
    v9 = v0.try_fold().eq(1);
    return v9 & 0xffffffffffffff00 | (char)v9 ^ 3;
}
