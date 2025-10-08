long long uu_shred::get_size(unsigned long long a0[3], unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v2;  // rax
    void* v3;  // rdi
    unsigned long long v4;  // 4096
    unsigned long long v5;  // rdx

    v0 = v2;
    v3 = 0;
    v4 = a1;
    if (!((char)(((0 ^ a0[0]) & (0 ^ -(a0[0]))) >> 63)))
    {
        v3 = uu_shred::get_size::{{closure}}(a0[1], a0[2]);
        v4 = v5;
    }
    return v3.or_else(v4, a0);
}
