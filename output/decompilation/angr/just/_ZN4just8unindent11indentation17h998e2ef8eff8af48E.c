long long just::unindent::indentation(unsigned long long a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x38]
    unsigned long long v1;  // [bp-0x30]
    void* v2;  // [bp-0x28]
    char v3;  // [bp-0x20]
    void* v5;  // r15
    unsigned long long v6;  // rax

    v0 = a0;
    v1 = a0 + a1;
    v2 = 0;
    v3 = 0;
    if (!((char)v0.fold(a1) & 1))
        v5 = 0;
    v6 = v5.get(a0, a1);
    if (!v6)
        core::str::slice_error_fail(a0, a1, 0, v5, &g_8318f8); /* do not return */
    return v6;
}
