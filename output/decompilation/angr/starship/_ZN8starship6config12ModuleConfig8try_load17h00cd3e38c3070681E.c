long long starship::config::ModuleConfig::try_load(unsigned long long *a0, unsigned long long a1)
{
    char v0;  // [bp-0xd0]
    char v1;  // [bp-0xcf]
    unsigned long long v2;  // [bp-0xc0]
    char v3;  // [bp-0xb8]
    char v4;  // [bp-0xb7]
    char v5;  // [bp-0xb0]
    char v6;  // [bp-0xa8]
    unsigned long long v8;  // rax

    if (!a1)
        return a0.default();
    v3.into(a1);
    memcpy(&v1, &v4, 16);
    v2 = *((long long *)&v6);
    v0 = v3;
    v3.load(&v0);
    v8 = memcpy(a0 + 1, &v5, 160);
    *(a0) = *((long long *)&v3);
    return v8;
}
