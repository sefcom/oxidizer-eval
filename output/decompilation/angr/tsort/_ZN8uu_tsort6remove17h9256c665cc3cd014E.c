long long uu_tsort::remove(unsigned long long a0[3], unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x28]
    unsigned long long v1;  // [bp-0x20]
    unsigned long v2;  // [bp-0x18]
    unsigned long long v3;  // [bp-0x10]
    unsigned long long v5;  // rdx

    v0 = a1;
    v1 = a2;
    v2 = a0[1];
    v3 = a0[2] * 16 + a0[1];
    return v2.position(&v0).inspect(v5, a0);
}
