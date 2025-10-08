long long uu_head::take::TakeAllBuffer::write_all(unsigned long long a0[4], unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v1;  // [bp-0x10]
    unsigned long long v2;  // [bp-0x8]
    unsigned long long v4;  // r15
    unsigned long long v5;  // r14
    unsigned long long v6;  // rbx

    v2 = v4;
    v1 = v5;
    v0 = v6;
    return a0.write_bytes_exact(a1, a0.remaining_bytes());
}
