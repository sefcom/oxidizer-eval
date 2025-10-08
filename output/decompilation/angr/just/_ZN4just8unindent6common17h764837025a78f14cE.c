long long just::unindent::common(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long a3)
{
    unsigned long long v0;  // [bp-0x78]
    unsigned long long v1;  // [bp-0x70]
    void* v2;  // [bp-0x68]
    char v3;  // [bp-0x60]
    char v4;  // [bp-0x20]
    void* v6;  // r15
    unsigned long long v7;  // rax

    v2 = 0;
    v0 = a0;
    v1 = a0 + a1;
    v3.zip(&v0, a2, a3 + a2);
    v4 = 0;
    if (!((char)v3.fold(a1) & 1))
        v6 = 0;
    v7 = 0.get(v6, a0, a1);
    if (!v7)
        core::str::slice_error_fail(a0, a1, 0, v6, &g_831910); /* do not return */
    return v7;
}
