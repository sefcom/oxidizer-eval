long long uu_env::apply_ignore_signal(unsigned long long a0[15])
{
    unsigned long long v0;  // [bp-0x28]
    unsigned long long v2;  // rax
    unsigned int *v3;  // r12
    unsigned int v4;  // edx
    unsigned long long v5;  // rsi
    unsigned long long v6;  // rdx
    unsigned long long v7;  // rcx
    unsigned long long v8;  // rax

    v0 = v2;
    v3 = 0;
    while (a0[14] * 8 != v3)
    {
        if (((char)*((int *)(a0[13] + (char *)v3)).try_from() & 1))
            return v6 * 0x100000000 | 2.from();
        v8 = uu_env::ignore_signal(v4, v5, v6, v7);
        v3 += 2;
        if (v8)
            return v8;
    }
    return 0;
}
